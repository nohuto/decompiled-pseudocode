/*
 * XREFs of PopResetCurrentPolicies @ 0x140793E98
 * Callers:
 *     NtPowerInformation @ 0x14066AF10 (NtPowerInformation.c)
 *     PopThermalZoneAdd @ 0x140791D90 (PopThermalZoneAdd.c)
 *     PopEnableHiberFile @ 0x1407926A0 (PopEnableHiberFile.c)
 *     PopCreateHiberFile @ 0x140792F70 (PopCreateHiberFile.c)
 *     PdcPoReportButton @ 0x140793490 (PdcPoReportButton.c)
 *     PopChangeCapability @ 0x140793A44 (PopChangeCapability.c)
 *     PopThermalZoneRemove @ 0x1408E7EE0 (PopThermalZoneRemove.c)
 *     PopBatteryAdd @ 0x1408ECF50 (PopBatteryAdd.c)
 *     PopBatteryRemove @ 0x1408ED780 (PopBatteryRemove.c)
 *     PopBatteryUpdateCompositeInformation @ 0x1408ED9F8 (PopBatteryUpdateCompositeInformation.c)
 *     PoInitSystem @ 0x140A40948 (PoInitSystem.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14026A4C0 (RtlInitUnicodeString.c)
 *     PopOpenPowerKey @ 0x1403A7DDC (PopOpenPowerKey.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     ZwClose @ 0x1403FA760 (ZwClose.c)
 *     ZwQueryValueKey @ 0x1403FA860 (ZwQueryValueKey.c)
 *     memset @ 0x140414300 (memset.c)
 *     PopApplyPolicy @ 0x140793F7C (PopApplyPolicy.c)
 *     PopDefaultPolicy @ 0x1407D2700 (PopDefaultPolicy.c)
 */

__int64 PopResetCurrentPolicies()
{
  __int64 result; // rax
  NTSTATUS v1; // ebx
  __int64 v2; // r9
  __int64 Length; // [rsp+20h] [rbp-E0h]
  PULONG ResultLength; // [rsp+28h] [rbp-D8h]
  __int64 v5; // [rsp+30h] [rbp-D0h] BYREF
  HANDLE KeyHandle; // [rsp+38h] [rbp-C8h] BYREF
  UNICODE_STRING DestinationString; // [rsp+40h] [rbp-C0h] BYREF
  _QWORD KeyValueInformation[32]; // [rsp+50h] [rbp-B0h] BYREF

  KeyHandle = 0LL;
  LODWORD(v5) = 0;
  DestinationString = 0LL;
  memset(KeyValueInformation, 0, 0xF8uLL);
  result = PopOpenPowerKey((__int64)&KeyHandle);
  if ( (int)result >= 0 )
  {
    RtlInitUnicodeString(&DestinationString, L"SystemPowerPolicy");
    v1 = ZwQueryValueKey(
           KeyHandle,
           &DestinationString,
           KeyValuePartialInformation,
           KeyValueInformation,
           0xF8u,
           (PULONG)&v5);
    if ( v1 < 0 )
    {
      PopDefaultPolicy((char *)&KeyValueInformation[1] + 4);
      v2 = 232LL;
    }
    else
    {
      v2 = (unsigned int)(v5 - 12);
    }
    LODWORD(v5) = v2;
    ((void (__fastcall *)(_QWORD, _QWORD, char *, __int64, __int64, PULONG, __int64, HANDLE, _QWORD, wchar_t *, _QWORD, _QWORD))PopApplyPolicy)(
      0LL,
      0LL,
      (char *)&KeyValueInformation[1] + 4,
      v2,
      Length,
      ResultLength,
      v5,
      KeyHandle,
      *(_QWORD *)&DestinationString.Length,
      DestinationString.Buffer,
      KeyValueInformation[0],
      KeyValueInformation[1]);
    ZwClose(KeyHandle);
    return (unsigned int)v1;
  }
  return result;
}
