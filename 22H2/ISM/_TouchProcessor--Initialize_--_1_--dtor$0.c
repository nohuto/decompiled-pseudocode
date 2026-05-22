/*
 * XREFs of _TouchProcessor::Initialize_::_1_::dtor$0 @ 0x1801996F6
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall TouchProcessor::Initialize_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  GestureSession::operator delete(*(void **)(a2 + 48));
}
