/*
 * XREFs of NtUserGetOemBitmapSize @ 0x1C01D3AB0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C004103C (UserSetLastError.c)
 *     GetDpiForSystem @ 0x1C0045E5C (GetDpiForSystem.c)
 *     GetOemBitmapInfoForDpi @ 0x1C00D05EC (GetOemBitmapInfoForDpi.c)
 */

__int64 __fastcall NtUserGetOemBitmapSize(unsigned int a1, _QWORD *a2)
{
  __int64 v4; // rcx
  int v5; // ebx
  ULONG64 v6; // rcx
  int DpiForSystem; // eax
  char *OemBitmapInfoForDpi; // rax
  int v9; // r8d
  int v10; // edx
  __int64 v12; // [rsp+60h] [rbp+18h]

  EnterCrit(0LL, 0LL);
  v5 = 0;
  if ( a1 < 0x5D )
  {
    DpiForSystem = GetDpiForSystem(v4);
    OemBitmapInfoForDpi = GetOemBitmapInfoForDpi(a1, DpiForSystem);
    v9 = *((__int16 *)OemBitmapInfoForDpi + 2);
    v10 = *((__int16 *)OemBitmapInfoForDpi + 3);
    v6 = MmUserProbeAddress;
    if ( (unsigned __int64)a2 >= MmUserProbeAddress )
      a2 = (_QWORD *)MmUserProbeAddress;
    HIDWORD(v12) = *((__int16 *)OemBitmapInfoForDpi + 3);
    LODWORD(v12) = *((__int16 *)OemBitmapInfoForDpi + 2);
    *a2 = v12;
    if ( v9 && v10 )
      v5 = 1;
  }
  else
  {
    UserSetLastError(87);
  }
  UserSessionSwitchLeaveCrit(v6);
  return v5;
}
