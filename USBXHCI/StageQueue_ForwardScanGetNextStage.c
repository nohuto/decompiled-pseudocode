/*
 * XREFs of StageQueue_ForwardScanGetNextStage @ 0x1C0012EEC
 * Callers:
 *     Isoch_ProcessTransferEventWithED1 @ 0x1C0001EC0 (Isoch_ProcessTransferEventWithED1.c)
 *     Isoch_Stage_Find @ 0x1C0002870 (Isoch_Stage_Find.c)
 *     Bulk_FindStage @ 0x1C000E218 (Bulk_FindStage.c)
 *     Bulk_CompleteTransfers @ 0x1C000E608 (Bulk_CompleteTransfers.c)
 *     Bulk_ValidateStagePointer @ 0x1C0012E28 (Bulk_ValidateStagePointer.c)
 *     Isoch_CompleteStaleTransfers @ 0x1C0043B94 (Isoch_CompleteStaleTransfers.c)
 *     Isoch_CompleteTransfers @ 0x1C0043E28 (Isoch_CompleteTransfers.c)
 *     Isoch_FindTrbMatch @ 0x1C0044330 (Isoch_FindTrbMatch.c)
 *     Isoch_Transfer_CompleteStaleStages @ 0x1C00457D8 (Isoch_Transfer_CompleteStaleStages.c)
 *     Bulk_IsTransferEventLikelyDuplicate_Internal @ 0x1C0046D58 (Bulk_IsTransferEventLikelyDuplicate_Internal.c)
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
