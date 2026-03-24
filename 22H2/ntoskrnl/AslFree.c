/*
 * XREFs of AslFree @ 0x140753F6C
 * Callers:
 *     SdbpFreeAppAttributes @ 0x1405D1E50 (SdbpFreeAppAttributes.c)
 *     SdbpCheckMatchingFiles @ 0x140753CB0 (SdbpCheckMatchingFiles.c)
 *     AslpFileMakeStringVersionAttributes @ 0x1407B2DFC (AslpFileMakeStringVersionAttributes.c)
 *     SdbpCheckMatchingWildcardFiles @ 0x1409650D0 (SdbpCheckMatchingWildcardFiles.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x1409B4140 (ExFreePoolWithTag.c)
 */

void __fastcall AslFree(__int64 a1, void *a2)
{
  if ( a2 )
    ExFreePoolWithTag(a2, 0x74705041u);
}
