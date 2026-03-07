__int64 UsbhEtwDriverEntry()
{
  NTSTATUS v0; // ebx
  struct _UNICODE_STRING DestinationString; // [rsp+20h] [rbp-18h] BYREF
  ULONGLONG RegHandle; // [rsp+50h] [rbp+18h] BYREF

  RegHandle = 0LL;
  DestinationString = 0LL;
  v0 = EtwRegister(&USBHUB_ETW_PROVIDER, UsbhEtwEnableCallback, 0LL, &RegHandle);
  if ( v0 >= 0 )
  {
    ::RegHandle = RegHandle;
    EtwSetInformation(
      RegHandle,
      EventProviderSetTraits,
      &`EnableManifestedProviderForMicrosoftTelemetry'::`2'::Traits,
      (unsigned __int16)`EnableManifestedProviderForMicrosoftTelemetry'::`2'::Traits);
  }
  RtlInitUnicodeString(&DestinationString, L"IoGetActivityIdIrp");
  g_IoGetActivityIdIrp = (__int64 (__fastcall *)(_QWORD, _QWORD))MmGetSystemRoutineAddress(&DestinationString);
  return (unsigned int)v0;
}
