/*
 * XREFs of ?Clear@CD2DContext@@UEAAXPEBVID2DContextOwner@@AEBU_D3DCOLORVALUE@@@Z @ 0x180130F30
 * Callers:
 *     ?AddShadowToShape@CCursorState@@AEAA?AV?$shared_ptr@UShapeData@CCursorState@@@std@@AEBV23@@Z @ 0x180275E0C (-AddShadowToShape@CCursorState@@AEAA-AV-$shared_ptr@UShapeData@CCursorState@@@std@@AEBV23@@Z.c)
 * Callees:
 *     ?FlushDrawList@CD2DContext@@QEAAJXZ @ 0x18008DE30 (-FlushDrawList@CD2DContext@@QEAAJXZ.c)
 *     ?EnsureBeginDraw@CD2DContext@@AEAAXXZ @ 0x18008E868 (-EnsureBeginDraw@CD2DContext@@AEAAXXZ.c)
 *     __security_check_cookie @ 0x18010E3E0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 *     McTemplateU0ffff_EventWriteTransfer @ 0x18012A118 (McTemplateU0ffff_EventWriteTransfer.c)
 *     McGenEventWrite_EventWriteTransfer @ 0x18019F304 (McGenEventWrite_EventWriteTransfer.c)
 */

void __fastcall CD2DContext::Clear(
        CD2DContext *this,
        const struct ID2DContextOwner *a2,
        const struct _D3DCOLORVALUE *a3)
{
  int v5; // eax
  __int64 v6; // rbx
  __int64 v7; // r8
  __int64 v8; // r8
  _BYTE v9[16]; // [rsp+30h] [rbp-28h] BYREF

  CD2DContext::FlushDrawList(this);
  v5 = *((_DWORD *)this + 88);
  v6 = 0LL;
  if ( v5 )
    v6 = *(_QWORD *)(*((_QWORD *)this + 41) + 8LL * (unsigned int)(v5 - 1));
  CD2DContext::EnsureBeginDraw(this);
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x10) != 0 )
    McTemplateU0ffff_EventWriteTransfer(
      (__int64)&Microsoft_Windows_Dwm_Core_Provider_Context,
      (__int64)&EVTDESC_ETWGUID_CLEAREVENT_Start,
      v7,
      *(float *)(v6 + 56),
      *(_DWORD *)(v6 + 60),
      *(_DWORD *)(v6 + 64));
  (*(void (__fastcall **)(_QWORD, const struct _D3DCOLORVALUE *))(**(_QWORD **)(*(_QWORD *)(v6 + 16) + 200LL) + 376LL))(
    *(_QWORD *)(*(_QWORD *)(v6 + 16) + 200LL),
    a3);
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x10) != 0 )
    McGenEventWrite_EventWriteTransfer(
      &Microsoft_Windows_Dwm_Core_Provider_Context,
      &EVTDESC_ETWGUID_CLEAREVENT_Stop,
      v8,
      1LL,
      v9);
}
