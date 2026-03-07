FxRequest *__fastcall FxRequest::`scalar deleting destructor'(FxRequest *this, unsigned int a2)
{
  char v2; // bl
  FxRequest *v4; // rcx

  v2 = a2;
  FxRequestBase::~FxRequestBase(this, a2);
  if ( (v2 & 1) != 0 )
  {
    v4 = (FxRequest *)((char *)this - 48);
    if ( SLOBYTE(this->m_ObjectFlags) >= 0 )
      v4 = this;
    FxPoolFree(v4);
  }
  return this;
}
