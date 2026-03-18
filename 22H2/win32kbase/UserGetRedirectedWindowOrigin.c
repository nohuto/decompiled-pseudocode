/*
 * XREFs of UserGetRedirectedWindowOrigin @ 0x1C00D60B4
 * Callers:
 *     GreGetDCPoint @ 0x1C003B970 (GreGetDCPoint.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D6980 (_guard_dispatch_icall_nop.c)
 */

__int64 (*UserGetRedirectedWindowOrigin())(void)
{
  __int64 (*result)(void); // rax

  result = qword_1C02945E8;
  if ( qword_1C02945E8 )
    return (__int64 (*)(void))qword_1C02945E8();
  return result;
}
