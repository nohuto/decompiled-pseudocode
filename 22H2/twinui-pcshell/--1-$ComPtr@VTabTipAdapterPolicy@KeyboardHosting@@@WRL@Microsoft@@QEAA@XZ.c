/*
 * XREFs of ??1?$ComPtr@VTabTipAdapterPolicy@KeyboardHosting@@@WRL@Microsoft@@QEAA@XZ @ 0x1803C9EB4
 * Callers:
 *     _Microsoft::WRL::Details::MakeAndInitialize_KeyboardHosting::TabTipAdapterPolicy_KeyboardHosting::TabTipAdapterPolicy__::_1_::dtor$2 @ 0x1803C7375 (_Microsoft--WRL--Details--MakeAndInitialize_KeyboardHosting--TabTipAdapterPolicy_Ke_ea_1803C7375.c)
 *     _KeyboardHosting::TabTipAdapter::TabTipAdapter_::_1_::dtor$10 @ 0x1803C9B24 (_KeyboardHosting--TabTipAdapter--TabTipAdapter_--_1_--dtor$10.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall Microsoft::WRL::ComPtr<KeyboardHosting::TabTipAdapterPolicy>::~ComPtr<KeyboardHosting::TabTipAdapterPolicy>(
        __int64 a1)
{
  return Microsoft::WRL::ComPtr<KeyboardHosting::TabTipAdapterPolicy>::InternalRelease(a1);
}
