/*
 * XREFs of CmpFreeCallbackContext @ 0x14046B1AA
 * Callers:
 *     CmpCallCallBacksEx @ 0x1406E86A0 (CmpCallCallBacksEx.c)
 * Callees:
 *     RtlpInterlockedPushEntrySList @ 0x140428830 (RtlpInterlockedPushEntrySList.c)
 *     ExFreePoolWithTag @ 0x140AAF110 (ExFreePoolWithTag.c)
 */

void __fastcall CmpFreeCallbackContext(PSLIST_ENTRY ListEntry)
{
  unsigned int v1; // edx

  v1 = CmpCallBackCount * KeNumberProcessors_0;
  if ( (unsigned int)(CmpCallBackCount * KeNumberProcessors_0) > 0x40 )
    v1 = 64;
  if ( LOWORD(CmpCallbackContextSList.Alignment) >= v1 )
    ExFreePoolWithTag(ListEntry, 0);
  else
    RtlpInterlockedPushEntrySList(&CmpCallbackContextSList, ListEntry);
}
