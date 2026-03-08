/*
 * XREFs of ?ScheduleScribble@CComputeScribbleRenderer@@QEAAJXZ @ 0x1801F8B3C
 * Callers:
 *     ?Render@CLegacyRenderTarget@@UEAAJPEAVCDrawingContext@@_NPEA_N@Z @ 0x18008B8BC (-Render@CLegacyRenderTarget@@UEAAJPEAVCDrawingContext@@_NPEA_N@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800FBBE4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x18010E3E0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 *     McTemplateU0xqqqqt_EventWriteTransfer @ 0x1801F8C90 (McTemplateU0xqqqqt_EventWriteTransfer.c)
 *     ?ScheduleScribbleFrame@CComputeScribbleScheduler@@QEAAJPEAVCComputeScribbleFramebuffer@@PEAVCComputeScribble@@_KI@Z @ 0x180200B14 (-ScheduleScribbleFrame@CComputeScribbleScheduler@@QEAAJPEAVCComputeScribbleFramebuffer@@PEAVCCom.c)
 */

__int64 __fastcall CComputeScribbleRenderer::ScheduleScribble(CComputeScribbleRenderer *this)
{
  __int64 v2; // r8
  unsigned int v3; // ebp
  struct CComputeScribbleFramebuffer *v4; // rsi
  int v5; // eax
  unsigned int v6; // edi
  unsigned int v8; // edi
  unsigned int v9; // eax
  struct CComputeScribble *v10; // r8
  _OWORD v11[2]; // [rsp+40h] [rbp-38h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]

  if ( *((_BYTE *)this + 48) )
  {
    v2 = *((_QWORD *)this + 2);
    v3 = *(_DWORD *)(v2 + 272);
    v4 = *(struct CComputeScribbleFramebuffer **)(*(_QWORD *)(*(_QWORD *)(v2 + 248) + 8LL * (v3 % *(_DWORD *)(v2 + 316)))
                                                + 96LL);
    if ( v4 )
    {
      memset(v11, 0, sizeof(v11));
      v5 = (*(__int64 (__fastcall **)(__int64, _OWORD *))(*(_QWORD *)v2 + 32LL))(v2, v11);
      v6 = v5;
      if ( v5 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0xF4,
          (int)"onecoreuap\\windows\\dwm\\dwmcore\\rendering\\global\\computescribblerenderer.cpp",
          (const char *)(unsigned int)v5);
        return v6;
      }
      v8 = DWORD2(v11[0]) + 2;
      v9 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 2) + 8LL))(*((_QWORD *)this + 2));
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x100000) != 0 )
        McTemplateU0xqqqqt_EventWriteTransfer(
          DWORD2(v11[0]),
          (unsigned int)&EVTDESC_COMPUTESCRIBBLE_PRESCHEDULE,
          *((_QWORD *)this + 3),
          v3,
          v9,
          v11[0],
          SBYTE8(v11[0]),
          v9 > LODWORD(v11[0]));
      v10 = (struct CComputeScribble *)*((_QWORD *)this + 5);
      if ( v10 )
        CComputeScribbleScheduler::ScheduleScribbleFrame(
          *((CComputeScribbleScheduler **)this + 4),
          v4,
          v10,
          *((_QWORD *)this + 3),
          v8);
    }
  }
  return 0LL;
}
