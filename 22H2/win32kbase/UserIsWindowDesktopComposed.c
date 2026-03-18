/*
 * XREFs of UserIsWindowDesktopComposed @ 0x1C0233370
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D6980 (_guard_dispatch_icall_nop.c)
 */

__int64 (*UserIsWindowDesktopComposed())(void)
{
  __int64 (*result)(void); // rax

  result = qword_1C0296100;
  if ( qword_1C0296100 )
    return (__int64 (*)(void))qword_1C0296100();
  return result;
}
