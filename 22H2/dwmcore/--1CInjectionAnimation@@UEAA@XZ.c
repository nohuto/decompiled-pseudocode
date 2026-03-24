/*
 * XREFs of ??1CInjectionAnimation@@UEAA@XZ @ 0x1801C48AC
 * Callers:
 *     ??_ECInjectionAnimation@@UEAAPEAXI@Z @ 0x1801C48E0 (--_ECInjectionAnimation@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x180094C0C (--3@YAXPEAX@Z.c)
 */

void __fastcall CInjectionAnimation::~CInjectionAnimation(void **this)
{
  *this = &CInjectionAnimation::`vftable';
  operator delete(this[39]);
  CBaseExpression::~CBaseExpression((CBaseExpression *)this);
}
