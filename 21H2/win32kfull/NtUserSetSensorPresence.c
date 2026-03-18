/*
 * XREFs of NtUserSetSensorPresence @ 0x1C01FDFF0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C007274C (UserSetLastError.c)
 *     _guard_dispatch_icall_nop @ 0x1C0160250 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall NtUserSetSensorPresence(unsigned int a1)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // rcx

  EnterCrit(0LL, 0LL);
  if ( PsGetCurrentProcess(v3, v2) == gpepCSRSS )
    (*(void (__fastcall **)(PVOID, _QWORD))(*(_QWORD *)qword_1C0335C70 + 40LL))(qword_1C0335C70, a1);
  else
    UserSetLastError(5LL, gpepCSRSS);
  UserSessionSwitchLeaveCrit(v4);
  return 1LL;
}
