/*
 * XREFs of ??_GDWMInputTarget@@UEAAPEAXI@Z @ 0x1800B65B8
 * Callers:
 *     ??_EDWMInputTarget@@WDI@EAAPEAXI@Z @ 0x18004B740 (--_EDWMInputTarget@@WDI@EAAPEAXI@Z.c)
 * Callees:
 *     ?UpdateStateOfProxyOnPlaceholderProxyHookUp@BamoMPCConstantManagerClientProxyImpl@BamoImpl@@UEAAXPEAVBamoProxyImpl@2Microsoft@@@Z @ 0x180001E00 (-UpdateStateOfProxyOnPlaceholderProxyHookUp@BamoMPCConstantManagerClientProxyImpl@BamoImpl@@UEAA.c)
 *     ??1DWMInputTarget@@UEAA@XZ @ 0x1800B6520 (--1DWMInputTarget@@UEAA@XZ.c)
 */

DWMInputTarget *__fastcall DWMInputTarget::`scalar deleting destructor'(DWMInputTarget *this, char a2)
{
  DWMInputTarget::~DWMInputTarget(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      BamoImpl::BamoMPCConstantManagerClientProxyImpl::UpdateStateOfProxyOnPlaceholderProxyHookUp(
        this,
        (struct Microsoft::BamoImpl::BamoProxyImpl *)0x88);
    else
      free(this);
  }
  return this;
}
