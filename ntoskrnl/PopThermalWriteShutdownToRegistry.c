/*
 * XREFs of PopThermalWriteShutdownToRegistry @ 0x14058DC80
 * Callers:
 *     PopCheckAndHandleThermalConditions @ 0x14039CAB4 (PopCheckAndHandleThermalConditions.c)
 *     PopThermalProcessUsermodeEvent @ 0x140987DC8 (PopThermalProcessUsermodeEvent.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14030EBB0 (RtlInitUnicodeString.c)
 *     PopOpenThermalLoggingKey @ 0x1403AB30C (PopOpenThermalLoggingKey.c)
 *     ZwClose @ 0x1404124F0 (ZwClose.c)
 *     ZwSetValueKey @ 0x140412F10 (ZwSetValueKey.c)
 */

NTSTATUS __fastcall PopThermalWriteShutdownToRegistry(__int64 a1, void *a2)
{
  NTSTATUS result; // eax
  unsigned __int64 v5; // [rsp+30h] [rbp-50h] BYREF
  UNICODE_STRING DestinationString; // [rsp+38h] [rbp-48h] BYREF
  UNICODE_STRING ValueName; // [rsp+48h] [rbp-38h] BYREF
  UNICODE_STRING v8; // [rsp+58h] [rbp-28h] BYREF
  UNICODE_STRING v9; // [rsp+68h] [rbp-18h] BYREF
  int Data; // [rsp+A0h] [rbp+20h] BYREF
  HANDLE KeyHandle; // [rsp+A8h] [rbp+28h] BYREF

  KeyHandle = 0LL;
  DestinationString = 0LL;
  ValueName = 0LL;
  v9 = 0LL;
  v8 = 0LL;
  result = PopOpenThermalLoggingKey(0, &KeyHandle);
  if ( result >= 0 )
  {
    RtlInitUnicodeString(&DestinationString, L"ShutdownOccurred");
    RtlInitUnicodeString(&ValueName, L"ShutdownSource");
    RtlInitUnicodeString(&v9, L"ShutdownTemperature");
    RtlInitUnicodeString(&v8, L"ShutdownTotalUpTime");
    Data = 1;
    v5 = MEMORY[0xFFFFF78000000008] / 0x2710uLL;
    result = ZwSetValueKey(KeyHandle, &DestinationString, 0, 4u, &Data, 4u);
    if ( !PopThermalCriticalShutdownReported )
    {
      if ( a1 )
        ZwSetValueKey(KeyHandle, &ValueName, 0, 1u, *(PVOID *)(a1 + 8), *(unsigned __int16 *)(a1 + 2));
      result = ZwSetValueKey(KeyHandle, &v8, 0, 0xBu, &v5, 8u);
      if ( a2 )
        result = ZwSetValueKey(KeyHandle, &v9, 0, 4u, a2, 4u);
    }
    PopThermalCriticalShutdownReported = 1;
    if ( KeyHandle )
      return ZwClose(KeyHandle);
  }
  return result;
}
