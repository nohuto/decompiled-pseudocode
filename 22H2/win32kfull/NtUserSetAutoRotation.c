/*
 * XREFs of NtUserSetAutoRotation @ 0x1C01DA520
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastStatus @ 0x1C00132A8 (UserSetLastStatus.c)
 *     _guard_dispatch_icall_nop @ 0x1C0141260 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall NtUserSetAutoRotation(unsigned int a1)
{
  NTSTATUS v2; // eax
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 v7; // rbx

  EnterCrit(0LL, 0LL);
  v2 = (*(__int64 (__fastcall **)(PVOID, _QWORD))(*(_QWORD *)P + 48LL))(P, a1);
  if ( v2 < 0 )
  {
    UserSetLastStatus(v2, 1);
    v7 = 0LL;
  }
  else
  {
    v7 = 1LL;
  }
  UserSessionSwitchLeaveCrit(v4, v3, v5, v6);
  return v7;
}
