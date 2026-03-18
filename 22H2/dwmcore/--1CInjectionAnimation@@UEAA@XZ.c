/*
 * XREFs of ??1CInjectionAnimation@@UEAA@XZ @ 0x18022F090
 * Callers:
 *     ??_ECInjectionAnimation@@UEAAPEAXI@Z @ 0x18022F0D0 (--_ECInjectionAnimation@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1800895A4 (--3@YAXPEAX@Z.c)
 */

void __fastcall CInjectionAnimation::~CInjectionAnimation(void **this)
{
  *this = &CInjectionAnimation::`vftable';
  operator delete(this[42]);
  CBaseExpression::~CBaseExpression((CBaseExpression *)this);
}
