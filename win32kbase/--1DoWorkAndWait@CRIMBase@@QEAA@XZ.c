void __fastcall CRIMBase::DoWorkAndWait::~DoWorkAndWait(CRIMBase::DoWorkAndWait *this)
{
  void *v2; // rcx
  void *v3; // rcx

  v2 = *(void **)this;
  if ( v2 )
    ObfDereferenceObject(v2);
  v3 = (void *)*((_QWORD *)this + 1);
  if ( v3 )
    ObfDereferenceObject(v3);
}
