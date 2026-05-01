/*
 * XREFs of ?CalculateLastActivatedTrayItemRect@CortanaDesktopExperienceView@@AEAA?AUtagRECT@@XZ @ 0x18027A398
 * Callers:
 *     ?ApplyCortanaWindowRegionWithCustomRects@CortanaDesktopExperienceView@@AEAAJURect@Foundation@Windows@@@Z @ 0x180279A58 (-ApplyCortanaWindowRegionWithCustomRects@CortanaDesktopExperienceView@@AEAAJURect@Foundation@Win.c)
 *     ?ComputeCortanaWindowRect@CortanaDesktopExperienceView@@AEAA?AUtagRECT@@W4EDGEUI_TRAYSTUCKPLACE@@HHU2@_N@Z @ 0x18027A848 (-ComputeCortanaWindowRect@CortanaDesktopExperienceView@@AEAA-AUtagRECT@@W4EDGEUI_TRAYSTUCKPLACE@.c)
 *     ?OnViewPropertiesChanging@CortanaDesktopExperienceView@@AEAAJXZ @ 0x18027EC10 (-OnViewPropertiesChanging@CortanaDesktopExperienceView@@AEAAJXZ.c)
 *     ?PositionCortanaWindow@CortanaDesktopExperienceView@@AEAAJ_N0@Z @ 0x18027F528 (-PositionCortanaWindow@CortanaDesktopExperienceView@@AEAAJ_N0@Z.c)
 *     ?ShowBorder@CortanaDesktopExperienceView@@AEAAJPEAUtagRECT@@@Z @ 0x180280EF0 (-ShowBorder@CortanaDesktopExperienceView@@AEAAJPEAUtagRECT@@@Z.c)
 * Callees:
 *     <none>
 */

struct tagRECT *__fastcall CortanaDesktopExperienceView::CalculateLastActivatedTrayItemRect(
        CortanaDesktopExperienceView *this,
        struct tagRECT *__return_ptr retstr)
{
  __int128 v2; // xmm0

  if ( *((_DWORD *)this + 62) == 1 )
    v2 = *(_OWORD *)((char *)this + 220);
  else
    v2 = *(_OWORD *)((char *)this + 196);
  retstr->left = (int)*(float *)&v2;
  retstr->top = (int)*((float *)&v2 + 1);
  retstr->right = (int)(float)(*((float *)&v2 + 2) + *(float *)&v2);
  retstr->bottom = (int)(float)(*((float *)&v2 + 3) + *((float *)&v2 + 1));
  return retstr;
}
