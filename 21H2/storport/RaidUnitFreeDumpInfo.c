/*
 * XREFs of RaidUnitFreeDumpInfo @ 0x1C004A980
 * Callers:
 *     RaUnitStorageFreeDumpInfo @ 0x1C00491D8 (RaUnitStorageFreeDumpInfo.c)
 *     RaUnitStorageGetDumpInfoIoctl @ 0x1C007B60C (RaUnitStorageGetDumpInfoIoctl.c)
 *     RaidUnitCreateDumpInfo @ 0x1C007BB8C (RaidUnitCreateDumpInfo.c)
 * Callees:
 *     <none>
 */

void __fastcall RaidUnitFreeDumpInfo(PVOID **a1)
{
  PVOID *v2; // rcx

  v2 = *a1;
  if ( v2[6] )
  {
    ExFreePoolWithTag(v2[6], 0x44436152u);
    v2 = *a1;
  }
  ExFreePoolWithTag(v2, 0x44436152u);
  *a1 = 0LL;
}
