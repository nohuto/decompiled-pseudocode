/*
 * XREFs of RtlQueryRegistryValueWithFallback @ 0x1406393A0
 * Callers:
 *     EtwpGetGuidSecurityDescriptor @ 0x14063926C (EtwpGetGuidSecurityDescriptor.c)
 * Callees:
 *     ZwQueryValueKey @ 0x1403FA860 (ZwQueryValueKey.c)
 *     memmove @ 0x140414040 (memmove.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 */

NTSTATUS __stdcall RtlQueryRegistryValueWithFallback(
        HANDLE PrimaryHandle,
        HANDLE FallbackHandle,
        PUNICODE_STRING ValueName,
        ULONG ValueLength,
        PULONG ValueType,
        PVOID ValueData,
        PULONG ResultLength)
{
  ULONG Length; // esi
  ULONG *PoolWithTag; // rdi
  int v12; // ebx
  ULONG v14; // [rsp+50h] [rbp+8h] BYREF

  v14 = 0;
  if ( __PAIR128__((unsigned __int64)PrimaryHandle, (unsigned __int64)FallbackHandle) == 0 )
    return -1073741811;
  Length = ValueLength + 16;
  if ( ValueLength >= 0xFFFFFFF0 )
    return -1073741675;
  PoolWithTag = (ULONG *)ExAllocatePoolWithTag(PagedPool, Length, 0x6D6C7472u);
  if ( !PoolWithTag )
    return -1073741801;
  v12 = -1073741772;
  if ( PrimaryHandle )
  {
    v12 = ZwQueryValueKey(PrimaryHandle, ValueName, KeyValuePartialInformation, PoolWithTag, Length, &v14);
    if ( v12 != -1073741772 )
      goto LABEL_8;
  }
  if ( FallbackHandle )
  {
    v12 = ZwQueryValueKey(FallbackHandle, ValueName, KeyValuePartialInformation, PoolWithTag, Length, &v14);
LABEL_8:
    if ( (int)(v12 + 0x80000000) < 0 || v12 == -2147483643 )
    {
      *ResultLength = PoolWithTag[2];
      if ( ValueType )
        *ValueType = PoolWithTag[1];
      if ( v12 >= 0 )
        memmove(ValueData, PoolWithTag + 3, PoolWithTag[2]);
    }
  }
  ExFreePoolWithTag(PoolWithTag, 0);
  return v12;
}
