/*
 * XREFs of ?Disconnect@BamoProxyImpl@BamoImpl@Microsoft@@QEAAX_N@Z @ 0x1801B6288
 * Callers:
 *     ?DisposeProxy@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJPEAVBaseBamoPeerImpl@23@I_N@Z @ 0x1801B6624 (-DisposeProxy@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJPEAVBaseBamoPeerImpl@23@I_N@Z.c)
 *     ?OnIDFreed@ConnectionIndirector@BamoImpl@Microsoft@@UEAAJIIPEAX@Z @ 0x1801B7150 (-OnIDFreed@ConnectionIndirector@BamoImpl@Microsoft@@UEAAJIIPEAX@Z.c)
 *     ?SetBootstrapProxy@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJPEAVBaseBamoPeerImpl@23@I@Z @ 0x1801B7FA0 (-SetBootstrapProxy@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJPEAVBaseBamoPeerImpl@23@I@Z.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 *     ?AbandonOnDisconnect@BamoProxy@Bamo@Microsoft@@AEAAXXZ @ 0x1801B5F1C (-AbandonOnDisconnect@BamoProxy@Bamo@Microsoft@@AEAAXXZ.c)
 */

void __fastcall Microsoft::BamoImpl::BamoProxyImpl::Disconnect(Microsoft::BamoImpl::BamoProxyImpl *this, char a2)
{
  Microsoft::Bamo::BamoProxy *v2; // rax

  *((_BYTE *)this + 29) = 1;
  if ( !a2 )
  {
    v2 = (Microsoft::Bamo::BamoProxy *)(*(__int64 (__fastcall **)(Microsoft::BamoImpl::BamoProxyImpl *))(*(_QWORD *)this + 56LL))(this);
    Microsoft::Bamo::BamoProxy::AbandonOnDisconnect(v2);
  }
}
