/*
 * XREFs of vSpDwmMigrateLSurfShapeReferenceWrap @ 0x1C0232988
 * Callers:
 *     bMigrateSurfaceForConversion @ 0x1C015A1C0 (bMigrateSurfaceForConversion.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D6980 (_guard_dispatch_icall_nop.c)
 */

__int64 (*vSpDwmMigrateLSurfShapeReferenceWrap())(void)
{
  __int64 (*result)(void); // rax

  result = qword_1C02946B8;
  if ( qword_1C02946B8 )
    return (__int64 (*)(void))qword_1C02946B8();
  return result;
}
