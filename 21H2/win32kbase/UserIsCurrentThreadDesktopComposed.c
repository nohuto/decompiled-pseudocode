/*
 * XREFs of UserIsCurrentThreadDesktopComposed @ 0x1C00AC710
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00DE650 (_guard_dispatch_icall_nop.c)
 */

__int64 (*UserIsCurrentThreadDesktopComposed())(void)
{
  __int64 (*result)(void); // rax

  result = qword_1C029CA48;
  if ( qword_1C029CA48 )
    return (__int64 (*)(void))qword_1C029CA48();
  return result;
}
