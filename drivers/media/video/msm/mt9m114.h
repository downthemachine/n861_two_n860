/*
 * drivers/media/video/msm/mt9m114.h
 *
 * Refer to drivers/media/video/msm/mt9d112.h
 * For MT9M114: 2.0Mp, 1/4-Inch System-On-A-Chip (SOC) CMOS Digital Image Sensor
 *
 * Copyright (C) 2009-2010 ZTE Corporation.
 *
 * This software is licensed under the terms of the GNU General Public
 * License version 2, as published by the Free Software Foundation, and
 * may be copied, distributed, and modified under those terms.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * Created by jia.jia@zte.com.cn
 */
/*-----------------------------------------------------------------------------------------
  when         who          what, where, why                         comment tag
  --------     ----         -------------------------------------    ----------------------
  2010-07-28   jia.jia      merged from v5330                        ZTE_JIA_CAM_20100728
  2010-07-23   li.jing      update sensor settings                   ZTE_LJ_CAM_20100723
  2010-06-29   li.jing      created                                  ZTE_CAMERA_LIJING_20100629
------------------------------------------------------------------------------------------*/

#ifndef MT9M114_H
#define MT9M114_H

#include <mach/board.h>
#include <mach/camera.h>

extern struct mt9m114_reg_t mt9m114_regs;

enum mt9m114_width_t {
    WORD_LEN,
    BYTE_LEN
};

struct mt9m114_i2c_reg_conf {
    unsigned short waddr;
    unsigned short wdata;
    enum mt9m114_width_t width;
    unsigned short mdelay_time;
};

struct mt9m114_reg_t {
    struct mt9m114_i2c_reg_conf const *pll_tbl;
    uint16_t pll_tbl_sz;

    struct mt9m114_i2c_reg_conf const *clk_tbl;
    uint16_t clk_tbl_sz;

    struct mt9m114_i2c_reg_conf const *prevsnap_tbl;
    uint16_t prevsnap_tbl_sz;

    struct mt9m114_i2c_reg_conf const *wb_cloudy_tbl;
    uint16_t wb_cloudy_tbl_sz;

    struct mt9m114_i2c_reg_conf const *wb_daylight_tbl;
    uint16_t wb_daylight_tbl_sz;

    struct mt9m114_i2c_reg_conf const *wb_flourescant_tbl;
    uint16_t wb_flourescant_tbl_sz;

    struct mt9m114_i2c_reg_conf const *wb_incandescent_tbl;
    uint16_t wb_incandescent_tbl_sz;

    struct mt9m114_i2c_reg_conf const *wb_auto_tbl;
    uint16_t wb_auto_tbl_sz;

    struct mt9m114_i2c_reg_conf const *af_tbl;
    uint16_t af_tbl_sz;

    struct mt9m114_i2c_reg_conf const **contrast_tbl;
    uint16_t const *contrast_tbl_sz;

    struct mt9m114_i2c_reg_conf const **brightness_tbl;
    uint16_t const *brightness_tbl_sz;

    struct mt9m114_i2c_reg_conf const **saturation_tbl;
    uint16_t const *saturation_tbl_sz;

    struct mt9m114_i2c_reg_conf const **sharpness_tbl;
    uint16_t const *sharpness_tbl_sz;

    struct mt9m114_i2c_reg_conf const *lens_for_outdoor_tbl;
    uint16_t const lens_for_outdoor_tbl_sz;

    struct mt9m114_i2c_reg_conf const *lens_for_indoor_tbl;
    uint16_t const lens_for_indoor_tbl_sz;
    struct mt9m114_i2c_reg_conf const **brightness_exposure_tbl;
    uint16_t const *brightness_exposure_tbl_sz;
};

#endif /* MT9M114_H */
