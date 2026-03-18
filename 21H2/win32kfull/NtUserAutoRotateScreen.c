/*
 * XREFs of NtUserAutoRotateScreen @ 0x1C01F15E0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C007274C (UserSetLastError.c)
 *     _guard_dispatch_icall_nop @ 0x1C0160250 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall NtUserAutoRotateScreen(unsigned int a1)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  unsigned int v4; // ebx

  UserSessionSwitchEnterCrit();
  if ( PsGetCurrentProcess(v3, v2) != gpepCSRSS
    || (*(_DWORD *)(gptiCurrent + 488LL) & 0x20000000) != 0
    && (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(gptiCurrent + 424LL) + 768LL) + 24LL) & 0x10) != 0 )
  {
    v4 = -1;
    UserSetLastError(5LL, gpepCSRSS);
  }
  else
  {
    v4 = (*(__int64 (__fastcall **)(PVOID, _QWORD))(*(_QWORD *)qword_1C0335C70 + 56LL))(qword_1C0335C70, a1);
  }
  LeaveCrit();
  return v4;
}
