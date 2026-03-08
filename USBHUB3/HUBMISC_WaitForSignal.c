/*
 * XREFs of HUBMISC_WaitForSignal @ 0x1C0032DEC
 * Callers:
 *     HUBHTX_GetPortStatusForBootDevice @ 0x1C0006744 (HUBHTX_GetPortStatusForBootDevice.c)
 *     HUBFDO_EvtDeviceD0Entry @ 0x1C000D350 (HUBFDO_EvtDeviceD0Entry.c)
 *     HUBFDO_EvtDeviceD0Exit @ 0x1C000D7D0 (HUBFDO_EvtDeviceD0Exit.c)
 *     HUBFDO_EvtDeviceCleanupCallback @ 0x1C000DB80 (HUBFDO_EvtDeviceCleanupCallback.c)
 *     HUBPDO_EvtDeviceWdmIrpQueryDeviceTextPreprocess @ 0x1C0018018 (HUBPDO_EvtDeviceWdmIrpQueryDeviceTextPreprocess.c)
 *     HUBPDO_EvtDeviceWdmIrpQueryIdPreprocess @ 0x1C0018388 (HUBPDO_EvtDeviceWdmIrpQueryIdPreprocess.c)
 *     HUBPDO_EvtDeviceWdmIrpPreprocess @ 0x1C0018550 (HUBPDO_EvtDeviceWdmIrpPreprocess.c)
 *     HUBPDO_EvtDeviceD0Entry @ 0x1C0019930 (HUBPDO_EvtDeviceD0Entry.c)
 *     HUBPDO_EvtDeviceD0Exit @ 0x1C0019BA0 (HUBPDO_EvtDeviceD0Exit.c)
 *     HUBPDO_EvtDeviceCleanup @ 0x1C001A4C0 (HUBPDO_EvtDeviceCleanup.c)
 *     HUBPDO_EvtDeviceDisableWakeAtBus @ 0x1C001C870 (HUBPDO_EvtDeviceDisableWakeAtBus.c)
 *     HUBFDO_EvtDeviceAdd @ 0x1C0077680 (HUBFDO_EvtDeviceAdd.c)
 *     HUBFDO_EvtDevicePrepareHardware @ 0x1C0078890 (HUBFDO_EvtDevicePrepareHardware.c)
 *     HUBFDO_EvtDeviceReleaseHardware @ 0x1C0079370 (HUBFDO_EvtDeviceReleaseHardware.c)
 *     HUBPDO_EvtDeviceReleaseHardware @ 0x1C007DFC0 (HUBPDO_EvtDeviceReleaseHardware.c)
 *     HUBPDO_EvtDeviceResourceRequirementsQuery @ 0x1C00801B0 (HUBPDO_EvtDeviceResourceRequirementsQuery.c)
 * Callees:
 *     WPP_RECORDER_SF_dqqs @ 0x1C002E1DC (WPP_RECORDER_SF_dqqs.c)
 *     WPP_RECORDER_SF_qsqd @ 0x1C002E37C (WPP_RECORDER_SF_qsqd.c)
 *     _guard_dispatch_icall_nop @ 0x1C0044C50 (_guard_dispatch_icall_nop.c)
 */

NTSTATUS __fastcall HUBMISC_WaitForSignal(PVOID Object, const char *a2, const void *a3)
{
  int v6; // ebx
  __int64 v7; // rax
  __int64 v8; // rbp
  NTSTATUS result; // eax
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // r9
  int Timeout; // [rsp+20h] [rbp-48h]
  int Timeouta; // [rsp+20h] [rbp-48h]
  union _LARGE_INTEGER v18; // [rsp+88h] [rbp+20h] BYREF

  v6 = 0;
  v7 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, WDFDRIVER__ *, void *))(WdfFunctions_01015 + 1616))(
         WdfDriverGlobals,
         WdfDriverGlobals->Driver,
         off_1C006A1E8);
  v18.QuadPart = -600000000LL;
  v8 = v7;
  for ( result = KeWaitForSingleObject(Object, Executive, 0, 0, &v18);
        result == 258;
        result = KeWaitForSingleObject(Object, Executive, 0, 0, &v18) )
  {
    DbgPrint(
      "\nUSBHUB3 Watchdog: Thread 0x%p has waited %d minutes for %s to complete for WDF object 0x%p\n",
      KeGetCurrentThread(),
      ++v6,
      a2,
      a3);
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_qsqd(*(_QWORD *)(v8 + 64), v13, v14, v15, Timeouta);
  }
  if ( result < 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    return WPP_RECORDER_SF_dqqs(
             *(_QWORD *)(v8 + 64),
             v10,
             v11,
             v12,
             Timeout,
             result,
             (char)KeGetCurrentThread(),
             (char)a3,
             a2);
  return result;
}
