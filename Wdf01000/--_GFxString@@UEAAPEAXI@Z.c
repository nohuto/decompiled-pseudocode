FxString *__fastcall FxString::`scalar deleting destructor'(FxString *this, unsigned int a2, unsigned int a3)
{
  char v3; // bl
  FxString *v5; // rcx

  v3 = a2;
  FxString::~FxString(this, a2, a3);
  if ( (v3 & 1) != 0 )
  {
    v5 = (FxString *)((char *)this - 48);
    if ( SLOBYTE(this->m_ObjectFlags) >= 0 )
      v5 = this;
    FxPoolFree((FX_POOL_TRACKER *)v5);
  }
  return this;
}
