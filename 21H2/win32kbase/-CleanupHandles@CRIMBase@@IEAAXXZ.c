/*
 * XREFs of ?CleanupHandles@CRIMBase@@IEAAXXZ @ 0x1C004A8F4
 * Callers:
 *     CleanupSensorExplicitly @ 0x1C004AB10 (CleanupSensorExplicitly.c)
 * Callees:
 *     RIMUnregisterForInput @ 0x1C0047ED0 (RIMUnregisterForInput.c)
 *     ?CloseDispatcherHandles@SensorDispatcherObject@CRIMBase@@QEAAXXZ @ 0x1C004A9C0 (-CloseDispatcherHandles@SensorDispatcherObject@CRIMBase@@QEAAXXZ.c)
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C00891DC (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 *     ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x1C0096098 (-ReleaseLock@CPushLock@@QEBAXXZ.c)
 *     ?AcquireLockExclusive@CPushLock@@QEAAJXZ @ 0x1C0096160 (-AcquireLockExclusive@CPushLock@@QEAAJXZ.c)
 */

void __fastcall CRIMBase::CleanupHandles(CRIMBase *this)
{
  CRIMBase::SensorDispatcherObject *v1; // rbx
  CRIMBase::SensorDispatcherObject *v3; // rsi
  char *v4; // rcx
  void *v5; // rdx
  void *v6; // rcx
  char *v7; // rdx

  v1 = (CRIMBase *)((char *)this + 168);
  v3 = (CRIMBase *)((char *)this + 1256);
  while ( v1 != v3 )
  {
    CRIMBase::SensorDispatcherObject::CloseDispatcherHandles(v1);
    v1 = (CRIMBase::SensorDispatcherObject *)((char *)v1 + 64);
  }
  v4 = (char *)*((_QWORD *)this + 1);
  if ( v4 != (char *)-1LL )
  {
    RIMUnregisterForInput(v4);
    ObCloseHandle(*((HANDLE *)this + 1), 1);
    *((_QWORD *)this + 1) = -1LL;
  }
  if ( *((_QWORD *)this + 2) )
  {
    CPushLock::AcquireLockExclusive((CRIMBase *)((char *)this + 152));
    ObfDereferenceObject(*((PVOID *)this + 2));
    *((_QWORD *)this + 2) = 0LL;
    CPushLock::ReleaseLock((CRIMBase *)((char *)this + 152));
  }
  v5 = (void *)*((_QWORD *)this + 8);
  v6 = v5;
  if ( v5 && v5 != *((void **)this + 9) )
  {
    NSInstrumentation::CLeakTrackingAllocator::Free(
      (NSInstrumentation::CLeakTrackingAllocator *)gpLeakTrackingAllocator,
      v5);
    v6 = 0LL;
    *((_QWORD *)this + 8) = 0LL;
  }
  v7 = (char *)*((_QWORD *)this + 9);
  if ( v7 != (char *)this + 80 )
  {
    if ( v7 )
    {
      NSInstrumentation::CLeakTrackingAllocator::Free(
        (NSInstrumentation::CLeakTrackingAllocator *)gpLeakTrackingAllocator,
        v7);
      v6 = (void *)*((_QWORD *)this + 8);
    }
    *((_QWORD *)this + 9) = 0LL;
    *((_DWORD *)this + 14) = 0;
    if ( v6 )
      *((_QWORD *)this + 8) = 0LL;
  }
}
