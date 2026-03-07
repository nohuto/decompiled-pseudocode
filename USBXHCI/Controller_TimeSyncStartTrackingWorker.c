__int64 __fastcall Controller_TimeSyncStartTrackingWorker(__int64 a1)
{
  __int64 v1; // rax
  __int64 v2; // rdi
  int v3; // r14d
  _QWORD *v4; // rsi
  _QWORD *v5; // rbx
  __int64 v6; // rax
  __int64 v7; // r8
  int v8; // edx
  __int64 v9; // rbp
  __int64 v10; // rcx

  v1 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01023 + 3048))(WdfDriverGlobals, a1);
  v2 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01023 + 1616))(
         WdfDriverGlobals,
         v1,
         off_1C0063428);
  v3 = Controller_DetectFrameMicroframeBoundary(v2);
  DynamicLock_Acquire(*(_QWORD *)(v2 + 672));
  v4 = (_QWORD *)(v2 + 696);
  while ( 1 )
  {
    v5 = (_QWORD *)*v4;
    if ( (_QWORD *)*v4 == v4 )
      break;
    if ( (_QWORD *)v5[1] != v4 || (v6 = *v5, *(_QWORD **)(*v5 + 8LL) != v5) )
      __fastfail(3u);
    *v4 = v6;
    *(_QWORD *)(v6 + 8) = v4;
    if ( v3 < 0 )
      goto LABEL_9;
    v7 = v5[2];
    *((_BYTE *)v5 + 48) = 1;
    v3 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, __int64))(WdfFunctions_01023 + 120))(
           WdfDriverGlobals,
           *(_QWORD *)(v2 + 688),
           v7);
    if ( v3 < 0 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v8) = 2;
        WPP_RECORDER_SF_d(
          *(_QWORD *)(v2 + 72),
          v8,
          4,
          283,
          (__int64)&WPP_ac07559723993fb37d1c33c002d3118e_Traceguids,
          v3);
      }
LABEL_9:
      v9 = 0LL;
      goto LABEL_10;
    }
    v9 = 9LL;
LABEL_10:
    DynamicLock_Release(*(_QWORD *)(v2 + 672));
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, _QWORD, __int64))(WdfFunctions_01023 + 2120))(
      WdfDriverGlobals,
      v5[4],
      (unsigned int)v3,
      v9);
    DynamicLock_Acquire(*(_QWORD *)(v2 + 672));
  }
  v10 = *(_QWORD *)(v2 + 672);
  *(_BYTE *)(v2 + 720) = 0;
  return DynamicLock_Release(v10);
}
