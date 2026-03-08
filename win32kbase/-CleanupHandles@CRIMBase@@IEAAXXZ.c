/*
 * XREFs of ?CleanupHandles@CRIMBase@@IEAAXXZ @ 0x1C00315C4
 * Callers:
 *     CleanupSensorExplicitly @ 0x1C0031540 (CleanupSensorExplicitly.c)
 * Callees:
 *     ?CloseDispatcherHandles@SensorDispatcherObject@CRIMBase@@QEAAXXZ @ 0x1C003168C (-CloseDispatcherHandles@SensorDispatcherObject@CRIMBase@@QEAAXXZ.c)
 *     RIMUnregisterForInput @ 0x1C00326C0 (RIMUnregisterForInput.c)
 *     ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x1C006AE58 (-ReleaseLock@CPushLock@@QEBAXXZ.c)
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C009B7C0 (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 *     ?AcquireLockExclusive@CPushLock@@QEAAJXZ @ 0x1C00AB5F0 (-AcquireLockExclusive@CPushLock@@QEAAJXZ.c)
 */

void __fastcall CRIMBase::CleanupHandles(HANDLE *this)
{
  CRIMBase::SensorDispatcherObject *v1; // rbx
  CRIMBase::SensorDispatcherObject *v3; // rsi
  HANDLE v4; // rdx
  HANDLE *v5; // rdx

  v1 = (CRIMBase::SensorDispatcherObject *)(this + 21);
  v3 = (CRIMBase::SensorDispatcherObject *)(this + 165);
  while ( v1 != v3 )
  {
    CRIMBase::SensorDispatcherObject::CloseDispatcherHandles(v1);
    v1 = (CRIMBase::SensorDispatcherObject *)((char *)v1 + 64);
  }
  if ( this[1] != (HANDLE)-1LL )
  {
    RIMUnregisterForInput();
    ObCloseHandle(this[1], 1);
    this[1] = (HANDLE)-1LL;
  }
  if ( this[2] )
  {
    CPushLock::AcquireLockExclusive((CPushLock *)(this + 19));
    ObfDereferenceObject(this[2]);
    this[2] = 0LL;
    CPushLock::ReleaseLock((CPushLock *)(this + 19));
  }
  v4 = this[8];
  if ( v4 && v4 != this[9] )
  {
    NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, v4);
    this[8] = 0LL;
  }
  v5 = (HANDLE *)this[9];
  if ( v5 != this + 10 )
  {
    if ( v5 )
      NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, v5);
    this[9] = 0LL;
    *((_DWORD *)this + 14) = 0;
    if ( this[8] )
      this[8] = 0LL;
  }
}
