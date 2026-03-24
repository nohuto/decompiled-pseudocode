/*
 * XREFs of _SetDoubleClickTime @ 0x1C00DB2A0
 * Callers:
 *     xxxSystemParametersInfoWorker @ 0x1C00DCFE8 (xxxSystemParametersInfoWorker.c)
 * Callees:
 *     safe_cast_fnid_to_PTOOLTIPWND @ 0x1C00309E8 (safe_cast_fnid_to_PTOOLTIPWND.c)
 *     CheckWinstaAttributeAccess @ 0x1C0033350 (CheckWinstaAttributeAccess.c)
 *     InitTooltipDelay @ 0x1C00DB354 (InitTooltipDelay.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall SetDoubleClickTime(__int64 a1)
{
  unsigned int v1; // ebx
  __int64 v2; // rdi
  __int64 i; // rbx
  __int64 v4; // rax

  v1 = a1;
  v2 = *(_QWORD *)(PsGetCurrentProcessWin32Process(a1) + 664);
  if ( !(unsigned int)CheckWinstaAttributeAccess(16LL) )
    return 0LL;
  if ( v1 )
  {
    if ( v1 > 0x1388 )
      v1 = 5000;
  }
  else
  {
    v1 = 500;
  }
  gdtDblClk = v1;
  *(_DWORD *)(gpsi + 4980LL) = 4 * v1;
  *(_DWORD *)(gpsi + 4976LL) = *(_DWORD *)(gpsi + 4980LL) / 5u;
  if ( v2 )
  {
    for ( i = *(_QWORD *)(v2 + 16); i; i = *(_QWORD *)(i + 32) )
    {
      v4 = safe_cast_fnid_to_PTOOLTIPWND(*(_QWORD *)(i + 112));
      InitTooltipDelay(v4);
    }
  }
  return 1LL;
}
