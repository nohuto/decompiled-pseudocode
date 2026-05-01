/*
 * XREFs of _KeyboardHosting::TabTipAdapter::TabTipAdapter_::_1_::dtor$12 @ 0x1803C9E17
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall KeyboardHosting::TabTipAdapter::TabTipAdapter_::_1_::dtor_12(__int64 a1, __int64 a2)
{
  wil::critical_section::~critical_section((LPCRITICAL_SECTION)(*(_QWORD *)(a2 + 48) + 400LL));
}
