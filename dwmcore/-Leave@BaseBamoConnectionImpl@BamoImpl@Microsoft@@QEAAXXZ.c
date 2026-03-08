/*
 * XREFs of ?Leave@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAXXZ @ 0x1801B6B74
 * Callers:
 *     ?OnZeroReferenceCount@BaseBamoConnectionImpl@BamoImpl@Microsoft@@EEAAXXZ @ 0x1801B7580 (-OnZeroReferenceCount@BaseBamoConnectionImpl@BamoImpl@Microsoft@@EEAAXXZ.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800E18AC (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?reset@?$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1800FF6C0 (-reset@-$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1801B44D0 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?DisconnectAllObjects@BaseBamoConnectionImpl@BamoImpl@Microsoft@@AEAAXPEAPEAUIMessageConversation@@PEAPEAVBaseBamoPeerImpl@23@PEAPEAVBamoStubImpl@23@PEAV?$vector@PEAVBamoPrincipalImpl@BamoImpl@Microsoft@@V?$allocator@PEAVBamoPrincipalImpl@BamoImpl@Microsoft@@@std@@@std@@PEAV?$vector@PEAVBamoProxyImpl@BamoImpl@Microsoft@@V?$allocator@PEAVBamoProxyImpl@BamoImpl@Microsoft@@@std@@@8@@Z @ 0x1801B62C0 (-DisconnectAllObjects@BaseBamoConnectionImpl@BamoImpl@Microsoft@@AEAAXPEAPEAUIMessageConversatio.c)
 *     ?ReleaseStubsFromPeerList@BamoStubImpl@BamoImpl@Microsoft@@SAXPEAV123@@Z @ 0x1801B776C (-ReleaseStubsFromPeerList@BamoStubImpl@BamoImpl@Microsoft@@SAXPEAV123@@Z.c)
 */

void __fastcall Microsoft::BamoImpl::BaseBamoConnectionImpl::Leave(Microsoft::BamoImpl::BaseBamoConnectionImpl *this)
{
  _QWORD *i; // rbx
  struct Microsoft::BamoImpl::ConnectionIndirector *v3; // rcx
  struct Microsoft::BamoImpl::ConnectionIndirector *v4; // rbx
  __int64 v5; // rcx
  __int64 v6; // rcx
  __int64 v7; // rcx
  __int64 v8; // rcx
  __int64 v9; // rcx
  __int64 v10; // rcx
  int v11; // eax
  int v12; // [rsp+20h] [rbp-40h]
  __int64 v13[2]; // [rsp+48h] [rbp-18h] BYREF
  __int64 v14; // [rsp+58h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+18h]
  struct Microsoft::BamoImpl::BamoStubImpl *v16; // [rsp+80h] [rbp+20h] BYREF
  struct Microsoft::BamoImpl::ConnectionIndirector *v17; // [rsp+88h] [rbp+28h] BYREF
  struct Microsoft::BamoImpl::ConnectionIndirector *v18; // [rsp+90h] [rbp+30h] BYREF

  v14 = 0LL;
  *(_OWORD *)v13 = 0LL;
  Microsoft::BamoImpl::BaseBamoConnectionImpl::DisconnectAllObjects(
    (struct Microsoft::BamoImpl::ConnectionIndirector **)this,
    &v18,
    &v17,
    &v16,
    (__int64)v13);
  for ( i = (_QWORD *)v13[0]; i != (_QWORD *)v13[1]; ++i )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*i + 8LL))(*i);
  Microsoft::BamoImpl::BamoStubImpl::ReleaseStubsFromPeerList(v16);
  v3 = v17;
  if ( v17 )
  {
    do
    {
      v4 = (struct Microsoft::BamoImpl::ConnectionIndirector *)*((_QWORD *)v3 + 8);
      *((_QWORD *)v3 + 8) = 0LL;
      (*(void (__fastcall **)(struct Microsoft::BamoImpl::ConnectionIndirector *))(*(_QWORD *)v3 + 8LL))(v3);
      v3 = v4;
    }
    while ( v4 );
  }
  (*(void (__fastcall **)(struct Microsoft::BamoImpl::ConnectionIndirector *))(*(_QWORD *)v18 + 16LL))(v18);
  v5 = *((_QWORD *)this + 9);
  *((_QWORD *)this + 9) = 0LL;
  if ( v5 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  v6 = *((_QWORD *)this + 10);
  *((_QWORD *)this + 10) = 0LL;
  if ( v6 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  v7 = *((_QWORD *)this + 11);
  *((_QWORD *)this + 11) = 0LL;
  if ( v7 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 8LL))(v7);
  v8 = *((_QWORD *)this + 15);
  *((_QWORD *)this + 15) = 0LL;
  if ( v8 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 8LL))(v8);
  v9 = *((_QWORD *)this + 7);
  *((_QWORD *)this + 7) = 0LL;
  if ( v9 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
  wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset((__int64 *)this + 6);
  v10 = *((_QWORD *)this + 2);
  *((_BYTE *)this + 218) = 1;
  v11 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
  if ( v11 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      929LL,
      (__int64)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoConnection.inl",
      (const char *)(unsigned int)v11,
      v12);
  if ( v13[0] )
    std::_Deallocate<16,0>((void *)v13[0], (v14 - v13[0]) & 0xFFFFFFFFFFFFFFF8uLL);
}
