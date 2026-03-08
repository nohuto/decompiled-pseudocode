/*
 * XREFs of ??0?$DXGPOINTERARRAYORDEREDACQUIRE@VDXGSYNCOBJECT@@$1?AcquireSyncObjectMutex@@YAXPEAV1@@Z$1?ReleaseSyncObjectMutex@@YAX0@Z$01@@QEAA@PEAPEAVDXGSYNCOBJECT@@IEE@Z @ 0x1C0026190
 * Callers:
 *     ?SignalSynchronizationObjectInternal@@YAJIPEBIU_D3DDDICB_SIGNALFLAGS@@K0PEB_K_KPEBQEAXPEAVDXGPROCESS@@USIGNAL_SYNC_OBJ_FLAGS@@@Z @ 0x1C01944A0 (-SignalSynchronizationObjectInternal@@YAJIPEBIU_D3DDDICB_SIGNALFLAGS@@K0PEB_K_KPEBQEAXPEAVDXGPRO.c)
 *     ?SubmitSignalSyncObjectsToHwQueue@@YAJIPEBIU_D3DDDICB_SIGNALFLAGS@@K0PEB_KPEAVDXGPROCESS@@_N4@Z @ 0x1C03166DC (-SubmitSignalSyncObjectsToHwQueue@@YAJIPEBIU_D3DDDICB_SIGNALFLAGS@@K0PEB_KPEAVDXGPROCESS@@_N4@Z.c)
 *     ?SignalSynchronizationObjectFromCpu@@YAJPEAU_D3DKMT_SIGNALSYNCHRONIZATIONOBJECTFROMCPU@@PEAVDXGPROCESS@@PEAVDXGDEVICE@@@Z @ 0x1C034CCAC (-SignalSynchronizationObjectFromCpu@@YAJPEAU_D3DKMT_SIGNALSYNCHRONIZATIONOBJECTFROMCPU@@PEAVDXGP.c)
 * Callees:
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C00078B0 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     memmove @ 0x1C0027340 (memmove.c)
 *     ?AllocateElements@?$PagedPoolZeroedArray@PEAVDXGSYNCOBJECT@@$01@@QEAAPEAPEAVDXGSYNCOBJECT@@I@Z @ 0x1C022222C (-AllocateElements@-$PagedPoolZeroedArray@PEAVDXGSYNCOBJECT@@$01@@QEAAPEAPEAVDXGSYNCOBJECT@@I@Z.c)
 */

__int64 __fastcall DXGPOINTERARRAYORDEREDACQUIRE<DXGSYNCOBJECT,&void AcquireSyncObjectMutex(DXGSYNCOBJECT *),&void ReleaseSyncObjectMutex(DXGSYNCOBJECT *),2>::DXGPOINTERARRAYORDEREDACQUIRE<DXGSYNCOBJECT,&void AcquireSyncObjectMutex(DXGSYNCOBJECT *),&void ReleaseSyncObjectMutex(DXGSYNCOBJECT *),2>(
        __int64 a1,
        const void *a2,
        unsigned int a3)
{
  void *v5; // rcx
  unsigned __int64 i; // rdi

  *(_QWORD *)a1 = 0LL;
  *(_DWORD *)(a1 + 24) = 0;
  PagedPoolZeroedArray<DXGSYNCOBJECT *,2>::AllocateElements(a1, a3);
  v5 = *(void **)a1;
  *(_WORD *)(a1 + 32) = 1;
  if ( v5 )
  {
    memmove(v5, a2, 8LL * *(unsigned int *)(a1 + 24));
    qsort(*(void **)a1, *(unsigned int *)(a1 + 24), 8uLL, DxgkComparePointers);
    for ( i = 0LL;
          i < *(unsigned int *)(a1 + 24);
          DXGFASTMUTEX::Acquire((DXGFASTMUTEX *)(*(_QWORD *)(*(_QWORD *)a1 + 8 * i++) + 32LL)) )
    {
      ;
    }
    *(_WORD *)(a1 + 32) = 256;
  }
  return a1;
}
