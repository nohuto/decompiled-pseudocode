/*
 * XREFs of _PinOperationContext::Create_::_1_::dtor$1_0 @ 0x1801386BC
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$shared_ptr@VUwpAppViewInfo@@@std@@QEAA@XZ @ 0x18011B1D4 (--1-$shared_ptr@VUwpAppViewInfo@@@std@@QEAA@XZ.c)
 */

void __fastcall PinOperationContext::Create_::_1_::dtor_1_0(__int64 a1, __int64 a2)
{
  if ( (*(_DWORD *)(a2 + 48) & 1) != 0 )
  {
    *(_DWORD *)(a2 + 48) &= ~1u;
    std::shared_ptr<UwpAppViewInfo>::~shared_ptr<UwpAppViewInfo>(*(_QWORD *)(a2 + 56));
  }
}
