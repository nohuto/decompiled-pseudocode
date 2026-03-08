/*
 * XREFs of NtUserSetAutoRotation @ 0x1C01DB550
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastStatus @ 0x1C0012568 (UserSetLastStatus.c)
 *     _guard_dispatch_icall_nop @ 0x1C0130B00 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall NtUserSetAutoRotation(unsigned int a1)
{
  NTSTATUS v2; // eax
  __int64 v3; // rcx
  __int64 v4; // rbx

  EnterCrit(0LL, 0LL);
  v2 = (*(__int64 (__fastcall **)(PVOID, _QWORD))(*(_QWORD *)P + 48LL))(P, a1);
  if ( v2 < 0 )
  {
    UserSetLastStatus(v2, 1);
    v4 = 0LL;
  }
  else
  {
    v4 = 1LL;
  }
  UserSessionSwitchLeaveCrit(v3);
  return v4;
}
