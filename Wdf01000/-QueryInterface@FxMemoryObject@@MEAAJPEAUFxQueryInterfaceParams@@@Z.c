/*
 * XREFs of ?QueryInterface@FxMemoryObject@@MEAAJPEAUFxQueryInterfaceParams@@@Z @ 0x1C0009390
 * Callers:
 *     ?QueryInterface@FxMemoryBufferPreallocated@@UEAAJPEAUFxQueryInterfaceParams@@@Z @ 0x1C003F8A0 (-QueryInterface@FxMemoryBufferPreallocated@@UEAAJPEAUFxQueryInterfaceParams@@@Z.c)
 * Callees:
 *     ?QueryInterface@FxObject@@UEAAJPEAUFxQueryInterfaceParams@@@Z @ 0x1C0009030 (-QueryInterface@FxObject@@UEAAJPEAUFxQueryInterfaceParams@@@Z.c)
 */

__int64 __fastcall FxMemoryObject::QueryInterface(FxMemoryObject *this, FxQueryInterfaceParams *Params)
{
  if ( Params->Type != 4106 )
    return FxObject::QueryInterface(this, Params);
  *Params->Object = (void *)((unsigned __int64)&this->IFxMemory & -(__int64)(this != 0LL));
  return 0LL;
}
