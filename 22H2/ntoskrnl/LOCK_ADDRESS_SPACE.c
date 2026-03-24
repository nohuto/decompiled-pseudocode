/*
 * XREFs of LOCK_ADDRESS_SPACE @ 0x14029590C
 * Callers:
 *     MiDeleteEmptyPageTables @ 0x1403F4610 (MiDeleteEmptyPageTables.c)
 *     MiFindNextEnclaveBoundary @ 0x1405F7640 (MiFindNextEnclaveBoundary.c)
 *     MiMapViewOfImageSection @ 0x14061D2D0 (MiMapViewOfImageSection.c)
 *     MiLockVadRange @ 0x14061E040 (MiLockVadRange.c)
 *     MiReserveUserMemory @ 0x140637BF0 (MiReserveUserMemory.c)
 *     MmCleanProcessAddressSpace @ 0x14063896C (MmCleanProcessAddressSpace.c)
 *     MiMapViewOfDataSection @ 0x140639820 (MiMapViewOfDataSection.c)
 *     MiAllocateFromSubAllocatedRegion @ 0x1406C4F40 (MiAllocateFromSubAllocatedRegion.c)
 *     MiInitializeVadBitMap @ 0x1406FBDC4 (MiInitializeVadBitMap.c)
 *     MiMapLockedPagesInUserSpace @ 0x14076ACC0 (MiMapLockedPagesInUserSpace.c)
 *     MiMapViewOfPhysicalSection @ 0x1407C33C8 (MiMapViewOfPhysicalSection.c)
 *     MiAllocateEnclaveVad @ 0x1408D1EA8 (MiAllocateEnclaveVad.c)
 *     MiResizeAweBitMap @ 0x1408D6534 (MiResizeAweBitMap.c)
 *     NtFreeUserPhysicalPages @ 0x1408D6850 (NtFreeUserPhysicalPages.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x1402CB080 (ExAcquirePushLockExclusiveEx.c)
 */

__int64 __fastcall LOCK_ADDRESS_SPACE(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  --*(_WORD *)(a1 + 486);
  result = ExAcquirePushLockExclusiveEx(a2 + 1224, 0LL);
  *(_BYTE *)(a1 + 1304) |= 1u;
  return result;
}
