void __fastcall CLockProcessByPid::~CLockProcessByPid(void **this)
{
  void *v1; // rcx

  v1 = *this;
  if ( v1 )
    ObfDereferenceObject(v1);
}
