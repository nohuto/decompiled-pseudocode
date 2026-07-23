/*
 * XREFs of _guard_icall_bugcheck @ 0x1404086E0
 * Callers:
 *     KeCheckStackAndTargetAddress @ 0x1402301E0 (KeCheckStackAndTargetAddress.c)
 *     _guard_check_icall @ 0x140408740 (_guard_check_icall.c)
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 * Callees:
 *     KeBugCheckEx @ 0x1403FE0D0 (KeBugCheckEx.c)
 */

void __fastcall __noreturn guard_icall_bugcheck(ULONG_PTR BugCheckParameter4)
{
  KeBugCheckEx(0x139u, 0LL, 0LL, 0LL, BugCheckParameter4);
}
