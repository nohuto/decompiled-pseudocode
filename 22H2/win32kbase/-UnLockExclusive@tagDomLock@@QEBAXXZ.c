/*
 * XREFs of ?UnLockExclusive@tagDomLock@@QEBAXXZ @ 0x1C0094840
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall tagDomLock::UnLockExclusive(PERESOURCE *this)
{
  ExReleaseResourceAndLeaveCriticalRegion(*this);
}
