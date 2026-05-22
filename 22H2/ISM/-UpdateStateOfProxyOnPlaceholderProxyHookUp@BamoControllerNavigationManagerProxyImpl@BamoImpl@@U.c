/*
 * XREFs of ?UpdateStateOfProxyOnPlaceholderProxyHookUp@BamoControllerNavigationManagerProxyImpl@BamoImpl@@UEAAXPEAVBamoProxyImpl@2Microsoft@@@Z @ 0x1800446A0
 * Callers:
 *     <none>
 * Callees:
 *     ?UpdateEnabled@BamoControllerNavigationManagerProxyImpl@BamoImpl@@QEAAJ_N@Z @ 0x1800EE284 (-UpdateEnabled@BamoControllerNavigationManagerProxyImpl@BamoImpl@@QEAAJ_N@Z.c)
 */

void __fastcall BamoImpl::BamoControllerNavigationManagerProxyImpl::UpdateStateOfProxyOnPlaceholderProxyHookUp(
        BamoImpl::BamoControllerNavigationManagerProxyImpl *this,
        struct Microsoft::BamoImpl::BamoProxyImpl *a2)
{
  BamoImpl::BamoControllerNavigationManagerProxyImpl::UpdateEnabled(this, *((_BYTE *)a2 + 32));
  BamoImpl::BamoControllerNavigationManagerProxyImpl::UpdatePaused(this, *((_BYTE *)a2 + 33));
}
