/*
 * XREFs of ?IsWindowRunningInElevatedToken@TabViewManager@@CA_NPEAUHWND__@@@Z @ 0x1802E1594
 * Callers:
 *     ?TryAssignViewToTabGroup@TabViewManager@@UEAAJPEAUIApplicationView@@PEAUIUnknown@@PEAU_GUID@@@Z @ 0x1802ED550 (-TryAssignViewToTabGroup@TabViewManager@@UEAAJPEAUIApplicationView@@PEAUIUnknown@@PEAU_GUID@@@Z.c)
 * Callees:
 *     ?reset@?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x1801C99E0 (-reset@-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@details@.c)
 *     ?_LUAIsElevatedToken@@YAJPEAXPEA_N1@Z @ 0x1802F0B20 (-_LUAIsElevatedToken@@YAJPEAXPEA_N1@Z.c)
 */

char __fastcall TabViewManager::IsWindowRunningInElevatedToken(HWND a1)
{
  char v1; // di
  char *v2; // rbx
  NTSTATUS v3; // eax
  signed int v4; // eax
  bool v5; // sf
  void *TokenHandle[3]; // [rsp+20h] [rbp-18h] BYREF
  bool v8; // [rsp+48h] [rbp+10h] BYREF
  bool v9; // [rsp+50h] [rbp+18h] BYREF
  DWORD dwProcessId; // [rsp+58h] [rbp+20h] BYREF

  v1 = 0;
  if ( !GetWindowThreadProcessId(a1, &dwProcessId) )
    return 0;
  v2 = (char *)OpenProcess(0x1000u, 0, dwProcessId);
  if ( (unsigned __int64)(v2 - 1) > 0xFFFFFFFFFFFFFFFDuLL )
  {
LABEL_14:
    if ( (unsigned __int64)(v2 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
      CloseHandle(v2);
    return 0;
  }
  TokenHandle[0] = 0LL;
  wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::reset(
    TokenHandle,
    0LL);
  if ( !OpenProcessToken(v2, 8u, TokenHandle) )
  {
    if ( (unsigned __int64)TokenHandle[0] - 1 <= 0xFFFFFFFFFFFFFFFDuLL )
      CloseHandle(TokenHandle[0]);
    goto LABEL_14;
  }
  v3 = _LUAIsElevatedToken(TokenHandle[0], &v8, &v9);
  v4 = RtlNtStatusToDosError(v3);
  v5 = v4 < 0;
  if ( v4 > 0 )
    v5 = 1;
  if ( !v5 && v8 )
    v1 = 1;
  if ( (unsigned __int64)TokenHandle[0] - 1 <= 0xFFFFFFFFFFFFFFFDuLL )
    CloseHandle(TokenHandle[0]);
  CloseHandle(v2);
  return v1;
}
