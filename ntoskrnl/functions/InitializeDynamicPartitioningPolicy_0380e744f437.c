__int64 InitializeDynamicPartitioningPolicy()
{
  __int64 result; // rax
  bool IsAnyHypervisorPresent; // al
  const WCHAR *v2; // rdx
  UNICODE_STRING DestinationString; // [rsp+30h] [rbp-10h] BYREF
  int v4; // [rsp+58h] [rbp+18h] BYREF
  int v5; // [rsp+60h] [rbp+20h]

  v4 = 0;
  v5 = 0;
  result = HvlpFlags;
  DestinationString = 0LL;
  if ( (HvlpFlags & 2) == 0 && (HvlpFlags & 4) == 0 )
  {
    IsAnyHypervisorPresent = HviIsAnyHypervisorPresent();
    v2 = L"Kernel-VirtualDynamicPartitioningSupported";
    if ( !IsAnyHypervisorPresent )
      v2 = L"Kernel-DynamicPartitioningSupported";
    RtlInitUnicodeString(&DestinationString, v2);
    return ZwQueryLicenseValue((__int64)&DestinationString, (__int64)&v4);
  }
  return result;
}
