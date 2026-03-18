/*
 * XREFs of IsFreeMessageListSupported @ 0x1C0019A1C
 * Callers:
 *     UserDeleteW32Thread @ 0x1C0019A70 (UserDeleteW32Thread.c)
 *     zzzDestroyQueue @ 0x1C0038C50 (zzzDestroyQueue.c)
 *     ?Win32kNtUserCleanupInternal@@YAXXZ @ 0x1C00B8EAC (-Win32kNtUserCleanupInternal@@YAXXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00DE650 (_guard_dispatch_icall_nop.c)
 */

__int64 IsFreeMessageListSupported()
{
  if ( qword_1C029BE80 )
    return qword_1C029BE80();
  else
    return 3221225659LL;
}
