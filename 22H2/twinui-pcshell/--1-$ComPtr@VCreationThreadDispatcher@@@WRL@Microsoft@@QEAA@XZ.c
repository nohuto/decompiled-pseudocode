/*
 * XREFs of ??1?$ComPtr@VCreationThreadDispatcher@@@WRL@Microsoft@@QEAA@XZ @ 0x1802569A0
 * Callers:
 *     _wil::MakeAndInitializeOrThrow_CreationThreadDispatcher__::_1_::dtor$0 @ 0x180392D47 (_wil--MakeAndInitializeOrThrow_CreationThreadDispatcher__--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall Microsoft::WRL::ComPtr<CreationThreadDispatcher>::~ComPtr<CreationThreadDispatcher>(__int64 a1)
{
  return Microsoft::WRL::ComPtr<CreationThreadDispatcher>::InternalRelease(a1);
}
