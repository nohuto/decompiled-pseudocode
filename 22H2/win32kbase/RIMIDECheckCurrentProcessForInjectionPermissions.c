/*
 * XREFs of RIMIDECheckCurrentProcessForInjectionPermissions @ 0x1C0167108
 * Callers:
 *     NtUserInitializeGenericHidInjection @ 0x1C0130280 (NtUserInitializeGenericHidInjection.c)
 *     NtUserInitializeInputDeviceInjection @ 0x1C01305F0 (NtUserInitializeInputDeviceInjection.c)
 *     NtUserInitializePointerDeviceInjectionEx @ 0x1C0130850 (NtUserInitializePointerDeviceInjectionEx.c)
 *     NtUserInjectDeviceInput @ 0x1C01309C0 (NtUserInjectDeviceInput.c)
 *     NtUserInjectGenericHidInput @ 0x1C0130DF0 (NtUserInjectGenericHidInput.c)
 *     NtUserInjectKeyboardInput @ 0x1C0131680 (NtUserInjectKeyboardInput.c)
 *     NtUserInjectMouseInput @ 0x1C0131AA0 (NtUserInjectMouseInput.c)
 *     NtUserInjectPointerInput @ 0x1C0131EC0 (NtUserInjectPointerInput.c)
 *     NtUserSetFeatureReportResponse @ 0x1C0133DD0 (NtUserSetFeatureReportResponse.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C003E058 (WPP_RECORDER_SF_.c)
 *     ApiSetEditionIsRIMInjectionBlocked @ 0x1C01CC508 (ApiSetEditionIsRIMInjectionBlocked.c)
 */

__int64 __fastcall RIMIDECheckCurrentProcessForInjectionPermissions(int a1)
{
  int v2; // edx
  int v3; // edi
  unsigned __int8 v4; // bl
  int v5; // edx
  struct _UNICODE_STRING v7[2]; // [rsp+30h] [rbp-28h] BYREF
  unsigned __int8 v8; // [rsp+60h] [rbp+8h] BYREF

  v8 = 0;
  v7[0] = 0LL;
  RtlInitUnicodeString(v7, L"inputInjection");
  v3 = RtlCapabilityCheck(0LL, v7, &v8);
  if ( v3 < 0 )
  {
    v4 = 0;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v2) = 2;
      WPP_RECORDER_SF_(
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        v2,
        21,
        54,
        (__int64)&WPP_6618ffd707d032c105188cf3f3e4149b_Traceguids);
    }
  }
  else
  {
    v4 = v8;
  }
  if ( !a1 && v3 >= 0 )
  {
    if ( (unsigned int)ApiSetEditionIsRIMInjectionBlocked() )
    {
      v4 = 0;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v5) = 2;
        WPP_RECORDER_SF_(
          WPP_MAIN_CB.Queue.ListEntry.Flink,
          v5,
          21,
          55,
          (__int64)&WPP_6618ffd707d032c105188cf3f3e4149b_Traceguids);
      }
    }
  }
  return v4;
}
