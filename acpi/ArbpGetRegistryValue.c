/*
 * XREFs of ArbpGetRegistryValue @ 0x1C00A2FAC
 * Callers:
 *     ArbAddInaccessibleAllocationRange @ 0x1C00A0770 (ArbAddInaccessibleAllocationRange.c)
 *     ArbAddMmConfigRangeAsBootReserved @ 0x1C00A0984 (ArbAddMmConfigRangeAsBootReserved.c)
 *     ArbBuildAssignmentOrdering @ 0x1C00A124C (ArbBuildAssignmentOrdering.c)
 * Callees:
 *     RtlInitUnicodeString_0 @ 0x1C0001A0D (RtlInitUnicodeString_0.c)
 *     ZwQueryValueKey_0 @ 0x1C0001AD3 (ZwQueryValueKey_0.c)
 */

__int64 __fastcall ArbpGetRegistryValue(HANDLE KeyHandle, const WCHAR *a2, _QWORD *a3)
{
  NTSTATUS v5; // eax
  void *Pool2; // rax
  void *v8; // rbx
  NTSTATUS v9; // edi
  struct _UNICODE_STRING ValueName; // [rsp+30h] [rbp-18h] BYREF
  ULONG ResultLength; // [rsp+68h] [rbp+20h] BYREF

  ResultLength = 0;
  ValueName = 0LL;
  RtlInitUnicodeString_0(&ValueName, a2);
  v5 = ZwQueryValueKey_0(KeyHandle, &ValueName, KeyValueFullInformationAlign64, 0LL, 0, &ResultLength);
  if ( v5 != -2147483643 && v5 != -1073741789 )
    return 3221225473LL;
  Pool2 = (void *)ExAllocatePool2(256LL, ResultLength, 1298297409LL);
  v8 = Pool2;
  if ( !Pool2 )
    return 3221225626LL;
  v9 = ZwQueryValueKey_0(KeyHandle, &ValueName, KeyValueFullInformationAlign64, Pool2, ResultLength, &ResultLength);
  if ( v9 >= 0 )
  {
    *a3 = v8;
    return 0LL;
  }
  else
  {
    ExFreePoolWithTag(v8, 0);
    return (unsigned int)v9;
  }
}
