/*
 * XREFs of BitBltSysBmp @ 0x1C00C2FD4
 * Callers:
 *     xxxDrawCaptionBar @ 0x1C00BAE5C (xxxDrawCaptionBar.c)
 *     ?CreateDPIBitmapStrip@@YAHI@Z @ 0x1C00BF48C (-CreateDPIBitmapStrip@@YAHI@Z.c)
 *     ?xxxDrawSB2@@YAXPEAUtagWND@@PEAUtagSBCALC@@PEAUHDC__@@HI@Z @ 0x1C00C3E78 (-xxxDrawSB2@@YAXPEAUtagWND@@PEAUtagSBCALC@@PEAUHDC__@@HI@Z.c)
 *     ?zzzDrawInvertScrollArea@@YAXPEAUtagWND@@PEAUtagSBTRACK@@HI@Z @ 0x1C0241180 (-zzzDrawInvertScrollArea@@YAXPEAUtagWND@@PEAUtagSBTRACK@@HI@Z.c)
 *     DrawSize @ 0x1C0241420 (DrawSize.c)
 *     xxxTrackCaptionButton @ 0x1C0243270 (xxxTrackCaptionButton.c)
 *     MNDrawArrow @ 0x1C0247A88 (MNDrawArrow.c)
 *     xxxRealDrawMenuItem @ 0x1C0248CAC (xxxRealDrawMenuItem.c)
 * Callees:
 *     GreStretchBltInternal @ 0x1C002AF84 (GreStretchBltInternal.c)
 *     NtGdiBitBltInternal @ 0x1C003DD70 (NtGdiBitBltInternal.c)
 *     GetDpiForSystem @ 0x1C006878C (GetDpiForSystem.c)
 *     GreGetLayout @ 0x1C00C1400 (GreGetLayout.c)
 *     GetOemBitmapInfoForDpi @ 0x1C00C3124 (GetOemBitmapInfoForDpi.c)
 *     IS_UI_LANGID @ 0x1C00C3230 (IS_UI_LANGID.c)
 *     PrepareHDCBITSBitmap @ 0x1C00C37D8 (PrepareHDCBITSBitmap.c)
 *     GreGetDCDpiScaleValue @ 0x1C00C3E00 (GreGetDCDpiScaleValue.c)
 */

__int64 __fastcall BitBltSysBmp(__int64 a1, __int64 a2, int a3, unsigned int a4, int a5)
{
  __int16 *v6; // rdi
  int v8; // r12d
  unsigned int DpiForSystem; // eax
  __int16 *OemBitmapInfoForDpi; // rsi
  __int64 v12; // rdx
  __int64 v13; // rcx
  HDC v14; // r14
  int v15; // r9d
  unsigned int v16; // eax
  unsigned int v17; // ebx
  int DCDpiScaleValue; // eax
  int v20; // r15d
  int v21; // r9d
  int v22; // r8d

  v6 = 0LL;
  v8 = a2;
  DpiForSystem = GetDpiForSystem(a1, a2);
  OemBitmapInfoForDpi = (__int16 *)GetOemBitmapInfoForDpi(a4, DpiForSystem);
  if ( (W32GetCurrentThreadDpiAwarenessContext(v13, v12) & 0xF) == 0 )
  {
    DCDpiScaleValue = GreGetDCDpiScaleValue((HDC)a1);
    if ( DCDpiScaleValue > 1 )
      v6 = (__int16 *)GetOemBitmapInfoForDpi(a4, (unsigned int)(96 * DCDpiScaleValue));
  }
  if ( a5 )
    v14 = (HDC)PrepareHDCBITSBitmap((HDC)(a1 & -(__int64)(v6 != 0LL)));
  else
    v14 = *(HDC *)(gpDispInfo + 64LL);
  if ( !v14 )
    return 0LL;
  v15 = OemBitmapInfoForDpi[2];
  if ( v6 )
    v16 = GreStretchBltInternal(
            (HDC)a1,
            v8,
            a3,
            v15,
            OemBitmapInfoForDpi[3],
            v14,
            *v6,
            v6[1],
            v6[2],
            v6[3],
            13369376,
            0,
            0);
  else
    v16 = NtGdiBitBltInternal(
            (HDC)a1,
            v8,
            a3,
            v15,
            OemBitmapInfoForDpi[3],
            v14,
            *OemBitmapInfoForDpi,
            OemBitmapInfoForDpi[1],
            13369376,
            0,
            0);
  v17 = v16;
  if ( v16
    && ((unsigned int)IS_UI_LANGID() || *(_WORD *)(gpsi + 7012LL) == 1037)
    && (GreGetLayout((HDC)a1) & 1) != 0
    && a4 - 11 <= 2 )
  {
    v20 = v8 + 2;
    if ( a4 != 12 )
      v20 = v8;
    v21 = OemBitmapInfoForDpi[2] - 4;
    v22 = a3 + 2;
    if ( v6 )
      return (unsigned int)GreStretchBltInternal(
                             (HDC)a1,
                             v20,
                             v22,
                             v21,
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
                             (HDC)a1,
                             v20,
                             v22,
                             v21,
                             OemBitmapInfoForDpi[3] - 4,
                             v14,
                             *OemBitmapInfoForDpi + 2,
                             OemBitmapInfoForDpi[1] + 2,
                             -2134114272,
                             0,
                             0);
  }
  return v17;
}
