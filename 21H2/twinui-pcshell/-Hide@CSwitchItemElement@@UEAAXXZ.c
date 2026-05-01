/*
 * XREFs of ?Hide@CSwitchItemElement@@UEAAXXZ @ 0x1804108B0
 * Callers:
 *     <none>
 * Callees:
 *     ?Hide@CMultitaskingViewElementBase@@UEAAXXZ @ 0x180412A90 (-Hide@CMultitaskingViewElementBase@@UEAAXXZ.c)
 */

void __fastcall CSwitchItemElement::Hide(CSwitchItemElement *this)
{
  CMultitaskingViewElementBase::Hide(this);
  (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 76) + 144LL))(*((_QWORD *)this + 76));
}
