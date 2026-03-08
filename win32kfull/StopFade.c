/*
 * XREFs of StopFade @ 0x1C01BDEF0
 * Callers:
 *     xxxSwitchDesktop @ 0x1C00205D4 (xxxSwitchDesktop.c)
 *     xxxDwmStopRedirection @ 0x1C007B850 (xxxDwmStopRedirection.c)
 *     zzzDwmStartRedirection @ 0x1C007CEC8 (zzzDwmStartRedirection.c)
 *     EditionHandleSonarKeyEvent @ 0x1C00E8310 (EditionHandleSonarKeyEvent.c)
 *     xxxTooltipWndProc @ 0x1C00FA000 (xxxTooltipWndProc.c)
 *     EditionStopSonar @ 0x1C0145650 (EditionStopSonar.c)
 *     zzzAnimateFade @ 0x1C01BE518 (zzzAnimateFade.c)
 *     zzzStartSonar @ 0x1C01BE79C (zzzStartSonar.c)
 *     MNAnimate @ 0x1C0237090 (MNAnimate.c)
 * Callees:
 *     NtGdiBitBltInternal @ 0x1C005E110 (NtGdiBitBltInternal.c)
 *     FindTimer @ 0x1C00DEEDC (FindTimer.c)
 *     GreGetLayout @ 0x1C0111738 (GreGetLayout.c)
 *     DeleteFadeSprite @ 0x1C01BDE40 (DeleteFadeSprite.c)
 */

__int64 StopFade()
{
  __int64 v0; // rax
  unsigned int v1; // ecx
  LONG v2; // edi
  HDC DCEx; // rbx
  LONG v4; // esi
  unsigned __int8 Layout; // al
  __int64 StockObject; // rax
  __int64 result; // rax

  FindTimer((void *)gTermIO[1], (void *)0xFFF6, 2u, 1, 0LL);
  v0 = DeleteFadeSprite();
  v1 = gfade[12];
  if ( (v1 & 2) == 0 && (v1 & 1) != 0 )
  {
    if ( v0 )
    {
      v2 = 0;
      DCEx = (HDC)_GetDCEx(v0, 0LL, 3LL);
      v4 = 0;
    }
    else
    {
      v2 = gfade[6];
      v4 = gfade[7];
      DCEx = *(HDC *)(gpDispInfo + 56LL);
    }
    Layout = GreGetLayout(DCEx);
    NtGdiBitBltInternal(DCEx, v2, v4, gfade[8], gfade[9], *(_QWORD *)&gfade[2], 0, 0, (Layout << 31) + 13369376, 0, 0);
    _ReleaseDC(DCEx);
  }
  StockObject = GreGetStockObject(21LL);
  GreSelectBitmap(*(_QWORD *)&gfade[2], StockObject);
  GreCleanDC(*(_QWORD *)&gfade[2]);
  GreSetDCOwnerEx(*(_QWORD *)&gfade[2], 0LL, 0LL, 1LL);
  GreDeleteObject(*(_QWORD *)&gfade[4]);
  *(_QWORD *)&gfade[4] = 0LL;
  result = *(_QWORD *)gfade;
  gfade[12] = 0;
  return result;
}
