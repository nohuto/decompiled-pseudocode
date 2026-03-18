/*
 * XREFs of ?Release@RIMDeadzone@@QEAAXXZ @ 0x1C019BD24
 * Callers:
 *     RIMFreeSpecificDevWorker @ 0x1C0071424 (RIMFreeSpecificDevWorker.c)
 *     RIMDestroyPointerDeviceDeadzone @ 0x1C017DC30 (RIMDestroyPointerDeviceDeadzone.c)
 *     rimDestroyDeadzone @ 0x1C0185CAC (rimDestroyDeadzone.c)
 *     RIMInitializeDeadzone @ 0x1C018A6C4 (RIMInitializeDeadzone.c)
 *     ?Initialize@RIMDeadzone@@QEAAJPEBUtagRIMDEADZONE@@@Z @ 0x1C019B184 (-Initialize@RIMDeadzone@@QEAAJPEBUtagRIMDEADZONE@@@Z.c)
 *     ?_InitializeLeftHandedDeadzone@RIMDeadzone@@AEAAJXZ @ 0x1C019C0CC (-_InitializeLeftHandedDeadzone@RIMDeadzone@@AEAAJXZ.c)
 *     ?_InitializeRightHandedDeadzone@RIMDeadzone@@AEAAJXZ @ 0x1C019C4D8 (-_InitializeRightHandedDeadzone@RIMDeadzone@@AEAAJXZ.c)
 * Callees:
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C008C460 (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 *     ?_ClearDeadzoneAreas@RIMDeadzone@@AEAAXXZ @ 0x1C019BF5C (-_ClearDeadzoneAreas@RIMDeadzone@@AEAAXXZ.c)
 *     ?ClearSession@DeadzonePalmTelemetry@@QEAAXXZ @ 0x1C01B1128 (-ClearSession@DeadzonePalmTelemetry@@QEAAXXZ.c)
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
