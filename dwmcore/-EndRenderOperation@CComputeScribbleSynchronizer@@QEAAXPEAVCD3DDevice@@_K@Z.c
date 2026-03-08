/*
 * XREFs of ?EndRenderOperation@CComputeScribbleSynchronizer@@QEAAXPEAVCD3DDevice@@_K@Z @ 0x180206FB0
 * Callers:
 *     ?AddComputeScribbleInvalidRects@CLegacySwapChain@@UEAAJAEBVCMILMatrix@@AEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@PEAVCDirtyRegion@@@Z @ 0x1800D6F70 (-AddComputeScribbleInvalidRects@CLegacySwapChain@@UEAAJAEBVCMILMatrix@@AEBV-$TMilRect@IUMilRectU.c)
 *     ?PostRender@CComputeScribbleRenderer@@QEAAXXZ @ 0x18012D81E (-PostRender@CComputeScribbleRenderer@@QEAAXXZ.c)
 *     wil::details::lambda_call__lambda_d9ff5d1dab05c47edfa257128eb5c2a0___::_lambda_call__lambda_d9ff5d1dab05c47edfa257128eb5c2a0___ @ 0x18029711C (wil--details--lambda_call__lambda_d9ff5d1dab05c47edfa257128eb5c2a0___--_lambda_call__lambda_d9ff.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1801B44D0 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     McTemplateU0qx_EventWriteTransfer @ 0x1801E4EBC (McTemplateU0qx_EventWriteTransfer.c)
 */

void __fastcall CComputeScribbleSynchronizer::EndRenderOperation(
        CComputeScribbleSynchronizer *this,
        struct CD3DDevice *a2,
        __int64 a3)
{
  __int64 v6; // rdx
  int v7; // eax
  int v8; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x100000) != 0 )
    McTemplateU0qx_EventWriteTransfer(
      (__int64)this,
      &EVTDESC_COMPUTESCRIBBLE_FENCESIGNAL,
      *((unsigned int *)this + 12),
      a3);
  v6 = *(_QWORD *)(*((_QWORD *)this + 1) + 16LL);
  *((_BYTE *)a2 + 1507) = 0;
  v7 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64))(**((_QWORD **)a2 + 28) + 152LL))(
         *((_QWORD *)a2 + 28),
         v6,
         a3);
  if ( v7 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      60LL,
      (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\rendering\\global\\computescribblesynchronizer.cpp",
      (const char *)(unsigned int)v7,
      v8);
}
