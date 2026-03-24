/*
 * XREFs of ?Destroy@CLeakTrackingAllocator@NSInstrumentation@@SAXPEAV12@@Z @ 0x1C01348C4
 * Callers:
 *     UninitializeWin32PoolTracking @ 0x1C0134860 (UninitializeWin32PoolTracking.c)
 * Callees:
 *     ?Destroy@CPointerHashTable@NSInstrumentation@@SAXPEAV12@@Z @ 0x1C0132850 (-Destroy@CPointerHashTable@NSInstrumentation@@SAXPEAV12@@Z.c)
 *     ?Destroy@?$CSortedVector@PEAXPEAX@NSInstrumentation@@SAXPEAV12@@Z @ 0x1C02DDDE0 (-Destroy@-$CSortedVector@PEAXPEAX@NSInstrumentation@@SAXPEAV12@@Z.c)
 *     ?Uninitialize@?$CSharedStorage@VCBackTraceBucket@NSInstrumentation@@$$CCJVCBackTraceStorageUnit@2@VCBackTrace@2@@NSInstrumentation@@QEAAXXZ @ 0x1C02DEC6C (-Uninitialize@-$CSharedStorage@VCBackTraceBucket@NSInstrumentation@@$$CCJVCBackTraceStorageUnit@.c)
 */

void __fastcall NSInstrumentation::CLeakTrackingAllocator::Destroy(
        struct NSInstrumentation::CLeakTrackingAllocator *a1)
{
  PDRIVER_CONTROL DeviceRoutine; // rbx
  _QWORD *v2; // rcx
  void *v3; // rcx
  void *v4; // rdi

  DeviceRoutine = WPP_MAIN_CB.Queue.Wcb.DeviceRoutine;
  if ( *((_BYTE *)WPP_MAIN_CB.Queue.Wcb.DeviceRoutine + 72) )
  {
    v2 = (_QWORD *)*((_QWORD *)WPP_MAIN_CB.Queue.Wcb.DeviceRoutine + 6);
    if ( v2 )
      NSInstrumentation::CPointerHashTable::Destroy(v2);
    v3 = (void *)*((_QWORD *)DeviceRoutine + 7);
    if ( v3 )
      NSInstrumentation::CSortedVector<void *,void *>::Destroy(v3);
    v4 = (void *)*((_QWORD *)DeviceRoutine + 8);
    if ( v4 )
    {
      NSInstrumentation::CSharedStorage<NSInstrumentation::CBackTraceBucket,long volatile,NSInstrumentation::CBackTraceStorageUnit,NSInstrumentation::CBackTrace>::Uninitialize(*((_QWORD *)DeviceRoutine + 8));
      ExFreePoolWithTag(v4, 0);
    }
    ExFreePoolWithTag(DeviceRoutine, 0);
  }
}
