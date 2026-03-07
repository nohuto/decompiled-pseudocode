FxWmiProvider *__fastcall FxWmiProvider::`vector deleting destructor'(FxWmiProvider *this, unsigned int a2)
{
  char v2; // bl
  FxWmiProvider *v4; // rcx

  v2 = a2;
  this->__vftable = (FxWmiProvider_vtbl *)FxWmiProvider::`vftable';
  FxNonPagedObject::~FxNonPagedObject(this, a2);
  if ( (v2 & 1) != 0 )
  {
    v4 = (FxWmiProvider *)((char *)this - 48);
    if ( SLOBYTE(this->m_ObjectFlags) >= 0 )
      v4 = this;
    FxPoolFree((FX_POOL_TRACKER *)v4);
  }
  return this;
}
