/*
 * XREFs of ?UpdateStateOfProxyOnPlaceholderProxyHookUp@BamoMagnifierControllerProxyImpl@BamoImpl@@UEAAXPEAVBamoProxyImpl@2Microsoft@@@Z @ 0x180046720
 * Callers:
 *     <none>
 * Callees:
 *     ?UpdateGesturesEnabled@BamoMagnifierControllerProxyImpl@BamoImpl@@QEAAJ_N@Z @ 0x180100F84 (-UpdateGesturesEnabled@BamoMagnifierControllerProxyImpl@BamoImpl@@QEAAJ_N@Z.c)
 *     ?UpdateToggleEnabled@BamoMagnifierControllerProxyImpl@BamoImpl@@QEAAJ_N@Z @ 0x180101028 (-UpdateToggleEnabled@BamoMagnifierControllerProxyImpl@BamoImpl@@QEAAJ_N@Z.c)
 */

void __fastcall BamoImpl::BamoMagnifierControllerProxyImpl::UpdateStateOfProxyOnPlaceholderProxyHookUp(
        BamoImpl::BamoMagnifierControllerProxyImpl *this,
        struct Microsoft::BamoImpl::BamoProxyImpl *a2)
{
  BamoImpl::BamoMagnifierControllerProxyImpl::UpdateToggleEnabled(this, *((_BYTE *)a2 + 32));
  BamoImpl::BamoMagnifierControllerProxyImpl::UpdateGesturesEnabled(this, *((_BYTE *)a2 + 33));
  BamoImpl::BamoMagnifierControllerProxyImpl::UpdateUseInputSiteCoordinateSpace(this, *((_BYTE *)a2 + 34));
}
