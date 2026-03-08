/*
 * XREFs of ?EnsureClientInfo@CDesktopTree@@MEAAXXZ @ 0x1800C63C0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800342C8 (--1-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?reserve_region@?$vector_facade@PEAVCOverlayContext@@V?$buffer_impl@PEAVCOverlayContext@@$03$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAPEAVCOverlayContext@@_K0@Z @ 0x180052A84 (-reserve_region@-$vector_facade@PEAVCOverlayContext@@V-$buffer_impl@PEAVCOverlayContext@@$03$00V.c)
 *     ?clear@?$vector_facade@PEAVCVisual@@V?$buffer_impl@PEAVCVisual@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAXXZ @ 0x1800C6530 (-clear@-$vector_facade@PEAVCVisual@@V-$buffer_impl@PEAVCVisual@@$0BA@$00Vliberal_expansion_polic.c)
 *     ?UpdateClientBounds@CVisualTree@@IEAAXXZ @ 0x1800C659C (-UpdateClientBounds@CVisualTree@@IEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall CDesktopTree::EnsureClientInfo(CDesktopTree *this)
{
  detail::liberal_expansion_policy *v2; // rsi
  _QWORD *v3; // rbx
  _QWORD *v4; // r14
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rbp
  __int64 v8; // rdx
  __int64 v9; // rcx
  int v10; // eax
  __int64 v11; // rcx
  __int64 v12; // [rsp+40h] [rbp+8h] BYREF
  __int64 v13; // [rsp+48h] [rbp+10h] BYREF

  if ( *((_BYTE *)this + 4712) )
  {
    v2 = (CDesktopTree *)((char *)this + 4752);
    detail::vector_facade<CVisual *,detail::buffer_impl<CVisual *,16,1,detail::liberal_expansion_policy>>::clear((char *)this + 4752);
    *((_QWORD *)this + 601) = 0LL;
    v3 = (_QWORD *)*((_QWORD *)this + 567);
    v4 = (_QWORD *)*((_QWORD *)this + 568);
    while ( v3 != v4 )
    {
      v5 = *v3 + 8LL;
      v6 = *(int *)(*(_QWORD *)v5 + 4LL);
      v12 = 0LL;
      if ( (**(int (__fastcall ***)(__int64, GUID *, __int64 *))(v5 + v6))(
             v5 + v6,
             &GUID_246c9be3_da00_417e_8eb0_aefc3aebe2a9,
             &v12) >= 0 )
      {
        v7 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v12 + 32LL))(v12);
        if ( v7 )
          *(_QWORD *)detail::vector_facade<COverlayContext *,detail::buffer_impl<COverlayContext *,4,1,detail::liberal_expansion_policy>>::reserve_region(
                       v2,
                       (__int64)(*((_QWORD *)v2 + 1) - *(_QWORD *)v2) >> 3) = v7;
      }
      wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)&v12);
      v8 = *v3 + 8LL;
      v9 = *(int *)(*(_QWORD *)v8 + 4LL);
      v13 = 0LL;
      v10 = (**(__int64 (__fastcall ***)(__int64, GUID *, __int64 *))(v8 + v9))(
              v8 + v9,
              &GUID_7c976d93_9dfd_4286_b10c_4603653cf4d3,
              &v13);
      v11 = v13;
      if ( v10 >= 0 )
        *((_QWORD *)this + 601) = v13;
      if ( v11 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
      ++v3;
    }
  }
  if ( *((_BYTE *)this + 4712) )
  {
    CVisualTree::UpdateClientBounds(this);
    if ( CCommonRegistryData::ForceDesktopTreeFullDirty )
    {
      if ( (*(unsigned __int8 (__fastcall **)(CDesktopTree *))(*(_QWORD *)this + 184LL))(this) )
        *((_BYTE *)this + 4714) = 0;
    }
    *((_BYTE *)this + 4712) = 0;
  }
}
