/*
 * XREFs of RIMIDECheckCurrentProcessForInjectionCapability @ 0x1C0004814
 * Callers:
 *     NtUserInjectKeyboardInput @ 0x1C00031D0 (NtUserInjectKeyboardInput.c)
 *     NtUserInitializeGenericHidInjection @ 0x1C01718B0 (NtUserInitializeGenericHidInjection.c)
 *     NtUserInitializeInputDeviceInjection @ 0x1C0172020 (NtUserInitializeInputDeviceInjection.c)
 *     NtUserInitializePointerDeviceInjectionEx @ 0x1C0172660 (NtUserInitializePointerDeviceInjectionEx.c)
 *     NtUserInjectMouseInput @ 0x1C0173C50 (NtUserInjectMouseInput.c)
 *     NtUserSetFeatureReportResponse @ 0x1C0176950 (NtUserSetFeatureReportResponse.c)
 * Callees:
 *     <none>
 */

__int64 RIMIDECheckCurrentProcessForInjectionCapability()
{
  int v0; // eax
  unsigned __int8 v1; // dl
  _UNICODE_STRING DestinationString; // [rsp+20h] [rbp-18h] BYREF
  unsigned __int8 v4; // [rsp+40h] [rbp+8h] BYREF

  v4 = 0;
  DestinationString = 0LL;
  RtlInitUnicodeString(&DestinationString, L"inputInjection");
  v0 = RtlCapabilityCheck(0LL, &DestinationString, &v4);
  v1 = 0;
  if ( v0 >= 0 )
    return v4;
  return v1;
}
