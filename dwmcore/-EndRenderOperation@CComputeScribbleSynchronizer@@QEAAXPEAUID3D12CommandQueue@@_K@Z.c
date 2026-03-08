/*
 * XREFs of ?EndRenderOperation@CComputeScribbleSynchronizer@@QEAAXPEAUID3D12CommandQueue@@_K@Z @ 0x180206F20
 * Callers:
 *     ?DispatchScribbles@CComputeScribbleFramebuffer@@QEAAJPEAUID3D12CommandQueue@@PEAVCComputeScribbleStopwatch@@_KPEAUIDCompositionDirectInkSuperWetRenderer@@PEAUIUnknown@@PEAUComputeScribbleLatencyData@@@Z @ 0x1802019CC (-DispatchScribbles@CComputeScribbleFramebuffer@@QEAAJPEAUID3D12CommandQueue@@PEAVCComputeScribbl.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1801B44D0 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     McTemplateU0qx_EventWriteTransfer @ 0x1801E4EBC (McTemplateU0qx_EventWriteTransfer.c)
 */

void __fastcall CComputeScribbleSynchronizer::EndRenderOperation(
        CComputeScribbleSynchronizer *this,
        struct ID3D12CommandQueue *a2,
        __int64 a3)
{
  int v6; // eax
  int v7; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x100000) != 0 )
    McTemplateU0qx_EventWriteTransfer(
      (__int64)this,
      &EVTDESC_COMPUTESCRIBBLE_FENCESIGNAL,
      *((unsigned int *)this + 12),
      a3);
  v6 = ((__int64 (__fastcall *)(struct ID3D12CommandQueue *, _QWORD, __int64))a2->lpVtbl->Signal)(
         a2,
         *(_QWORD *)(*((_QWORD *)this + 2) + 24LL),
         a3);
  if ( v6 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      66LL,
      (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\rendering\\global\\computescribblesynchronizer.cpp",
      (const char *)(unsigned int)v6,
      v7);
}
