/*
 * XREFs of ??1?$PagedPoolZeroedArray@I$03@@QEAA@XZ @ 0x1C03165E0
 * Callers:
 *     DxgkSubmitPresentToHwQueue @ 0x1C031E8D0 (DxgkSubmitPresentToHwQueue.c)
 * Callees:
 *     <none>
 */

void __fastcall PagedPoolZeroedArray<unsigned int,4>::~PagedPoolZeroedArray<unsigned int,4>(__int64 a1)
{
  void *v2; // rcx

  v2 = *(void **)a1;
  if ( v2 != (void *)(a1 + 8) && v2 )
    ExFreePoolWithTag(v2, 0);
  *(_QWORD *)a1 = 0LL;
  *(_DWORD *)(a1 + 24) = 0;
}
