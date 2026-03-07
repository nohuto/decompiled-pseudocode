void __fastcall FxRegKey::~FxRegKey(FxRegKey *this)
{
  void *m_Key; // rcx

  this->__vftable = (FxRegKey_vtbl *)FxRegKey::`vftable';
  m_Key = this->m_Key;
  if ( m_Key )
  {
    ZwClose(m_Key);
    this->m_Key = 0LL;
  }
  FxPagedObject::~FxPagedObject(this);
}
