/*
 * XREFs of PointerPromotionGetCurrentPointerId @ 0x1C0149670
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall PointerPromotionGetCurrentPointerId(__int64 a1)
{
  return *(unsigned __int16 *)(SGDGetUserSessionState(a1) + 16056);
}
