/*
 * XREFs of GreIsCurrentProcessSystemCritical @ 0x1C0070248
 * Callers:
 *     W32CalloutDispatch @ 0x1C00ED390 (W32CalloutDispatch.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00E1910 (_guard_dispatch_icall_nop.c)
 */

__int64 (*GreIsCurrentProcessSystemCritical())(void)
{
  __int64 (*result)(void); // rax

  result = qword_1C02D5FD0;
  if ( qword_1C02D5FD0 )
    return (__int64 (*)(void))qword_1C02D5FD0();
  return result;
}
