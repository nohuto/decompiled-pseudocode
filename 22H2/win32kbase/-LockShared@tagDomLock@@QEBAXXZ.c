/*
 * XREFs of ?LockShared@tagDomLock@@QEBAXXZ @ 0x1C00813D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall tagDomLock::LockShared(PERESOURCE *this)
{
  ExEnterCriticalRegionAndAcquireResourceShared(*this);
}
