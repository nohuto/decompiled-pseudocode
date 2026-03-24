/*
 * XREFs of xxxDesktopsRecalcAndBroadcastDisplayChange @ 0x1C00FF670
 * Callers:
 *     xxxDeferredDesktopRotation @ 0x1C021E100 (xxxDeferredDesktopRotation.c)
 * Callees:
 *     xxxBroadcastDisplaySettingsChange @ 0x1C00FF6F0 (xxxBroadcastDisplaySettingsChange.c)
 *     xxxDesktopsRecalc @ 0x1C00FF9A0 (xxxDesktopsRecalc.c)
 *     SelectWindowRgn @ 0x1C011172C (SelectWindowRgn.c)
 */

__int64 __fastcall xxxDesktopsRecalcAndBroadcastDisplayChange(
        __int64 a1,
        __int64 a2,
        unsigned __int16 a3,
        unsigned int a4)
{
  unsigned int v4; // edi
  __int64 i; // rbx

  v4 = 0;
  if ( a2 )
  {
    xxxDesktopsRecalc(*(_QWORD *)(a1 + 40));
  }
  else
  {
    for ( i = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 24LL) + 112LL); i; i = *(_QWORD *)(i + 88) )
    {
      if ( (*(_BYTE *)(*(_QWORD *)(i + 40) + 21LL) & 8) != 0 )
        SelectWindowRgn((struct tagWND *)i);
    }
  }
  LOBYTE(v4) = *(_WORD *)(gpsi + 6996LL) != a3;
  return xxxBroadcastDisplaySettingsChange(a1, v4, a4);
}
