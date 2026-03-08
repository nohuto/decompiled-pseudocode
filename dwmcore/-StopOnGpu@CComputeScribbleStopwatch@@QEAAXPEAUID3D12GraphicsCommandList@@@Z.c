/*
 * XREFs of ?StopOnGpu@CComputeScribbleStopwatch@@QEAAXPEAUID3D12GraphicsCommandList@@@Z @ 0x180206C50
 * Callers:
 *     ?BuildCommandList@CComputeScribbleFramebuffer@@AEAAJPEAVCComputeScribbleStopwatch@@PEAUIDCompositionDirectInkSuperWetRenderer@@PEAUIUnknown@@PEAUComputeScribbleLatencyData@@@Z @ 0x1802016E8 (-BuildCommandList@CComputeScribbleFramebuffer@@AEAAJPEAVCComputeScribbleStopwatch@@PEAUIDComposi.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall CComputeScribbleStopwatch::StopOnGpu(
        CComputeScribbleStopwatch *this,
        struct ID3D12GraphicsCommandList *a2)
{
  ((void (__fastcall *)(struct ID3D12GraphicsCommandList *, _QWORD, __int64))a2->lpVtbl->EndQuery)(
    a2,
    *((_QWORD *)this + 4),
    2LL);
  ((void (__fastcall *)(struct ID3D12GraphicsCommandList *, _QWORD, __int64))a2->lpVtbl->ResolveQueryData)(
    a2,
    *((_QWORD *)this + 4),
    2LL);
  *((_BYTE *)this + 64) = 0;
}
