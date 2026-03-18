/*
 * XREFs of xxxBroadcastDisplaySettingsChange @ 0x1C004A790
 * Callers:
 *     xxxDesktopsRecalcAndBroadcastDisplayChange @ 0x1C004A500 (xxxDesktopsRecalcAndBroadcastDisplayChange.c)
 *     xxxSwitchDesktop @ 0x1C006BB2C (xxxSwitchDesktop.c)
 *     xxxBroadcastModernAppRedraw @ 0x1C01F5E20 (xxxBroadcastModernAppRedraw.c)
 * Callees:
 *     xxxBroadcastMessageEx @ 0x1C004C8D0 (xxxBroadcastMessageEx.c)
 */

__int64 __fastcall xxxBroadcastDisplaySettingsChange(__int64 a1, int a2, int a3, int a4)
{
  __int64 v5; // rbx
  __int64 result; // rax

  v5 = a3;
  EtwTraceChangeDisplayModeBroadcast(0LL);
  result = xxxBroadcastMessageEx(
             *(_QWORD *)(*(_QWORD *)(a1 + 8) + 24LL),
             126LL,
             *(unsigned __int16 *)(gpsi + 6996LL),
             v5,
             1,
             0LL,
             1,
             a4);
  if ( a2 )
  {
    xxxBroadcastMessageEx(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 24LL), 26LL, 0LL, 0LL, 1, 0LL, 1, a4);
    return xxxBroadcastMessageEx(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 24LL), 21LL, 0LL, 0LL, 1, 0LL, 1, a4);
  }
  return result;
}
