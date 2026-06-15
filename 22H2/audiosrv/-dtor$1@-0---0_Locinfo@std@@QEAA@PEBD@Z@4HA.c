/*
 * XREFs of ?dtor$1@?0???0_Locinfo@std@@QEAA@PEBD@Z@4HA @ 0x18007A07C
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall `std::_Locinfo::_Locinfo'::`1'::dtor$1(__int64 a1, __int64 a2)
{
  DeleteCriticalSection((LPCRITICAL_SECTION)(*(_QWORD *)(a2 + 48) + 8LL));
}
