/*
 * XREFs of ?DeallocateElements@?$PagedPoolZeroedArray@PEAVDXGHWQUEUE@@$01@@QEAAXXZ @ 0x1C01EA5B0
 * Callers:
 *     ??1SESSION_ADAPTER@@QEAA@XZ @ 0x1C01DFAB4 (--1SESSION_ADAPTER@@QEAA@XZ.c)
 *     ?DestroyCddDeviceAndContext@SESSION_ADAPTER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C01DFBA8 (-DestroyCddDeviceAndContext@SESSION_ADAPTER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?CreateCddDevice@SESSION_ADAPTER@@AEAAJPEAVDXGADAPTER@@PEAPEAVDXGDEVICE@@PEAPEAVDXGCONTEXT@@PEAPEAVDXGHWQUEUE@@@Z @ 0x1C01E03B4 (-CreateCddDevice@SESSION_ADAPTER@@AEAAJPEAVDXGADAPTER@@PEAPEAVDXGDEVICE@@PEAPEAVDXGCONTEXT@@PEAP.c)
 *     ?SubmitSignalSyncObjectsToHwQueue@@YAJIPEBIU_D3DDDICB_SIGNALFLAGS@@K0PEB_KPEAVDXGPROCESS@@_N4@Z @ 0x1C031B6B8 (-SubmitSignalSyncObjectsToHwQueue@@YAJIPEBIU_D3DDDICB_SIGNALFLAGS@@K0PEB_KPEAVDXGPROCESS@@_N4@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall PagedPoolZeroedArray<DXGHWQUEUE *,2>::DeallocateElements(__int64 a1)
{
  void *v2; // rcx

  v2 = *(void **)a1;
  if ( v2 != (void *)(a1 + 8) && v2 )
    ExFreePoolWithTag(v2, 0);
  *(_QWORD *)a1 = 0LL;
  *(_DWORD *)(a1 + 24) = 0;
}
