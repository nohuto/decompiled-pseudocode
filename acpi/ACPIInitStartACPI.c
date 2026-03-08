/*
 * XREFs of ACPIInitStartACPI @ 0x1C00A8DE0
 * Callers:
 *     ACPIRootIrpStartDevice @ 0x1C00AA580 (ACPIRootIrpStartDevice.c)
 * Callees:
 *     ACPIInternalGetDeviceExtension @ 0x1C000155C (ACPIInternalGetDeviceExtension.c)
 *     WPP_RECORDER_SF_ @ 0x1C000ABD8 (WPP_RECORDER_SF_.c)
 *     ACPIBuildSpecialSynchronizationRequest @ 0x1C00137D8 (ACPIBuildSpecialSynchronizationRequest.c)
 *     ACPIPowerScheduleDpc @ 0x1C0022714 (ACPIPowerScheduleDpc.c)
 *     ACPIInternalRegisterPowerCallBack @ 0x1C002ED94 (ACPIInternalRegisterPowerCallBack.c)
 *     ACPIInitialize @ 0x1C00A8F78 (ACPIInitialize.c)
 */

__int64 __fastcall ACPIInitStartACPI(ULONG_PTR BugCheckParameter3)
{
  volatile signed __int64 *DeviceExtension; // rsi
  KIRQL v3; // al
  __int64 result; // rax
  int v5; // ebx
  KIRQL v6; // bl
  KIRQL v7; // al
  int v8; // edx
  struct _KEVENT Event; // [rsp+30h] [rbp-28h] BYREF

  memset(&Event, 0, sizeof(Event));
  DeviceExtension = (volatile signed __int64 *)ACPIInternalGetDeviceExtension(BugCheckParameter3);
  v3 = KeAcquireSpinLockRaiseToDpc(&AcpiDeviceTreeLock);
  _InterlockedAnd64(&AcpiGlobalFlags, 0xFFFFFFFFFFFFFFFEuLL);
  KeReleaseSpinLock(&AcpiDeviceTreeLock, v3);
  KeInitializeEvent(&Event, SynchronizationEvent, 0);
  result = ACPIBuildSpecialSynchronizationRequest(
             (__int64)DeviceExtension,
             (__int64)ACPIInitPowerRequestCompletion,
             (__int64)&Event,
             127,
             0);
  v5 = result;
  if ( (int)result >= 0 )
  {
    if ( (unsigned __int8)ACPIInitialize(BugCheckParameter3) )
    {
      if ( v5 == 259 )
        KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
      ACPIInternalRegisterPowerCallBack(DeviceExtension, (PCALLBACK_FUNCTION)ACPIRootPowerCallBack);
      v6 = KeAcquireSpinLockRaiseToDpc(&AcpiPowerQueueLock);
      ACPIPowerScheduleDpc();
      KeReleaseSpinLock(&AcpiPowerQueueLock, v6);
      v7 = KeAcquireSpinLockRaiseToDpc(&AcpiDeviceTreeLock);
      _InterlockedOr64(&AcpiGlobalFlags, 1uLL);
      KeReleaseSpinLock(&AcpiDeviceTreeLock, v7);
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v8) = 4;
        WPP_RECORDER_SF_(
          WPP_GLOBAL_Control->DeviceExtension,
          v8,
          1,
          19,
          (__int64)&WPP_94a568583922335cc08c125c0dbec1dc_Traceguids);
      }
      return 0LL;
    }
    else
    {
      return 3221225664LL;
    }
  }
  return result;
}
