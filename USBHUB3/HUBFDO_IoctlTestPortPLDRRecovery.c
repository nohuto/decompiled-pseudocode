__int64 __fastcall HUBFDO_IoctlTestPortPLDRRecovery(__int64 a1, __int64 a2, unsigned __int64 a3)
{
  __int64 v5; // rax
  __int64 v6; // rdi
  int v7; // ebx
  __int64 v8; // rax
  __int64 v9; // rbx
  __int64 v10; // rax
  __int64 v11; // r8
  int v12; // r14d
  __int64 v13; // rax
  __int64 v14; // rsi
  __int64 v15; // rax
  __int64 v16; // r14
  _DWORD *v18; // [rsp+40h] [rbp-10h] BYREF
  __int64 SystemInformation; // [rsp+48h] [rbp-8h] BYREF
  __int64 ReturnLength; // [rsp+98h] [rbp+48h] BYREF

  v18 = 0LL;
  v5 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 1256))(WdfDriverGlobals, a1);
  v6 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
         WdfDriverGlobals,
         v5,
         off_1C006A198);
  ReturnLength = LODWORD(WPP_MAIN_CB.SecurityDescriptor);
  if ( ((__int64)WPP_MAIN_CB.SecurityDescriptor & 0x10) == 0 )
  {
    LODWORD(ReturnLength) = LODWORD(WPP_MAIN_CB.SecurityDescriptor) | 1;
    wil_details_FeatureReporting_ReportUsageToService(
      (__int64)&Feature_PLDRRecovery__private_descriptor,
      ReturnLength,
      3);
    wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath(
      ReturnLength,
      3,
      (__int64)&Feature_PLDRRecovery__private_descriptor);
  }
  if ( (int)HUBMISC_VerifyCallerIsAdmin(*(_QWORD *)(v6 + 2520)) >= 0 )
  {
    LODWORD(ReturnLength) = 0;
    SystemInformation = 8LL;
    if ( ZwQuerySystemInformation(
           MaxSystemInfoClass|SystemProcessInformation,
           &SystemInformation,
           8u,
           (PULONG)&ReturnLength) >= 0
      && (SystemInformation & 0x200000000LL) != 0 )
    {
      if ( a3 >= 4 )
      {
        v7 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64, _DWORD **, _QWORD))(WdfFunctions_01015
                                                                                                 + 2152))(
               WdfDriverGlobals,
               a2,
               4LL,
               &v18,
               0LL);
        if ( v7 >= 0 )
        {
          v8 = *(_QWORD *)(v6 + 2360);
          v9 = v8 - 248;
          if ( v6 + 2360 == v8 )
            goto LABEL_19;
          while ( *(unsigned __int16 *)(v9 + 200) != *v18 )
          {
            v10 = *(_QWORD *)(v9 + 248);
            v9 = v10 - 248;
            if ( v6 + 2360 == v10 )
              goto LABEL_19;
          }
          if ( !v9 )
          {
LABEL_19:
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              WPP_RECORDER_SF_d(
                *(_QWORD *)(v6 + 2520),
                2u,
                3u,
                0x4Du,
                (__int64)&WPP_440221f57c503424f19abf9386554ba7_Traceguids,
                *v18);
            v7 = -1073741811;
          }
          else
          {
            (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 1072))(
              WdfDriverGlobals,
              *(_QWORD *)(v6 + 16));
            v11 = 0LL;
            v12 = *v18;
            while ( 1 )
            {
              v13 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, __int64, __int64))(WdfFunctions_01015 + 1080))(
                      WdfDriverGlobals,
                      *(_QWORD *)(v6 + 16),
                      v11,
                      1LL);
              v14 = v13;
              if ( !v13
                || v13 != *(_QWORD *)(v6 + 2656)
                && *(unsigned __int16 *)((*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
                                           WdfDriverGlobals,
                                           v13,
                                           off_1C006A0F8)
                                       + 48) == v12 )
              {
                break;
              }
              v11 = v14;
            }
            if ( v14 )
            {
              v15 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
                      WdfDriverGlobals,
                      v14,
                      off_1C006A0F8);
              v16 = v15;
              if ( (*(_DWORD *)(v6 + 40) & 0x40000) != 0 && (*(_DWORD *)(*(_QWORD *)(v15 + 24) + 1632LL) & 0x20) != 0 )
              {
                if ( (unsigned __int8)HUBREG_IsPortPLDRCapable(v6, *(unsigned __int16 *)v18) )
                {
                  *(_BYTE *)(v9 + 1472) = 1;
                  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                    WPP_RECORDER_SF_DD(
                      *(_QWORD *)(v6 + 2520),
                      4u,
                      3u,
                      0x51u,
                      (__int64)&WPP_440221f57c503424f19abf9386554ba7_Traceguids,
                      *(_DWORD *)(v6 + 96),
                      *(unsigned __int16 *)(*(_QWORD *)(*(_QWORD *)(v16 + 24) + 8LL) + 200LL));
                  v7 = HUBPDO_InvokePortPLDRRecovery(v14, v16);
                }
                else
                {
                  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                    WPP_RECORDER_SF_d(
                      *(_QWORD *)(v6 + 2520),
                      2u,
                      3u,
                      0x50u,
                      (__int64)&WPP_440221f57c503424f19abf9386554ba7_Traceguids,
                      *v18);
                  v7 = -1073741637;
                }
              }
              else
              {
                if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                  WPP_RECORDER_SF_d(
                    *(_QWORD *)(v6 + 2520),
                    2u,
                    3u,
                    0x4Fu,
                    (__int64)&WPP_440221f57c503424f19abf9386554ba7_Traceguids,
                    *v18);
                v7 = -1073741808;
              }
            }
            else
            {
              if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                WPP_RECORDER_SF_d(
                  *(_QWORD *)(v6 + 2520),
                  2u,
                  3u,
                  0x4Eu,
                  (__int64)&WPP_440221f57c503424f19abf9386554ba7_Traceguids,
                  *v18);
              v7 = -1073741811;
            }
            (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 1088))(
              WdfDriverGlobals,
              *(_QWORD *)(v6 + 16));
          }
        }
        else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          WPP_RECORDER_SF_d(
            *(_QWORD *)(v6 + 2520),
            2u,
            3u,
            0x4Cu,
            (__int64)&WPP_440221f57c503424f19abf9386554ba7_Traceguids,
            v7);
        }
      }
      else
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_(
            *(_QWORD *)(v6 + 2520),
            2u,
            3u,
            0x4Bu,
            (__int64)&WPP_440221f57c503424f19abf9386554ba7_Traceguids);
        v7 = -1073741820;
      }
    }
    else
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_(
          *(_QWORD *)(v6 + 2520),
          2u,
          3u,
          0x4Au,
          (__int64)&WPP_440221f57c503424f19abf9386554ba7_Traceguids);
      v7 = -1073741823;
    }
  }
  else
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_(*(_QWORD *)(v6 + 2520), 2u, 3u, 0x49u, (__int64)&WPP_440221f57c503424f19abf9386554ba7_Traceguids);
    v7 = -1073741790;
  }
  return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 2104))(
           WdfDriverGlobals,
           a2,
           (unsigned int)v7);
}
