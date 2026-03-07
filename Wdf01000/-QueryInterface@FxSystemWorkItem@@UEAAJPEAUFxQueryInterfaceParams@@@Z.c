__int64 __fastcall FxSystemWorkItem::QueryInterface(FxSystemWorkItem *this, FxQueryInterfaceParams *Params)
{
  if ( Params->Type != 4145 )
    return FxObject::QueryInterface(this, Params);
  *Params->Object = this;
  return 0LL;
}
