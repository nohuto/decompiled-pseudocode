/*
 * XREFs of NtUserGetOemBitmapSize @ 0x1C01D2A60
 * Callers:
 *     <none>
 * Callees:
 *     GetOemBitmapInfoForDpi @ 0x1C009A53C (GetOemBitmapInfoForDpi.c)
 *     GetDpiForSystem @ 0x1C00EDB80 (GetDpiForSystem.c)
 *     UserSetLastError @ 0x1C00F04CC (UserSetLastError.c)
 */

__int64 __fastcall NtUserGetOemBitmapSize(unsigned int a1, _QWORD *a2)
{
  __int64 v4; // rcx
  int v5; // ebx
  __int64 v6; // rdx
  ULONG64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  unsigned int DpiForSystem; // eax
  char *OemBitmapInfoForDpi; // rax
  __int64 v13; // [rsp+60h] [rbp+18h]

  EnterCrit(0LL, 0LL);
  v5 = 0;
  if ( a1 < 0x5D )
  {
    DpiForSystem = GetDpiForSystem(v4);
    OemBitmapInfoForDpi = GetOemBitmapInfoForDpi(a1, DpiForSystem);
    v8 = (unsigned int)*((__int16 *)OemBitmapInfoForDpi + 2);
    v6 = (unsigned int)*((__int16 *)OemBitmapInfoForDpi + 3);
    v7 = MmUserProbeAddress;
    if ( (unsigned __int64)a2 >= MmUserProbeAddress )
      a2 = (_QWORD *)MmUserProbeAddress;
    HIDWORD(v13) = *((__int16 *)OemBitmapInfoForDpi + 3);
    LODWORD(v13) = *((__int16 *)OemBitmapInfoForDpi + 2);
    *a2 = v13;
    if ( (_DWORD)v8 && (_DWORD)v6 )
      v5 = 1;
  }
  else
  {
    UserSetLastError(87);
  }
  UserSessionSwitchLeaveCrit(v7, v6, v8, v9);
  return v5;
}
