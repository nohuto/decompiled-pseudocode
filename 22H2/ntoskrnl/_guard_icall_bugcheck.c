/*
 * XREFs of _guard_icall_bugcheck @ 0x140407B80
 * Callers:
 *     KeCheckStackAndTargetAddress @ 0x140309780 (KeCheckStackAndTargetAddress.c)
 *     _guard_check_icall @ 0x140407BE0 (_guard_check_icall.c)
 *     _guard_dispatch_icall @ 0x140407C30 (_guard_dispatch_icall.c)
 * Callees:
 *     KeBugCheckEx @ 0x1403FD570 (KeBugCheckEx.c)
 */

void __fastcall __noreturn guard_icall_bugcheck(ULONG_PTR BugCheckParameter4)
{
  KeBugCheckEx(0x139u, 0LL, 0LL, 0LL, BugCheckParameter4);
}
