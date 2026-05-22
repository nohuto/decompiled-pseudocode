/*
 * XREFs of _Win32kInterop::ProcessInputMessage_::_1_::dtor$7 @ 0x1800B1BD6
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall Win32kInterop::ProcessInputMessage_::_1_::dtor_7(__int64 a1, __int64 a2)
{
  return Microsoft::WRL::ComPtr<ICursor>::~ComPtr<ICursor>((__int64 *)(a2 + 96));
}
