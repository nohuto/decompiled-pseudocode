/*
 * XREFs of GreIsCurrentProcessSystemCritical @ 0x1C0016FA0
 * Callers:
 *     W32CalloutDispatch @ 0x1C00E4D10 (W32CalloutDispatch.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00DE650 (_guard_dispatch_icall_nop.c)
 */

__int64 (*GreIsCurrentProcessSystemCritical())(void)
{
  __int64 (*result)(void); // rax

  result = qword_1C029B7C8;
  if ( qword_1C029B7C8 )
    return (__int64 (*)(void))qword_1C029B7C8();
  return result;
}
