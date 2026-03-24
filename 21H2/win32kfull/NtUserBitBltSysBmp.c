/*
 * XREFs of NtUserBitBltSysBmp @ 0x1C0107390
 * Callers:
 *     <none>
 * Callees:
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C005BA00 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     GetDpiForSystem @ 0x1C0063CBC (GetDpiForSystem.c)
 *     UserSetLastError @ 0x1C0069D40 (UserSetLastError.c)
 *     NtGdiBitBltInternal @ 0x1C0088690 (NtGdiBitBltInternal.c)
 *     GreStretchBltInternal @ 0x1C00B4D10 (GreStretchBltInternal.c)
 *     GetOemBitmapInfoForDpi @ 0x1C010748C (GetOemBitmapInfoForDpi.c)
 *     PrepareHDCBITSBitmap @ 0x1C010759C (PrepareHDCBITSBitmap.c)
 *     GreGetDCDpiScaleValue @ 0x1C0107724 (GreGetDCDpiScaleValue.c)
 */

__int64 __fastcall NtUserBitBltSysBmp(HDC a1, LONG a2, LONG a3, unsigned int a4, int a5)
{
  int v7; // ebx
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // rcx
  HDC v13; // r15
  unsigned int DpiForSystem; // eax
  __int16 *OemBitmapInfoForDpi; // r14
  __int16 *v16; // rdi
  __int64 v17; // rcx
  int v18; // r9d
  int v19; // eax
  int DCDpiScaleValue; // eax

  v7 = 0;
  EnterCrit(0LL, 1LL);
  if ( a4 >= 0x5D )
  {
    UserSetLastError(87LL, v10, v11);
  }
  else
  {
    v13 = (HDC)PrepareHDCBITSBitmap(a1);
    if ( v13 )
    {
      DpiForSystem = GetDpiForSystem(v12);
      OemBitmapInfoForDpi = (__int16 *)GetOemBitmapInfoForDpi(a4, DpiForSystem);
      v16 = 0LL;
      if ( (W32GetCurrentThreadDpiAwarenessContext(v17) & 0xF) == 0 )
      {
        DCDpiScaleValue = GreGetDCDpiScaleValue(a1);
        if ( DCDpiScaleValue > 1 )
          v16 = (__int16 *)GetOemBitmapInfoForDpi(a4, (unsigned int)(96 * DCDpiScaleValue));
      }
      v18 = OemBitmapInfoForDpi[2];
      if ( v16 )
        v19 = GreStretchBltInternal(
                a1,
                a2,
                a3,
                v18,
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
        v19 = NtGdiBitBltInternal(
                a1,
                a2,
                a3,
                v18,
                OemBitmapInfoForDpi[3],
                v13,
                *OemBitmapInfoForDpi,
                OemBitmapInfoForDpi[1],
                a5,
                0,
                0);
      v7 = v19;
    }
  }
  UserSessionSwitchLeaveCrit(v12);
  return v7;
}
