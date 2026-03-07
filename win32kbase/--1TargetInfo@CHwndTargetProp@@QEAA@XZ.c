void __fastcall CHwndTargetProp::TargetInfo::~TargetInfo(void **this)
{
  void *v2; // rcx

  v2 = *this;
  if ( v2 )
  {
    ObfDereferenceObject(v2);
    *this = 0LL;
  }
}
