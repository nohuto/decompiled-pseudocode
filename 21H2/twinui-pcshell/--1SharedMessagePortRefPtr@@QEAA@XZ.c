/*
 * XREFs of ??1SharedMessagePortRefPtr@@QEAA@XZ @ 0x1804D7630
 * Callers:
 *     _KeyboardHosting::TabTipAdapter::RuntimeClassInitialize_::_1_::dtor$0 @ 0x1803D2782 (_KeyboardHosting--TabTipAdapter--RuntimeClassInitialize_--_1_--dtor$0.c)
 * Callees:
 *     ?Release@SharedMessagePortRefPtr@@QEAAXXZ @ 0x1804D78E4 (-Release@SharedMessagePortRefPtr@@QEAAXXZ.c)
 */

void __fastcall SharedMessagePortRefPtr::~SharedMessagePortRefPtr(SharedMessagePortRefPtr *this)
{
  SharedMessagePortRefPtr::Release(this);
}
