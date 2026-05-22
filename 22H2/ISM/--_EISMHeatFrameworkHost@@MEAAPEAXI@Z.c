/*
 * XREFs of ??_EISMHeatFrameworkHost@@MEAAPEAXI@Z @ 0x18012C7E8
 * Callers:
 *     ??_EISMHeatFrameworkHost@@OBA@EAAPEAXI@Z @ 0x18004CDB0 (--_EISMHeatFrameworkHost@@OBA@EAAPEAXI@Z.c)
 * Callees:
 *     ?UpdateStateOfProxyOnPlaceholderProxyHookUp@BamoMPCConstantManagerClientProxyImpl@BamoImpl@@UEAAXPEAVBamoProxyImpl@2Microsoft@@@Z @ 0x180001E00 (-UpdateStateOfProxyOnPlaceholderProxyHookUp@BamoMPCConstantManagerClientProxyImpl@BamoImpl@@UEAA.c)
 *     ??1ISMHeatFrameworkHost@@MEAA@XZ @ 0x18012C608 (--1ISMHeatFrameworkHost@@MEAA@XZ.c)
 */

ISMHeatFrameworkHost *__fastcall ISMHeatFrameworkHost::`vector deleting destructor'(
        ISMHeatFrameworkHost *this,
        char a2)
{
  ISMHeatFrameworkHost::~ISMHeatFrameworkHost(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      BamoImpl::BamoMPCConstantManagerClientProxyImpl::UpdateStateOfProxyOnPlaceholderProxyHookUp(
        this,
        (struct Microsoft::BamoImpl::BamoProxyImpl *)0x128);
    else
      free(this);
  }
  return this;
}
