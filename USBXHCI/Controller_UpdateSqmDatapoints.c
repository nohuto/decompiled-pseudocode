__int64 __fastcall Controller_UpdateSqmDatapoints(__int64 *a1)
{
  __int64 v1; // rdx
  __int64 result; // rax
  int v4; // edx
  int v5; // r9d
  int v6; // eax
  int v7; // r9d
  int v8; // eax
  int v9; // edx
  int v10; // eax
  int v11; // r9d
  struct _UNICODE_STRING DestinationString; // [rsp+40h] [rbp-10h] BYREF
  int v13; // [rsp+70h] [rbp+20h] BYREF
  __int64 v14; // [rsp+78h] [rbp+28h] BYREF

  v1 = *a1;
  v14 = 0LL;
  v13 = 0;
  DestinationString = 0LL;
  result = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64, __int64, _QWORD, __int64 *))(WdfFunctions_01023 + 384))(
             WdfDriverGlobals,
             v1,
             1LL,
             131103LL,
             0LL,
             &v14);
  if ( (int)result < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_15;
    v5 = 58;
    goto LABEL_14;
  }
  RtlInitUnicodeString(&DestinationString, L"HCRestoreStateFailureCount");
  v6 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, struct _UNICODE_STRING *, int *))(WdfFunctions_01023
                                                                                                + 1920))(
         WdfDriverGlobals,
         v14,
         &DestinationString,
         &v13);
  v7 = *((_DWORD *)a1 + 120);
  if ( v6 >= 0 )
    v7 += v13;
  v13 = v7;
  v8 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, struct _UNICODE_STRING *))(WdfFunctions_01023 + 1968))(
         WdfDriverGlobals,
         v14,
         &DestinationString);
  if ( v8 < 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v9) = 3;
    WPP_RECORDER_SF_d(a1[9], v9, 4, 59, (__int64)&WPP_ac07559723993fb37d1c33c002d3118e_Traceguids, v8);
  }
  RtlInitUnicodeString(&DestinationString, L"HCRecoveryCount");
  v10 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, struct _UNICODE_STRING *, int *))(WdfFunctions_01023
                                                                                                 + 1920))(
          WdfDriverGlobals,
          v14,
          &DestinationString,
          &v13);
  v11 = *((_DWORD *)a1 + 119);
  if ( v10 >= 0 )
    v11 += v13;
  v13 = v11;
  result = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, struct _UNICODE_STRING *))(WdfFunctions_01023 + 1968))(
             WdfDriverGlobals,
             v14,
             &DestinationString);
  if ( (int)result < 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v5 = 60;
LABEL_14:
    LOBYTE(v4) = 3;
    result = WPP_RECORDER_SF_d(a1[9], v4, 4, v5, (__int64)&WPP_ac07559723993fb37d1c33c002d3118e_Traceguids, result);
  }
LABEL_15:
  if ( v14 )
    return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS))(WdfFunctions_01023 + 1848))(WdfDriverGlobals);
  return result;
}
