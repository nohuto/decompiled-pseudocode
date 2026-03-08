/*
 * XREFs of ?SendDisposeProxy@BamoPrincipalImpl@BamoImpl@Microsoft@@AEAAXPEAVBamoStubImpl@23@_N@Z @ 0x1801B7CA8
 * Callers:
 *     ?Thunk_AckProxyReference_17@?$IBamoPeer_dataprovider_AutoBamos_Receive@VBamoPeerImpl@dataprovider_AutoBamos@BamoImpl@@@@SAJPEAXPEAPEAX@Z @ 0x180103E30 (-Thunk_AckProxyReference_17@-$IBamoPeer_dataprovider_AutoBamos_Receive@VBamoPeerImpl@dataprovide.c)
 *     ?RequestDisposeProxy@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJPEAVBaseBamoPeerImpl@23@I@Z @ 0x1801B780C (-RequestDisposeProxy@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJPEAVBaseBamoPeerImpl@23@I@Z.c)
 *     ?Thunk_AckProxyReference_37@?$IBamoPeer_DiagnosticCallbacks_AutoBamos_Receive@VBamoPeerImpl@DiagnosticCallbacks_AutoBamos@BamoImpl@@@@SAJPEAXPEAPEAX@Z @ 0x1801B8470 (-Thunk_AckProxyReference_37@-$IBamoPeer_DiagnosticCallbacks_AutoBamos_Receive@VBamoPeerImpl@Diag.c)
 *     ?TryDisposeAndNotifyRemoteProxies@BamoPrincipalImpl@BamoImpl@Microsoft@@AEAA_NXZ @ 0x1801B8B40 (-TryDisposeAndNotifyRemoteProxies@BamoPrincipalImpl@BamoImpl@Microsoft@@AEAA_NXZ.c)
 * Callees:
 *     ?GetItemId@BamoPrincipalImpl@BamoImpl@Microsoft@@QEBAIXZ @ 0x1800FEC64 (-GetItemId@BamoPrincipalImpl@BamoImpl@Microsoft@@QEBAIXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall Microsoft::BamoImpl::BamoPrincipalImpl::SendDisposeProxy(
        Microsoft::BamoImpl::BamoPrincipalImpl *this,
        struct Microsoft::BamoImpl::BamoStubImpl *a2,
        char a3)
{
  __int64 v3; // rdi
  void (__fastcall *v6)(__int64, _QWORD, __int64); // rbx
  unsigned int ItemId; // eax
  __int64 v8; // r8

  v3 = *((_QWORD *)a2 + 4);
  v6 = *(void (__fastcall **)(__int64, _QWORD, __int64))(*(_QWORD *)v3 + 80LL);
  ItemId = Microsoft::BamoImpl::BamoPrincipalImpl::GetItemId(*((Microsoft::BamoImpl::BamoPrincipalImpl **)a2 + 3));
  LOBYTE(v8) = a3;
  v6(v3, ItemId, v8);
  if ( a3 )
    *((_BYTE *)a2 + 58) = 1;
  *((_BYTE *)a2 + 56) = 0;
  if ( !a3 )
    (*(void (__fastcall **)(struct Microsoft::BamoImpl::BamoStubImpl *))(*(_QWORD *)a2 + 56LL))(a2);
}
