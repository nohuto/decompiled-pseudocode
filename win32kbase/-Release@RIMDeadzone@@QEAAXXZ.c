/*
 * XREFs of ?Release@RIMDeadzone@@QEAAXXZ @ 0x1C01C9904
 * Callers:
 *     RIMFreeSpecificDevWorker @ 0x1C0034C6C (RIMFreeSpecificDevWorker.c)
 *     RIMDestroyPointerDeviceDeadzone @ 0x1C01AAB90 (RIMDestroyPointerDeviceDeadzone.c)
 *     rimDestroyDeadzone @ 0x1C01B2AC8 (rimDestroyDeadzone.c)
 *     RIMInitializeDeadzone @ 0x1C01B83A8 (RIMInitializeDeadzone.c)
 *     ?Initialize@RIMDeadzone@@QEAAJPEBUtagRIMDEADZONE@@@Z @ 0x1C01C8D64 (-Initialize@RIMDeadzone@@QEAAJPEBUtagRIMDEADZONE@@@Z.c)
 *     ?_InitializeLeftHandedDeadzone@RIMDeadzone@@AEAAJXZ @ 0x1C01C9CAC (-_InitializeLeftHandedDeadzone@RIMDeadzone@@AEAAJXZ.c)
 *     ?_InitializeRightHandedDeadzone@RIMDeadzone@@AEAAJXZ @ 0x1C01CA0B8 (-_InitializeRightHandedDeadzone@RIMDeadzone@@AEAAJXZ.c)
 * Callees:
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C009B7C0 (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 *     ?_ClearDeadzoneAreas@RIMDeadzone@@AEAAXXZ @ 0x1C01C9B3C (-_ClearDeadzoneAreas@RIMDeadzone@@AEAAXXZ.c)
 *     ?ClearSession@DeadzonePalmTelemetry@@QEAAXXZ @ 0x1C01DF358 (-ClearSession@DeadzonePalmTelemetry@@QEAAXXZ.c)
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
        NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, v4);
    }
  }
}
