/*
 * XREFs of UserIsCurrentThreadDesktopComposed @ 0x1C00BB4F0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00E1910 (_guard_dispatch_icall_nop.c)
 */

__int64 (*UserIsCurrentThreadDesktopComposed())(void)
{
  __int64 (*result)(void); // rax

  result = qword_1C02D7280;
  if ( qword_1C02D7280 )
    return (__int64 (*)(void))qword_1C02D7280();
  return result;
}
