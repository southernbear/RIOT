/******************************************************************************
Copyright 2010, Freie Universitaet Berlin (FUB). All rights reserved.

These sources were developed at the Freie Universitaet Berlin, Computer Systems
and Telematics group (http://cst.mi.fu-berlin.de).
-------------------------------------------------------------------------------
This file is part of RIOT.

This file subject to the terms and conditions of the GNU Lesser General Public
License. See the file LICENSE in the top level directory for more details.
*******************************************************************************/

#ifndef CC430_RTC_H
#define CC430_RTC_H
#include <rtc.h>
#include <time.h>

/**
 * @defgroup    cc430_rtc   CC430 Real Time Clock
 * @ingroup     cc430
 */

/**
 * @file    cc430-rtc.h
 * @brief   CC430 Real Time Clock
 *
 * @author  Freie Universität Berlin, Computer Systems & Telematics, RIOT
 * @version $Revision $
 */

/**
 * @brief	Mask for RTC alarms
 * @see		::rtc_set_alarm
 */
typedef enum {
    RTC_ALARM_DISABLED = 0x00,		///< Alarm disables
    RTC_ALARM_MIN	   = 0x01,    	///< Alarm mask for Minutes
    RTC_ALARM_HOUR     = 0x02, 	    ///< Alarm mask for Hours
    RTC_ALARM_DOW	   = 0x04, 	    ///< Alarm mask for Day of Week
    RTC_ALARM_DOM      = 0x08       ///< Alarm mask for Day of Month
} rtc_alarm_mask_t;

/**
 * @brief	Sets the alarm
 * @internal
 * @param[in]	localt	Alarm time
 * @param[in]	mask	Sets the registers to poll for the alarm
 *
 * To disable the alarm set mask to RTC_ALARM_DISABLED.
 *
 * @see ::rtc_alarm_mask
 */
void rtc_set_alarm(struct tm *localti, rtc_alarm_mask_t mask);

/**
 * @brief   Resets any set alarm
 */
void rtc_remove_alarm(void);


#endif
