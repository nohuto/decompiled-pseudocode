/*
 * XREFs of ?UnLockExclusive@tagDomLock@@QEBAXXZ @ 0x1C008B0B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall tagDomLock::UnLockExclusive(PERESOURCE *this)
{
  ExReleaseResourceAndLeaveCriticalRegion(*this);
}
