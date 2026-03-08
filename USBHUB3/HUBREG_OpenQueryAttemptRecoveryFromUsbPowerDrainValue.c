/*
 * XREFs of HUBREG_OpenQueryAttemptRecoveryFromUsbPowerDrainValue @ 0x1C00887B0
 * Callers:
 *     HUBFDO_LowPowerEpochCallback @ 0x1C000FB30 (HUBFDO_LowPowerEpochCallback.c)
 *     HUBPDO_EvtWorkItemDripsWatchDogCallback @ 0x1C00803E0 (HUBPDO_EvtWorkItemDripsWatchDogCallback.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0002034 (WPP_RECORDER_SF_d.c)
 *     RtlUnicodeStringInit @ 0x1C003444C (RtlUnicodeStringInit.c)
 *     _guard_dispatch_icall_nop @ 0x1C0044C50 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall HUBREG_OpenQueryAttemptRecoveryFromUsbPowerDrainValue(_DWORD *a1)
{
  __int64 v2; // r13
  wchar_t *Pool2; // r12
  int v4; // ebx
  __int64 *v5; // r14
  int PersistedStateLocation; // eax
  char v7; // al
  unsigned __int16 v9; // r9
  NTSTATUS v10; // eax
  __int64 *v11; // [rsp+28h] [rbp-40h]
  __int64 v12; // [rsp+40h] [rbp-28h] BYREF
  __int64 v13; // [rsp+48h] [rbp-20h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+50h] [rbp-18h] BYREF
  char v16; // [rsp+C0h] [rbp+58h]
  unsigned int v17; // [rsp+C8h] [rbp+60h] BYREF

  DestinationString = 0LL;
  v17 = 0;
  v2 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, WDFDRIVER__ *, void *))(WdfFunctions_01015 + 1616))(
         WdfDriverGlobals,
         WdfDriverGlobals->Driver,
         off_1C006A1E8);
  v12 = 0LL;
  v13 = 0LL;
  v16 = 0;
  Pool2 = 0LL;
  v11 = &v12;
  v4 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, void *, __int64))(WdfFunctions_01015 + 1832))(
         WdfDriverGlobals,
         0LL,
         &g_UsbAutomaticSurpriseRemovalKeyName,
         131097LL);
  if ( v4 >= 0 )
  {
    v4 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, const wchar_t *, _DWORD *))(WdfFunctions_01015 + 1920))(
           WdfDriverGlobals,
           v12,
           L"@B",
           a1);
    if ( v4 >= 0 )
    {
      v16 = 1;
    }
    else
    {
      *a1 = 0;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_d(
          *(_QWORD *)(v2 + 64),
          2u,
          2u,
          0x8Au,
          (__int64)&WPP_7a0afab5c79d3741c23ff4ee70090e0b_Traceguids);
    }
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 1848))(WdfDriverGlobals, v12);
    v12 = 0LL;
    v5 = (__int64 *)(v2 + 64);
  }
  else
  {
    v5 = (__int64 *)(v2 + 64);
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_d(*v5, 2u, 2u, 0x89u, (__int64)&WPP_7a0afab5c79d3741c23ff4ee70090e0b_Traceguids);
  }
  if ( (unsigned __int8)RtlIsStateSeparationEnabled() != 1 )
    goto LABEL_13;
  PersistedStateLocation = RtlGetPersistedStateLocation(
                             L"USB",
                             0LL,
                             L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\usb",
                             0LL,
                             0LL,
                             0,
                             &v17);
  v4 = PersistedStateLocation;
  if ( PersistedStateLocation == -2147483643 )
  {
    Pool2 = (wchar_t *)ExAllocatePool2(64LL, v17, 1681082453LL);
    if ( Pool2 )
    {
      v10 = RtlGetPersistedStateLocation(
              L"USB",
              0LL,
              L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\usb",
              0LL,
              Pool2,
              v17,
              0LL);
      v4 = v10;
      if ( v10 >= 0 )
      {
        v10 = RtlUnicodeStringInit(&DestinationString, Pool2);
        v4 = v10;
        if ( v10 >= 0 )
        {
          v10 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, struct _UNICODE_STRING *, __int64, _QWORD, __int64 *))(WdfFunctions_01015 + 1832))(
                  WdfDriverGlobals,
                  0LL,
                  &DestinationString,
                  131097LL,
                  0LL,
                  &v13);
          v4 = v10;
          if ( v10 >= 0 )
          {
            v10 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, const wchar_t *, __int64, _QWORD, __int64 *))(WdfFunctions_01015 + 1832))(
                    WdfDriverGlobals,
                    v13,
                    L"02",
                    131097LL,
                    0LL,
                    &v12);
            v4 = v10;
            if ( v10 >= 0 )
            {
              v10 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, const wchar_t *, _DWORD *))(WdfFunctions_01015 + 1920))(
                      WdfDriverGlobals,
                      v12,
                      L"@B",
                      a1);
              v4 = v10;
              if ( v10 >= 0 )
              {
                v7 = 1;
                goto LABEL_14;
              }
              if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                goto LABEL_30;
              v9 = 145;
            }
            else
            {
              if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                goto LABEL_30;
              v9 = 144;
            }
          }
          else
          {
            if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              goto LABEL_30;
            v9 = 143;
          }
        }
        else
        {
          if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            goto LABEL_30;
          v9 = 142;
        }
      }
      else
      {
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          goto LABEL_30;
        v9 = 141;
      }
      LODWORD(v11) = v10;
    }
    else
    {
      v4 = -1073741670;
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
LABEL_30:
        v7 = 0;
        goto LABEL_14;
      }
      v9 = 140;
      LODWORD(v11) = -1073741670;
    }
    WPP_RECORDER_SF_d(*v5, 2u, 2u, v9, (__int64)&WPP_7a0afab5c79d3741c23ff4ee70090e0b_Traceguids, v11);
    goto LABEL_30;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LODWORD(v11) = PersistedStateLocation;
    WPP_RECORDER_SF_d(
      *(_QWORD *)(v2 + 64),
      2u,
      2u,
      0x8Bu,
      (__int64)&WPP_7a0afab5c79d3741c23ff4ee70090e0b_Traceguids,
      v11);
  }
LABEL_13:
  v7 = 0;
LABEL_14:
  if ( v16 && !v7 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LODWORD(v11) = v4;
      WPP_RECORDER_SF_d(*v5, 3u, 2u, 0x92u, (__int64)&WPP_7a0afab5c79d3741c23ff4ee70090e0b_Traceguids, v11);
    }
    v4 = 0;
  }
  if ( Pool2 )
    ExFreePoolWithTag(Pool2, 0x64334855u);
  if ( v13 )
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS))(WdfFunctions_01015 + 1848))(WdfDriverGlobals);
  if ( v12 )
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS))(WdfFunctions_01015 + 1848))(WdfDriverGlobals);
  return (unsigned int)v4;
}
