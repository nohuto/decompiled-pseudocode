/*
 * XREFs of ??1?$NonPagedPoolZeroedArray@PEAU_VIDSCH_SYNC_OBJECT@@$01$0DIGBGJFG@@@QEAA@XZ @ 0x1C002D7A0
 * Callers:
 *     VidSchSignalSyncObjectsFromGpu @ 0x1C00040E0 (VidSchSignalSyncObjectsFromGpu.c)
 *     VidSchSubmitSignalToHwQueue @ 0x1C0044980 (VidSchSubmitSignalToHwQueue.c)
 *     VidSchEnqueueCpuEvent @ 0x1C0085F20 (VidSchEnqueueCpuEvent.c)
 *     ?WaitForFences@VIDMM_GLOBAL@@QEAAXPEAPEAU_VIDSCH_SYNC_OBJECT@@PEB_KI1@Z @ 0x1C008DA50 (-WaitForFences@VIDMM_GLOBAL@@QEAAXPEAPEAU_VIDSCH_SYNC_OBJECT@@PEB_KI1@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall NonPagedPoolZeroedArray<_VIDSCH_SYNC_OBJECT *,2,945908054>::~NonPagedPoolZeroedArray<_VIDSCH_SYNC_OBJECT *,2,945908054>(
        __int64 a1)
{
  void *v2; // rcx

  v2 = *(void **)a1;
  if ( v2 != (void *)(a1 + 8) && v2 )
    ExFreePoolWithTag(v2, 0);
  *(_QWORD *)a1 = 0LL;
  *(_DWORD *)(a1 + 24) = 0;
}
