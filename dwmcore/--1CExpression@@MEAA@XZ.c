void __fastcall CExpression::~CExpression(CExpression *this)
{
  __int64 i; // rdi

  *(_QWORD *)this = &CExpression::`vftable';
  ReleaseInterface<CSharedSection>((char *)this + 336);
  ReleaseInterface<CSharedSection>((char *)this + 352);
  CExpression::UnregisterSources((struct CBaseExpression **)this);
  for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 106); i = (unsigned int)(i + 1) )
    ReleaseInterface<CWeakReference<CResource>>((__int64 *)(*((_QWORD *)this + 52) + 8 * i));
  operator delete(*((void **)this + 52));
  operator delete(*((void **)this + 54));
  DynArrayImpl<1>::~DynArrayImpl<1>((char *)this + 384);
  CBaseExpression::~CBaseExpression(this);
}
