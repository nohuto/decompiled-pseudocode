__int64 __fastcall BitBltSysBmp(__int64 a1, int a2, int a3, unsigned int a4, int a5)
{
  __int16 *v6; // rdi
  unsigned int DpiForSystem; // eax
  __int16 *OemBitmapInfoForDpi; // rsi
  __int64 v12; // rcx
  __int64 v13; // rdx
  HDC v14; // r14
  int v15; // r9d
  unsigned int v16; // eax
  unsigned int v17; // ebx
  int DCDpiScaleValue; // eax
  int v20; // r15d
  int v21; // r9d
  int v22; // r8d

  v6 = 0LL;
  DpiForSystem = GetDpiForSystem(a1);
  OemBitmapInfoForDpi = (__int16 *)GetOemBitmapInfoForDpi(a4, DpiForSystem);
  if ( (W32GetCurrentThreadDpiAwarenessContext(v12) & 0xF) == 0 )
  {
    DCDpiScaleValue = GreGetDCDpiScaleValue((HDC)a1);
    if ( DCDpiScaleValue > 1 )
      v6 = (__int16 *)GetOemBitmapInfoForDpi(a4, (unsigned int)(96 * DCDpiScaleValue));
  }
  if ( a5 )
    v14 = (HDC)PrepareHDCBITSBitmap((HDC)(a1 & -(__int64)(v6 != 0LL)), v13);
  else
    v14 = *(HDC *)(gpDispInfo + 64LL);
  if ( !v14 )
    return 0LL;
  v15 = OemBitmapInfoForDpi[2];
  if ( v6 )
    v16 = GreStretchBltInternal(
            (HDC)a1,
            a2,
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
            a2,
            a3,
            v15,
            OemBitmapInfoForDpi[3],
            (__int64)v14,
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
    v20 = a2 + 2;
    if ( a4 != 12 )
      v20 = a2;
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
                             (__int64)v14,
                             *OemBitmapInfoForDpi + 2,
                             OemBitmapInfoForDpi[1] + 2,
                             -2134114272,
                             0,
                             0);
  }
  return v17;
}
