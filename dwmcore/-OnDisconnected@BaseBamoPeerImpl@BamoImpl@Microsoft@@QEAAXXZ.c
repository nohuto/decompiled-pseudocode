/*
 * XREFs of ?OnDisconnected@BaseBamoPeerImpl@BamoImpl@Microsoft@@QEAAXXZ @ 0x1801B6FE4
 * Callers:
 *     ?OnPeerDisconnected@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJIPEAX_N@Z @ 0x1801B72BC (-OnPeerDisconnected@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJIPEAX_N@Z.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800E18AC (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 *     ?InvalidateAllRequests@BamoAsyncOperationCoordinator@BamoImpl@Microsoft@@QEAAXPEAVBaseBamoPeerImpl@23@@Z @ 0x1801B6AC0 (-InvalidateAllRequests@BamoAsyncOperationCoordinator@BamoImpl@Microsoft@@QEAAXPEAVBaseBamoPeerIm.c)
 *     ?OnDisconnected@BaseBamoPeerImpl@BamoImpl@Microsoft@@QEAAX_NPEAV?$vector@PEAVBamoPrincipalImpl@BamoImpl@Microsoft@@V?$allocator@PEAVBamoPrincipalImpl@BamoImpl@Microsoft@@@std@@@std@@PEAPEAVBamoStubImpl@23@2@Z @ 0x1801B708C (-OnDisconnected@BaseBamoPeerImpl@BamoImpl@Microsoft@@QEAAX_NPEAV-$vector@PEAVBamoPrincipalImpl@B.c)
 *     ?ReleaseStubsFromPeerList@BamoStubImpl@BamoImpl@Microsoft@@SAXPEAV123@@Z @ 0x1801B776C (-ReleaseStubsFromPeerList@BamoStubImpl@BamoImpl@Microsoft@@SAXPEAV123@@Z.c)
 */

void __fastcall Microsoft::BamoImpl::BaseBamoPeerImpl::OnDisconnected(Microsoft::BamoImpl::BaseBamoPeerImpl *this)
{
  _QWORD *i; // rsi
  __int64 v3; // r8
  const char *v4; // r9
  __int128 v5; // [rsp+30h] [rbp-28h] BYREF
  __int64 v6; // [rsp+40h] [rbp-18h]
  struct Microsoft::BamoImpl::BamoStubImpl *v7; // [rsp+60h] [rbp+8h] BYREF
  __int64 v8; // [rsp+68h] [rbp+10h] BYREF

  v5 = 0LL;
  v6 = 0LL;
  Microsoft::BamoImpl::BaseBamoPeerImpl::OnDisconnected(
    (_DWORD)this,
    0,
    (unsigned int)&v5,
    (unsigned int)&v7,
    (__int64)&v8);
  for ( i = (_QWORD *)v5; i != *((_QWORD **)&v5 + 1); ++i )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*i + 8LL))(*i);
  Microsoft::BamoImpl::BamoStubImpl::ReleaseStubsFromPeerList(v7);
  Microsoft::BamoImpl::BamoAsyncOperationCoordinator::InvalidateAllRequests(
    (Microsoft::BamoImpl::BaseBamoPeerImpl *)((char *)this + 72),
    this,
    v3,
    v4);
  if ( (_QWORD)v5 )
    std::_Deallocate<16,0>((void *)v5, (v6 - v5) & 0xFFFFFFFFFFFFFFF8uLL);
}
