/*
 * XREFs of IsFreeMessageListSupported @ 0x1C0095F54
 * Callers:
 *     ?Win32kNtUserCleanupInternal@@YAXXZ @ 0x1C007CD3C (-Win32kNtUserCleanupInternal@@YAXXZ.c)
 *     UserDeleteW32Thread @ 0x1C011CB00 (UserDeleteW32Thread.c)
 *     zzzDestroyQueue @ 0x1C011D730 (zzzDestroyQueue.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00CF870 (_guard_dispatch_icall_nop.c)
 */

__int64 IsFreeMessageListSupported()
{
  if ( qword_1C0256140 )
    return qword_1C0256140();
  else
    return 3221225659LL;
}
