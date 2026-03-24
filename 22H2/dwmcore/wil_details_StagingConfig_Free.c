/*
 * XREFs of wil_details_StagingConfig_Free @ 0x1800E9B90
 * Callers:
 *     wil_StagingConfig_QueryFeatureState @ 0x1800E93C0 (wil_StagingConfig_QueryFeatureState.c)
 *     wil_StagingConfig_RecordFeatureUsage @ 0x1800E9494 (wil_StagingConfig_RecordFeatureUsage.c)
 * Callees:
 *     <none>
 */

void __fastcall wil_details_StagingConfig_Free(__int64 a1)
{
  void *v2; // rbx
  HANDLE ProcessHeap; // rax

  if ( *(_DWORD *)(a1 + 80) )
  {
    v2 = *(void **)(a1 + 56);
    ProcessHeap = GetProcessHeap();
    HeapFree(ProcessHeap, 0, v2);
    *(_QWORD *)(a1 + 56) = 0LL;
    *(_QWORD *)(a1 + 24) = 0LL;
  }
}
