/*
 * XREFs of UserGetRedirectedWindowOrigin @ 0x1C00AF4B0
 * Callers:
 *     GreGetDCPoint @ 0x1C00AB470 (GreGetDCPoint.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00DE650 (_guard_dispatch_icall_nop.c)
 */

__int64 (*UserGetRedirectedWindowOrigin())(void)
{
  __int64 (*result)(void); // rax

  result = qword_1C029AF58;
  if ( qword_1C029AF58 )
    return (__int64 (*)(void))qword_1C029AF58();
  return result;
}
