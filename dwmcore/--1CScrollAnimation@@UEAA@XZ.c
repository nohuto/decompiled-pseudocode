void __fastcall CScrollAnimation::~CScrollAnimation(CScrollAnimation *this)
{
  *(_QWORD *)this = &CScrollAnimation::`vftable';
  CScrollAnimation::Stop(this);
  ReleaseInterface<CWeakReference<CResource>>((__int64 *)this + 44);
  DynArrayImpl<0>::~DynArrayImpl<0>((__int64)this + 400);
  CBaseExpression::~CBaseExpression(this);
}
