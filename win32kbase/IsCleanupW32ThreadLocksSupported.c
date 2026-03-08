/*
 * XREFs of IsCleanupW32ThreadLocksSupported @ 0x1C0079420
 * Callers:
 *     DestroyThreadsObjects @ 0x1C0078460 (DestroyThreadsObjects.c)
 *     ?EnsureRequiredApiSetExtensions@@YAXXZ @ 0x1C00CDB34 (-EnsureRequiredApiSetExtensions@@YAXXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00E1910 (_guard_dispatch_icall_nop.c)
 */

__int64 IsCleanupW32ThreadLocksSupported()
{
  if ( qword_1C02D6DD0 )
    return qword_1C02D6DD0();
  else
    return 3221225659LL;
}
