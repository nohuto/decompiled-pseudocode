/*
 * XREFs of ?GetTaskbarSearchBoxWidth@@YAHPEBUtagRECT@@_N@Z @ 0x1800C0088
 * Callers:
 *     ?CalculateLastActivatedTrayItemRect@SearchAppDesktopExperienceView@@AEAAJPEAUtagRECT@@@Z @ 0x18001A154 (-CalculateLastActivatedTrayItemRect@SearchAppDesktopExperienceView@@AEAAJPEAUtagRECT@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GetTaskbarSearchBoxWidth(const struct tagRECT *a1)
{
  return GetCortanaWidthWithoutGutter(a1, 1);
}
