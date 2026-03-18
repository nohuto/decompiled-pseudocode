/*
 * XREFs of NtUserBitBltSysBmp @ 0x1C01CCDC0
 * Callers:
 *     <none>
 * Callees:
 *     GreGetDCDpiScaleValue @ 0x1C0015C58 (GreGetDCDpiScaleValue.c)
 *     PrepareHDCBITSBitmap @ 0x1C0016A4C (PrepareHDCBITSBitmap.c)
 *     GetOemBitmapInfoForDpi @ 0x1C009A53C (GetOemBitmapInfoForDpi.c)
 *     GetDpiForSystem @ 0x1C00EDB80 (GetDpiForSystem.c)
 *     UserSetLastError @ 0x1C00F04CC (UserSetLastError.c)
 *     GreStretchBltInternal @ 0x1C00FF3A0 (GreStretchBltInternal.c)
 *     NtGdiBitBltInternal @ 0x1C01042C0 (NtGdiBitBltInternal.c)
 */

__int64 __fastcall NtUserBitBltSysBmp(HDC a1, int a2, int a3, unsigned int a4, int a5)
{
  int v9; // ebx
  __int64 v10; // rdx
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  HDC v15; // r15
  unsigned int DpiForSystem; // eax
  __int16 *OemBitmapInfoForDpi; // r14
  __int16 *v18; // rdi
  __int64 v19; // rcx
  int DCDpiScaleValue; // eax
  int v21; // r9d
  int v22; // eax

  v9 = 0;
  EnterCrit(0LL, 0LL);
  if ( a4 < 0x5D )
  {
    v15 = (HDC)PrepareHDCBITSBitmap(a1, v10);
    if ( v15 )
    {
      DpiForSystem = GetDpiForSystem(v12);
      OemBitmapInfoForDpi = (__int16 *)GetOemBitmapInfoForDpi(a4, DpiForSystem);
      v18 = 0LL;
      if ( (W32GetCurrentThreadDpiAwarenessContext(v19) & 0xF) == 0 )
      {
        DCDpiScaleValue = GreGetDCDpiScaleValue(a1);
        if ( DCDpiScaleValue > 1 )
          v18 = (__int16 *)GetOemBitmapInfoForDpi(a4, 96 * DCDpiScaleValue);
      }
      v21 = OemBitmapInfoForDpi[2];
      if ( v18 )
        v22 = GreStretchBltInternal(
                a1,
                a2,
                a3,
                v21,
                OemBitmapInfoForDpi[3],
                v15,
                *v18,
                v18[1],
                v18[2],
                v18[3],
                a5,
                0,
                0);
      else
        v22 = NtGdiBitBltInternal(
                (__int64)a1,
                a2,
                a3,
                v21,
                OemBitmapInfoForDpi[3],
                v15,
                *OemBitmapInfoForDpi,
                OemBitmapInfoForDpi[1],
                a5,
                0,
                0);
      v9 = v22;
    }
  }
  else
  {
    UserSetLastError(87);
  }
  UserSessionSwitchLeaveCrit(v12, v11, v13, v14);
  return v9;
}
