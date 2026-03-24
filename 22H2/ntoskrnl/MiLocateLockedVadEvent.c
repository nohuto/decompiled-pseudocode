/*
 * XREFs of MiLocateLockedVadEvent @ 0x14027EA4C
 * Callers:
 *     MiCommitExistingVad @ 0x140218D50 (MiCommitExistingVad.c)
 *     MiCaptureWriteWatchDirtyBit @ 0x14025A9BC (MiCaptureWriteWatchDirtyBit.c)
 *     MiDeletePartialVad @ 0x14027DF5C (MiDeletePartialVad.c)
 *     MiLocateVadEvent @ 0x14027EA34 (MiLocateVadEvent.c)
 *     MiInsertVad @ 0x1402969B0 (MiInsertVad.c)
 *     MiVadCommitCrossPartition @ 0x1402988BC (MiVadCommitCrossPartition.c)
 *     MiFreeVadRange @ 0x140298C44 (MiFreeVadRange.c)
 *     NtGetWriteWatch @ 0x1402ACCE0 (NtGetWriteWatch.c)
 *     MiCheckUserVirtualAddress @ 0x1402AF090 (MiCheckUserVirtualAddress.c)
 *     MiQueryAddressState @ 0x1402AFDC0 (MiQueryAddressState.c)
 *     MiZeroFault @ 0x1402CF5F0 (MiZeroFault.c)
 *     MiMarkMdlComplete @ 0x140539B00 (MiMarkMdlComplete.c)
 *     MiGetAweVadPartition @ 0x14054C3C0 (MiGetAweVadPartition.c)
 *     MiCloneVads @ 0x140559268 (MiCloneVads.c)
 *     MiCopyLargeVad @ 0x1408D9D70 (MiCopyLargeVad.c)
 * Callees:
 *     <none>
 */

__int64 **__fastcall MiLocateLockedVadEvent(__int64 a1, int a2)
{
  __int64 **result; // rax

  for ( result = *(__int64 ***)(a1 + 56); result && (a2 & (_DWORD)result[8]) == 0; result = (__int64 **)*result )
    ;
  return result;
}
