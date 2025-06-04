#include "buttons_screen.h"

static lv_obj_t *buttons[20];

void buttons_screen_init(void)
{
    lv_obj_t *scr = lv_scr_act();

    lv_obj_t *cont = lv_obj_create(scr);
    lv_obj_set_size(cont, lv_pct(100), lv_pct(100));
    lv_obj_center(cont);
    lv_obj_set_flex_flow(cont, LV_FLEX_FLOW_ROW_WRAP);
    lv_obj_set_flex_align(cont, LV_FLEX_ALIGN_START, LV_FLEX_ALIGN_START, LV_FLEX_ALIGN_START);

    for (int i = 0; i < 20; i++) {
        buttons[i] = lv_btn_create(cont);
        lv_obj_set_size(buttons[i], 80, 40);
        lv_obj_clear_flag(buttons[i], LV_OBJ_FLAG_SCROLLABLE);
    }
}
