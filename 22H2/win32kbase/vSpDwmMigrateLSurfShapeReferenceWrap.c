/*
 * XREFs of vSpDwmMigrateLSurfShapeReferenceWrap @ 0x1C00B8154
 * Callers:
 *     bMigrateSurfaceForConversion @ 0x1C00BA100 (bMigrateSurfaceForConversion.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00CF870 (_guard_dispatch_icall_nop.c)
 */

__int64 (*vSpDwmMigrateLSurfShapeReferenceWrap())(void)
{
  __int64 (*result)(void); // rax

  result = qword_1C02552A8;
  if ( qword_1C02552A8 )
    return (__int64 (*)(void))qword_1C02552A8();
  return result;
}
