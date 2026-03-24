/*
 * XREFs of VirtualizeMultiMonDigitizerSize @ 0x1C01E5CA4
 * Callers:
 *     _GetPointerDeviceRects @ 0x1C012282C (_GetPointerDeviceRects.c)
 *     MiPGetPhysicalRect @ 0x1C01228DC (MiPGetPhysicalRect.c)
 *     RemapHimetricPointsForMultiMonDigitizers @ 0x1C01E562C (RemapHimetricPointsForMultiMonDigitizers.c)
 * Callees:
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C005B960 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     GetScreenRect @ 0x1C0122924 (GetScreenRect.c)
 *     ExpandedMonitorSpace @ 0x1C01E3A5C (ExpandedMonitorSpace.c)
 */

char __fastcall VirtualizeMultiMonDigitizerSize(__int64 a1)
{
  INT v2; // eax
  __int64 v3; // rdx
  __m128i *ScreenRect; // rax
  __m128i v5; // xmm6
  INT v6; // eax
  INT v7; // r8d
  INT v8; // ecx
  __int128 v10; // [rsp+20h] [rbp-38h] BYREF
  __m128i v11; // [rsp+30h] [rbp-28h] BYREF

  LOBYTE(v2) = W32GetCurrentThreadDpiAwarenessContext(a1) & 0xF;
  if ( (_BYTE)v2 != 2 )
  {
    v10 = 0LL;
    ExpandedMonitorSpace((__int64 *)&v10, v3);
    ScreenRect = GetScreenRect(&v11);
    v5 = *ScreenRect;
    v6 = EngMulDiv(
           *(_DWORD *)(a1 + 8),
           _mm_cvtsi128_si32(_mm_srli_si128(*ScreenRect, 8)) - _mm_cvtsi128_si32(*ScreenRect),
           DWORD2(v10) - v10);
    v7 = HIDWORD(v10) - DWORD1(v10);
    v8 = *(_DWORD *)(a1 + 12);
    *(_DWORD *)(a1 + 8) = v6;
    v2 = EngMulDiv(v8, _mm_cvtsi128_si32(_mm_srli_si128(v5, 12)) - _mm_cvtsi128_si32(_mm_srli_si128(v5, 4)), v7);
    *(_DWORD *)(a1 + 12) = v2;
  }
  return v2;
}
