/*
 * XREFs of ?GetTotalRect@CSwitchItemGrid@@UEAA?AUCRect@Geometry@@XZ @ 0x18008E4F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_OWORD *__fastcall CSwitchItemGrid::GetTotalRect(__int64 a1, _OWORD *a2)
{
  _OWORD *result; // rax

  result = a2;
  *a2 = *(_OWORD *)(a1 + 560);
  return result;
}
