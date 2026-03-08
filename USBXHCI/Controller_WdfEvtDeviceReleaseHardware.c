/*
 * XREFs of Controller_WdfEvtDeviceReleaseHardware @ 0x1C0079480
 * Callers:
 *     <none>
 * Callees:
 *     Controller_IsSecureDevice @ 0x1C000B0F8 (Controller_IsSecureDevice.c)
 *     WPP_RECORDER_SF_q @ 0x1C00142CC (WPP_RECORDER_SF_q.c)
 *     _guard_dispatch_icall_nop @ 0x1C0020390 (_guard_dispatch_icall_nop.c)
 *     XilDeviceSlot_ReleaseHardware @ 0x1C00384F4 (XilDeviceSlot_ReleaseHardware.c)
 *     Register_UnmapSecureMmio @ 0x1C003F120 (Register_UnmapSecureMmio.c)
 *     SleepstudyHelper_UnregisterComponent @ 0x1C0054D74 (SleepstudyHelper_UnregisterComponent.c)
 *     Command_ReleaseHardware @ 0x1C0077ED0 (Command_ReleaseHardware.c)
 *     Interrupter_ReleaseInterrupter @ 0x1C007A04C (Interrupter_ReleaseInterrupter.c)
 *     RootHub_ReleaseHardware @ 0x1C007A350 (RootHub_ReleaseHardware.c)
 */

__int64 __fastcall Controller_WdfEvtDeviceReleaseHardware(__int64 a1)
{
  char v1; // bl
  int v2; // edx
  __int64 v3; // rdi
  __int64 v4; // rbx
  _QWORD *v5; // rcx
  unsigned int i; // esi
  void *v7; // rcx
  __int64 v8; // rbx

  v1 = a1;
  v3 = *(_QWORD *)((*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01023 + 1616))(
                     WdfDriverGlobals,
                     a1,
                     off_1C00633D8)
                 + 8);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v2) = 4;
    WPP_RECORDER_SF_q(*(_QWORD *)(v3 + 72), v2, 4, 52, (__int64)&WPP_ac07559723993fb37d1c33c002d3118e_Traceguids, v1);
  }
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01023 + 3056))(
    WdfDriverGlobals,
    *(_QWORD *)(v3 + 368));
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01023 + 3056))(
    WdfDriverGlobals,
    *(_QWORD *)(v3 + 832));
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01023 + 3056))(
    WdfDriverGlobals,
    *(_QWORD *)(v3 + 568));
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01023 + 3056))(
    WdfDriverGlobals,
    *(_QWORD *)(v3 + 712));
  if ( *(_QWORD *)(v3 + 848) )
  {
    SleepstudyHelper_UnregisterComponent();
    *(_QWORD *)(v3 + 848) = 0LL;
  }
  RootHub_ReleaseHardware(*(_QWORD *)(v3 + 152));
  Command_ReleaseHardware(*(_QWORD *)(v3 + 144));
  XilDeviceSlot_ReleaseHardware(*(_QWORD *)(v3 + 136));
  v4 = *(_QWORD *)(v3 + 128);
  v5 = *(_QWORD **)(v4 + 32);
  if ( v5 )
  {
    for ( i = 0; i < *(_DWORD *)(v4 + 80); ++i )
    {
      if ( v5[i] )
      {
        Interrupter_ReleaseInterrupter(v5[i]);
        v5 = *(_QWORD **)(v4 + 32);
      }
    }
    ExFreePoolWithTag(v5, 0x49434858u);
    *(_QWORD *)(v4 + 32) = 0LL;
  }
  v7 = *(void **)(v4 + 56);
  if ( v7 )
  {
    ExFreePoolWithTag(v7, 0x49434858u);
    *(_QWORD *)(v4 + 56) = 0LL;
  }
  v8 = *(_QWORD *)(v3 + 88);
  if ( *(_QWORD *)(v8 + 24) )
  {
    if ( Controller_IsSecureDevice(*(_QWORD *)(v8 + 8)) )
      Register_UnmapSecureMmio(v8);
    MmUnmapIoSpace(*(PVOID *)(v8 + 24), *(unsigned int *)(v8 + 20));
    *(_BYTE *)(v8 + 16) = 0;
    *(_QWORD *)(v8 + 24) = 0LL;
    *(_QWORD *)(v8 + 32) = 0LL;
    *(_QWORD *)(v8 + 40) = 0LL;
    *(_QWORD *)(v8 + 48) = 0LL;
    *(_QWORD *)(v8 + 56) = 0LL;
    *(_QWORD *)(v8 + 64) = 0LL;
    *(_QWORD *)(v8 + 72) = 0LL;
  }
  if ( !*(_BYTE *)(v3 + 16) )
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01023 + 1664))(
      WdfDriverGlobals,
      *(_QWORD *)(v3 + 8));
  return 0LL;
}
