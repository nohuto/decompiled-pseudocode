/*
 * XREFs of ??1ComboButtonRegistration@@QEAA@XZ @ 0x1801730FC
 * Callers:
 *     _ButtonRecognizer::RegisterComboButton_::_1_::dtor$1 @ 0x1801741CF (_ButtonRecognizer--RegisterComboButton_--_1_--dtor$1.c)
 * Callees:
 *     <none>
 */

void __fastcall ComboButtonRegistration::~ComboButtonRegistration(ComboButtonRegistration *this)
{
  std::vector<Windows::UI::Color>::_Tidy((__int64)this + 8);
}
