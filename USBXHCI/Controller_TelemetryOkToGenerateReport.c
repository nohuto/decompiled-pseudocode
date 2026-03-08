/*
 * XREFs of Controller_TelemetryOkToGenerateReport @ 0x1C0078CD4
 * Callers:
 *     Controller_TelemetryReport @ 0x1C0034B08 (Controller_TelemetryReport.c)
 * Callees:
 *     WPP_RECORDER_SF_L @ 0x1C00136C0 (WPP_RECORDER_SF_L.c)
 *     WPP_RECORDER_SF_d @ 0x1C0018458 (WPP_RECORDER_SF_d.c)
 *     _guard_dispatch_icall_nop @ 0x1C0020390 (_guard_dispatch_icall_nop.c)
 */

char __fastcall Controller_TelemetryOkToGenerateReport(_QWORD *a1, __int64 a2, int a3)
{
  char v3; // bl
  __int64 v4; // rax
  int v7; // r8d
  int v8; // r8d
  int v9; // eax
  unsigned int v10; // edx
  char v11; // cl
  int v12; // r9d
  int v13; // eax
  int v14; // eax
  int v15; // eax
  int v16; // eax
  struct _UNICODE_STRING DestinationString; // [rsp+40h] [rbp-10h] BYREF
  __int64 v18; // [rsp+70h] [rbp+20h] BYREF
  int v19; // [rsp+80h] [rbp+30h] BYREF
  __int64 v20; // [rsp+88h] [rbp+38h] BYREF

  v19 = 0;
  v20 = 0LL;
  v18 = 0LL;
  v3 = 0;
  v4 = a1[47];
  DestinationString = 0LL;
  if ( !_bittest64(&v4, a3 & 0x3F) )
  {
    v7 = a3 - 4109;
    if ( !v7 )
    {
      v16 = *(_DWORD *)(a2 + 84);
      if ( (v16 & 1) == 0 )
      {
        v3 = 1;
        *(_DWORD *)(a2 + 84) = v16 | 1;
        return v3;
      }
      goto LABEL_4;
    }
    v8 = v7 - 2;
    if ( v8 )
    {
      if ( v8 != 3 )
        return 1;
      v9 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, __int64, __int64, _QWORD, __int64 *))(WdfFunctions_01023 + 384))(
             WdfDriverGlobals,
             *a1,
             1LL,
             131078LL,
             0LL,
             &v18);
      v11 = v9;
      if ( v9 < 0 )
      {
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          goto LABEL_4;
        v12 = 223;
        goto LABEL_21;
      }
      RtlInitUnicodeString(&DestinationString, L"OutOfOrderCommandCompletion");
      v13 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, struct _UNICODE_STRING *, __int64, int *, _QWORD, _QWORD))(WdfFunctions_01023 + 1880))(
              WdfDriverGlobals,
              v18,
              &DestinationString,
              4LL,
              &v19,
              0LL,
              0LL);
      v10 = 0x80000000;
      v11 = v13;
      if ( (int)(v13 + 0x80000000) >= 0 && v13 != -1073741772 )
      {
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          goto LABEL_4;
        v12 = 224;
        goto LABEL_21;
      }
    }
    else
    {
      v14 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, __int64, __int64, _QWORD, __int64 *))(WdfFunctions_01023 + 384))(
              WdfDriverGlobals,
              *a1,
              1LL,
              131078LL,
              0LL,
              &v18);
      v11 = v14;
      if ( v14 < 0 )
      {
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          goto LABEL_4;
        v12 = 221;
        goto LABEL_21;
      }
      RtlInitUnicodeString(&DestinationString, L"OutdatedFirmwareVersion");
      v15 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, struct _UNICODE_STRING *, __int64, __int64 *, _QWORD, _QWORD))(WdfFunctions_01023 + 1880))(
              WdfDriverGlobals,
              v18,
              &DestinationString,
              8LL,
              &v20,
              0LL,
              0LL);
      v11 = v15;
      if ( v15 >= 0 )
      {
        if ( a1[41] == v20 )
          goto LABEL_4;
      }
      else if ( v15 != -1073741772 )
      {
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          goto LABEL_4;
        v12 = 222;
LABEL_21:
        LOBYTE(v10) = 3;
        WPP_RECORDER_SF_d(a1[9], v10, 4, v12, (__int64)&WPP_ac07559723993fb37d1c33c002d3118e_Traceguids, v11);
        goto LABEL_4;
      }
    }
    v3 = 1;
    goto LABEL_4;
  }
  if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    return v3;
  LOBYTE(a2) = 4;
  WPP_RECORDER_SF_L(a1[9], a2, 4, 220, (__int64)&WPP_ac07559723993fb37d1c33c002d3118e_Traceguids, a3);
LABEL_4:
  if ( v18 )
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS))(WdfFunctions_01023 + 1848))(WdfDriverGlobals);
  return v3;
}
