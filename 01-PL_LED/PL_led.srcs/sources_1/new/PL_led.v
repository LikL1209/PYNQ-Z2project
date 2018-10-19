module PL_led(
    input sysclk,           //ϵͳʱ��125Mhz
    output reg [3:0]led     //4��led��
);
    reg [31:0]timer_cnt;    //��ʱ������
    
    always@(posedge sysclk)
    begin
        if(timer_cnt >= 32'd49_999_999)
        begin
            led <= ~led;
            timer_cnt <= 32'd0;
        end
        else
        begin
            led <= led;
            timer_cnt <= timer_cnt + 32'd1;
        end
    end
endmodule
