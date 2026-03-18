/*
 * XREFs of NtUserBitBltSysBmp @ 0x1C014C140
 * Callers:
 *     <none>
 * Callees:
 *     GreStretchBltInternal @ 0x1C002AF84 (GreStretchBltInternal.c)
 *     NtGdiBitBltInternal @ 0x1C003DD70 (NtGdiBitBltInternal.c)
 *     GetDpiForSystem @ 0x1C006878C (GetDpiForSystem.c)
 *     UserSetLastError @ 0x1C007274C (UserSetLastError.c)
 *     GetOemBitmapInfoForDpi @ 0x1C00C3124 (GetOemBitmapInfoForDpi.c)
 *     PrepareHDCBITSBitmap @ 0x1C00C37D8 (PrepareHDCBITSBitmap.c)
 *     GreGetDCDpiScaleValue @ 0x1C00C3E00 (GreGetDCDpiScaleValue.c)
 */

__int64 __fastcall NtUserBitBltSysBmp(HDC a1, int a2, int a3, unsigned int a4, int a5)
{
  int v9; // ebx
  __int64 v10; // rdx
  __int64 v11; // rdx
  __int64 v12; // rcx
  HDC v13; // r15
  int DpiForSystem; // eax
  __int16 *OemBitmapInfoForDpi; // r14
  __int16 *v16; // rdi
  __int64 v17; // rdx
  __int64 v18; // rcx
  int v19; // r9d
  int v20; // eax
  int DCDpiScaleValue; // eax

  v9 = 0;
  EnterCrit(0LL, 0LL);
  if ( a4 >= 0x5D )
  {
    UserSetLastError(87LL, v10);
  }
  else
  {
    v13 = (HDC)PrepareHDCBITSBitmap(a1, v10);
    if ( v13 )
    {
      DpiForSystem = GetDpiForSystem(v12, v11);
      OemBitmapInfoForDpi = (__int16 *)GetOemBitmapInfoForDpi(a4, DpiForSystem);
      v16 = 0LL;
      if ( (W32GetCurrentThreadDpiAwarenessContext(v18, v17) & 0xF) == 0 )
      {
        DCDpiScaleValue = GreGetDCDpiScaleValue(a1);
        if ( DCDpiScaleValue > 1 )
          v16 = (__int16 *)GetOemBitmapInfoForDpi(a4, 96 * DCDpiScaleValue);
      }
      v19 = OemBitmapInfoForDpi[2];
      if ( v16 )
        v20 = GreStretchBltInternal(
                a1,
                a2,
                a3,
                v19,
                OemBitmapInfoForDpi[3],
                v13,
                *v16,
                v16[1],
                v16[2],
                v16[3],
                a5,
                0,
                0);
      else
        v20 = NtGdiBitBltInternal(
                a1,
                a2,
                a3,
                v19,
                OemBitmapInfoForDpi[3],
                v13,
                *OemBitmapInfoForDpi,
                OemBitmapInfoForDpi[1],
                a5,
                0,
                0);
      v9 = v20;
    }
  }
  UserSessionSwitchLeaveCrit(v12);
  return v9;
}
