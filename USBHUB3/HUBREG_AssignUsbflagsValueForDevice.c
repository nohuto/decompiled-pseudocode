__int64 __fastcall HUBREG_AssignUsbflagsValueForDevice(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  __int64 v8; // rax
  int v9; // ebx
  __int64 v11; // [rsp+28h] [rbp-70h]
  __int64 v12; // [rsp+40h] [rbp-58h] BYREF
  char v13[8]; // [rsp+48h] [rbp-50h] BYREF
  char v14[8]; // [rsp+50h] [rbp-48h] BYREF
  char v15[8]; // [rsp+58h] [rbp-40h] BYREF

  HUBMISC_ConvertUsbDeviceIdsToString((unsigned __int16 *)(a1 + 1988), v15, v14, v13);
  v8 = *(_QWORD *)(a1 + 8);
  v12 = 0LL;
  v9 = HUBREG_OpenCreateUsbflagsDeviceKey(
         (__int64)v15,
         (__int64)v14,
         (__int64)v13,
         0x20006u,
         0LL,
         &v12,
         1,
         *(_QWORD *)(v8 + 1432));
  if ( v9 >= 0 )
  {
    v9 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64, __int64, int, __int64))(WdfFunctions_01015
                                                                                                 + 1928))(
           WdfDriverGlobals,
           v12,
           a2,
           3LL,
           a4,
           a3);
    if ( v9 < 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LODWORD(v11) = v9;
      WPP_RECORDER_SF_d(
        *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1432LL),
        2u,
        5u,
        0x13u,
        (__int64)&WPP_7a0afab5c79d3741c23ff4ee70090e0b_Traceguids,
        v11);
    }
  }
  if ( v12 )
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS))(WdfFunctions_01015 + 1848))(WdfDriverGlobals);
  return (unsigned int)v9;
}
