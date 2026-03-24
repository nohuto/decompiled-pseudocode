/*
 * XREFs of _guard_icall_bugcheck @ 0x140408500
 * Callers:
 *     KeCheckStackAndTargetAddress @ 0x1402B2030 (KeCheckStackAndTargetAddress.c)
 *     _guard_check_icall @ 0x140408560 (_guard_check_icall.c)
 *     _guard_dispatch_icall @ 0x1404085B0 (_guard_dispatch_icall.c)
 * Callees:
 *     KeBugCheckEx @ 0x1403FDEF0 (KeBugCheckEx.c)
 */

void __fastcall __noreturn guard_icall_bugcheck(ULONG_PTR BugCheckParameter4)
{
  KeBugCheckEx(0x139u, 0LL, 0LL, 0LL, BugCheckParameter4);
}
