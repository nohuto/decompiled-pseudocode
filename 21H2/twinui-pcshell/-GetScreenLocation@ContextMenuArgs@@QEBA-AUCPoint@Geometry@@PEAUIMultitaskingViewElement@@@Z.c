/*
 * XREFs of ?GetScreenLocation@ContextMenuArgs@@QEBA?AUCPoint@Geometry@@PEAUIMultitaskingViewElement@@@Z @ 0x1804310B4
 * Callers:
 *     ?ShowContextMenu@SwitchItemThumbnailElement@@IEAAJAEBVContextMenuArgs@@@Z @ 0x180425F80 (-ShowContextMenu@SwitchItemThumbnailElement@@IEAAJAEBVContextMenuArgs@@@Z.c)
 * Callees:
 *     ?GetScreenLocation@ElementHelpers@@YA?AUCRect@Geometry@@PEAUIMultitaskingViewElement@@@Z @ 0x18041CBF8 (-GetScreenLocation@ElementHelpers@@YA-AUCRect@Geometry@@PEAUIMultitaskingViewElement@@@Z.c)
 */

_DWORD *__fastcall ContextMenuArgs::GetScreenLocation(__int16 *a1, _DWORD *a2, __int64 a3)
{
  _DWORD *ScreenLocation; // rcx
  _BYTE v6[24]; // [rsp+20h] [rbp-18h] BYREF

  if ( *(_DWORD *)a1 == -1 )
  {
    ScreenLocation = (_DWORD *)ElementHelpers::GetScreenLocation((__int64)v6, a3);
    *a2 = *ScreenLocation + (ScreenLocation[2] - *ScreenLocation) / 2;
    a2[1] = ScreenLocation[1] + (ScreenLocation[3] - ScreenLocation[1]) / 2;
  }
  else
  {
    *a2 = *a1;
    a2[1] = a1[1];
  }
  return a2;
}
