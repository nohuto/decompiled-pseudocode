/*
 * XREFs of IsFreeMessageListSupported @ 0x1C00706F8
 * Callers:
 *     UserDeleteW32Thread @ 0x1C00702A0 (UserDeleteW32Thread.c)
 *     ?Win32kNtUserCleanupInternal@@YAXXZ @ 0x1C008DC04 (-Win32kNtUserCleanupInternal@@YAXXZ.c)
 *     zzzDestroyQueue @ 0x1C01553C0 (zzzDestroyQueue.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00E1910 (_guard_dispatch_icall_nop.c)
 */

__int64 IsFreeMessageListSupported()
{
  if ( qword_1C02D6728 )
    return qword_1C02D6728();
  else
    return 3221225659LL;
}
