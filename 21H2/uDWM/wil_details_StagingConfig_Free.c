/*
 * XREFs of wil_details_StagingConfig_Free @ 0x1800558C8
 * Callers:
 *     wil_StagingConfig_QueryFeatureState @ 0x180055120 (wil_StagingConfig_QueryFeatureState.c)
 *     wil_StagingConfig_RecordFeatureUsage @ 0x1800551D4 (wil_StagingConfig_RecordFeatureUsage.c)
 * Callees:
 *     <none>
 */

void __fastcall wil_details_StagingConfig_Free(__int64 a1)
{
  HANDLE ProcessHeap; // rax

  if ( *(_DWORD *)(a1 + 80) )
  {
    ProcessHeap = GetProcessHeap();
    HeapFree(ProcessHeap, 0, *(LPVOID *)(a1 + 56));
    *(_QWORD *)(a1 + 56) = 0LL;
    *(_QWORD *)(a1 + 24) = 0LL;
  }
}
