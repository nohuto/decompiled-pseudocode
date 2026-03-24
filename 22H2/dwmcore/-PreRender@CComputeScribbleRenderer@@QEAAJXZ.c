/*
 * XREFs of ?PreRender@CComputeScribbleRenderer@@QEAAJXZ @ 0x18019F900
 * Callers:
 *     ?PreRender@CLegacySwapChain@@UEAAJXZ @ 0x1800C4ACC (-PreRender@CLegacySwapChain@@UEAAJXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x1800E6B40 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800F4030 (_guard_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18014E3DC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     McTemplateU0x_EventWriteTransfer @ 0x180153F28 (McTemplateU0x_EventWriteTransfer.c)
 *     McTemplateU0xddddd_EventWriteTransfer @ 0x18017D34C (McTemplateU0xddddd_EventWriteTransfer.c)
 *     ?DeactivateIfIdle@CComputeScribbleRenderer@@AEAAXXZ @ 0x18019F684 (-DeactivateIfIdle@CComputeScribbleRenderer@@AEAAXXZ.c)
 *     ?AcquireForRender@CComputeScribbleFramebuffer@@QEAAJ_K@Z @ 0x1801A5D3C (-AcquireForRender@CComputeScribbleFramebuffer@@QEAAJ_K@Z.c)
 */

__int64 __fastcall CComputeScribbleRenderer::PreRender(CComputeScribbleRenderer *this)
{
  __int64 v2; // r8
  bool v3; // zf
  __int64 v4; // r8
  unsigned int v5; // r14d
  unsigned int v6; // ebp
  __int64 v7; // rsi
  __int64 v8; // rcx
  char v9; // al
  __int64 v10; // r8
  char v11; // r15
  __int64 v12; // rcx
  int v13; // edi
  __int64 v14; // rdx
  char v16; // al
  __int64 v17; // rcx
  _OWORD v18[2]; // [rsp+40h] [rbp-48h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+0h]

  v2 = *((_QWORD *)this + 4) + 1LL;
  v3 = *((_BYTE *)this + 52) == 0;
  *((_QWORD *)this + 4) = v2;
  if ( v3 )
  {
    if ( *((_BYTE *)this + 53) )
    {
      *((_DWORD *)this + 12) = 0;
      *((_BYTE *)this + 52) = 1;
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x40000) != 0 )
        McTemplateU0x_EventWriteTransfer((__int64)this, &EVTDESC_COMPUTESCRIBBLE_ACTIVE_Start, v2);
    }
  }
  else
  {
    CComputeScribbleRenderer::DeactivateIfIdle((CLegacySwapChain **)this);
  }
  v3 = *((_BYTE *)this + 52) == 0;
  *((_BYTE *)this + 53) = 0;
  if ( !v3 )
  {
    v4 = *((_QWORD *)this + 2);
    v5 = *(_DWORD *)(v4 + 128);
    v6 = *(_DWORD *)(v4 + 176);
    v7 = *(_QWORD *)(*(_QWORD *)(v4 + 104) + 8LL * (v5 % v6));
    v8 = v4 + 24 + *(int *)(*(_QWORD *)(v4 + 24) + 16LL);
    v9 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v8 + 8LL))(v8);
    v10 = *((_QWORD *)this + 2);
    memset(v18, 0, sizeof(v18));
    v11 = v9;
    v12 = *(int *)(*(_QWORD *)(v10 + 24) + 16LL) + v10 + 24;
    v13 = (*(__int64 (__fastcall **)(__int64, _OWORD *))(*(_QWORD *)v12 + 32LL))(v12, v18);
    if ( v13 < 0 )
    {
      v14 = 202LL;
LABEL_9:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v14,
        (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\rendering\\computescribblerenderer.cpp",
        (const char *)(unsigned int)v13);
      return (unsigned int)v13;
    }
    v13 = CComputeScribbleFramebuffer::AcquireForRender(
            *(CComputeScribbleFramebuffer **)(v7 + 96),
            *((_QWORD *)this + 4));
    if ( v13 < 0 )
    {
      v14 = 208LL;
      goto LABEL_9;
    }
    if ( (*(unsigned __int8 (__fastcall **)(_QWORD))(**((_QWORD **)g_pComposition + 63) + 136LL))(*((_QWORD *)g_pComposition
                                                                                                  + 63)) )
      v7 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 104LL)
                     + 8LL * ((v5 + v6 - 1) % v6 % *(_DWORD *)(*((_QWORD *)this + 2) + 176LL)));
    *((_QWORD *)this + 3) = v7;
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x40000) != 0 )
    {
      v16 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)g_pComposition + 63) + 136LL))(*((_QWORD *)g_pComposition
                                                                                             + 63));
      McTemplateU0xddddd_EventWriteTransfer(
        v17,
        &EVTDESC_COMPUTESCRIBBLE_PRERENDER,
        *((_QWORD *)this + 4),
        v5,
        v11,
        v18[0],
        SBYTE8(v18[0]),
        v16);
    }
  }
  return 0LL;
}
