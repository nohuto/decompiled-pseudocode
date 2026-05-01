/*
 * XREFs of ?Hide@CSwitchItemElement@@UEAAXXZ @ 0x180410520
 * Callers:
 *     <none>
 * Callees:
 *     ?Hide@CMultitaskingViewElementBase@@UEAAXXZ @ 0x180412700 (-Hide@CMultitaskingViewElementBase@@UEAAXXZ.c)
 */

void __fastcall CSwitchItemElement::Hide(CSwitchItemElement *this)
{
  CMultitaskingViewElementBase::Hide(this);
  (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 76) + 144LL))(*((_QWORD *)this + 76));
}
