/*
 * XREFs of MiLocateLockedVadEvent @ 0x14030B2F4
 * Callers:
 *     MiCaptureWriteWatchDirtyBit @ 0x1402170D0 (MiCaptureWriteWatchDirtyBit.c)
 *     MiZeroFault @ 0x140232300 (MiZeroFault.c)
 *     MiCheckUserVirtualAddress @ 0x14025AC90 (MiCheckUserVirtualAddress.c)
 *     MiQueryAddressState @ 0x140271AE0 (MiQueryAddressState.c)
 *     MiCommitExistingVad @ 0x140276910 (MiCommitExistingVad.c)
 *     MiMoveDirtyBitsToPfns @ 0x1402858F0 (MiMoveDirtyBitsToPfns.c)
 *     MiInsertVad @ 0x140287B70 (MiInsertVad.c)
 *     MiComputeVadCharges @ 0x140289918 (MiComputeVadCharges.c)
 *     NtGetWriteWatch @ 0x1402EA260 (NtGetWriteWatch.c)
 *     MiFreeVadRange @ 0x140309A70 (MiFreeVadRange.c)
 *     MiLocateVadEvent @ 0x14030B2DC (MiLocateVadEvent.c)
 *     MiMarkMdlComplete @ 0x1406327F8 (MiMarkMdlComplete.c)
 *     MiGetAweVadPartition @ 0x14064A9D0 (MiGetAweVadPartition.c)
 *     MiCloneVads @ 0x1406632E8 (MiCloneVads.c)
 *     MiCopyLargeVad @ 0x140A493BC (MiCopyLargeVad.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall MiLocateLockedVadEvent(__int64 a1, int a2)
{
  unsigned __int64 result; // rax

  for ( result = *(_QWORD *)(a1 + 56) & 0xFFFFFFFFFFFFFFF0uLL; result; result = *(_QWORD *)result )
  {
    if ( (a2 & *(_DWORD *)(result + 64)) != 0 )
      break;
  }
  return result;
}
