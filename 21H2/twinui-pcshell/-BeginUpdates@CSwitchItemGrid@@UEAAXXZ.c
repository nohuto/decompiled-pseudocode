/*
 * XREFs of ?BeginUpdates@CSwitchItemGrid@@UEAAXXZ @ 0x18008E4C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CSwitchItemGrid::BeginUpdates(CSwitchItemGrid *this)
{
  _InterlockedIncrement((volatile signed __int32 *)this + 180);
}
