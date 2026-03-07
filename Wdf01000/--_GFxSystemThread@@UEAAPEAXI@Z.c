FxSystemThread *__fastcall FxSystemThread::`scalar deleting destructor'(FxSystemThread *this, unsigned int a2)
{
  char v2; // bl
  FxSystemThread *v4; // rcx

  v2 = a2;
  this->__vftable = (FxSystemThread_vtbl *)FxSystemThread::`vftable';
  FxNonPagedObject::~FxNonPagedObject(this, a2);
  if ( (v2 & 1) != 0 )
  {
    v4 = (FxSystemThread *)((char *)this - 48);
    if ( SLOBYTE(this->m_ObjectFlags) >= 0 )
      v4 = this;
    FxPoolFree((FX_POOL_TRACKER *)v4);
  }
  return this;
}
