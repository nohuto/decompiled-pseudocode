/*
 * XREFs of MiStoreFreeWriteSupport @ 0x1402688B8
 * Callers:
 *     SmIoRequestComplete @ 0x140268604 (SmIoRequestComplete.c)
 *     MiStoreWriteModifiedPages @ 0x14032F960 (MiStoreWriteModifiedPages.c)
 * Callees:
 *     RtlpInterlockedPushEntrySList @ 0x140406FF0 (RtlpInterlockedPushEntrySList.c)
 *     ExFreePoolWithTag @ 0x1409B4140 (ExFreePoolWithTag.c)
 */

void __fastcall MiStoreFreeWriteSupport(PSLIST_ENTRY ListEntry, _SLIST_HEADER *a2)
{
  if ( LOWORD(a2[77].Alignment) >= 0x100u )
    ExFreePoolWithTag(ListEntry, 0);
  else
    RtlpInterlockedPushEntrySList(a2 + 77, ListEntry);
}
