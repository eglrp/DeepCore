#ifndef __dc_argmask_h__
#define __dc_argmask_h__

#define PA      0x2
#define SA      0x1
#define AM(i,n) ((n)<<((i)<<1))

#define AM_P		 AM(0,PA)
#define AM_2P		(AM(0,PA)|AM(1,PA))
#define AM_3P		(AM(0,PA)|AM(1,PA)|AM(2,PA))
#define AM_4P		(AM(0,PA)|AM(1,PA)|AM(2,PA)|AM(3,PA))
#define AM_5P		(AM(0,PA)|AM(1,PA)|AM(2,PA)|AM(3,PA)|AM(4,PA))

#define AM_2S(i)	(AM(i,SA)|AM(i+1,SA))
#define AM_3S(i)	(AM(i,SA)|AM(i+1,SA))
#define AM_4S(i)	(AM(i,SA)|AM(i+1,SA)|AM(i+2,SA))
#define AM_5S(i)	(AM(i,SA)|AM(i+1,SA)|AM(i+2,SA)|AM(i+3,SA))
#define AM_6S(i)	(AM(i,SA)|AM(i+1,SA)|AM(i+2,SA)|AM(i+3,SA)|AM(i+4,SA)|AM(i+5,SA))
#define AM_7S(i)	(AM(i,SA)|AM(i+1,SA)|AM(i+2,SA)|AM(i+3,SA)|AM(i+4,SA)|AM(i+5,SA)|AM(i+6,SA))
#define AM_8S(i)	(AM(i,SA)|AM(i+1,SA)|AM(i+2,SA)|AM(i+3,SA)|AM(i+4,SA)|AM(i+5,SA)|AM(i+6,SA)|AM(i+7,SA))
#define AM_9S(i)	(AM(i,SA)|AM(i+1,SA)|AM(i+2,SA)|AM(i+3,SA)|AM(i+4,SA)|AM(i+5,SA)|AM(i+6,SA)|AM(i+7,SA)|AM(i+8,SA))
#define AM_AS(i)	(AM(i,SA)|AM(i+1,SA)|AM(i+2,SA)|AM(i+3,SA)|AM(i+4,SA)|AM(i+5,SA)|AM(i+6,SA)|AM(i+7,SA)|AM(i+8,SA)|AM(i+9,SA))
#define AM_BS(i)	(AM(i,SA)|AM(i+1,SA)|AM(i+2,SA)|AM(i+3,SA)|AM(i+4,SA)|AM(i+5,SA)|AM(i+6,SA)|AM(i+7,SA)|AM(i+8,SA)|AM(i+9,SA)|AM(i+10,SA))
#define AM_CS(i)	(AM(i,SA)|AM(i+1,SA)|AM(i+2,SA)|AM(i+3,SA)|AM(i+4,SA)|AM(i+5,SA)|AM(i+6,SA)|AM(i+7,SA)|AM(i+8,SA)|AM(i+9,SA)|AM(i+10,SA)|AM(i+11,SA))
#define AM_DS(i)	(AM(i,SA)|AM(i+1,SA)|AM(i+2,SA)|AM(i+3,SA)|AM(i+4,SA)|AM(i+5,SA)|AM(i+6,SA)|AM(i+7,SA)|AM(i+8,SA)|AM(i+9,SA)|AM(i+10,SA)|AM(i+11,SA)|AM(i+12,SA))
#define AM_ES(i)	(AM(i,SA)|AM(i+1,SA)|AM(i+2,SA)|AM(i+3,SA)|AM(i+4,SA)|AM(i+5,SA)|AM(i+6,SA)|AM(i+7,SA)|AM(i+8,SA)|AM(i+9,SA)|AM(i+10,SA)|AM(i+11,SA)|AM(i+12,SA)|AM(i+13,SA))

