/*
 * XREFs of _CPinnedList::EnumAllObjects_::_1_::dtor$1 @ 0x180154ED5
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CPinnedList::EnumAllObjects_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  operator delete(*(void **)(a2 + 32));
}
