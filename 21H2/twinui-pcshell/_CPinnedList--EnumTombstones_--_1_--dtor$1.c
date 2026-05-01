/*
 * XREFs of _CPinnedList::EnumTombstones_::_1_::dtor$1 @ 0x180155262
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CPinnedList::EnumTombstones_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  operator delete(*(void **)(a2 + 32));
}
