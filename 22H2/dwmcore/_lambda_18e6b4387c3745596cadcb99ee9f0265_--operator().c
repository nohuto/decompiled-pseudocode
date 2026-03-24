/*
 * XREFs of _lambda_18e6b4387c3745596cadcb99ee9f0265_::operator() @ 0x1800EF1E4
 * Callers:
 *     ?DispatchScribbles@CComputeScribbleFramebuffer@@QEAAJPEAUID3D12CommandQueue@@PEAVCComputeScribbleStopwatch@@_KPEAUIUnknown@@AEAV?$vector@UComputeScribbleLatencyData@@V?$allocator@UComputeScribbleLatencyData@@@std@@@std@@@Z @ 0x1800EF4C0 (-DispatchScribbles@CComputeScribbleFramebuffer@@QEAAJPEAUID3D12CommandQueue@@PEAVCComputeScribbl.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800F4030 (_guard_dispatch_icall_nop.c)
 *     McTemplateU0xq_EventWriteTransfer @ 0x180152914 (McTemplateU0xq_EventWriteTransfer.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1801643CC (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall lambda_18e6b4387c3745596cadcb99ee9f0265_::operator()(__int64 a1)
{
  __int64 result; // rax
  __int64 v3; // rcx
  int v4; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  result = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(**(_QWORD **)(a1 + 8) + 112LL))(
             *(_QWORD *)(a1 + 8),
             *(_QWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 80LL) + 24LL),
             *(_QWORD *)(a1 + 16));
  if ( (int)result < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x12B,
      (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\rendering\\computescribbleframebuffer.cpp",
      (const char *)(unsigned int)result,
      v4);
    JUMPOUT(0x1800EF254LL);
  }
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x40000) != 0 )
    return McTemplateU0xq_EventWriteTransfer(
             v3,
             &EVTDESC_COMPUTESCRIBBLE_FRAMEDISPATCH_Stop,
             *(_QWORD *)(a1 + 16),
             *(unsigned int *)(*(_QWORD *)a1 + 236LL));
  return result;
}
