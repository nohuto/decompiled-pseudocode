/*
 * XREFs of UserIsCurrentThreadDesktopComposed @ 0x1C0099D10
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00CF870 (_guard_dispatch_icall_nop.c)
 */

__int64 (*UserIsCurrentThreadDesktopComposed())(void)
{
  __int64 (*result)(void); // rax

  result = qword_1C0256E28;
  if ( qword_1C0256E28 )
    return (__int64 (*)(void))qword_1C0256E28();
  return result;
}
