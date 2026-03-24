/*
 * XREFs of UserGetRedirectedWindowOrigin @ 0x1C009D310
 * Callers:
 *     GreGetDCPoint @ 0x1C00722C0 (GreGetDCPoint.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00CF870 (_guard_dispatch_icall_nop.c)
 */

__int64 (*UserGetRedirectedWindowOrigin())(void)
{
  __int64 (*result)(void); // rax

  result = qword_1C02551D8;
  if ( qword_1C02551D8 )
    return (__int64 (*)(void))qword_1C02551D8();
  return result;
}
