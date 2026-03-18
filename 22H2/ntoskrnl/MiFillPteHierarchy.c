/*
 * XREFs of MiFillPteHierarchy @ 0x14028ADD0
 * Callers:
 *     MiClearNonPagedPtes @ 0x140212478 (MiClearNonPagedPtes.c)
 *     MiSynchronizeSystemVa @ 0x140261890 (MiSynchronizeSystemVa.c)
 *     MiDeletePagablePteRange @ 0x14027A040 (MiDeletePagablePteRange.c)
 *     MiLockPoolCommitPageTable @ 0x14028601C (MiLockPoolCommitPageTable.c)
 *     MiCaptureDeleteHierarchy @ 0x14028AB80 (MiCaptureDeleteHierarchy.c)
 *     MiGetPhysicalAddress @ 0x14028BE00 (MiGetPhysicalAddress.c)
 *     MiPfCompleteInPageSupport @ 0x1402A39CC (MiPfCompleteInPageSupport.c)
 *     MiInPagePageTable @ 0x1402E4D70 (MiInPagePageTable.c)
 *     MiFindActualFaultingPte @ 0x1402EF4C0 (MiFindActualFaultingPte.c)
 *     MiInitializePageFaultPacket @ 0x1402EF73C (MiInitializePageFaultPacket.c)
 *     MiBitmapRangeZeroEx @ 0x1402FBDB0 (MiBitmapRangeZeroEx.c)
 *     MiVaToPfnEx @ 0x140387FD0 (MiVaToPfnEx.c)
 *     MiSmallVaStillMapsFrame @ 0x1403A88A0 (MiSmallVaStillMapsFrame.c)
 *     MiLockStealUserVm @ 0x1403BD8B8 (MiLockStealUserVm.c)
 *     MmFreeContiguousMemory @ 0x1403C2FA0 (MmFreeContiguousMemory.c)
 *     MiDbgCopyMemoryTarget @ 0x140643AA0 (MiDbgCopyMemoryTarget.c)
 *     MiUpdateForkMaps @ 0x1406654A0 (MiUpdateForkMaps.c)
 *     MiMapProcessExecutable @ 0x1407A35A0 (MiMapProcessExecutable.c)
 *     MxMapVa @ 0x140B468AC (MxMapVa.c)
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
