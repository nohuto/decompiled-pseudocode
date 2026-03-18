/*
 * XREFs of ?Release@RIMDeadzone@@QEAAXXZ @ 0x1C01A293C
 * Callers:
 *     RIMFreeSpecificDevWorker @ 0x1C00B7910 (RIMFreeSpecificDevWorker.c)
 *     RIMDestroyPointerDeviceDeadzone @ 0x1C0188C50 (RIMDestroyPointerDeviceDeadzone.c)
 *     rimDestroyDeadzone @ 0x1C018F0F4 (rimDestroyDeadzone.c)
 *     RIMInitializeDeadzone @ 0x1C01940B0 (RIMInitializeDeadzone.c)
 *     ?Initialize@RIMDeadzone@@QEAAJPEBUtagRIMDEADZONE@@@Z @ 0x1C01A1FA4 (-Initialize@RIMDeadzone@@QEAAJPEBUtagRIMDEADZONE@@@Z.c)
 *     ?_InitializeLeftHandedDeadzone@RIMDeadzone@@AEAAJXZ @ 0x1C01A2C44 (-_InitializeLeftHandedDeadzone@RIMDeadzone@@AEAAJXZ.c)
 *     ?_InitializeRightHandedDeadzone@RIMDeadzone@@AEAAJXZ @ 0x1C01A2F18 (-_InitializeRightHandedDeadzone@RIMDeadzone@@AEAAJXZ.c)
 * Callees:
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C00891DC (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 *     ?_ClearDeadzoneAreas@RIMDeadzone@@AEAAXXZ @ 0x1C01A2AF0 (-_ClearDeadzoneAreas@RIMDeadzone@@AEAAXXZ.c)
 *     ?ClearSession@DeadzonePalmTelemetry@@QEAAXXZ @ 0x1C01B7010 (-ClearSession@DeadzonePalmTelemetry@@QEAAXXZ.c)
 */

void __fastcall RIMDeadzone::Release(DeadzonePalmTelemetry **this)
{
  DeadzonePalmTelemetry *v3; // rcx
  char *v4; // rdx

  if ( (*((_DWORD *)this + 1))-- == 1 )
  {
    RIMDeadzone::_ClearDeadzoneAreas((RIMDeadzone *)this);
    v3 = this[7];
    if ( v3 )
    {
      DeadzonePalmTelemetry::ClearSession(v3);
      v4 = (char *)this[7];
      if ( v4 )
        NSInstrumentation::CLeakTrackingAllocator::Free(
          (NSInstrumentation::CLeakTrackingAllocator *)gpLeakTrackingAllocator,
          v4);
    }
  }
}
