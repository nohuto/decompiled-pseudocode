/*
 * XREFs of ?UpdateStateOfProxyOnPlaceholderProxyHookUp@BamoContainerInfoInputObjectProxyImpl@BamoImpl@@UEAAXPEAVBamoProxyImpl@2Microsoft@@@Z @ 0x180044660
 * Callers:
 *     <none>
 * Callees:
 *     ?UpdateContainerGuid@BamoContainerInfoInputObjectProxyImpl@BamoImpl@@QEAAJPEAU_GUID@@@Z @ 0x1800EDAB4 (-UpdateContainerGuid@BamoContainerInfoInputObjectProxyImpl@BamoImpl@@QEAAJPEAU_GUID@@@Z.c)
 */

void __fastcall BamoImpl::BamoContainerInfoInputObjectProxyImpl::UpdateStateOfProxyOnPlaceholderProxyHookUp(
        BamoImpl::BamoContainerInfoInputObjectProxyImpl *this,
        struct _GUID *a2)
{
  BamoImpl::BamoContainerInfoInputObjectProxyImpl::UpdateContainerGuid(this, a2 + 2);
  BamoImpl::BamoContainerInfoInputObjectProxyImpl::UpdateContainerId(this, (struct CONTAINER_ID *)&a2[3]);
}
