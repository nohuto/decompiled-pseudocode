/*
 * XREFs of MiIsPfn @ 0x1402C9840
 * Callers:
 *     MiCoalesceFreeLargePages @ 0x140283820 (MiCoalesceFreeLargePages.c)
 *     MiGetPageProtection @ 0x1402B1430 (MiGetPageProtection.c)
 *     PfpPfnPrioRequest @ 0x1406402D0 (PfpPfnPrioRequest.c)
 *     MmRotatePhysicalView @ 0x14065FD60 (MmRotatePhysicalView.c)
 *     MiMapLockedPagesInUserSpace @ 0x14076ACC0 (MiMapLockedPagesInUserSpace.c)
 *     MiMapViewOfPhysicalSection @ 0x1407C33C8 (MiMapViewOfPhysicalSection.c)
 *     MiIsExtentDangling @ 0x1408D0148 (MiIsExtentDangling.c)
 *     MmRelocatePfnList @ 0x1408D1B2C (MmRelocatePfnList.c)
 *     MiFreePartitionPageRun @ 0x1408DB084 (MiFreePartitionPageRun.c)
 *     MiConvertHiberPhasePte @ 0x1409957C0 (MiConvertHiberPhasePte.c)
 *     MiMarkHiberNotCachedPte @ 0x1409B0440 (MiMarkHiberNotCachedPte.c)
 *     MiMarkNonPagedHiberPhasePte @ 0x1409B0660 (MiMarkNonPagedHiberPhasePte.c)
 *     MmAreMdlPagesLocked @ 0x1409C5CE0 (MmAreMdlPagesLocked.c)
 *     MmCheckMdlPages @ 0x1409C5DAC (MmCheckMdlPages.c)
 *     MmCheckMapIoSpace @ 0x1409C5EB8 (MmCheckMapIoSpace.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiIsPfn(unsigned __int64 a1)
{
  if ( a1 > 0xFFFFFFFFFLL )
    return 0LL;
  else
    return (*(_QWORD *)(48 * a1 - 0x57FFFFFFFD8LL) >> 50) & 1LL;
}
