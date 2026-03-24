/*
 * XREFs of IsFreeMessageListSupported @ 0x1C0095194
 * Callers:
 *     ?Win32kNtUserCleanupInternal@@YAXXZ @ 0x1C007B65C (-Win32kNtUserCleanupInternal@@YAXXZ.c)
 *     UserDeleteW32Thread @ 0x1C011C830 (UserDeleteW32Thread.c)
 *     zzzDestroyQueue @ 0x1C011D460 (zzzDestroyQueue.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00CF710 (_guard_dispatch_icall_nop.c)
 */

__int64 IsFreeMessageListSupported()
{
  if ( qword_1C0257140 )
    return qword_1C0257140();
  else
    return 3221225659LL;
}
