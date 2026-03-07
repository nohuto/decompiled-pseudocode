void __fastcall CInjectionAnimation::~CInjectionAnimation(void **this)
{
  *this = &CInjectionAnimation::`vftable';
  operator delete(this[42]);
  CBaseExpression::~CBaseExpression((CBaseExpression *)this);
}
