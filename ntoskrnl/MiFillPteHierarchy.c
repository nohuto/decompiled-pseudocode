/*
 * XREFs of MiFillPteHierarchy @ 0x140333AE0
 * Callers:
 *     MiPfCompleteInPageSupport @ 0x14020DAF4 (MiPfCompleteInPageSupport.c)
 *     MiClearNonPagedPtes @ 0x14020DF88 (MiClearNonPagedPtes.c)
 *     MiSynchronizeSystemVa @ 0x1402228B0 (MiSynchronizeSystemVa.c)
 *     MiBitmapRangeZeroEx @ 0x140242D70 (MiBitmapRangeZeroEx.c)
 *     MiFindActualFaultingPte @ 0x1402A31F0 (MiFindActualFaultingPte.c)
 *     MiInitializePageFaultPacket @ 0x1402A346C (MiInitializePageFaultPacket.c)
 *     MiGetPhysicalAddress @ 0x14030C890 (MiGetPhysicalAddress.c)
 *     MiDeletePagablePteRange @ 0x1403244A0 (MiDeletePagablePteRange.c)
 *     MiLockPoolCommitPageTable @ 0x14032FF9C (MiLockPoolCommitPageTable.c)
 *     MiCaptureDeleteHierarchy @ 0x140333890 (MiCaptureDeleteHierarchy.c)
 *     MiInPagePageTable @ 0x140345FA0 (MiInPagePageTable.c)
 *     MiVaToPfnEx @ 0x140384AD0 (MiVaToPfnEx.c)
 *     MiSmallVaStillMapsFrame @ 0x1403A3A90 (MiSmallVaStillMapsFrame.c)
 *     MiLockStealUserVm @ 0x1403B7F90 (MiLockStealUserVm.c)
 *     MmFreeContiguousMemory @ 0x1403BD6E0 (MmFreeContiguousMemory.c)
 *     MiDbgCopyMemoryTarget @ 0x140641640 (MiDbgCopyMemoryTarget.c)
 *     MiUpdateForkMaps @ 0x140662E50 (MiUpdateForkMaps.c)
 *     MiMapProcessExecutable @ 0x14072787C (MiMapProcessExecutable.c)
 *     MxMapVa @ 0x140B3819C (MxMapVa.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall MiFillPteHierarchy(unsigned __int64 a1, unsigned __int64 *a2)
{
  unsigned __int64 v2; // rcx
  unsigned __int64 v3; // rcx
  unsigned __int64 result; // rax
  unsigned __int64 v5; // rcx

  v2 = ((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  *a2 = v2;
  v3 = ((v2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  a2[1] = v3;
  result = 0xFFFFF68000000000uLL;
  v5 = ((v3 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  a2[2] = v5;
  a2[3] = ((v5 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  return result;
}
