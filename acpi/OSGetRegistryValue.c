/*
 * XREFs of OSGetRegistryValue @ 0x1C008DCAC
 * Callers:
 *     PcisuppGetRoutingInfo @ 0x1C0099C6C (PcisuppGetRoutingInfo.c)
 *     IrqPolicyGetDevicePolicy @ 0x1C009F8A4 (IrqPolicyGetDevicePolicy.c)
 *     ACPIInitGetPlatformOverrides @ 0x1C00A87E8 (ACPIInitGetPlatformOverrides.c)
 *     OSReadAcpiConfigurationData @ 0x1C00AA2F4 (OSReadAcpiConfigurationData.c)
 *     IrqPolicyConfigure @ 0x1C00AC2A4 (IrqPolicyConfigure.c)
 *     IrqPolicyGetDistributionDisposition @ 0x1C00AC39C (IrqPolicyGetDistributionDisposition.c)
 * Callees:
 *     <none>
 */

NTSTATUS __fastcall OSGetRegistryValue(HANDLE KeyHandle, const WCHAR *a2, _QWORD *a3)
{
  NTSTATUS result; // eax
  void *Pool2; // rax
  void *v7; // rbx
  NTSTATUS v8; // edi
  struct _UNICODE_STRING ValueName; // [rsp+30h] [rbp-18h] BYREF
  ULONG ResultLength; // [rsp+68h] [rbp+20h] BYREF

  ResultLength = 0;
  ValueName = 0LL;
  RtlInitUnicodeString(&ValueName, a2);
  result = ZwQueryValueKey(KeyHandle, &ValueName, KeyValuePartialInformationAlign64, 0LL, 0, &ResultLength);
  if ( result >= 0 )
    return -1073741823;
  if ( result == -2147483643 || result == -1073741789 )
  {
    Pool2 = (void *)ExAllocatePool2(64LL, ResultLength, 1399874369LL);
    v7 = Pool2;
    if ( Pool2 )
    {
      v8 = ZwQueryValueKey(KeyHandle, &ValueName, KeyValuePartialInformationAlign64, Pool2, ResultLength, &ResultLength);
      if ( v8 >= 0 )
      {
        *a3 = v7;
        return 0;
      }
      else
      {
        ExFreePoolWithTag(v7, 0);
        return v8;
      }
    }
    else
    {
      return -1073741670;
    }
  }
  return result;
}
