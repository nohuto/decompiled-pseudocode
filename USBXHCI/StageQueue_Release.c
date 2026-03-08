/*
 * XREFs of StageQueue_Release @ 0x1C0011840
 * Callers:
 *     Isoch_Stage_MapIntoRing @ 0x1C0001050 (Isoch_Stage_MapIntoRing.c)
 *     Isoch_ProcessTransferEventWithED1 @ 0x1C0001EC0 (Isoch_ProcessTransferEventWithED1.c)
 *     Isoch_MapStage @ 0x1C0004810 (Isoch_MapStage.c)
 *     Isoch_PrepareStage @ 0x1C0004AD0 (Isoch_PrepareStage.c)
 *     Bulk_CompleteTransfers @ 0x1C000E608 (Bulk_CompleteTransfers.c)
 *     Bulk_ProcessTransferEventWithED1 @ 0x1C0011324 (Bulk_ProcessTransferEventWithED1.c)
 *     Bulk_MapStage @ 0x1C00122C0 (Bulk_MapStage.c)
 *     Bulk_PrepareStage @ 0x1C001239C (Bulk_PrepareStage.c)
 *     Isoch_CompleteStaleTransfers @ 0x1C0043B94 (Isoch_CompleteStaleTransfers.c)
 *     Isoch_CompleteTransfers @ 0x1C0043E28 (Isoch_CompleteTransfers.c)
 *     Bulk_ProcessTransferEventWithHaltedCompletion @ 0x1C0046FFC (Bulk_ProcessTransferEventWithHaltedCompletion.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall StageQueue_Release(unsigned __int8 *a1, unsigned __int8 *a2)
{
  int v2; // r10d
  unsigned int v4; // ecx
  __int64 result; // rax

  v2 = a1[4];
  --a1[2];
  v4 = a1[1];
  if ( a2 == &a1[v2 * *a1 + 16] )
  {
    result = (v2 + 1) / v4;
    a1[4] = (v2 + 1) % v4;
  }
  else
  {
    result = (unsigned int)((int)(v4 + a1[3] - 1) / (int)v4);
    a1[3] = (int)(v4 + a1[3] - 1) % (int)v4;
  }
  return result;
}
