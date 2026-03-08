/*
 * XREFs of Controller_InUseByDebugger @ 0x1C001C410
 * Callers:
 *     Controller_WdfEvtDeviceD0Exit @ 0x1C000E9C0 (Controller_WdfEvtDeviceD0Exit.c)
 *     Controller_WdfEvtDeviceD0Entry @ 0x1C00144B0 (Controller_WdfEvtDeviceD0Entry.c)
 *     Controller_WdfEvtDeviceSelfManagedIoInit @ 0x1C001C340 (Controller_WdfEvtDeviceSelfManagedIoInit.c)
 *     Controller_LPEEnterExitCallback @ 0x1C00342C0 (Controller_LPEEnterExitCallback.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0020390 (_guard_dispatch_icall_nop.c)
 */

bool __fastcall Controller_InUseByDebugger(_QWORD *a1)
{
  return (*(_DWORD *)((*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01023 + 264))(
                        WdfDriverGlobals,
                        *a1)
                    + 48) & 0x2000000) != 0;
}
