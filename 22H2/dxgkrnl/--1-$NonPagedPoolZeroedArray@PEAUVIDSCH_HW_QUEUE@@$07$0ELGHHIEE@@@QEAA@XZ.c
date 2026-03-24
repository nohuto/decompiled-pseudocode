/*
 * XREFs of ??1?$NonPagedPoolZeroedArray@PEAUVIDSCH_HW_QUEUE@@$07$0ELGHHIEE@@@QEAA@XZ @ 0x1C0049700
 * Callers:
 *     ?SignalSynchronizationObjectInternal@@YAJIPEBIU_D3DDDICB_SIGNALFLAGS@@K0PEB_K_KPEBQEAXPEAVDXGPROCESS@@_N6@Z @ 0x1C0105B50 (-SignalSynchronizationObjectInternal@@YAJIPEBIU_D3DDDICB_SIGNALFLAGS@@K0PEB_K_KPEBQEAXPEAVDXGPRO.c)
 * Callees:
 *     <none>
 */

void __fastcall NonPagedPoolZeroedArray<VIDSCH_HW_QUEUE *,8,1265072196>::~NonPagedPoolZeroedArray<VIDSCH_HW_QUEUE *,8,1265072196>(
        __int64 a1)
{
  void *v2; // rcx

  v2 = *(void **)a1;
  if ( v2 != (void *)(a1 + 8) && v2 )
    ExFreePoolWithTag(v2, 0);
  *(_QWORD *)a1 = 0LL;
  *(_DWORD *)(a1 + 72) = 0;
}
