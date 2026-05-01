/*
 * XREFs of _GetPinnablePidl_::_1_::dtor$0 @ 0x180139FB0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall GetPinnablePidl_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  return winrt::com_ptr<IStream>::~com_ptr<IStream>((_QWORD *)(a2 + 112));
}
