/*
 * XREFs of RIMIDECheckCurrentProcessForInjectionCapability @ 0x1C0005ED4
 * Callers:
 *     NtUserInjectKeyboardInput @ 0x1C0003D50 (NtUserInjectKeyboardInput.c)
 *     NtUserInitializeGenericHidInjection @ 0x1C0146140 (NtUserInitializeGenericHidInjection.c)
 *     NtUserInitializeInputDeviceInjection @ 0x1C0146880 (NtUserInitializeInputDeviceInjection.c)
 *     NtUserInitializePointerDeviceInjectionEx @ 0x1C0146E70 (NtUserInitializePointerDeviceInjectionEx.c)
 *     NtUserInjectMouseInput @ 0x1C0148360 (NtUserInjectMouseInput.c)
 *     NtUserSetFeatureReportResponse @ 0x1C014AF30 (NtUserSetFeatureReportResponse.c)
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
