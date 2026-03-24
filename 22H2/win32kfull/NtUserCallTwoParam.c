/*
 * XREFs of NtUserCallTwoParam @ 0x1C0053390
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C016DB10 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall NtUserCallTwoParam(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v4; // rbx
  __int64 v6; // rcx
  __int64 v7; // rbx

  v4 = a3;
  EnterCrit(0LL, 1LL);
  if ( (unsigned int)(v4 - 126) > 0xF )
    v7 = 0LL;
  else
    v7 = ((__int64 (__fastcall *)(__int64, __int64))*(&apfnSimpleCall + v4))(a1, a2);
  UserSessionSwitchLeaveCrit(v6);
  return v7;
}
