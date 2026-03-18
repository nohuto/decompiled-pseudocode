/*
 * XREFs of BitBltSysBmp @ 0x1C009A400
 * Callers:
 *     ?xxxDrawSB2@@YAXPEAUtagWND@@PEAUtagSBCALC@@PEAUHDC__@@HI@Z @ 0x1C0014A74 (-xxxDrawSB2@@YAXPEAUtagWND@@PEAUtagSBCALC@@PEAUHDC__@@HI@Z.c)
 *     xxxDrawCaptionBar @ 0x1C00C689C (xxxDrawCaptionBar.c)
 *     ?CreateDPIBitmapStrip@@YAHI@Z @ 0x1C01159A0 (-CreateDPIBitmapStrip@@YAHI@Z.c)
 *     ?zzzDrawInvertScrollArea@@YAXPEAUtagWND@@PEAUtagSBTRACK@@HI@Z @ 0x1C0229B1C (-zzzDrawInvertScrollArea@@YAXPEAUtagWND@@PEAUtagSBTRACK@@HI@Z.c)
 *     DrawSize @ 0x1C0229DC8 (DrawSize.c)
 *     xxxTrackCaptionButton @ 0x1C022C718 (xxxTrackCaptionButton.c)
 *     MNDrawArrow @ 0x1C0234654 (MNDrawArrow.c)
 *     xxxRealDrawMenuItem @ 0x1C0236930 (xxxRealDrawMenuItem.c)
 * Callees:
 *     GreGetDCDpiScaleValue @ 0x1C0015C58 (GreGetDCDpiScaleValue.c)
 *     PrepareHDCBITSBitmap @ 0x1C0016A4C (PrepareHDCBITSBitmap.c)
 *     GreGetLayout @ 0x1C0024844 (GreGetLayout.c)
 *     GetOemBitmapInfoForDpi @ 0x1C009A53C (GetOemBitmapInfoForDpi.c)
 *     IS_UI_LANGID @ 0x1C009A598 (IS_UI_LANGID.c)
 *     GetDpiForSystem @ 0x1C00EDB80 (GetDpiForSystem.c)
 *     GreStretchBltInternal @ 0x1C00FF3A0 (GreStretchBltInternal.c)
 *     NtGdiBitBltInternal @ 0x1C01042C0 (NtGdiBitBltInternal.c)
 */

__int64 __fastcall BitBltSysBmp(HDC a1, __int64 a2, int a3, unsigned int a4, int a5)
{
  __int16 *v6; // rdi
  int v8; // r12d
  unsigned int DpiForSystem; // eax
  __int16 *OemBitmapInfoForDpi; // rsi
  __int64 v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // r14
  unsigned int v15; // eax
  unsigned int v16; // ebx
  int DCDpiScaleValue; // eax
  int v19; // r15d

  v6 = 0LL;
  v8 = a2;
  DpiForSystem = GetDpiForSystem(a1, a2);
  OemBitmapInfoForDpi = (__int16 *)GetOemBitmapInfoForDpi(a4, DpiForSystem);
  if ( (W32GetCurrentThreadDpiAwarenessContext(v12) & 0xF) == 0 )
  {
    DCDpiScaleValue = GreGetDCDpiScaleValue(a1);
    if ( DCDpiScaleValue > 1 )
      v6 = (__int16 *)GetOemBitmapInfoForDpi(a4, (unsigned int)(96 * DCDpiScaleValue));
  }
  if ( a5 )
    v14 = PrepareHDCBITSBitmap((HDC)((unsigned __int64)a1 & -(__int64)(v6 != 0LL)), v13);
  else
    v14 = *(_QWORD *)(gpDispInfo + 64LL);
  if ( !v14 )
    return 0LL;
  if ( v6 )
    v15 = GreStretchBltInternal(a1, OemBitmapInfoForDpi[3], v14, *v6, v6[1], v6[2], v6[3], 13369376, 0, 0);
  else
    v15 = NtGdiBitBltInternal(
            a1,
            v8,
            a3,
            OemBitmapInfoForDpi[2],
            OemBitmapInfoForDpi[3],
            v14,
            *OemBitmapInfoForDpi,
            OemBitmapInfoForDpi[1],
            13369376,
            0,
            0);
  v16 = v15;
  if ( v15
    && ((unsigned int)IS_UI_LANGID() || *(_WORD *)(gpsi + 7012LL) == 1037)
    && (GreGetLayout(a1) & 1) != 0
    && a4 - 11 <= 2 )
  {
    v19 = v8 + 2;
    if ( a4 != 12 )
      v19 = v8;
    if ( v6 )
      return (unsigned int)GreStretchBltInternal(
                             a1,
                             OemBitmapInfoForDpi[3] - 4,
                             v14,
                             *v6 + 2,
                             v6[1] + 2,
                             v6[2] - 4,
                             v6[3] - 4,
                             -2134114272,
                             0,
                             0);
    else
      return (unsigned int)NtGdiBitBltInternal(
                             a1,
                             v19,
                             a3 + 2,
                             OemBitmapInfoForDpi[2] - 4,
                             OemBitmapInfoForDpi[3] - 4,
                             v14,
                             *OemBitmapInfoForDpi + 2,
                             OemBitmapInfoForDpi[1] + 2,
                             -2134114272,
                             0,
                             0);
  }
  return v16;
}
