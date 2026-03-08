/*
 * XREFs of CsInitialize @ 0x1C000E0B0
 * Callers:
 *     DriverEntry @ 0x1C000E080 (DriverEntry.c)
 * Callees:
 *     WPP_SF_D @ 0x1C00045E4 (WPP_SF_D.c)
 *     WPP_SF_d @ 0x1C0004884 (WPP_SF_d.c)
 *     WppLoadTracingSupport @ 0x1C000BAF0 (WppLoadTracingSupport.c)
 *     WppInitKm @ 0x1C000BC40 (WppInitKm.c)
 *     CiNdisOpenDevice @ 0x1C000BCB0 (CiNdisOpenDevice.c)
 *     CiSystemInitialize @ 0x1C000E270 (CiSystemInitialize.c)
 *     CiDispatchInitialize @ 0x1C000E300 (CiDispatchInitialize.c)
 *     CiSchedulerInitialize @ 0x1C000E3B0 (CiSchedulerInitialize.c)
 *     CiConfigInitialize @ 0x1C000E4E0 (CiConfigInitialize.c)
 */

__int64 __fastcall CsInitialize(__int64 a1)
{
  NTSTATUS ThreadNotifyRoutine; // ebx
  _DWORD v4[2]; // [rsp+20h] [rbp-28h] BYREF
  __int64 (__fastcall **v5)(); // [rsp+28h] [rbp-20h]
  __int64 *v6; // [rsp+30h] [rbp-18h]
  __int64 v7; // [rsp+38h] [rbp-10h]

  WPP_MAIN_CB.Timer = (PIO_TIMER)1;
  *(_QWORD *)&WPP_MAIN_CB.Type = 0LL;
  WPP_MAIN_CB.DriverObject = (struct _DRIVER_OBJECT *)&WPP_ThisDir_CTLGUID_MmcssTrace;
  WPP_MAIN_CB.NextDevice = 0LL;
  WPP_MAIN_CB.CurrentIrp = 0LL;
  WppLoadTracingSupport();
  WPP_MAIN_CB.CurrentIrp = 0LL;
  WppInitKm();
  WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Blink = &WPP_MAIN_CB.DeviceLock.Header.WaitListHead;
  WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Flink = &WPP_MAIN_CB.DeviceLock.Header.WaitListHead;
  WPP_MAIN_CB.Dpc.DeferredContext = &WPP_MAIN_CB.Dpc.DeferredRoutine;
  WPP_MAIN_CB.Dpc.DeferredRoutine = (PKDEFERRED_ROUTINE)&WPP_MAIN_CB.Dpc.DeferredRoutine;
  WPP_MAIN_CB.Dpc.SystemArgument2 = &WPP_MAIN_CB.Dpc.SystemArgument1;
  WPP_MAIN_CB.Dpc.SystemArgument1 = &WPP_MAIN_CB.Dpc.SystemArgument1;
  ThreadNotifyRoutine = EtwRegister(
                          &MMCSS_ETW_PROVIDER,
                          (PETWENABLECALLBACK)CiLogControlCallback,
                          0LL,
                          &CiLoggerContext);
  if ( ThreadNotifyRoutine < 0 )
  {
    if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
      WPP_SF_D((__int64)WPP_GLOBAL_Control->AttachedDevice);
  }
  else
  {
    ThreadNotifyRoutine = CiSystemInitialize();
    if ( ThreadNotifyRoutine >= 0 )
    {
      ThreadNotifyRoutine = CiConfigInitialize();
      if ( ThreadNotifyRoutine >= 0 )
      {
        ThreadNotifyRoutine = PsSetCreateThreadNotifyRoutine((PCREATE_THREAD_NOTIFY_ROUTINE)CiThreadNotification);
        if ( ThreadNotifyRoutine < 0 )
        {
          if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
            WPP_SF_d(
              (__int64)WPP_GLOBAL_Control->AttachedDevice,
              0xAu,
              (__int64)&WPP_29026e0d014631895ac1404d49971dec_Traceguids,
              ThreadNotifyRoutine);
        }
        else
        {
          CiThreadCallbackRegistered = 1;
          v5 = &CiKernelCalloutTable;
          v4[1] = 1;
          v6 = &CiKernelInterface;
          v4[0] = 131081;
          v7 = a1;
          ThreadNotifyRoutine = ExRegisterExtension(&CiKernelExtensionRegistration, 0x10000LL, v4);
          if ( ThreadNotifyRoutine >= 0 )
          {
            ThreadNotifyRoutine = CiSchedulerInitialize();
            if ( ThreadNotifyRoutine >= 0 )
              ThreadNotifyRoutine = CiDispatchInitialize(a1);
          }
        }
      }
    }
  }
  if ( LODWORD(WPP_MAIN_CB.Dpc.DpcData) != -1 && CiSystemResponsiveness != 100 )
  {
    CiNdisThrottleWorkItem = IoAllocateWorkItem(CiDeviceObject);
    if ( CiNdisThrottleWorkItem )
      CiNdisOpenDevice();
  }
  return (unsigned int)ThreadNotifyRoutine;
}
