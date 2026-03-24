/*
 * XREFs of ?IsWorkerThreadOfExclusiveOwner@DXGADAPTER@@AEBAEXZ @ 0x1C0004F70
 * Callers:
 *     ?AcquireExclusive@COREACCESS@@QEAAXW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@IPEAD@Z @ 0x1C000287C (-AcquireExclusive@COREACCESS@@QEAAXW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@IPEAD@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall DXGADAPTER::IsWorkerThreadOfExclusiveOwner(struct _KTHREAD **this)
{
  return KeGetCurrentThread() == this[23];
}
