/*
 * XREFs of ?QueryInterface@FxDeviceBase@@UEAAJPEAUFxQueryInterfaceParams@@@Z @ 0x1C0008FB0
 * Callers:
 *     ?QueryInterface@FxDevice@@UEAAJPEAUFxQueryInterfaceParams@@@Z @ 0x1C0008F80 (-QueryInterface@FxDevice@@UEAAJPEAUFxQueryInterfaceParams@@@Z.c)
 * Callees:
 *     ?QueryInterface@FxObject@@UEAAJPEAUFxQueryInterfaceParams@@@Z @ 0x1C0009030 (-QueryInterface@FxObject@@UEAAJPEAUFxQueryInterfaceParams@@@Z.c)
 */

int __fastcall FxDeviceBase::QueryInterface(FxDeviceBase *this, FxQueryInterfaceParams *Params)
{
  unsigned __int16 Type; // ax

  Type = Params->Type;
  if ( Type != 4144 )
  {
    if ( Type != 5379 )
      return FxObject::QueryInterface(this, Params);
    this = (FxDeviceBase *)((unsigned __int64)&this->IFxHasCallbacks & -(__int64)(this != 0LL));
  }
  *Params->Object = this;
  return 0;
}
