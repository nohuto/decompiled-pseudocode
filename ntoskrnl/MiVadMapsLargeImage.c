/*
 * XREFs of MiVadMapsLargeImage @ 0x140327280
 * Callers:
 *     MmOutSwapWorkingSet @ 0x1402DAFF8 (MmOutSwapWorkingSet.c)
 *     MiSoftFaultMappedView @ 0x14034A9A0 (MiSoftFaultMappedView.c)
 *     MiIsVadEligibleForCommitRelease @ 0x140615D8C (MiIsVadEligibleForCommitRelease.c)
 *     MiEmptyWorkingSetPrivatePagesByVa @ 0x140619C68 (MiEmptyWorkingSetPrivatePagesByVa.c)
 *     MmSecureVirtualMemoryAgainstWrites @ 0x1406A0D38 (MmSecureVirtualMemoryAgainstWrites.c)
 *     MiUnmapViewOfSection @ 0x1406A2570 (MiUnmapViewOfSection.c)
 *     MmEnumerateAddressSpaceAndReferenceImages @ 0x140727330 (MmEnumerateAddressSpaceAndReferenceImages.c)
 *     MiMarkPrivateImageCfgBits @ 0x14075BBE8 (MiMarkPrivateImageCfgBits.c)
 *     MmQueryVirtualMemory @ 0x1407C6390 (MmQueryVirtualMemory.c)
 *     MmProtectVirtualMemory @ 0x1407C77B0 (MmProtectVirtualMemory.c)
 *     MiFillMapFileInfo @ 0x1408A749A (MiFillMapFileInfo.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiVadMapsLargeImage(__int64 a1)
{
  if ( (*(_DWORD *)(a1 + 48) & 0x70) == 0x20 )
    return HIBYTE(*(_DWORD *)(a1 + 64)) & 1;
  else
    return 0LL;
}
