module en_register_32(input wire [31:0] D, input wire clk, en, rst_n, output reg [31:0] Q);

	always@(posedge clk, negedge rst_n) begin
		if (~rst_n)
			Q <= 0;
		else if (en)
			Q <= D;
	end
	
endmodule
