/*
 * XREFs of StageQueue_ForwardScanGetNextStage @ 0x1C0012F44
 * Callers:
 *     Isoch_ProcessTransferEventWithED1 @ 0x1C0001EC0 (Isoch_ProcessTransferEventWithED1.c)
 *     Isoch_Stage_Find @ 0x1C0002870 (Isoch_Stage_Find.c)
 *     Bulk_FindStage @ 0x1C000E248 (Bulk_FindStage.c)
 *     Bulk_CompleteTransfers @ 0x1C000E638 (Bulk_CompleteTransfers.c)
 *     Bulk_ValidateStagePointer @ 0x1C0012E80 (Bulk_ValidateStagePointer.c)
 *     Isoch_CompleteStaleTransfers @ 0x1C0043A94 (Isoch_CompleteStaleTransfers.c)
 *     Isoch_CompleteTransfers @ 0x1C0043D28 (Isoch_CompleteTransfers.c)
 *     Isoch_FindTrbMatch @ 0x1C0044230 (Isoch_FindTrbMatch.c)
 *     Isoch_Transfer_CompleteStaleStages @ 0x1C00456D8 (Isoch_Transfer_CompleteStaleStages.c)
 *     Bulk_IsTransferEventLikelyDuplicate_Internal @ 0x1C0046C58 (Bulk_IsTransferEventLikelyDuplicate_Internal.c)
 * Callees:
 *     <none>
 */

unsigned __int8 *__fastcall StageQueue_ForwardScanGetNextStage(unsigned __int8 *a1)
{
  unsigned __int8 *v2; // r9
  unsigned __int8 v3; // cl
  int v4; // edx
  __int64 v5; // rax

  v2 = 0LL;
  v3 = a1[6];
  if ( v3 )
  {
    v4 = a1[5];
    v5 = v4 * (unsigned int)*a1;
    a1[6] = v3 - 1;
    v2 = &a1[v5 + 16];
    a1[5] = (v4 + 1) % (unsigned int)a1[1];
  }
  return v2;
}
