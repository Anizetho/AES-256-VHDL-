/**********************************************************************/
/*   ____  ____                                                       */
/*  /   /\/   /                                                       */
/* /___/  \  /                                                        */
/* \   \   \/                                                       */
/*  \   \        Copyright (c) 2003-2009 Xilinx, Inc.                */
/*  /   /          All Right Reserved.                                 */
/* /---/   /\                                                         */
/* \   \  /  \                                                      */
/*  \___\/\___\                                                    */
/***********************************************************************/

/* This file is designed for use with ISim build 0x7708f090 */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "C:/Users/Anizetho/Documents/Github/AES-256_VHDL/AES_256/top_key_scheduler_256.vhd";
extern char *IEEE_P_2592010699;
extern char *IEEE_P_3620187407;

unsigned char ieee_p_2592010699_sub_1744673427_503743352(char *, char *, unsigned int , unsigned int );
unsigned char ieee_p_3620187407_sub_1742983514_3965413181(char *, char *, char *, char *, char *);
int ieee_p_3620187407_sub_514432868_3965413181(char *, char *, char *);
char *ieee_p_3620187407_sub_674691591_3965413181(char *, char *, char *, char *, unsigned char );


static void work_a_1095364926_3212880686_p_0(char *t0)
{
    char t15[16];
    char *t1;
    unsigned char t2;
    char *t3;
    char *t4;
    unsigned char t5;
    unsigned char t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    unsigned int t13;
    unsigned int t14;
    int t16;
    char *t17;
    char *t18;
    int t19;
    unsigned int t20;
    static char *nl0[] = {&&LAB11, &&LAB12};

LAB0:    xsi_set_current_line(43, ng0);
    t1 = (t0 + 992U);
    t2 = ieee_p_2592010699_sub_1744673427_503743352(IEEE_P_2592010699, t1, 0U, 0U);
    if (t2 != 0)
        goto LAB2;

LAB4:
LAB3:    t1 = (t0 + 3952);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(44, ng0);
    t3 = (t0 + 1192U);
    t4 = *((char **)t3);
    t5 = *((unsigned char *)t4);
    t6 = (t5 == (unsigned char)3);
    if (t6 != 0)
        goto LAB5;

LAB7:    xsi_set_current_line(51, ng0);
    t1 = (t0 + 2472U);
    t3 = *((char **)t1);
    t2 = *((unsigned char *)t3);
    t1 = (char *)((nl0) + t2);
    goto **((char **)t1);

LAB5:    xsi_set_current_line(45, ng0);
    t3 = xsi_get_transient_memory(3U);
    memset(t3, 0, 3U);
    t7 = t3;
    memset(t7, (unsigned char)2, 3U);
    t8 = (t0 + 4032);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    memcpy(t12, t3, 3U);
    xsi_driver_first_trans_fast(t8);
    xsi_set_current_line(46, ng0);
    t1 = (t0 + 4096);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t7 = (t4 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)0;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(47, ng0);
    t1 = (t0 + 4160);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t7 = (t4 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(48, ng0);
    t1 = xsi_get_transient_memory(256U);
    memset(t1, 0, 256U);
    t3 = t1;
    memset(t3, (unsigned char)2, 256U);
    t4 = (t0 + 4224);
    t7 = (t4 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t1, 256U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(49, ng0);
    t1 = xsi_get_transient_memory(2048U);
    memset(t1, 0, 2048U);
    t3 = t1;
    t13 = (256U * 1U);
    t4 = t3;
    memset(t4, (unsigned char)2, t13);
    t2 = (t13 != 0);
    if (t2 == 1)
        goto LAB8;

LAB9:    t7 = (t0 + 4288);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    memcpy(t11, t1, 2048U);
    xsi_driver_first_trans_fast_port(t7);

LAB6:    goto LAB3;

LAB8:    t14 = (2048U / t13);
    xsi_mem_set_data(t3, t3, t13, t14);
    goto LAB9;

LAB10:    goto LAB6;

LAB11:    xsi_set_current_line(52, ng0);
    t4 = (t0 + 4160);
    t7 = (t4 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    *((unsigned char *)t10) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t4);
    xsi_set_current_line(53, ng0);
    t1 = xsi_get_transient_memory(256U);
    memset(t1, 0, 256U);
    t3 = t1;
    memset(t3, (unsigned char)2, 256U);
    t4 = (t0 + 4224);
    t7 = (t4 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t1, 256U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(54, ng0);
    t1 = (t0 + 1352U);
    t3 = *((char **)t1);
    t2 = *((unsigned char *)t3);
    t5 = (t2 == (unsigned char)3);
    if (t5 != 0)
        goto LAB14;

LAB16:    xsi_set_current_line(61, ng0);
    t1 = (t0 + 4096);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t7 = (t4 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)0;
    xsi_driver_first_trans_fast(t1);

LAB15:    goto LAB10;

LAB12:    xsi_set_current_line(65, ng0);
    t1 = (t0 + 1992U);
    t3 = *((char **)t1);
    t1 = (t0 + 7164U);
    t4 = (t0 + 7995);
    t8 = (t15 + 0U);
    t9 = (t8 + 0U);
    *((int *)t9) = 0;
    t9 = (t8 + 4U);
    *((int *)t9) = 2;
    t9 = (t8 + 8U);
    *((int *)t9) = 1;
    t16 = (2 - 0);
    t13 = (t16 * 1);
    t13 = (t13 + 1);
    t9 = (t8 + 12U);
    *((unsigned int *)t9) = t13;
    t2 = ieee_std_logic_unsigned_equal_stdv_stdv(IEEE_P_3620187407, t3, t1, t4, t15);
    if (t2 != 0)
        goto LAB19;

LAB21:    xsi_set_current_line(69, ng0);
    t1 = (t0 + 1992U);
    t3 = *((char **)t1);
    t1 = (t0 + 7164U);
    t4 = ieee_p_3620187407_sub_674691591_3965413181(IEEE_P_3620187407, t15, t3, t1, (unsigned char)3);
    t7 = (t15 + 12U);
    t13 = *((unsigned int *)t7);
    t14 = (1U * t13);
    t2 = (3U != t14);
    if (t2 == 1)
        goto LAB22;

LAB23:    t8 = (t0 + 4032);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    memcpy(t12, t4, 3U);
    xsi_driver_first_trans_fast(t8);

LAB20:    xsi_set_current_line(71, ng0);
    t1 = (t0 + 1992U);
    t3 = *((char **)t1);
    t1 = (t0 + 7164U);
    t4 = (t0 + 7998);
    t8 = (t15 + 0U);
    t9 = (t8 + 0U);
    *((int *)t9) = 0;
    t9 = (t8 + 4U);
    *((int *)t9) = 2;
    t9 = (t8 + 8U);
    *((int *)t9) = 1;
    t16 = (2 - 0);
    t13 = (t16 * 1);
    t13 = (t13 + 1);
    t9 = (t8 + 12U);
    *((unsigned int *)t9) = t13;
    t2 = ieee_p_3620187407_sub_1742983514_3965413181(IEEE_P_3620187407, t3, t1, t4, t15);
    if (t2 != 0)
        goto LAB24;

LAB26:
LAB25:    goto LAB10;

LAB13:    xsi_set_current_line(75, ng0);
    t1 = (t0 + 4096);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t7 = (t4 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)0;
    xsi_driver_first_trans_fast(t1);
    goto LAB10;

LAB14:    xsi_set_current_line(55, ng0);
    t1 = xsi_get_transient_memory(3U);
    memset(t1, 0, 3U);
    t4 = t1;
    memset(t4, (unsigned char)2, 3U);
    t7 = (t0 + 4032);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    memcpy(t11, t1, 3U);
    xsi_driver_first_trans_fast(t7);
    xsi_set_current_line(56, ng0);
    t1 = (t0 + 4096);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t7 = (t4 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)1;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(57, ng0);
    t1 = (t0 + 1512U);
    t3 = *((char **)t1);
    t1 = (t0 + 4224);
    t4 = (t1 + 56U);
    t7 = *((char **)t4);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t3, 256U);
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(58, ng0);
    t1 = xsi_get_transient_memory(2048U);
    memset(t1, 0, 2048U);
    t3 = t1;
    t13 = (256U * 1U);
    t4 = t3;
    memset(t4, (unsigned char)2, t13);
    t2 = (t13 != 0);
    if (t2 == 1)
        goto LAB17;

LAB18:    t7 = (t0 + 4288);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    memcpy(t11, t1, 2048U);
    xsi_driver_first_trans_fast_port(t7);
    xsi_set_current_line(59, ng0);
    t1 = (t0 + 1512U);
    t3 = *((char **)t1);
    t1 = (t0 + 4288);
    t4 = (t1 + 56U);
    t7 = *((char **)t4);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t3, 256U);
    xsi_driver_first_trans_delta(t1, 0U, 256U, 0LL);
    goto LAB15;

LAB17:    t14 = (2048U / t13);
    xsi_mem_set_data(t3, t3, t13, t14);
    goto LAB18;

LAB19:    xsi_set_current_line(66, ng0);
    t9 = (t0 + 4096);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    t12 = (t11 + 56U);
    t17 = *((char **)t12);
    *((unsigned char *)t17) = (unsigned char)0;
    xsi_driver_first_trans_fast(t9);
    xsi_set_current_line(67, ng0);
    t1 = (t0 + 4160);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t7 = (t4 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t1);
    goto LAB20;

LAB22:    xsi_size_not_matching(3U, t14, 0);
    goto LAB23;

LAB24:    xsi_set_current_line(72, ng0);
    t9 = (t0 + 2312U);
    t10 = *((char **)t9);
    t9 = (t0 + 4224);
    t11 = (t9 + 56U);
    t12 = *((char **)t11);
    t17 = (t12 + 56U);
    t18 = *((char **)t17);
    memcpy(t18, t10, 256U);
    xsi_driver_first_trans_fast(t9);
    xsi_set_current_line(73, ng0);
    t1 = (t0 + 2312U);
    t3 = *((char **)t1);
    t1 = (t0 + 1992U);
    t4 = *((char **)t1);
    t1 = (t0 + 7164U);
    t7 = ieee_p_3620187407_sub_674691591_3965413181(IEEE_P_3620187407, t15, t4, t1, (unsigned char)3);
    t16 = ieee_p_3620187407_sub_514432868_3965413181(IEEE_P_3620187407, t7, t15);
    t19 = (t16 - 0);
    t13 = (t19 * 1);
    t14 = (256U * t13);
    t20 = (0U + t14);
    t8 = (t0 + 4288);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    memcpy(t12, t3, 256U);
    xsi_driver_first_trans_delta(t8, t20, 256U, 0LL);
    goto LAB25;

}


extern void work_a_1095364926_3212880686_init()
{
	static char *pe[] = {(void *)work_a_1095364926_3212880686_p_0};
	xsi_register_didat("work_a_1095364926_3212880686", "isim/aes_256_encrypt_testbench_isim_beh.exe.sim/work/a_1095364926_3212880686.didat");
	xsi_register_executes(pe);
}
