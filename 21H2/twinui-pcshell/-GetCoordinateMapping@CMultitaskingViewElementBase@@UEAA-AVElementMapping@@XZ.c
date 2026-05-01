/*
 * XREFs of ?GetCoordinateMapping@CMultitaskingViewElementBase@@UEAA?AVElementMapping@@XZ @ 0x18008E440
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_QWORD *__fastcall CMultitaskingViewElementBase::GetCoordinateMapping(__int64 a1, _QWORD *a2)
{
  __int64 v3; // [rsp+8h] [rbp+8h]

  LODWORD(v3) = -*(_DWORD *)(a1 + 56);
  HIDWORD(v3) = -*(_DWORD *)(a1 + 60);
  *a2 = v3;
  return a2;
}
