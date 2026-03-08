/*
 * XREFs of AslFileMappingDelete @ 0x1407A1D38
 * Callers:
 *     SdbCloseDatabaseRead @ 0x14079CA28 (SdbCloseDatabaseRead.c)
 *     SdbGetDatabaseMatch @ 0x14079E090 (SdbGetDatabaseMatch.c)
 *     SdbpCheckMatchingFiles @ 0x1407A0E80 (SdbpCheckMatchingFiles.c)
 *     SdbpCheckKObject @ 0x1407A1BD8 (SdbpCheckKObject.c)
 *     AslFileMappingCreate @ 0x1407A2D8C (AslFileMappingCreate.c)
 *     AslFileMappingCreateFromImageView @ 0x140847670 (AslFileMappingCreateFromImageView.c)
 *     SdbOpenDatabaseEx @ 0x140A4B8F0 (SdbOpenDatabaseEx.c)
 *     SdbpCheckMatchingTextEntry @ 0x140A4D2F4 (SdbpCheckMatchingTextEntry.c)
 *     SdbpCheckMatchingWildcardFiles @ 0x140A4D6E0 (SdbpCheckMatchingWildcardFiles.c)
 * Callees:
 *     RtlFileMapFree @ 0x140303F60 (RtlFileMapFree.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
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
