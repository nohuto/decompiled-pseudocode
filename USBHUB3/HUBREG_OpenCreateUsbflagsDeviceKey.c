/*
 * XREFs of HUBREG_OpenCreateUsbflagsDeviceKey @ 0x1C00838E4
 * Callers:
 *     HUBREG_AssignUsbflagsValueForDevice @ 0x1C00842FC (HUBREG_AssignUsbflagsValueForDevice.c)
 *     HUBREG_QueryUsbflagsValuesForDevice @ 0x1C0084444 (HUBREG_QueryUsbflagsValuesForDevice.c)
 *     HUBREG_QueryHubErrataFlags @ 0x1C0084F64 (HUBREG_QueryHubErrataFlags.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0002034 (WPP_RECORDER_SF_d.c)
 *     RtlUnicodeStringPrintf @ 0x1C000C4DC (RtlUnicodeStringPrintf.c)
 *     RtlUnicodeStringInit @ 0x1C003444C (RtlUnicodeStringInit.c)
 *     __security_check_cookie @ 0x1C0044920 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0044C50 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall HUBREG_OpenCreateUsbflagsDeviceKey(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        _QWORD *a5,
        _QWORD *a6,
        char a7,
        __int64 a8)
{
  void *v8; // rsi
  NTSTATUS PersistedStateLocation; // ebx
  __int64 Pool2; // rax
  const wchar_t *v11; // rcx
  __int64 v12; // rdx
  unsigned int v13; // r14d
  unsigned __int16 v14; // r9
  __int64 v16; // [rsp+28h] [rbp-C1h]
  __int64 v17; // [rsp+28h] [rbp-C1h]
  __int64 v18; // [rsp+28h] [rbp-C1h]
  unsigned int v19; // [rsp+50h] [rbp-99h] BYREF
  __int64 v20; // [rsp+58h] [rbp-91h] BYREF
  unsigned int v21; // [rsp+60h] [rbp-89h]
  struct _UNICODE_STRING DestinationString; // [rsp+68h] [rbp-81h] BYREF
  struct _UNICODE_STRING v23; // [rsp+78h] [rbp-71h] BYREF
  __int64 v24; // [rsp+88h] [rbp-61h]
  __int64 v25; // [rsp+90h] [rbp-59h]
  __int64 v26; // [rsp+98h] [rbp-51h]
  _QWORD *v27; // [rsp+A0h] [rbp-49h]
  char v28; // [rsp+A8h] [rbp-41h] BYREF

  v24 = a3;
  v26 = a1;
  v21 = a4;
  v25 = a2;
  v27 = a5;
  *(_QWORD *)&v23.Length = 3407872LL;
  v23.Buffer = (wchar_t *)&v28;
  v19 = 0;
  v20 = 0LL;
  DestinationString = 0LL;
  if ( a5 )
    *a5 = 0LL;
  *a6 = 0LL;
  v8 = 0LL;
  if ( a7 != 1 )
  {
    v11 = L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\usbflags";
    v12 = 0x7FFFLL;
    while ( *v11 )
    {
      ++v11;
      if ( !--v12 )
        goto LABEL_17;
    }
    DestinationString.Buffer = L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\usbflags";
    DestinationString.Length = 2 * (0x7FFF - v12);
    DestinationString.MaximumLength = DestinationString.Length + 2;
    goto LABEL_17;
  }
  PersistedStateLocation = RtlGetPersistedStateLocation(
                             L"UsbFlags",
                             0LL,
                             L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\usbflags",
                             0LL,
                             0LL,
                             0,
                             &v19);
  if ( PersistedStateLocation == -2147483643 )
  {
    Pool2 = ExAllocatePool2(64LL, v19, 1681082453LL);
    v8 = (void *)Pool2;
    if ( Pool2 )
    {
      PersistedStateLocation = RtlGetPersistedStateLocation(
                                 L"UsbFlags",
                                 0LL,
                                 L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\usbflags",
                                 0LL,
                                 Pool2,
                                 v19,
                                 0LL);
      if ( PersistedStateLocation < 0 )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LODWORD(v17) = PersistedStateLocation;
          WPP_RECORDER_SF_d(a8, 2u, 5u, 0xAu, (__int64)&WPP_7a0afab5c79d3741c23ff4ee70090e0b_Traceguids, v17);
        }
LABEL_34:
        ExFreePoolWithTag(v8, 0x64334855u);
        goto LABEL_35;
      }
      RtlUnicodeStringInit(&DestinationString, (NTSTRSAFE_PCWSTR)v8);
    }
LABEL_17:
    v13 = v21;
    PersistedStateLocation = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, struct _UNICODE_STRING *, _QWORD, _QWORD, __int64 *))(WdfFunctions_01015 + 1832))(
                               WdfDriverGlobals,
                               0LL,
                               &DestinationString,
                               v21,
                               0LL,
                               &v20);
    if ( PersistedStateLocation == -1073741772 )
    {
      if ( a7 != 1 )
      {
LABEL_21:
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          goto LABEL_33;
        v14 = 12;
        goto LABEL_32;
      }
      PersistedStateLocation = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, struct _UNICODE_STRING *, _QWORD, _DWORD, _QWORD, _QWORD, __int64 *))(WdfFunctions_01015 + 1840))(
                                 WdfDriverGlobals,
                                 0LL,
                                 &DestinationString,
                                 v13,
                                 0,
                                 0LL,
                                 0LL,
                                 &v20);
    }
    if ( PersistedStateLocation < 0 )
      goto LABEL_21;
    PersistedStateLocation = RtlUnicodeStringPrintf(&v23, L"%S%S%S", v26, v25, v24);
    if ( PersistedStateLocation < 0 )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_33;
      v14 = 13;
      goto LABEL_32;
    }
    PersistedStateLocation = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, struct _UNICODE_STRING *, __int64, _QWORD, _QWORD *))(WdfFunctions_01015 + 1832))(
                               WdfDriverGlobals,
                               v20,
                               &v23,
                               131097LL,
                               0LL,
                               a6);
    if ( PersistedStateLocation == -1073741772 )
    {
      if ( a7 != 1 )
      {
LABEL_30:
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          goto LABEL_33;
        v14 = 14;
LABEL_32:
        LODWORD(v18) = PersistedStateLocation;
        WPP_RECORDER_SF_d(a8, 2u, 5u, v14, (__int64)&WPP_7a0afab5c79d3741c23ff4ee70090e0b_Traceguids, v18);
LABEL_33:
        if ( !v8 )
          goto LABEL_35;
        goto LABEL_34;
      }
      PersistedStateLocation = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, struct _UNICODE_STRING *, __int64, _DWORD, _QWORD, _QWORD, _QWORD *))(WdfFunctions_01015 + 1840))(
                                 WdfDriverGlobals,
                                 v20,
                                 &v23,
                                 983103LL,
                                 0,
                                 0LL,
                                 0LL,
                                 a6);
    }
    if ( PersistedStateLocation >= 0 )
      goto LABEL_33;
    goto LABEL_30;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LODWORD(v16) = PersistedStateLocation;
    WPP_RECORDER_SF_d(a8, 2u, 5u, 0xBu, (__int64)&WPP_7a0afab5c79d3741c23ff4ee70090e0b_Traceguids, v16);
  }
LABEL_35:
  if ( PersistedStateLocation >= 0 )
  {
    if ( !v27 )
    {
LABEL_42:
      (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS))(WdfFunctions_01015 + 1848))(WdfDriverGlobals);
      return (unsigned int)PersistedStateLocation;
    }
    *v27 = v20;
  }
  else
  {
    if ( *a6 )
    {
      (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS))(WdfFunctions_01015 + 1848))(WdfDriverGlobals);
      *a6 = 0LL;
    }
    if ( v20 )
      goto LABEL_42;
  }
  return (unsigned int)PersistedStateLocation;
}
