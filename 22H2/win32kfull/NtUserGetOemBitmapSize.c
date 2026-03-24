/*
 * XREFs of NtUserGetOemBitmapSize @ 0x1C0106E10
 * Callers:
 *     <none>
 * Callees:
 *     GetDpiForSystem @ 0x1C0063C1C (GetDpiForSystem.c)
 *     UserSetLastError @ 0x1C0069CA0 (UserSetLastError.c)
 *     GetOemBitmapInfoForDpi @ 0x1C010710C (GetOemBitmapInfoForDpi.c)
 */

__int64 __fastcall NtUserGetOemBitmapSize(unsigned int a1, _QWORD *a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  int v7; // ebx
  unsigned int DpiForSystem; // eax
  __int64 OemBitmapInfoForDpi; // rax
  int v10; // r8d
  int v11; // edx
  ULONG64 v12; // rcx
  __int64 v14; // [rsp+60h] [rbp+18h]

  EnterCrit(0LL, 1LL);
  v7 = 0;
  if ( a1 >= 0x5D )
  {
    UserSetLastError(87LL, v4, v6);
  }
  else
  {
    DpiForSystem = GetDpiForSystem(v5);
    OemBitmapInfoForDpi = GetOemBitmapInfoForDpi(a1, DpiForSystem);
    v10 = *(__int16 *)(OemBitmapInfoForDpi + 4);
    v11 = *(__int16 *)(OemBitmapInfoForDpi + 6);
    v12 = MmUserProbeAddress;
    if ( (unsigned __int64)a2 >= MmUserProbeAddress )
      a2 = (_QWORD *)MmUserProbeAddress;
    HIDWORD(v14) = *(__int16 *)(OemBitmapInfoForDpi + 6);
    LODWORD(v14) = *(__int16 *)(OemBitmapInfoForDpi + 4);
    *a2 = v14;
    if ( v10 && v11 )
      v7 = 1;
  }
  UserSessionSwitchLeaveCrit(v12);
  return v7;
}
