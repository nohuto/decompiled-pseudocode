/*
 * XREFs of InitTooltipDelay @ 0x1C00F9D58
 * Callers:
 *     _SetDoubleClickTime @ 0x1C00F9C04 (_SetDoubleClickTime.c)
 *     xxxTooltipWndProc @ 0x1C00FA000 (xxxTooltipWndProc.c)
 * Callees:
 *     <none>
 */

void __fastcall InitTooltipDelay(__int64 a1)
{
  __int64 v2; // rcx

  if ( a1 )
  {
    *(_DWORD *)(a1 + 8) = 3 * *(_DWORD *)(SGDGetUserSessionState(a1) + 14360);
    *(_DWORD *)(a1 + 12) = 8 * *(_DWORD *)(SGDGetUserSessionState(v2) + 14360);
  }
}
