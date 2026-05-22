/*
 * XREFs of ??_GRIMRawInputProvider@@MEAAPEAXI@Z @ 0x18008EC7C
 * Callers:
 *     ??_ERIMRawInputProvider@@O7EAAPEAXI@Z @ 0x18004B620 (--_ERIMRawInputProvider@@O7EAAPEAXI@Z.c)
 * Callees:
 *     ?UpdateStateOfProxyOnPlaceholderProxyHookUp@BamoMPCConstantManagerClientProxyImpl@BamoImpl@@UEAAXPEAVBamoProxyImpl@2Microsoft@@@Z @ 0x180001E00 (-UpdateStateOfProxyOnPlaceholderProxyHookUp@BamoMPCConstantManagerClientProxyImpl@BamoImpl@@UEAA.c)
 *     ??1RIMRawInputProvider@@MEAA@XZ @ 0x18008EA00 (--1RIMRawInputProvider@@MEAA@XZ.c)
 */

RIMRawInputProvider *__fastcall RIMRawInputProvider::`scalar deleting destructor'(
        RIMRawInputProvider *this,
        __int64 a2)
{
  char v2; // di

  v2 = a2;
  RIMRawInputProvider::~RIMRawInputProvider(this, a2);
  if ( (v2 & 1) != 0 )
  {
    if ( (v2 & 4) != 0 )
      BamoImpl::BamoMPCConstantManagerClientProxyImpl::UpdateStateOfProxyOnPlaceholderProxyHookUp(
        this,
        (struct Microsoft::BamoImpl::BamoProxyImpl *)0x100);
    else
      free(this);
  }
  return this;
}
