/*
 * XREFs of _WindowEventDispatcher::GetSharedListener_::_1_::dtor$2 @ 0x180172988
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$shared_ptr@VUwpAppViewInfo@@@std@@QEAA@XZ @ 0x18011B1D4 (--1-$shared_ptr@VUwpAppViewInfo@@@std@@QEAA@XZ.c)
 */

void __fastcall WindowEventDispatcher::GetSharedListener_::_1_::dtor_2(__int64 a1, __int64 a2)
{
  if ( (*(_DWORD *)(a2 + 32) & 1) != 0 )
  {
    *(_DWORD *)(a2 + 32) &= ~1u;
    std::shared_ptr<UwpAppViewInfo>::~shared_ptr<UwpAppViewInfo>(*(_QWORD *)(a2 + 104));
  }
}
