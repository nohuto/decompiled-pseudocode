/*
 * XREFs of _PinOperationContext::Create_::_1_::dtor$1 @ 0x1801386CF
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$shared_ptr@VUwpAppViewInfo@@@std@@QEAA@XZ @ 0x18011B344 (--1-$shared_ptr@VUwpAppViewInfo@@@std@@QEAA@XZ.c)
 */

void __fastcall PinOperationContext::Create_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  if ( (*(_DWORD *)(a2 + 64) & 1) != 0 )
  {
    *(_DWORD *)(a2 + 64) &= ~1u;
    std::shared_ptr<UwpAppViewInfo>::~shared_ptr<UwpAppViewInfo>(*(_QWORD *)(a2 + 80));
  }
}
