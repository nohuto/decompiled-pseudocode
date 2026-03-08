/*
 * XREFs of NtUserGetAutoRotationState @ 0x1C01D0F80
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C004103C (UserSetLastError.c)
 *     _guard_dispatch_icall_nop @ 0x1C0130B00 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall NtUserGetAutoRotationState(_DWORD *a1)
{
  int v2; // ebx
  int v3; // r8d
  _DWORD *v4; // rcx

  UserSessionSwitchEnterCrit();
  v2 = 0;
  if ( a1 )
  {
    v3 = (*(__int64 (__fastcall **)(PVOID))(*(_QWORD *)P + 16LL))(P);
    v4 = a1;
    if ( (unsigned __int64)a1 >= MmUserProbeAddress )
      v4 = (_DWORD *)MmUserProbeAddress;
    *v4 = *v4;
    *a1 = v3;
    v2 = 1;
  }
  else
  {
    UserSetLastError(87);
  }
  LeaveCrit();
  return v2;
}
