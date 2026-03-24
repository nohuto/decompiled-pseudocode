/*
 * XREFs of ShouldEnableInputVirtualization @ 0x1C008A018
 * Callers:
 *     InputInitialize @ 0x1C008A25C (InputInitialize.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C003CBE8 (WPP_RECORDER_SF_.c)
 *     RIMIsRunningOnDesktop @ 0x1C004157C (RIMIsRunningOnDesktop.c)
 *     RIMRegQueryDWord @ 0x1C006C598 (RIMRegQueryDWord.c)
 *     RIMRegOpenKey @ 0x1C006C610 (RIMRegOpenKey.c)
 *     __security_check_cookie @ 0x1C00C5070 (__security_check_cookie.c)
 *     Feature_InputVirtualizationDesktopSpecific__private_ReportDeviceUsage @ 0x1C00CD378 (Feature_InputVirtualizationDesktopSpecific__private_ReportDeviceUsage.c)
 *     Feature_InputVirtualization__private_ReportDeviceUsage @ 0x1C00CD3DC (Feature_InputVirtualization__private_ReportDeviceUsage.c)
 *     WPP_RECORDER_SF_ccccc @ 0x1C01BA7C4 (WPP_RECORDER_SF_ccccc.c)
 */

char ShouldEnableInputVirtualization()
{
  int v0; // edx
  int v1; // r9d
  void *v2; // rax
  int v3; // edx
  int v4; // eax
  int v6; // [rsp+50h] [rbp-30h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+58h] [rbp-28h] BYREF
  __int128 v8; // [rsp+68h] [rbp-18h] BYREF

  if ( RIMIsRunningOnDesktop() )
  {
    if ( gSessionId != 1 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v1 = 14;
        goto LABEL_19;
      }
      return 0;
    }
    Feature_InputVirtualizationDesktopSpecific__private_ReportDeviceUsage();
    DestinationString = 0LL;
    RtlInitUnicodeString(
      &DestinationString,
      L"\\Registry\\Machine\\Software\\Microsoft\\Windows NT\\CurrentVersion\\Windows");
    v6 = 0;
    v4 = RIMRegQueryDWord((__int64)&DestinationString, (__int64)L"IsVailContainer", 0, &v6);
    if ( (v6 & 0x1F) == 0 )
    {
      if ( v4 )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          v1 = 16;
          LOBYTE(v0) = 3;
LABEL_20:
          WPP_RECORDER_SF_((_DWORD)gBaseLog, v0, 12, v1, (__int64)&WPP_2ccd359dbff93ea23c150f58e4d81fa3_Traceguids);
          return 0;
        }
      }
      else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v1 = 17;
        goto LABEL_19;
      }
      return 0;
    }
    byte_1C02595D0 = v6 & 1;
    byte_1C02595D1 = (v6 & 2) != 0;
    byte_1C02595C0 = (v6 & 4) != 0;
    byte_1C02595C1 = (v6 & 8) != 0;
    byte_1C02595C2 = (v6 & 0x10) != 0;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_ccccc();
  }
  else
  {
    Feature_InputVirtualization__private_ReportDeviceUsage();
    v8 = 0LL;
    HviGetHypervisorFeatures(&v8);
    if ( (v8 & 0x100000000000LL) == 0 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v1 = 11;
LABEL_19:
        LOBYTE(v0) = 4;
        goto LABEL_20;
      }
      return 0;
    }
    DestinationString = 0LL;
    RtlInitUnicodeString(&DestinationString, L"\\Registry\\Machine\\System\\CurrentControlSet\\Services\\CmService");
    v2 = RIMRegOpenKey(&DestinationString);
    if ( !v2 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v1 = 12;
        goto LABEL_19;
      }
      return 0;
    }
    ZwClose(v2);
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v3) = 4;
      WPP_RECORDER_SF_((_DWORD)gBaseLog, v3, 12, 13, (__int64)&WPP_2ccd359dbff93ea23c150f58e4d81fa3_Traceguids);
    }
  }
  return 1;
}
