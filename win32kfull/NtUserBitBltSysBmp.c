__int64 __fastcall NtUserBitBltSysBmp(HDC a1, int a2, int a3, unsigned int a4, int a5)
{
  int v9; // ebx
  __int64 v10; // rdx
  __int64 v11; // rcx
  HDC v12; // r15
  int DpiForSystem; // eax
  __int16 *OemBitmapInfoForDpi; // r14
  __int16 *v15; // rdi
  __int64 v16; // rcx
  int DCDpiScaleValue; // eax
  int v18; // r9d
  int v19; // eax

  v9 = 0;
  EnterCrit(0LL, 0LL);
  if ( a4 < 0x5D )
  {
    v12 = (HDC)PrepareHDCBITSBitmap(a1, v10);
    if ( v12 )
    {
      DpiForSystem = GetDpiForSystem(v11);
      OemBitmapInfoForDpi = (__int16 *)GetOemBitmapInfoForDpi(a4, DpiForSystem);
      v15 = 0LL;
      if ( (W32GetCurrentThreadDpiAwarenessContext(v16) & 0xF) == 0 )
      {
        DCDpiScaleValue = GreGetDCDpiScaleValue(a1);
        if ( DCDpiScaleValue > 1 )
          v15 = (__int16 *)GetOemBitmapInfoForDpi(a4, 96 * DCDpiScaleValue);
      }
      v18 = OemBitmapInfoForDpi[2];
      if ( v15 )
        v19 = GreStretchBltInternal(
                a1,
                a2,
                a3,
                v18,
                OemBitmapInfoForDpi[3],
                v12,
                *v15,
                v15[1],
                v15[2],
                v15[3],
                a5,
                0,
                0);
      else
        v19 = NtGdiBitBltInternal(
                a1,
                a2,
                a3,
                v18,
                OemBitmapInfoForDpi[3],
                (__int64)v12,
                *OemBitmapInfoForDpi,
                OemBitmapInfoForDpi[1],
                a5,
                0,
                0);
      v9 = v19;
    }
  }
  else
  {
    UserSetLastError(87);
  }
  UserSessionSwitchLeaveCrit(v11);
  return v9;
}
