/*
 * XREFs of ?SetSurfaceInfo@CCompositionSurfaceBitmap@@AEAAXPEAVCCompositionSurfaceInfo@@@Z @ 0x1800BAC20
 * Callers:
 *     ?ProcessUpdate@CCompositionSurfaceBitmap@@UEAAJPEBVCResourceTable@@PEBUtagMILCMD_COMPOSITIONSURFACEBITMAP@@@Z @ 0x1800BAB20 (-ProcessUpdate@CCompositionSurfaceBitmap@@UEAAJPEBVCResourceTable@@PEBUtagMILCMD_COMPOSITIONSURF.c)
 *     ?Create@CCompositionSurfaceBitmap@@SAJPEAVCComposition@@PEAVCCompositionSurfaceInfo@@PEAPEAV1@@Z @ 0x180223760 (-Create@CCompositionSurfaceBitmap@@SAJPEAVCComposition@@PEAVCCompositionSurfaceInfo@@PEAPEAV1@@Z.c)
 * Callees:
 *     ??4?$com_ptr_t@VCCompositionSurfaceInfo@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVCCompositionSurfaceInfo@@@Z @ 0x18004828C (--4-$com_ptr_t@VCCompositionSurfaceInfo@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVCCompo.c)
 *     ?UnRegisterBitmapNotifier@CCompositionSurfaceInfo@@QEAAXPEAVICompositionSurfaceInfoListener@@@Z @ 0x1800BA254 (-UnRegisterBitmapNotifier@CCompositionSurfaceInfo@@QEAAXPEAVICompositionSurfaceInfoListener@@@Z.c)
 *     ??$insert_unchecked@AEBQEAVICompositionSurfaceInfoListener@@@?$vector_facade@PEAVICompositionSurfaceInfoListener@@V?$buffer_impl@PEAVICompositionSurfaceInfoListener@@$00$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAA?AV?$basic_iterator@PEAVICompositionSurfaceInfoListener@@@1@V?$basic_iterator@QEAVICompositionSurfaceInfoListener@@@1@AEBQEAVICompositionSurfaceInfoListener@@@Z @ 0x1800BA72C (--$insert_unchecked@AEBQEAVICompositionSurfaceInfoListener@@@-$vector_facade@PEAVICompositionSur.c)
 *     ?GetProcessAttributionNoRef@CResource@@UEBAPEAVCProcessAttribution@@XZ @ 0x1800BAD00 (-GetProcessAttributionNoRef@CResource@@UEBAPEAVCProcessAttribution@@XZ.c)
 *     ?NotifyOnChanged@CResource@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1800BBC80 (-NotifyOnChanged@CResource@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall CCompositionSurfaceBitmap::SetSurfaceInfo(
        CCompositionSurfaceBitmap *this,
        struct CCompositionSurfaceInfo *a2)
{
  __int64 *v2; // r14
  CCompositionSurfaceInfo *v4; // rcx
  __int64 v6; // rcx
  struct CProcessAttribution *ProcessAttributionNoRef; // rax
  char *v8; // [rsp+40h] [rbp+8h] BYREF
  __int64 v9; // [rsp+48h] [rbp+10h] BYREF
  __int64 v10; // [rsp+50h] [rbp+18h] BYREF

  v2 = (__int64 *)((char *)this + 104);
  v4 = (CCompositionSurfaceInfo *)*((_QWORD *)this + 13);
  if ( v4 != a2 )
  {
    if ( v4 )
      CCompositionSurfaceInfo::UnRegisterBitmapNotifier(
        v4,
        (struct ICompositionSurfaceInfoListener *)(((unsigned __int64)this + 88) & ((unsigned __int128)-(__int128)(unsigned __int64)this >> 64)));
    wil::com_ptr_t<CCompositionSurfaceInfo,wil::err_returncode_policy>::operator=(v2, (__int64)a2);
    v6 = *v2;
    if ( *v2 )
    {
      v9 = *(_QWORD *)(v6 + 72);
      v8 = (char *)this + 88;
      detail::vector_facade<ICompositionSurfaceInfoListener *,detail::buffer_impl<ICompositionSurfaceInfoListener *,1,1,detail::liberal_expansion_policy>>::insert_unchecked<ICompositionSurfaceInfoListener * const &>(
        v6 + 64,
        &v10,
        &v9,
        &v8);
      if ( CResource::GetProcessAttributionNoRef(this) )
      {
        ProcessAttributionNoRef = CResource::GetProcessAttributionNoRef(this);
        (*(void (__fastcall **)(struct CCompositionSurfaceInfo *, _QWORD))(*(_QWORD *)a2 + 416LL))(
          a2,
          *((unsigned int *)ProcessAttributionNoRef + 32));
      }
    }
    CResource::NotifyOnChanged(this, 0LL, 0LL);
  }
}
