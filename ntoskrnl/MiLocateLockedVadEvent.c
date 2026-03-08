/*
 * XREFs of MiLocateLockedVadEvent @ 0x14020DC68
 * Callers:
 *     MiLocateVadEvent @ 0x14020DC50 (MiLocateVadEvent.c)
 *     MiCheckUserVirtualAddress @ 0x1402258B0 (MiCheckUserVirtualAddress.c)
 *     MiCaptureWriteWatchDirtyBit @ 0x140228730 (MiCaptureWriteWatchDirtyBit.c)
 *     MiZeroFault @ 0x140266000 (MiZeroFault.c)
 *     NtGetWriteWatch @ 0x1402CA150 (NtGetWriteWatch.c)
 *     MiFreeVadRange @ 0x1402D5634 (MiFreeVadRange.c)
 *     MiQueryAddressState @ 0x14031B4F0 (MiQueryAddressState.c)
 *     MiCommitExistingVad @ 0x140320D70 (MiCommitExistingVad.c)
 *     MiMoveDirtyBitsToPfns @ 0x14032F870 (MiMoveDirtyBitsToPfns.c)
 *     MiInsertVad @ 0x1403312E0 (MiInsertVad.c)
 *     MiComputeVadCharges @ 0x14034CBC4 (MiComputeVadCharges.c)
 *     MiMarkMdlComplete @ 0x140630368 (MiMarkMdlComplete.c)
 *     MiGetAweVadPartition @ 0x1406483B4 (MiGetAweVadPartition.c)
 *     MiCloneVads @ 0x140660C98 (MiCloneVads.c)
 *     MiCopyLargeVad @ 0x140A466EC (MiCopyLargeVad.c)
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
