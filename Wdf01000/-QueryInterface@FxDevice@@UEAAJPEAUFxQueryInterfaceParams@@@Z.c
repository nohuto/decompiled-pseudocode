/*
 * XREFs of ?QueryInterface@FxDevice@@UEAAJPEAUFxQueryInterfaceParams@@@Z @ 0x1C0008F80
 * Callers:
 *     <none>
 * Callees:
 *     ?QueryInterface@FxDeviceBase@@UEAAJPEAUFxQueryInterfaceParams@@@Z @ 0x1C0008FB0 (-QueryInterface@FxDeviceBase@@UEAAJPEAUFxQueryInterfaceParams@@@Z.c)
 */

int __fastcall FxDevice::QueryInterface(FxDevice *this, FxQueryInterfaceParams *Params)
{
  if ( Params->Type != 4098 )
    return FxDeviceBase::QueryInterface(this, Params);
  *Params->Object = this;
  return 0;
}
