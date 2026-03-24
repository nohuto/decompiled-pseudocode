/*
 * XREFs of DxgkFreeContiguousMemoryCB @ 0x1C0042E00
 * Callers:
 *     <none>
 * Callees:
 *     DpiRemoveMemoryTracker @ 0x1C0057AD4 (DpiRemoveMemoryTracker.c)
 */

__int64 __fastcall DxgkFreeContiguousMemoryCB(__int64 a1, PVOID **a2)
{
  PVOID *v2; // rbx
  __int64 v4; // rax

  v2 = *a2;
  if ( *((_DWORD *)*a2 + 4) )
  {
    v4 = WdLogNewEntry5_WdAssertion(a1, a2);
    *(_QWORD *)(v4 + 24) = 937LL;
    WdLogEvent5_WdAssertion(v4);
  }
  DpiRemoveMemoryTracker(a1);
  MmFreeContiguousMemory(v2[3]);
  ExFreePoolWithTag(v2, 0);
  return 0LL;
}
