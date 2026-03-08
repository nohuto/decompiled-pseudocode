/*
 * XREFs of NtUserSetProcessUIAccessZorder @ 0x1C01DD8B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 NtUserSetProcessUIAccessZorder()
{
  __int64 v0; // rcx
  __int64 CurrentProcessWin32Process; // rax
  int v3; // [rsp+30h] [rbp+8h] BYREF

  v3 = 0;
  EnterCrit(0LL, 0LL);
  if ( (int)RtlQueryElevationFlags(&v3) >= 0 && (v3 & 1) == 0 )
  {
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v0);
    if ( CurrentProcessWin32Process )
    {
      v0 = -*(_QWORD *)CurrentProcessWin32Process;
      CurrentProcessWin32Process &= -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL);
    }
    *(_DWORD *)(CurrentProcessWin32Process + 812) |= 2u;
  }
  UserSessionSwitchLeaveCrit(v0);
  return 1LL;
}
