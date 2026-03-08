/*
 * XREFs of ?ReleaseStubsFromPeerList@BamoStubImpl@BamoImpl@Microsoft@@SAXPEAV123@@Z @ 0x1801B776C
 * Callers:
 *     ?Leave@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAXXZ @ 0x1801B6B74 (-Leave@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAXXZ.c)
 *     ?OnDisconnected@BaseBamoPeerImpl@BamoImpl@Microsoft@@QEAAXXZ @ 0x1801B6FE4 (-OnDisconnected@BaseBamoPeerImpl@BamoImpl@Microsoft@@QEAAXXZ.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall Microsoft::BamoImpl::BamoStubImpl::ReleaseStubsFromPeerList(
        struct Microsoft::BamoImpl::BamoStubImpl *a1)
{
  struct Microsoft::BamoImpl::BamoStubImpl *v1; // rbx

  if ( a1 )
  {
    do
    {
      v1 = (struct Microsoft::BamoImpl::BamoStubImpl *)*((_QWORD *)a1 + 6);
      *((_QWORD *)a1 + 6) = 0LL;
      (*(void (__fastcall **)(struct Microsoft::BamoImpl::BamoStubImpl *))(*(_QWORD *)a1 + 8LL))(a1);
      a1 = v1;
    }
    while ( v1 );
  }
}
