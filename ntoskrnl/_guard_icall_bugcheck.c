/*
 * XREFs of _guard_icall_bugcheck @ 0x140421120
 * Callers:
 *     KeCheckStackAndTargetAddress @ 0x1402DC470 (KeCheckStackAndTargetAddress.c)
 *     _guard_check_icall @ 0x140421180 (_guard_check_icall.c)
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 * Callees:
 *     KeBugCheckEx @ 0x140416000 (KeBugCheckEx.c)
 */

void __fastcall __noreturn guard_icall_bugcheck(ULONG_PTR BugCheckParameter4)
{
  KeBugCheckEx(0x139u, 0xAuLL, 0LL, 0LL, BugCheckParameter4);
}
