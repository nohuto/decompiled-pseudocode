/*
 * XREFs of ?PreRender@CComputeScribbleRenderer@@QEAAJXZ @ 0x1801F894C
 * Callers:
 *     ?AddComputeScribbleInvalidRects@CLegacySwapChain@@UEAAJAEBVCMILMatrix@@AEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@PEAVCDirtyRegion@@@Z @ 0x1800D6F70 (-AddComputeScribbleInvalidRects@CLegacySwapChain@@UEAAJAEBVCMILMatrix@@AEBV-$TMilRect@IUMilRectU.c)
 * Callees:
 *     ?reset@?$com_ptr_t@VCBrushRenderingGraph@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1800E707C (-reset@-$com_ptr_t@VCBrushRenderingGraph@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800FBBE4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x18010E3E0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 *     McTemplateU0x_EventWriteTransfer @ 0x180129DEE (McTemplateU0x_EventWriteTransfer.c)
 *     ?SaveDirtyForPreRender@CComputeScribbleFramebuffer@@QEAAXXZ @ 0x18012D90C (-SaveDirtyForPreRender@CComputeScribbleFramebuffer@@QEAAXXZ.c)
 *     McTemplateU0xqqqqt_EventWriteTransfer @ 0x1801F8C90 (McTemplateU0xqqqqt_EventWriteTransfer.c)
 *     ?SetScannedOutBuffer@CComputeScribbleScheduler@@QEAAXII@Z @ 0x180200C50 (-SetScannedOutBuffer@CComputeScribbleScheduler@@QEAAXII@Z.c)
 *     ?AcquireForRender@CComputeScribbleFramebuffer@@QEAAX_K@Z @ 0x18020163C (-AcquireForRender@CComputeScribbleFramebuffer@@QEAAX_K@Z.c)
 */

__int64 __fastcall CComputeScribbleRenderer::PreRender(CComputeScribbleRenderer *this)
{
  __int64 v1; // r8
  char v3; // r12
  __int64 v4; // r9
  unsigned int v5; // r15d
  __int64 v6; // rcx
  CComputeScribbleFramebuffer *v7; // r14
  void *v8; // rdx
  unsigned int v9; // eax
  __int64 v10; // rcx
  unsigned int v11; // ebp
  int v12; // eax
  unsigned int v13; // esi
  unsigned int v15[4]; // [rsp+40h] [rbp-58h] BYREF
  __int128 v16; // [rsp+50h] [rbp-48h]
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+0h]

  v1 = *((_QWORD *)this + 2);
  v3 = *((_BYTE *)this + 48);
  v4 = *((_QWORD *)this + 3) + 1LL;
  *((_QWORD *)this + 3) = v4;
  v5 = *(_DWORD *)(v1 + 272);
  v6 = *(_QWORD *)(*(_QWORD *)(v1 + 248) + 8LL * (v5 % *(_DWORD *)(v1 + 316)));
  v7 = *(CComputeScribbleFramebuffer **)(v6 + 96);
  if ( v3 )
  {
    if ( !*((_BYTE *)this + 49) )
    {
      *((_BYTE *)this + 48) = 0;
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x100000) != 0 )
      {
        v8 = &EVTDESC_COMPUTESCRIBBLE_ACTIVE_Stop;
LABEL_8:
        McTemplateU0x_EventWriteTransfer(v6, (__int64)v8, v4);
      }
    }
  }
  else if ( *((_BYTE *)this + 49) )
  {
    *((_BYTE *)this + 48) = 1;
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x100000) != 0 )
    {
      v8 = &EVTDESC_COMPUTESCRIBBLE_ACTIVE_Start;
      goto LABEL_8;
    }
  }
  if ( *((_BYTE *)this + 48) )
  {
    wil::com_ptr_t<CBrushRenderingGraph,wil::err_returncode_policy>::reset((__int64 *)this + 5);
    v9 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 2) + 8LL))(*((_QWORD *)this + 2));
    v10 = *((_QWORD *)this + 2);
    *(_OWORD *)v15 = 0LL;
    v11 = v9;
    v16 = 0LL;
    v12 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v10 + 32LL))(v10, v15);
    v13 = v12;
    if ( v12 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x9C,
        (int)"onecoreuap\\windows\\dwm\\dwmcore\\rendering\\global\\computescribblerenderer.cpp",
        (const char *)(unsigned int)v12);
      return v13;
    }
    CComputeScribbleFramebuffer::AcquireForRender(v7, *((_QWORD *)this + 3));
    if ( !v3 )
      CComputeScribbleScheduler::SetScannedOutBuffer(
        *((CComputeScribbleScheduler **)this + 4),
        (*(_DWORD *)(*((_QWORD *)this + 2) + 316LL) - (v11 - v15[0]) % 3 + v5 - 1) % 3,
        v15[0]);
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x100000) != 0 )
      McTemplateU0xqqqqt_EventWriteTransfer(
        v15[0],
        (unsigned int)&EVTDESC_COMPUTESCRIBBLE_PRERENDER,
        *((_QWORD *)this + 3),
        v5,
        v11,
        v15[0],
        v15[2],
        v11 > v15[0]);
  }
  else
  {
    CComputeScribbleFramebuffer::SaveDirtyForPreRender((int **)v7);
  }
  return 0LL;
}
