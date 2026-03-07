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
