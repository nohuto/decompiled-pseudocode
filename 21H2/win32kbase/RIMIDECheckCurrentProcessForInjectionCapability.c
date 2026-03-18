/*
 * XREFs of RIMIDECheckCurrentProcessForInjectionCapability @ 0x1C0004E54
 * Callers:
 *     NtUserInjectKeyboardInput @ 0x1C0003160 (NtUserInjectKeyboardInput.c)
 *     NtUserInitializeGenericHidInjection @ 0x1C015B1B0 (NtUserInitializeGenericHidInjection.c)
 *     NtUserInitializeInputDeviceInjection @ 0x1C015BD40 (NtUserInitializeInputDeviceInjection.c)
 *     NtUserInitializePointerDeviceInjectionEx @ 0x1C015C5F0 (NtUserInitializePointerDeviceInjectionEx.c)
 *     NtUserInjectMouseInput @ 0x1C015DD80 (NtUserInjectMouseInput.c)
 *     NtUserSetFeatureReportResponse @ 0x1C0161000 (NtUserSetFeatureReportResponse.c)
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
