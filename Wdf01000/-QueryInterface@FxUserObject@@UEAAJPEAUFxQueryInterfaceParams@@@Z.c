__int64 __fastcall FxUserObject::QueryInterface(FxUserObject *this, FxQueryInterfaceParams *Params)
{
  if ( Params->Type != 4108 )
    return FxObject::QueryInterface(this, Params);
  *Params->Object = this;
  return 0LL;
}
