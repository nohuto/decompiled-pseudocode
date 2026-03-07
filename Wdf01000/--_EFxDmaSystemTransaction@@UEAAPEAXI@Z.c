FxPackage *__fastcall FxDmaSystemTransaction::`vector deleting destructor'(FxPackage *this, unsigned int a2)
{
  char v2; // bl
  FxPackage *v4; // rcx

  v2 = a2;
  FxNonPagedObject::~FxNonPagedObject(this, a2);
  if ( (v2 & 1) != 0 )
  {
    v4 = (FxPackage *)((char *)this - 48);
    if ( SLOBYTE(this->m_ObjectFlags) >= 0 )
      v4 = this;
    FxPoolFree((FX_POOL_TRACKER *)v4);
  }
  return this;
}
