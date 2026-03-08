/*
 * XREFs of WheapPushPendingOfflineWrapper @ 0x140A06F98
 * Callers:
 *     WheapProcessOfflineList @ 0x1406120C0 (WheapProcessOfflineList.c)
 * Callees:
 *     ExInterlockedPushEntryList @ 0x14060A750 (ExInterlockedPushEntryList.c)
 */

PSINGLE_LIST_ENTRY __fastcall WheapPushPendingOfflineWrapper(PSINGLE_LIST_ENTRY ListEntry)
{
  PSINGLE_LIST_ENTRY result; // rax

  result = ExInterlockedPushEntryList((PSINGLE_LIST_ENTRY)&WheapOfflineChecker, ListEntry, &qword_140C2A4A8);
  _InterlockedIncrement(&dword_140C2A4B0);
  return result;
}
