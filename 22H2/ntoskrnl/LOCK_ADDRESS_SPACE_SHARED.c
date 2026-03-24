/*
 * XREFs of LOCK_ADDRESS_SPACE_SHARED @ 0x14025AA70
 * Callers:
 *     MmGetImageInformation @ 0x1405CF098 (MmGetImageInformation.c)
 *     MiLockVadRange @ 0x14061E040 (MiLockVadRange.c)
 *     MmEnumerateAddressSpaceAndReferenceImages @ 0x14061E9B0 (MmEnumerateAddressSpaceAndReferenceImages.c)
 *     MmQueryVirtualMemory @ 0x14061ED50 (MmQueryVirtualMemory.c)
 *     MmCleanProcessAddressSpace @ 0x14063896C (MmCleanProcessAddressSpace.c)
 *     MiCfgInitializeProcess @ 0x1406FC70C (MiCfgInitializeProcess.c)
 *     MiHotPatchProcess @ 0x1408CA6A8 (MiHotPatchProcess.c)
 *     MmCheckForSafeExecution @ 0x1408D0F90 (MmCheckForSafeExecution.c)
 *     MmIsFileMapped @ 0x1408D1070 (MmIsFileMapped.c)
 *     MiAllocateUserPhysicalPages @ 0x1408D4D38 (MiAllocateUserPhysicalPages.c)
 *     MiCreateLargePageVad @ 0x1408D9FB4 (MiCreateLargePageVad.c)
 *     MiFreeLargePageView @ 0x1408DA360 (MiFreeLargePageView.c)
 * Callees:
 *     ExAcquirePushLockSharedEx @ 0x1402CB240 (ExAcquirePushLockSharedEx.c)
 */

__int64 __fastcall LOCK_ADDRESS_SPACE_SHARED(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  --*(_WORD *)(a1 + 486);
  result = ExAcquirePushLockSharedEx(a2 + 1224, 0LL);
  *(_BYTE *)(a1 + 1304) |= 2u;
  return result;
}
