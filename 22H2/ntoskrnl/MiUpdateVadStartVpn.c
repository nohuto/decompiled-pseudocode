/*
 * XREFs of MiUpdateVadStartVpn @ 0x14029C7E8
 * Callers:
 *     MiMapViewOfImageSection @ 0x1406AEAC0 (MiMapViewOfImageSection.c)
 *     MiUnmapViewOfSection @ 0x14071F030 (MiUnmapViewOfSection.c)
 *     MiReserveUserMemory @ 0x14071F450 (MiReserveUserMemory.c)
 *     MiMapViewOfDataSection @ 0x1407202F0 (MiMapViewOfDataSection.c)
 *     MiMapLockedPagesInUserSpace @ 0x140748A84 (MiMapLockedPagesInUserSpace.c)
 *     MiFindEmptyAddressRangeDownTree @ 0x1407B6C08 (MiFindEmptyAddressRangeDownTree.c)
 *     MiAllocateNewSubAllocatedRegion @ 0x1407CD0F4 (MiAllocateNewSubAllocatedRegion.c)
 *     MiAllocateVad @ 0x1407D0138 (MiAllocateVad.c)
 *     MiMapViewOfPhysicalSection @ 0x140A30D50 (MiMapViewOfPhysicalSection.c)
 *     MiAllocateEnclaveVad @ 0x140A3CCF8 (MiAllocateEnclaveVad.c)
 * Callees:
 *     <none>
 */

void __fastcall MiUpdateVadStartVpn(__int64 a1, __int64 a2)
{
  *(_DWORD *)(a1 + 24) = a2;
  *(_BYTE *)(a1 + 32) = BYTE4(a2);
}
