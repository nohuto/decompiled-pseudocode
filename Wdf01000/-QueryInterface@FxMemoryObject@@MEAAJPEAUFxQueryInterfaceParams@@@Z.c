__int64 __fastcall FxMemoryObject::QueryInterface(FxMemoryObject *this, FxQueryInterfaceParams *Params)
{
  if ( Params->Type != 4106 )
    return FxObject::QueryInterface(this, Params);
  *Params->Object = (void *)((unsigned __int64)&this->IFxMemory & -(__int64)(this != 0LL));
  return 0LL;
}
