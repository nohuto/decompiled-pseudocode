/*
 * XREFs of CmpVERemoveHiveFromSIDMappingTable @ 0x14074AE98
 * Callers:
 *     CmShutdownSystem2 @ 0x1406139DC (CmShutdownSystem2.c)
 *     CmpCompleteUnloadKey @ 0x14074A958 (CmpCompleteUnloadKey.c)
 *     CmpDestroyHive @ 0x140A19FFC (CmpDestroyHive.c)
 * Callees:
 *     ExReleaseFastMutex @ 0x140262170 (ExReleaseFastMutex.c)
 *     ExAcquireFastMutex @ 0x140262DC0 (ExAcquireFastMutex.c)
 *     memmove @ 0x14042CCC0 (memmove.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

void __fastcall CmpVERemoveHiveFromSIDMappingTable(__int64 a1)
{
  unsigned int v2; // edi
  _QWORD *v3; // rax
  __int64 v4; // rbx

  if ( (*(_DWORD *)(a1 + 4112) & 2) != 0 )
  {
    ExAcquireFastMutex(&CmpSIDMappingLock);
    v2 = 0;
    if ( CmpSIDToHiveMappingCount )
    {
      v3 = (char *)CmpSIDToHiveMapping + 24;
      do
      {
        if ( *v3 == a1 )
          break;
        ++v2;
        v3 += 4;
      }
      while ( v2 < CmpSIDToHiveMappingCount );
    }
    v4 = 32LL * v2;
    ExFreePoolWithTag(*(PVOID *)((char *)CmpSIDToHiveMapping + v4 + 8), 0);
    memmove(
      (char *)CmpSIDToHiveMapping + v4,
      (char *)CmpSIDToHiveMapping + 32 * v2 + 32,
      32LL * (--CmpSIDToHiveMappingCount - v2));
    ExReleaseFastMutex(&CmpSIDMappingLock);
  }
}
