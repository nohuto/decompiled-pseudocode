/*
 * XREFs of _privateCreateSpatialCrossProcessEndpoint_::_1_::dtor$0 @ 0x140066D76
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall privateCreateSpatialCrossProcessEndpoint_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  CCrossProcessClientOutputEndpoint::operator delete(*(void **)(a2 + 32));
}
