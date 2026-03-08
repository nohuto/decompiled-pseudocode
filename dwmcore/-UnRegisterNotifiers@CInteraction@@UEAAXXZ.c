/*
 * XREFs of ?UnRegisterNotifiers@CInteraction@@UEAAXXZ @ 0x180209B00
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CInteraction::UnRegisterNotifiers(CInteraction *this)
{
  ReleaseInterface<CWeakReference<CVisual>>((__int64 *)this + 14);
}
