/*
 * XREFs of _VirtualTouchpadContextProvider::Create_::_1_::dtor$1 @ 0x180145C80
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall VirtualTouchpadContextProvider::Create_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  GestureSession::operator delete(*(void **)(a2 + 56));
}
