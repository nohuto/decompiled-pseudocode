/*
 * XREFs of InitTooltipDelay @ 0x1C010D360
 * Callers:
 *     xxxTooltipWndProc @ 0x1C010CED0 (xxxTooltipWndProc.c)
 *     _SetDoubleClickTime @ 0x1C010D2A8 (_SetDoubleClickTime.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall InitTooltipDelay(__int64 a1)
{
  __int64 result; // rax

  if ( a1 )
  {
    *(_DWORD *)(a1 + 8) = 3 * gdtDblClk;
    result = (unsigned int)(8 * gdtDblClk);
    *(_DWORD *)(a1 + 12) = result;
  }
  return result;
}
