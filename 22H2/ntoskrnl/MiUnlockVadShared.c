/*
 * XREFs of MiUnlockVadShared @ 0x14025A96C
 * Callers:
 *     MiObtainReferencedVadEx @ 0x14021B260 (MiObtainReferencedVadEx.c)
 *     MiScrubProcessLargePages @ 0x140564434 (MiScrubProcessLargePages.c)
 *     MmEnumerateAddressSpaceAndReferenceImages @ 0x14061E9B0 (MmEnumerateAddressSpaceAndReferenceImages.c)
 *     MmQueryVirtualMemory @ 0x14061ED50 (MmQueryVirtualMemory.c)
 *     NtAreMappedFilesTheSame @ 0x1406A0330 (NtAreMappedFilesTheSame.c)
 *     MiReferenceCfgVad @ 0x1406FD0BC (MiReferenceCfgVad.c)
 *     MiHotPatchImage @ 0x1408CA384 (MiHotPatchImage.c)
 *     MiHotPatchProcess @ 0x1408CA6A8 (MiHotPatchProcess.c)
 *     MmIsFileMapped @ 0x1408D1070 (MmIsFileMapped.c)
 * Callees:
 *     ExfReleasePushLockShared @ 0x140271AF0 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x1402C9370 (KeAbPostRelease.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x1402CB480 (KiLeaveGuardedRegionUnsafe.c)
 */

__int64 __fastcall MiUnlockVadShared(__int64 a1, __int64 a2)
{
  ULONG_PTR v2; // rbx

  *(_BYTE *)(a1 + 1305) &= ~0x40u;
  v2 = a2 + 40;
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)(a2 + 40), 0LL, 17LL) != 17 )
    ExfReleasePushLockShared(a2 + 40);
  KeAbPostRelease(v2);
  return KiLeaveGuardedRegionUnsafe(a1);
}
