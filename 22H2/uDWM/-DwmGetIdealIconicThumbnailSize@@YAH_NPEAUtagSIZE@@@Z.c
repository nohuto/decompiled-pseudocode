/*
 * XREFs of ?DwmGetIdealIconicThumbnailSize@@YAH_NPEAUtagSIZE@@@Z @ 0x180044EC0
 * Callers:
 *     ?RequestBitmap@CIconicBitmapRegistry@@AEAAJPEAVCWindowData@@_N@Z @ 0x18001437C (-RequestBitmap@CIconicBitmapRegistry@@AEAAJPEAVCWindowData@@_N@Z.c)
 *     ?UpdateSizeOrMargins@CWindowIconic@@AEAAJ_N@Z @ 0x180044708 (-UpdateSizeOrMargins@CWindowIconic@@AEAAJ_N@Z.c)
 *     ?BitmapReceived@CIconicBitmapRegistry@@QEAAJPEAVCWindowData@@KIIPEAX_KK@Z @ 0x180089480 (-BitmapReceived@CIconicBitmapRegistry@@QEAAJPEAVCWindowData@@KIIPEAX_KK@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x180053970 (__security_check_cookie.c)
 */

__int64 __fastcall DwmGetIdealIconicThumbnailSize(char a1, struct tagSIZE *a2)
{
  unsigned int v4; // edi
  int DpiForSystem; // eax
  int v6; // esi
  LONG v7; // eax
  int v8; // ecx
  int v9; // r10d
  LONG cy; // edx
  LONG v12; // eax
  LONG v13; // ecx
  int pvParam; // [rsp+20h] [rbp-28h] BYREF
  int v15; // [rsp+24h] [rbp-24h]
  int v16; // [rsp+28h] [rbp-20h]
  int v17; // [rsp+2Ch] [rbp-1Ch]

  v4 = 0;
  DpiForSystem = GetDpiForSystem();
  a2->cy = 200;
  a2->cx = 200;
  v6 = DpiForSystem;
  v7 = MulDiv(200, DpiForSystem, 96);
  a2->cx = v7;
  a2->cy = v7;
  if ( SystemParametersInfoW(0x30u, 0, &pvParam, 0) )
  {
    v8 = 0;
    v9 = 0;
    cy = a2->cy;
    if ( v17 - v15 >= 0 )
      v8 = v17 - v15;
    if ( v16 - pvParam >= 0 )
      v9 = v16 - pvParam;
    if ( a2->cx * v8 >= cy * v9 )
      a2->cx = MulDiv(v9, cy, v8);
    else
      a2->cy = MulDiv(v8, a2->cx, v9);
    if ( !a1 )
    {
      v12 = MulDiv(a2->cx, 96, v6);
      v13 = a2->cy;
      a2->cx = v12;
      a2->cy = MulDiv(v13, 96, v6);
    }
    return 1;
  }
  return v4;
}
