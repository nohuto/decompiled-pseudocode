/*
 * XREFs of ?PrepareForRemoteReference@BamoStubImpl@BamoImpl@Microsoft@@QEAAIPEAVBamoPrincipal@Bamo@3@@Z @ 0x180104AC4
 * Callers:
 *     ?RemoteReplace@BamoList_ActivatableEntityPrincipal_StubImpl@ISMBamos_AutoBamos@BamoImpl@Lib@Bamo@Microsoft@@QEAAJIPEAVBamoActivatableEntityPrincipal@@@Z @ 0x180104F1C (-RemoteReplace@BamoList_ActivatableEntityPrincipal_StubImpl@ISMBamos_AutoBamos@BamoImpl@Lib@Bamo.c)
 *     ?RemoteInsert@BamoList_PenDevicePrincipal_StubImpl@ISMBamos_AutoBamos@BamoImpl@Lib@Bamo@Microsoft@@QEAAJIPEAVBamoPenDevicePrincipal@@@Z @ 0x18012FF0C (-RemoteInsert@BamoList_PenDevicePrincipal_StubImpl@ISMBamos_AutoBamos@BamoImpl@Lib@Bamo@Microsof.c)
 *     ?RemoteReplace@BamoList_PenDevicePrincipal_StubImpl@ISMBamos_AutoBamos@BamoImpl@Lib@Bamo@Microsoft@@QEAAJIPEAVBamoPenDevicePrincipal@@@Z @ 0x18013018C (-RemoteReplace@BamoList_PenDevicePrincipal_StubImpl@ISMBamos_AutoBamos@BamoImpl@Lib@Bamo@Microso.c)
 *     ?AddDataSource@BamoDataProviderStubImpl@BamoImpl@@QEAAJPEAVBamoDataSourcePrincipal@@@Z @ 0x1801417AC (-AddDataSource@BamoDataProviderStubImpl@BamoImpl@@QEAAJPEAVBamoDataSourcePrincipal@@@Z.c)
 *     ?RemoveDataSource@BamoDataProviderStubImpl@BamoImpl@@QEAAJPEAVBamoDataSourcePrincipal@@@Z @ 0x18014364C (-RemoveDataSource@BamoDataProviderStubImpl@BamoImpl@@QEAAJPEAVBamoDataSourcePrincipal@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18004B280 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::BamoImpl::BamoStubImpl::PrepareForRemoteReference(
        struct Microsoft::BamoImpl::BaseBamoPeerImpl **this,
        struct Microsoft::Bamo::BamoPrincipal *a2)
{
  Microsoft::BamoImpl::BamoPrincipalImpl *v3; // rax

  v3 = (Microsoft::BamoImpl::BamoPrincipalImpl *)(*(__int64 (__fastcall **)(struct Microsoft::Bamo::BamoPrincipal *))(*(_QWORD *)a2 + 32LL))(a2);
  return Microsoft::BamoImpl::BamoPrincipalImpl::PrepareForRemoteReference(v3, this[5]);
}
