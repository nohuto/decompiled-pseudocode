/*
 * XREFs of Controller_TelemetryReportWorker @ 0x1C0034EB0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0005BBC (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x1C0018458 (WPP_RECORDER_SF_d.c)
 *     _guard_dispatch_icall_nop @ 0x1C0020390 (_guard_dispatch_icall_nop.c)
 *     Controller_InitiateRecovery @ 0x1C0033990 (Controller_InitiateRecovery.c)
 *     Controller_TelemetryReport @ 0x1C0034B08 (Controller_TelemetryReport.c)
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
  PDEVICE_OBJECT *Pool2; // rax
  int v13; // edx
  PDEVICE_OBJECT *v14; // r14
  NTSTATUS v15; // eax
  int v16; // edx
  __int64 *i; // rsi
  PDEVICE_OBJECT *v18; // rcx
  __int64 *v19; // rax
  __int64 *v21; // [rsp+30h] [rbp-10h] BYREF
  _QWORD *v22; // [rsp+38h] [rbp-8h]
  ULONG ActualNumberDeviceObjects; // [rsp+88h] [rbp+48h] BYREF
  ULONG j; // [rsp+90h] [rbp+50h] BYREF

  v1 = 0;
  j = 0;
  v21 = 0LL;
  ActualNumberDeviceObjects = 0;
  v3 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01023 + 3048))(WdfDriverGlobals, a1);
  v4 = (_QWORD *)(*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01023 + 1616))(
                   WdfDriverGlobals,
                   v3,
                   off_1C0063428);
  v6 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01023 + 1616))(
         WdfDriverGlobals,
         a1,
         off_1C00630E0);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v5) = 4;
    WPP_RECORDER_SF_(v4[9], v5, 4, 227, (__int64)&WPP_ac07559723993fb37d1c33c002d3118e_Traceguids);
  }
  KeWaitForSingleObject((PVOID)(v6 + 24), Executive, 0, 0, 0LL);
  v7 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v6 + 16));
  v8 = *(__int64 **)v6;
  if ( *(_QWORD *)v6 == v6 )
  {
    v22 = &v21;
    v21 = (__int64 *)&v21;
  }
  else
  {
    v21 = *(__int64 **)v6;
    v22 = *(_QWORD **)(v6 + 8);
    v8[1] = (__int64)&v21;
    *v22 = &v21;
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
    Pool2 = (PDEVICE_OBJECT *)ExAllocatePool2(64LL, 8LL * ActualNumberDeviceObjects, 1229146200LL);
    v14 = Pool2;
    if ( Pool2 )
    {
      v15 = IoEnumerateDeviceObjectList(
              *(PDRIVER_OBJECT *)&WPP_MAIN_CB.Queue.Wcb.NumberOfMapRegisters,
              Pool2,
              8 * ActualNumberDeviceObjects,
              &j);
      if ( v15 >= 0 )
      {
        for ( i = v21; &v21 != (__int64 **)i; i = (__int64 *)*i )
          Controller_TelemetryReport((__int64)v4, v6, (__int64)i, v14, ActualNumberDeviceObjects);
        for ( j = 0; j < ActualNumberDeviceObjects; v1 = j )
        {
          ObfDereferenceObject(v14[v1]);
          ++j;
        }
      }
      else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v16) = 2;
        WPP_RECORDER_SF_d(v4[9], v16, 4, 230, (__int64)&WPP_ac07559723993fb37d1c33c002d3118e_Traceguids, v15);
      }
      v18 = v14;
      goto LABEL_21;
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v13) = 2;
      WPP_RECORDER_SF_(v4[9], v13, 4, 229, (__int64)&WPP_ac07559723993fb37d1c33c002d3118e_Traceguids);
    }
  }
  else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v11) = 2;
    WPP_RECORDER_SF_d(v4[9], v11, 4, 228, (__int64)&WPP_ac07559723993fb37d1c33c002d3118e_Traceguids, v10);
  }
  while ( 1 )
  {
    v18 = (PDEVICE_OBJECT *)v21;
    if ( v21 == (__int64 *)&v21 )
      break;
    if ( (__int64 **)v21[1] != &v21 || (v19 = (__int64 *)*v21, *(__int64 **)(*v21 + 8) != v21) )
      __fastfail(3u);
    v21 = (__int64 *)*v21;
    v19[1] = (__int64)&v21;
LABEL_21:
    ExFreePoolWithTag(v18, 0x49434858u);
  }
  Controller_InitiateRecovery(v4, v6, v9);
  return KeReleaseMutex((PRKMUTEX)(v6 + 24), 0);
}
