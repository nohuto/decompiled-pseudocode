/*
 * XREFs of MiUpdateVadStartVpn @ 0x14034CF40
 * Callers:
 *     MiUnmapViewOfSection @ 0x1406A2570 (MiUnmapViewOfSection.c)
 *     MiMapLockedPagesInUserSpace @ 0x140725C90 (MiMapLockedPagesInUserSpace.c)
 *     MiAllocateVad @ 0x140728758 (MiAllocateVad.c)
 *     MiAllocateNewSubAllocatedRegion @ 0x140756084 (MiAllocateNewSubAllocatedRegion.c)
 *     MiFindEmptyAddressRangeDownTree @ 0x140760F18 (MiFindEmptyAddressRangeDownTree.c)
 *     MiMapViewOfImageSection @ 0x1407D3750 (MiMapViewOfImageSection.c)
 *     MiReserveUserMemory @ 0x1407D4340 (MiReserveUserMemory.c)
 *     MiMapViewOfDataSection @ 0x1407D57C0 (MiMapViewOfDataSection.c)
 *     MiMapViewOfPhysicalSection @ 0x140A2E020 (MiMapViewOfPhysicalSection.c)
 *     MiAllocateEnclaveVad @ 0x140A3A010 (MiAllocateEnclaveVad.c)
 * Callees:
 *     <none>
 */

void __fastcall MiUpdateVadStartVpn(__int64 a1, __int64 a2)
{
  *(_DWORD *)(a1 + 24) = a2;
  *(_BYTE *)(a1 + 32) = BYTE4(a2);
}
