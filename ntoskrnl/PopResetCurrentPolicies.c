/*
 * XREFs of PopResetCurrentPolicies @ 0x140829F88
 * Callers:
 *     NtPowerInformation @ 0x14068AB90 (NtPowerInformation.c)
 *     PopCreateHiberFile @ 0x1407FBF00 (PopCreateHiberFile.c)
 *     PopThermalZoneAdd @ 0x1408296E0 (PopThermalZoneAdd.c)
 *     PdcPoReportButton @ 0x140829AB0 (PdcPoReportButton.c)
 *     PopEnableHiberFile @ 0x14082ADA4 (PopEnableHiberFile.c)
 *     PopThermalZoneRemove @ 0x140988010 (PopThermalZoneRemove.c)
 *     PopPolicyDeviceHandleWakeAlarmNotification @ 0x1409915D4 (PopPolicyDeviceHandleWakeAlarmNotification.c)
 *     PopBatteryAdd @ 0x140991F80 (PopBatteryAdd.c)
 *     PopBatteryRemove @ 0x140992740 (PopBatteryRemove.c)
 *     PopBatteryUpdateCompositeInformation @ 0x1409929B8 (PopBatteryUpdateCompositeInformation.c)
 *     PoInitSystem @ 0x140B45CAC (PoInitSystem.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14030EBB0 (RtlInitUnicodeString.c)
 *     PopOpenPowerKey @ 0x1403900C8 (PopOpenPowerKey.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     ZwClose @ 0x1404124F0 (ZwClose.c)
 *     ZwQueryValueKey @ 0x1404125F0 (ZwQueryValueKey.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     PopApplyPolicy @ 0x14082A06C (PopApplyPolicy.c)
 *     PopDefaultPolicy @ 0x14085E8D8 (PopDefaultPolicy.c)
 */

__int64 PopResetCurrentPolicies()
{
  __int64 result; // rax
  NTSTATUS v1; // ebx
  __int64 v2; // r9
  ULONG ResultLength; // [rsp+30h] [rbp-D0h] BYREF
  HANDLE KeyHandle; // [rsp+38h] [rbp-C8h] BYREF
  UNICODE_STRING DestinationString; // [rsp+40h] [rbp-C0h] BYREF
  _BYTE KeyValueInformation[256]; // [rsp+50h] [rbp-B0h] BYREF

  KeyHandle = 0LL;
  ResultLength = 0;
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
           &ResultLength);
    if ( v1 < 0 )
    {
      PopDefaultPolicy(&KeyValueInformation[12]);
      v2 = 232LL;
    }
    else
    {
      v2 = ResultLength - 12;
    }
    ResultLength = v2;
    PopApplyPolicy(0LL, 0LL, &KeyValueInformation[12], v2);
    ZwClose(KeyHandle);
    return (unsigned int)v1;
  }
  return result;
}
