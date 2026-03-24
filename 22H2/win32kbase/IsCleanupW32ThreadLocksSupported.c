/*
 * XREFs of IsCleanupW32ThreadLocksSupported @ 0x1C0098FB8
 * Callers:
 *     DestroyThreadsObjects @ 0x1C00347E0 (DestroyThreadsObjects.c)
 *     ?EnsureRequiredApiSetExtensions@@YAXXZ @ 0x1C0098EC0 (-EnsureRequiredApiSetExtensions@@YAXXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00CF870 (_guard_dispatch_icall_nop.c)
 */

__int64 IsCleanupW32ThreadLocksSupported()
{
  if ( qword_1C0256838 )
    return qword_1C0256838();
  else
    return 3221225659LL;
}
