/*
 * XREFs of rimDoRimDevChange @ 0x1C00BC1AC
 * Callers:
 *     RIMCreateDev @ 0x1C0036CBC (RIMCreateDev.c)
 *     RIMOnPnpNotification @ 0x1C00383E0 (RIMOnPnpNotification.c)
 *     rimHandleAnyPnpRemovePendingDevices @ 0x1C003A13C (rimHandleAnyPnpRemovePendingDevices.c)
 *     RIMDoOnPnpNotification @ 0x1C00872A8 (RIMDoOnPnpNotification.c)
 *     RIMFreeSpecificDev @ 0x1C00BBF88 (RIMFreeSpecificDev.c)
 *     rimDoRimDevChangeAsyncWorkItem @ 0x1C00BC0DC (rimDoRimDevChangeAsyncWorkItem.c)
 *     RIMRemoveDevOfInputType @ 0x1C00C986C (RIMRemoveDevOfInputType.c)
 *     RIMVirtCreateDev @ 0x1C019DFF8 (RIMVirtCreateDev.c)
 *     RIMAddNonPnpDeviceOfTypeUsingSuppliedFileHandle @ 0x1C01A3C50 (RIMAddNonPnpDeviceOfTypeUsingSuppliedFileHandle.c)
 *     RIMIDERemoveInjectionDevice @ 0x1C01A64F8 (RIMIDERemoveInjectionDevice.c)
 *     RIMVirtDeviceClassNotifyAsyncWorkItem @ 0x1C01D032C (RIMVirtDeviceClassNotifyAsyncWorkItem.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x1C0039A10 (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     isChildPartition @ 0x1C0078FF0 (isChildPartition.c)
 *     ?RimDevice@RIM@InputTraceLogging@@SAXPEBURIMDEV@@K@Z @ 0x1C00BC24C (-RimDevice@RIM@InputTraceLogging@@SAXPEBURIMDEV@@K@Z.c)
 *     rimDoRimDevChangeCallback @ 0x1C00BC28C (rimDoRimDevChangeCallback.c)
 *     RIMHandlePowerDeviceArrival @ 0x1C00BC314 (RIMHandlePowerDeviceArrival.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00E1640 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     RIMHandleTTMDeviceRemoval @ 0x1C01E2A9C (RIMHandleTTMDeviceRemoval.c)
 */

void __fastcall rimDoRimDevChange(__int64 a1, __int64 a2, unsigned int a3)
{
  unsigned int v6; // ebx
  int v7; // eax
  int v8; // edx
  int v9; // r8d
  char v10; // r9
  __int64 v11; // rcx
  int v12; // eax
  PDEVICE_OBJECT v13; // r10
  __int16 v14; // cx

  if ( a3 == 1 )
    goto LABEL_7;
  if ( a3 == 2 )
  {
    *(_DWORD *)(a2 + 184) |= 0x40000000u;
    LOBYTE(v6) = 1;
    v7 = RIMHandlePowerDeviceArrival((struct RIMDEV *)a2);
    v10 = v7;
    if ( v7 < 0 )
    {
      v13 = WPP_GLOBAL_Control;
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
        || (LOBYTE(v8) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
      {
        LOBYTE(v8) = 0;
      }
      LOBYTE(v9) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( (_BYTE)v8 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v14 = 14;
        goto LABEL_31;
      }
    }
    goto LABEL_8;
  }
  if ( a3 != 3 )
  {
    if ( a3 - 4 > 1 )
    {
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 140LL);
      LOBYTE(v6) = 0;
      goto LABEL_8;
    }
LABEL_7:
    LOBYTE(v6) = 1;
    goto LABEL_8;
  }
  v6 = (*(_DWORD *)(a2 + 184) & 0x40000000u) >> 30;
  if ( !isChildPartition() )
  {
    if ( *(_BYTE *)SGDGetUserGdiSessionState(v11) )
    {
      v12 = RIMHandleTTMDeviceRemoval(a2);
      v10 = v12;
      if ( v12 < 0 )
      {
        v13 = WPP_GLOBAL_Control;
        if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
          || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
          || (LOBYTE(v8) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
        {
          LOBYTE(v8) = 0;
        }
        LOBYTE(v9) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        if ( (_BYTE)v8 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          v14 = 15;
LABEL_31:
          WPP_RECORDER_AND_TRACE_SF_d(
            v13->AttachedDevice,
            v8,
            v9,
            (_DWORD)gRimLog,
            4,
            1,
            v14,
            (__int64)&WPP_89c3e44078983ba1070baf237427a4e9_Traceguids,
            v10);
        }
      }
    }
  }
LABEL_8:
  InputTraceLogging::RIM::RimDevice((const struct RIMDEV *)a2, a3);
  if ( (_BYTE)v6 )
    rimDoRimDevChangeCallback(a1, a2, a3);
  if ( a3 == 3 )
    *(_DWORD *)(a2 + 184) &= ~0x40000000u;
}
