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
