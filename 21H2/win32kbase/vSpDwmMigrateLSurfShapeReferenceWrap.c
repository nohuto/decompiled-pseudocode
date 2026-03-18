/*
 * XREFs of vSpDwmMigrateLSurfShapeReferenceWrap @ 0x1C00C5DE0
 * Callers:
 *     bMigrateSurfaceForConversion @ 0x1C0061D70 (bMigrateSurfaceForConversion.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00DE650 (_guard_dispatch_icall_nop.c)
 */

__int64 (*vSpDwmMigrateLSurfShapeReferenceWrap())(void)
{
  __int64 (*result)(void); // rax

  result = qword_1C029B028;
  if ( qword_1C029B028 )
    return (__int64 (*)(void))qword_1C029B028();
  return result;
}
