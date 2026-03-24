/*
 * XREFs of Controller_TelemetryReportWorker @ 0x1C0033470
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C000A0B8 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x1C000F118 (WPP_RECORDER_SF_d.c)
 *     _guard_dispatch_icall_nop @ 0x1C001AFF0 (_guard_dispatch_icall_nop.c)
 *     Controller_InitiateRecovery @ 0x1C0031F80 (Controller_InitiateRecovery.c)
 *     Controller_TelemetryReport @ 0x1C00330D0 (Controller_TelemetryReport.c)
 */

LONG __fastcall Controller_TelemetryReportWorker(__int64 a1)
{
  ULONG v1; // edi
  __int64 v3; // rax
  _QWORD *v4; // r15
  int v5; // edx
  __int64 v6; // rbx
  KIRQL v7; // al
  __int64 *v8; // rcx
  int v9; // r13d
  NTSTATUS v10; // eax
  int v11; // edx
  int v12; // r9d
  PDEVICE_OBJECT *PoolWithTag; // rax
  int v14; // edx
  PDEVICE_OBJECT *v15; // r14
  NTSTATUS v16; // eax
  int v17; // edx
  __int64 *i; // rsi
  PDEVICE_OBJECT *v19; // rcx
  __int64 *v20; // rax
  __int64 *v22; // [rsp+30h] [rbp-10h] BYREF
  _QWORD *v23; // [rsp+38h] [rbp-8h]
  ULONG ActualNumberDeviceObjects; // [rsp+88h] [rbp+48h] BYREF
  ULONG v25; // [rsp+90h] [rbp+50h] BYREF

  v1 = 0;
  v25 = 0;
  v22 = 0LL;
  ActualNumberDeviceObjects = 0;
  v3 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01023 + 3048))(WdfDriverGlobals, a1);
  v4 = (_QWORD *)(*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01023 + 1616))(
                   WdfDriverGlobals,
                   v3,
                   off_1C0060428);
  v6 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01023 + 1616))(
         WdfDriverGlobals,
         a1,
         off_1C00600E0);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v5) = 4;
    WPP_RECORDER_SF_(v4[9], v5, 4, 224, (__int64)&WPP_4d8d366f5fa2386b8519f650eb4534ed_Traceguids);
  }
  KeWaitForSingleObject((PVOID)(v6 + 24), Executive, 0, 0, 0LL);
  v7 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v6 + 16));
  v8 = *(__int64 **)v6;
  if ( *(_QWORD *)v6 == v6 )
  {
    v23 = &v22;
    v22 = (__int64 *)&v22;
  }
  else
  {
    v22 = *(__int64 **)v6;
    v23 = *(_QWORD **)(v6 + 8);
    v8[1] = (__int64)&v22;
    *v23 = &v22;
    *(_QWORD *)(v6 + 8) = v6;
    *(_QWORD *)v6 = v6;
  }
  v9 = *(_DWORD *)(v6 + 80);
  *(_DWORD *)(v6 + 80) = 0;
  KeReleaseSpinLock((PKSPIN_LOCK)(v6 + 16), v7);
  v10 = IoEnumerateDeviceObjectList(
          *(PDRIVER_OBJECT *)&WPP_MAIN_CB.Queue.Wcb.NumberOfMapRegisters,
          0LL,
          0,
          &ActualNumberDeviceObjects);
  if ( v10 == -1073741789 )
  {
    PoolWithTag = (PDEVICE_OBJECT *)ExAllocatePoolWithTag(
                                      (POOL_TYPE)WPP_MAIN_CB.DeviceLock.Header.SignalState,
                                      8LL * ActualNumberDeviceObjects,
                                      0x49434858u);
    v15 = PoolWithTag;
    if ( PoolWithTag )
    {
      v16 = IoEnumerateDeviceObjectList(
              *(PDRIVER_OBJECT *)&WPP_MAIN_CB.Queue.Wcb.NumberOfMapRegisters,
              PoolWithTag,
              8 * ActualNumberDeviceObjects,
              &v25);
      if ( v16 >= 0 )
      {
        for ( i = v22; &v22 != (__int64 **)i; i = (__int64 *)*i )
          Controller_TelemetryReport((__int64)v4, v6, (__int64)i, v15, ActualNumberDeviceObjects);
        v25 = 0;
        if ( ActualNumberDeviceObjects )
        {
          do
          {
            ObfDereferenceObject(v15[v1]);
            v1 = v25 + 1;
            v25 = v1;
          }
          while ( v1 < ActualNumberDeviceObjects );
        }
      }
      else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v17) = 2;
        WPP_RECORDER_SF_d(v4[9], v17, 4, 227, (__int64)&WPP_4d8d366f5fa2386b8519f650eb4534ed_Traceguids, v16);
      }
      v19 = v15;
      goto LABEL_21;
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v14) = 2;
      WPP_RECORDER_SF_(v4[9], v14, 4, 226, (__int64)&WPP_4d8d366f5fa2386b8519f650eb4534ed_Traceguids);
    }
  }
  else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v11) = 2;
    WPP_RECORDER_SF_d(v4[9], v11, 4, 225, (__int64)&WPP_4d8d366f5fa2386b8519f650eb4534ed_Traceguids, v10);
  }
  while ( 1 )
  {
    v19 = (PDEVICE_OBJECT *)v22;
    if ( v22 == (__int64 *)&v22 )
      break;
    if ( (__int64 **)v22[1] != &v22 || (v20 = (__int64 *)*v22, *(__int64 **)(*v22 + 8) != v22) )
      __fastfail(3u);
    v22 = (__int64 *)*v22;
    v20[1] = (__int64)&v22;
LABEL_21:
    ExFreePoolWithTag(v19, 0x49434858u);
  }
  Controller_InitiateRecovery(v4, v6, v9, v12);
  return KeReleaseMutex((PRKMUTEX)(v6 + 24), 0);
}
