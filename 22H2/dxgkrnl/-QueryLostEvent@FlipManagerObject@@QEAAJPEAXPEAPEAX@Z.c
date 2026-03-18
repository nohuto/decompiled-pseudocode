/*
 * XREFs of ?QueryLostEvent@FlipManagerObject@@QEAAJPEAXPEAPEAX@Z @ 0x1C00801C0
 * Callers:
 *     NtFlipObjectQueryLostEvent @ 0x1C00814A0 (NtFlipObjectQueryLostEvent.c)
 * Callees:
 *     ?AcquireLockExclusive@CPushLock@@QEAAJXZ @ 0x1C0013814 (-AcquireLockExclusive@CPushLock@@QEAAJXZ.c)
 *     ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x1C0013858 (-ReleaseLock@CPushLock@@QEBAXXZ.c)
 */

__int64 __fastcall FlipManagerObject::QueryLostEvent(PVOID *this, void *a2, void **a3)
{
  NTSTATUS v5; // ebx

  v5 = CPushLock::AcquireLockExclusive((CPushLock *)(this + 5));
  if ( v5 >= 0 )
  {
    v5 = ObOpenObjectByPointer(this[44], 0, 0LL, 0x100001u, (POBJECT_TYPE)ExEventObjectType, 1, a3);
    CPushLock::ReleaseLock((CPushLock *)(this + 5));
  }
  return (unsigned int)v5;
}
