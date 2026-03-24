/*
 * XREFs of IsCleanupW32ThreadLocksSupported @ 0x1C00981C4
 * Callers:
 *     DestroyThreadsObjects @ 0x1C0033370 (DestroyThreadsObjects.c)
 *     ?EnsureRequiredApiSetExtensions@@YAXXZ @ 0x1C00980CC (-EnsureRequiredApiSetExtensions@@YAXXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00CF710 (_guard_dispatch_icall_nop.c)
 */

__int64 IsCleanupW32ThreadLocksSupported()
{
  if ( qword_1C0257838 )
    return qword_1C0257838();
  else
    return 3221225659LL;
}
