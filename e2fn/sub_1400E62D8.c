PVOID sub_1400E62D8()
{
  PVOID result; // rax
  unsigned int v1; // [rsp+30h] [rbp-20h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+38h] [rbp-18h] BYREF

  v1 = 0;
  RtlInitUnicodeString(&DestinationString, L"PsGetVersion");
  qword_1400DF400 = (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))MmGetSystemRoutineAddress(&DestinationString);
  RtlInitUnicodeString(&DestinationString, L"WmiTraceMessage");
  qword_1400DF3E8 = (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD))MmGetSystemRoutineAddress(&DestinationString);
  RtlInitUnicodeString(&DestinationString, L"WmiQueryTraceInformation");
  qword_1400DF3E0 = (__int64)MmGetSystemRoutineAddress(&DestinationString);
  result = qword_1400DF400;
  dword_1400DF408 = 2;
  if ( qword_1400DF400 )
    result = (PVOID)qword_1400DF400(&v1, 0LL, 0LL, 0LL);
  if ( v1 >= 6 )
  {
    RtlInitUnicodeString(&DestinationString, L"EtwRegisterClassicProvider");
    result = MmGetSystemRoutineAddress(&DestinationString);
    qword_1400DF3F8 = (__int64)result;
    if ( result )
    {
      RtlInitUnicodeString(&DestinationString, L"EtwUnregister");
      result = MmGetSystemRoutineAddress(&DestinationString);
      qword_1400DF3F0 = (__int64)result;
      dword_1400DF408 = 4;
    }
  }
  return result;
}
