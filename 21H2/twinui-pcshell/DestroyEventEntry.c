/*
 * XREFs of DestroyEventEntry @ 0x1801AE0C8
 * Callers:
 *     FlushEventEntryList @ 0x1801AE25C (FlushEventEntryList.c)
 *     InsertEventEntryInLookUpTable @ 0x1801AE3E0 (InsertEventEntryInLookUpTable.c)
 * Callees:
 *     <none>
 */

void __fastcall DestroyEventEntry(__int64 a1)
{
  HANDLE ProcessHeap; // rax

  if ( a1 )
  {
    ProcessHeap = GetProcessHeap();
    HeapFree(ProcessHeap, 0, *(LPVOID *)(a1 + 16));
  }
}
