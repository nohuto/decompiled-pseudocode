/*
 * XREFs of xxxBroadcastDisplaySettingsChange @ 0x1C00F2460
 * Callers:
 *     xxxSwitchDesktop @ 0x1C00B0E54 (xxxSwitchDesktop.c)
 *     xxxDesktopsRecalcAndBroadcastDisplayChange @ 0x1C00F2300 (xxxDesktopsRecalcAndBroadcastDisplayChange.c)
 *     xxxBroadcastModernAppRedraw @ 0x1C0211CE0 (xxxBroadcastModernAppRedraw.c)
 * Callees:
 *     xxxBroadcastMessageEx @ 0x1C00A9E58 (xxxBroadcastMessageEx.c)
 *     GetPrimaryMonitorRect @ 0x1C00F266C (GetPrimaryMonitorRect.c)
 */

__int64 __fastcall xxxBroadcastDisplaySettingsChange(__int64 a1, int a2, unsigned int a3)
{
  __m128i *PrimaryMonitorRect; // rax
  __m128i v7; // xmm0
  __int64 result; // rax
  _BYTE v9[24]; // [rsp+40h] [rbp-18h] BYREF

  EtwTraceChangeDisplayModeBroadcast(0LL);
  PrimaryMonitorRect = (__m128i *)GetPrimaryMonitorRect(v9);
  v7 = _mm_srli_si128(*PrimaryMonitorRect, 8);
  result = xxxBroadcastMessageEx(
             *(_QWORD *)(*(_QWORD *)(a1 + 8) + 24LL),
             126LL,
             *(unsigned __int16 *)(gpsi + 6996LL),
             (struct _LARGE_STRING *)((unsigned __int16)(v7.m128i_i16[0] - *(_OWORD *)PrimaryMonitorRect) | (unsigned __int64)(int)((v7.m128i_i32[1] << 16) - (HIDWORD(PrimaryMonitorRect->m128i_i64[0]) << 16))),
             1u,
             0LL,
             1,
             a3);
  if ( a2 )
  {
    xxxBroadcastMessageEx(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 24LL), 26LL, 0LL, 0LL, 1u, 0LL, 1, a3);
    return xxxBroadcastMessageEx(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 24LL), 21LL, 0LL, 0LL, 1u, 0LL, 1, a3);
  }
  return result;
}
