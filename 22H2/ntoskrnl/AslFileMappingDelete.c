/*
 * XREFs of AslFileMappingDelete @ 0x140755B58
 * Callers:
 *     SdbpCheckMatchingFiles @ 0x140753CB0 (SdbpCheckMatchingFiles.c)
 *     SdbpCheckKObject @ 0x14075454C (SdbpCheckKObject.c)
 *     SdbCloseDatabaseRead @ 0x1407559FC (SdbCloseDatabaseRead.c)
 *     AslFileMappingCreate @ 0x1407581E8 (AslFileMappingCreate.c)
 *     SdbGetDatabaseMatch @ 0x14077E548 (SdbGetDatabaseMatch.c)
 *     AslFileMappingCreateFromImageView @ 0x1407B3BD8 (AslFileMappingCreateFromImageView.c)
 *     SdbOpenDatabaseEx @ 0x1409640DC (SdbOpenDatabaseEx.c)
 *     SdbpCheckMatchingTextEntry @ 0x140964CE4 (SdbpCheckMatchingTextEntry.c)
 *     SdbpCheckMatchingWildcardFiles @ 0x1409650D0 (SdbpCheckMatchingWildcardFiles.c)
 * Callees:
 *     RtlFileMapFree @ 0x140371CCC (RtlFileMapFree.c)
 *     ExFreePoolWithTag @ 0x1409B4140 (ExFreePoolWithTag.c)
 */

void __fastcall AslFileMappingDelete(PVOID *P)
{
  PVOID v2; // rcx

  if ( P )
  {
    RtlFileMapFree((__int64)(P + 1));
    v2 = P[9];
    if ( v2 )
    {
      ExFreePoolWithTag(v2, 0x74705041u);
      P[9] = 0LL;
    }
    if ( *P )
    {
      ExFreePoolWithTag(*P, 0x74705041u);
      *P = 0LL;
    }
    ExFreePoolWithTag(P, 0x74705041u);
  }
}
