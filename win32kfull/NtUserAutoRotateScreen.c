/*
 * XREFs of NtUserAutoRotateScreen @ 0x1C01CDD70
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C004103C (UserSetLastError.c)
 *     _guard_dispatch_icall_nop @ 0x1C0130B00 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall NtUserAutoRotateScreen(unsigned int a1)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r8
  unsigned int v5; // ebx

  UserSessionSwitchEnterCrit();
  if ( PsGetCurrentProcess(v3, v2, v4) != gpepCSRSS
    || (*(_DWORD *)(gptiCurrent + 488LL) & 0x20000000) != 0
    && (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(gptiCurrent + 424LL) + 760LL) + 24LL) & 0x10) != 0 )
  {
    v5 = -1;
    UserSetLastError(5);
  }
  else
  {
    v5 = (*(__int64 (__fastcall **)(PVOID, _QWORD))(*(_QWORD *)P + 56LL))(P, a1);
  }
  LeaveCrit();
  return v5;
}
