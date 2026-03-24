/*
 * XREFs of vSpDwmMigrateLSurfShapeReferenceWrap @ 0x1C00B7E34
 * Callers:
 *     bMigrateSurfaceForConversion @ 0x1C00B9E00 (bMigrateSurfaceForConversion.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00CF710 (_guard_dispatch_icall_nop.c)
 */

__int64 (*vSpDwmMigrateLSurfShapeReferenceWrap())(void)
{
  __int64 (*result)(void); // rax

  result = qword_1C02562A8;
  if ( qword_1C02562A8 )
    return (__int64 (*)(void))qword_1C02562A8();
  return result;
}
