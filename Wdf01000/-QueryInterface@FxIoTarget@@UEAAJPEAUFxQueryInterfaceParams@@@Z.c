/*
 * XREFs of ?QueryInterface@FxIoTarget@@UEAAJPEAUFxQueryInterfaceParams@@@Z @ 0x1C000EB10
 * Callers:
 *     ?QueryInterface@FxIoTargetRemote@@MEAAJPEAUFxQueryInterfaceParams@@@Z @ 0x1C00555F0 (-QueryInterface@FxIoTargetRemote@@MEAAJPEAUFxQueryInterfaceParams@@@Z.c)
 * Callees:
 *     ?QueryInterface@FxObject@@UEAAJPEAUFxQueryInterfaceParams@@@Z @ 0x1C0009030 (-QueryInterface@FxObject@@UEAAJPEAUFxQueryInterfaceParams@@@Z.c)
 */

__int64 __fastcall FxIoTarget::QueryInterface(FxIoTarget *this, FxQueryInterfaceParams *Params)
{
  if ( Params->Type != 4608 )
    return FxObject::QueryInterface(this, Params);
  *Params->Object = this;
  return 0LL;
}
