int __fastcall FxRequest::QueryInterface(FxRequest *this, FxQueryInterfaceParams *Params)
{
  unsigned __int16 Offset; // ax

  if ( Params->Type != 4104 )
  {
    if ( Params->Type != 4106 )
      return FxObject::QueryInterface(this, Params);
    Offset = Params->Offset;
    if ( Offset == 216 )
    {
      this = (FxRequest *)((char *)this + 256);
    }
    else
    {
      if ( Offset != 232 )
        return FxObject::QueryInterface(this, Params);
      this = (FxRequest *)((char *)this + 272);
    }
  }
  *Params->Object = this;
  return 0;
}
