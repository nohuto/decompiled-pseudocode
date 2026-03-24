/*
 * XREFs of MiLockVad @ 0x140296DD8
 * Callers:
 *     MiDeleteEmptyPageTables @ 0x1403F4610 (MiDeleteEmptyPageTables.c)
 *     MiAllocateVirtualMemory @ 0x1405F8650 (MiAllocateVirtualMemory.c)
 *     MiMapViewOfImageSection @ 0x14061D2D0 (MiMapViewOfImageSection.c)
 *     MiLockVadRange @ 0x14061E040 (MiLockVadRange.c)
 *     MmQueryVirtualMemory @ 0x14061ED50 (MmQueryVirtualMemory.c)
 *     MiReserveUserMemory @ 0x140637BF0 (MiReserveUserMemory.c)
 *     MmCleanProcessAddressSpace @ 0x14063896C (MmCleanProcessAddressSpace.c)
 *     MiMapViewOfDataSection @ 0x140639820 (MiMapViewOfDataSection.c)
 *     MiAllocateNewSubAllocatedRegion @ 0x140683A58 (MiAllocateNewSubAllocatedRegion.c)
 *     MiAllocateFromSubAllocatedRegion @ 0x1406C4F40 (MiAllocateFromSubAllocatedRegion.c)
 *     MiCfgInitializeProcess @ 0x1406FC70C (MiCfgInitializeProcess.c)
 *     MiMapLockedPagesInUserSpace @ 0x14076ACC0 (MiMapLockedPagesInUserSpace.c)
 *     MiMapViewOfPhysicalSection @ 0x1407C33C8 (MiMapViewOfPhysicalSection.c)
 *     MiPerformImageHotPatch @ 0x1408CCF14 (MiPerformImageHotPatch.c)
 *     MiAllocateEnclaveVad @ 0x1408D1EA8 (MiAllocateEnclaveVad.c)
 *     MiInitializeVsmEnclave @ 0x1408D30E8 (MiInitializeVsmEnclave.c)
 *     MiLoadSectionIntoVsmEnclave @ 0x1408D35C0 (MiLoadSectionIntoVsmEnclave.c)
 *     MiTerminateEnclave @ 0x1408D3BA8 (MiTerminateEnclave.c)
 *     MiDeleteInsertedCloneVads @ 0x1408D9404 (MiDeleteInsertedCloneVads.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x1402CB080 (ExAcquirePushLockExclusiveEx.c)
 */

__int64 __fastcall MiLockVad(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  --*(_WORD *)(a1 + 486);
  result = ExAcquirePushLockExclusiveEx(a2 + 40, 0LL);
  *(_BYTE *)(a1 + 1304) |= 0x80u;
  return result;
}