#define AM_P_1S		(AM(0,PA)|AM(1,SA))
#define AM_P_2S		(AM(0,PA)|AM_2S(1))
#define AM_P_3S		(AM(0,PA)|AM_3S(1))
#define AM_P_4S		(AM(0,PA)|AM_4S(1))
#define AM_P_5S		(AM(0,PA)|AM_5S(1))
#define AM_P_6S		(AM(0,PA)|AM_6S(1))
#define AM_P_7S		(AM(0,PA)|AM_7S(1))
#define AM_P_8S		(AM(0,PA)|AM_8S(1))
#define AM_P_9S		(AM(0,PA)|AM_9S(1))
#define AM_P_AS		(AM(0,PA)|AM_AS(1))
#define AM_P_BS		(AM(0,PA)|AM_BS(1))
#define AM_P_CS		(AM(0,PA)|AM_CS(1))
#define AM_P_DS		(AM(0,PA)|AM_DS(1))
#define AM_P_ES		(AM(0,PA)|AM_ES(1))

#define AM_2P_1S	(AM_2P|AM(2,SA))
#define AM_2P_2S	(AM_2P|AM_2S(2))
#define AM_2P_3S	(AM_2P|AM_3S(2))
#define AM_2P_4S	(AM_2P|AM_4S(2))
#define AM_2P_5S	(AM_2P|AM_5S(2))
#define AM_2P_6S	(AM_2P|AM_6S(2))
#define AM_2P_7S	(AM_2P|AM_7S(2))
#define AM_2P_8S	(AM_2P|AM_8S(2))
#define AM_2P_9S	(AM_2P|AM_9S(2))
#define AM_2P_AS	(AM_2P|AM_AS(2))
#define AM_2P_BS	(AM_2P|AM_BS(2))
#define AM_2P_CS	(AM_2P|AM_CS(2))
#define AM_2P_DS	(AM_2P|AM_DS(2))
#define AM_2P_ES	(AM_2P|AM_ES(2))

#define AM_3P_1S	(AM_3P|AM(3,SA))
#define AM_3P_2S	(AM_3P|AM_2S(3))
#define AM_3P_3S	(AM_3P|AM_3S(3))
#define AM_3P_4S	(AM_3P|AM_4S(3))
#define AM_3P_5S	(AM_3P|AM_5S(3))
#define AM_3P_6S	(AM_3P|AM_6S(3))
#define AM_3P_7S	(AM_3P|AM_7S(3))
#define AM_3P_8S	(AM_3P|AM_8S(3))
#define AM_3P_9S	(AM_3P|AM_9S(3))
#define AM_3P_AS	(AM_3P|AM_AS(3))
#define AM_3P_BS	(AM_3P|AM_BS(3))
#define AM_3P_CS	(AM_3P|AM_CS(3))
#define AM_3P_DS	(AM_3P|AM_DS(3))

#define AM_4P_1S	(AM_4P|AM(4,SA))
#define AM_4P_2S	(AM_4P|AM_2S(4))
#define AM_4P_3S	(AM_4P|AM_3S(4))
#define AM_4P_4S	(AM_4P|AM_4S(4))
#define AM_4P_5S	(AM_4P|AM_5S(4))
#define AM_4P_6S	(AM_4P|AM_6S(4))
#define AM_4P_7S	(AM_4P|AM_7S(4))
#define AM_4P_8S	(AM_4P|AM_8S(4))
#define AM_4P_9S	(AM_4P|AM_9S(4))
#define AM_4P_AS	(AM_4P|AM_AS(4))
#define AM_4P_BS	(AM_4P|AM_BS(4))
#define AM_4P_CS	(AM_4P|AM_CS(4))

#define AM_5P_1S	(AM_5P|AM(5,SA))
#define AM_5P_2S	(AM_5P|AM_2S(5))
#define AM_5P_3S	(AM_5P|AM_3S(5))
#define AM_5P_4S	(AM_5P|AM_4S(5))
#define AM_5P_5S	(AM_5P|AM_5S(5))
#define AM_5P_6S	(AM_5P|AM_6S(5))
#define AM_5P_7S	(AM_5P|AM_7S(5))
#define AM_5P_8S	(AM_5P|AM_8S(5))
#define AM_5P_9S	(AM_5P|AM_9S(5))
#define AM_5P_AS	(AM_5P|AM_AS(5))
#define AM_5P_BS	(AM_5P|AM_BS(5))

#endif
