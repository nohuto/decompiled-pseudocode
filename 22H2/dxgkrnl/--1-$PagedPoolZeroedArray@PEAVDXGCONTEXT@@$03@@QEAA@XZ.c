/*
 * XREFs of ??1?$PagedPoolZeroedArray@PEAVDXGCONTEXT@@$03@@QEAA@XZ @ 0x1C02BAE24
 * Callers:
 *     DxgkSubmitPresentToHwQueue @ 0x1C031E8D0 (DxgkSubmitPresentToHwQueue.c)
 *     ?SignalSynchronizationObjectFromCpu@@YAJPEAU_D3DKMT_SIGNALSYNCHRONIZATIONOBJECTFROMCPU@@PEAVDXGPROCESS@@PEAVDXGDEVICE@@@Z @ 0x1C0351710 (-SignalSynchronizationObjectFromCpu@@YAJPEAU_D3DKMT_SIGNALSYNCHRONIZATIONOBJECTFROMCPU@@PEAVDXGP.c)
 * Callees:
 *     <none>
 */

void __fastcall PagedPoolZeroedArray<DXGCONTEXT *,4>::~PagedPoolZeroedArray<DXGCONTEXT *,4>(__int64 a1)
{
  void *v2; // rcx

  v2 = *(void **)a1;
  if ( v2 != (void *)(a1 + 8) && v2 )
    ExFreePoolWithTag(v2, 0);
  *(_QWORD *)a1 = 0LL;
  *(_DWORD *)(a1 + 40) = 0;
}
