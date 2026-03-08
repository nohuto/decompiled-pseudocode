/*
 * XREFs of Controller_WdfEvtDeviceSelfManagedIoInit @ 0x1C001C340
 * Callers:
 *     <none>
 * Callees:
 *     CommonBuffer_AcquireBuffer @ 0x1C0013038 (CommonBuffer_AcquireBuffer.c)
 *     WPP_RECORDER_SF_q @ 0x1C00142CC (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_d @ 0x1C0018458 (WPP_RECORDER_SF_d.c)
 *     Controller_InUseByDebugger @ 0x1C001C410 (Controller_InUseByDebugger.c)
 *     _guard_dispatch_icall_nop @ 0x1C0020390 (_guard_dispatch_icall_nop.c)
 *     Controller_PopulateDeviceFlags @ 0x1C00738B4 (Controller_PopulateDeviceFlags.c)
 *     Controller_PopulateHardwareVerifierFlags @ 0x1C0073D3C (Controller_PopulateHardwareVerifierFlags.c)
 *     Controller_SetDeviceDescription @ 0x1C0073EEC (Controller_SetDeviceDescription.c)
 */

__int64 __fastcall Controller_WdfEvtDeviceSelfManagedIoInit(__int64 a1)
{
  char v1; // di
  int v2; // edx
  __int64 v3; // rbx
  int v4; // edx
  NTSTATUS v6; // eax
  int v7; // edx
  __int64 v8; // rax
  int v9; // edx

  v1 = a1;
  v3 = *(_QWORD *)((*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01023 + 1616))(
                     WdfDriverGlobals,
                     a1,
                     off_1C00633D8)
                 + 8);
  *(_BYTE *)(v3 + 16) = 1;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(v2) = 5;
    WPP_RECORDER_SF_q(*(_QWORD *)(v3 + 72), v2, 4, 54, (__int64)&WPP_ac07559723993fb37d1c33c002d3118e_Traceguids, v1);
  }
  if ( (unsigned __int8)Controller_InUseByDebugger(v3) )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v4) = 4;
      WPP_RECORDER_SF_q(*(_QWORD *)(v3 + 72), v4, 4, 55, (__int64)&WPP_ac07559723993fb37d1c33c002d3118e_Traceguids, v1);
    }
    v6 = PoRegisterPowerSettingCallback(
           0LL,
           &GUID_LOW_POWER_EPOCH,
           Controller_LPEEnterExitCallback,
           (PVOID)v3,
           (PVOID *)(v3 + 592));
    if ( v6 < 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v7) = 3;
      WPP_RECORDER_SF_d(*(_QWORD *)(v3 + 72), v7, 4, 56, (__int64)&WPP_ac07559723993fb37d1c33c002d3118e_Traceguids, v6);
    }
  }
  Controller_SetDeviceDescription(v3);
  Controller_PopulateHardwareVerifierFlags(v3);
  Controller_PopulateDeviceFlags(v3);
  if ( _bittest64((const signed __int64 *)(v3 + 336), 0x22u) )
  {
    v8 = CommonBuffer_AcquireBuffer(*(struct _KEVENT **)(v3 + 120), 512, v3, 829584451);
    *(_QWORD *)(v3 + 456) = v8;
    if ( !v8 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v9) = 3;
      WPP_RECORDER_SF_q(*(_QWORD *)(v3 + 72), v9, 4, 57, (__int64)&WPP_ac07559723993fb37d1c33c002d3118e_Traceguids, v1);
    }
  }
  return 0LL;
}
