/*
 * XREFs of ?AllocateElements@?$PagedPoolZeroedArray@I$03@@QEAAPEAII@Z @ 0x1C0311BD4
 * Callers:
 *     DxgkSubmitWaitForSyncObjectsToHwQueueInternal @ 0x1C02231E8 (DxgkSubmitWaitForSyncObjectsToHwQueueInternal.c)
 *     ?DxgkSubmitSignalSyncObjectsToHwQueueInternal@@YAJPEBU_D3DKMT_SUBMITSIGNALSYNCOBJECTSTOHWQUEUE@@_N@Z @ 0x1C0313FE0 (-DxgkSubmitSignalSyncObjectsToHwQueueInternal@@YAJPEBU_D3DKMT_SUBMITSIGNALSYNCOBJECTSTOHWQUEUE@@.c)
 *     ?SubmitWaitForSyncObjectsFromGpu@@YAJIPEBIPEB_KIPEAVDXGPROCESS@@_N3@Z @ 0x1C0317F44 (-SubmitWaitForSyncObjectsFromGpu@@YAJIPEBIPEB_KIPEAVDXGPROCESS@@_N3@Z.c)
 *     DxgkSubmitPresentToHwQueue @ 0x1C03198F0 (DxgkSubmitPresentToHwQueue.c)
 *     NtDxgkOutputDuplPresentToHwQueue @ 0x1C031BA80 (NtDxgkOutputDuplPresentToHwQueue.c)
 *     DxgkSignalSynchronizationObjectFromCpu @ 0x1C034EF90 (DxgkSignalSynchronizationObjectFromCpu.c)
 * Callees:
 *     memset @ 0x1C0027640 (memset.c)
 */

__int64 __fastcall PagedPoolZeroedArray<unsigned int,4>::AllocateElements(__int64 *a1, unsigned int a2)
{
  __int64 result; // rax
  void *v5; // rcx

  if ( a2 <= 4 )
  {
    v5 = a1 + 1;
    *a1 = (__int64)v5;
    if ( a2 )
      memset(v5, 0, 4LL * a2);
  }
  else
  {
    if ( 0xFFFFFFFFFFFFFFFFuLL / a2 < 4 )
      return 0LL;
    *a1 = ExAllocatePool2(256LL, 4LL * a2, 1265072196LL);
  }
  result = *a1;
  *((_DWORD *)a1 + 6) = a2;
  return result;
}
