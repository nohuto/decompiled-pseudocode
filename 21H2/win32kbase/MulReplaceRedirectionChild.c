/*
 * XREFs of MulReplaceRedirectionChild @ 0x1C023DAF4
 * Callers:
 *     bMigrateSurfaceForConversion @ 0x1C0061D70 (bMigrateSurfaceForConversion.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00DE650 (_guard_dispatch_icall_nop.c)
 */

__int64 (*MulReplaceRedirectionChild())(void)
{
  __int64 (*result)(void); // rax

  result = qword_1C029B038;
  if ( qword_1C029B038 )
    return (__int64 (*)(void))qword_1C029B038();
  return result;
}
