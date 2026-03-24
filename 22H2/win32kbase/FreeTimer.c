/*
 * XREFs of FreeTimer @ 0x1C01FC290
 * Callers:
 *     ?Win32kNtUserCleanupInternal@@YAXXZ @ 0x1C007CD3C (-Win32kNtUserCleanupInternal@@YAXXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00CF870 (_guard_dispatch_icall_nop.c)
 */

__int64 (*FreeTimer())(void)
{
  __int64 (*result)(void); // rax

  result = qword_1C0255B88;
  if ( qword_1C0255B88 )
    return (__int64 (*)(void))qword_1C0255B88();
  return result;
}
