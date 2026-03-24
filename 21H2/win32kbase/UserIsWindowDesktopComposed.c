/*
 * XREFs of UserIsWindowDesktopComposed @ 0x1C00BE7A0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00CF710 (_guard_dispatch_icall_nop.c)
 */

__int64 (*UserIsWindowDesktopComposed())(void)
{
  __int64 (*result)(void); // rax

  result = qword_1C0257E20;
  if ( qword_1C0257E20 )
    return (__int64 (*)(void))qword_1C0257E20();
  return result;
}
