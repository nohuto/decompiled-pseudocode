/*
 * XREFs of ??_GKeyboardProcessor@@MEAAPEAXI@Z @ 0x18013546C
 * Callers:
 *     ??_EKeyboardProcessor@@O7EAAPEAXI@Z @ 0x18004CE70 (--_EKeyboardProcessor@@O7EAAPEAXI@Z.c)
 * Callees:
 *     ?UpdateStateOfProxyOnPlaceholderProxyHookUp@BamoMPCConstantManagerClientProxyImpl@BamoImpl@@UEAAXPEAVBamoProxyImpl@2Microsoft@@@Z @ 0x180001E00 (-UpdateStateOfProxyOnPlaceholderProxyHookUp@BamoMPCConstantManagerClientProxyImpl@BamoImpl@@UEAA.c)
 *     ??1KeyboardProcessor@@MEAA@XZ @ 0x1801353E4 (--1KeyboardProcessor@@MEAA@XZ.c)
 */

KeyboardProcessor *__fastcall KeyboardProcessor::`scalar deleting destructor'(KeyboardProcessor *this, char a2)
{
  KeyboardProcessor::~KeyboardProcessor(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      BamoImpl::BamoMPCConstantManagerClientProxyImpl::UpdateStateOfProxyOnPlaceholderProxyHookUp(
        this,
        (struct Microsoft::BamoImpl::BamoProxyImpl *)0x80);
    else
      free(this);
  }
  return this;
}
