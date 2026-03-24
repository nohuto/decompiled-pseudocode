/*
 * XREFs of MiFillPteHierarchy @ 0x14028CAF0
 * Callers:
 *     MiInitializePageFaultPacket @ 0x14027D2F8 (MiInitializePageFaultPacket.c)
 *     MiBitmapRangeZeroEx @ 0x140289D40 (MiBitmapRangeZeroEx.c)
 *     MiLockPoolCommitPageTable @ 0x14028BA50 (MiLockPoolCommitPageTable.c)
 *     MiInPagePageTable @ 0x14028C440 (MiInPagePageTable.c)
 *     MiSynchronizeSystemVa @ 0x1402922C0 (MiSynchronizeSystemVa.c)
 *     MiFindActualFaultingPte @ 0x1402E32E4 (MiFindActualFaultingPte.c)
 *     MmFreeContiguousMemory @ 0x1402E9070 (MmFreeContiguousMemory.c)
 *     MiClearNonPagedPtes @ 0x1402E9388 (MiClearNonPagedPtes.c)
 *     MiGetPhysicalAddress @ 0x140301054 (MiGetPhysicalAddress.c)
 *     MiVaToPfn @ 0x140301194 (MiVaToPfn.c)
 *     MiSmallVaStillMapsFrame @ 0x1403275F8 (MiSmallVaStillMapsFrame.c)
 *     MiLockStealUserVm @ 0x140333FE4 (MiLockStealUserVm.c)
 *     MiDbgCopyMemoryTarget @ 0x140545A80 (MiDbgCopyMemoryTarget.c)
 *     MiUpdateForkMaps @ 0x14055B6E0 (MiUpdateForkMaps.c)
 *     MiMapProcessExecutable @ 0x1406FC5E0 (MiMapProcessExecutable.c)
 *     MiMapNewSession @ 0x140786F8C (MiMapNewSession.c)
 *     MxMapVa @ 0x140A43F9C (MxMapVa.c)
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
