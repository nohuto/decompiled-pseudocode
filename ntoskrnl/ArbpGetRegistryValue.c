/*
 * XREFs of ArbpGetRegistryValue @ 0x14081EC78
 * Callers:
 *     ArbAddInaccessibleAllocationRange @ 0x14081E1A4 (ArbAddInaccessibleAllocationRange.c)
 *     ArbBuildAssignmentOrdering @ 0x14081E6C8 (ArbBuildAssignmentOrdering.c)
 *     ArbAddMmConfigRangeAsBootReserved @ 0x14081EF14 (ArbAddMmConfigRangeAsBootReserved.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14030EBB0 (RtlInitUnicodeString.c)
 *     ZwQueryValueKey @ 0x1404125F0 (ZwQueryValueKey.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall ArbpGetRegistryValue(HANDLE KeyHandle, const WCHAR *a2, _QWORD *a3)
{
  NTSTATUS v5; // eax
  void *Pool2; // rax
  void *v7; // rbx
  NTSTATUS v8; // edi
  UNICODE_STRING ValueName; // [rsp+30h] [rbp-18h] BYREF
  ULONG ResultLength; // [rsp+68h] [rbp+20h] BYREF

  ResultLength = 0;
  ValueName = 0LL;
  RtlInitUnicodeString(&ValueName, a2);
  v5 = ZwQueryValueKey(KeyHandle, &ValueName, KeyValueFullInformationAlign64, 0LL, 0, &ResultLength);
  if ( v5 != -1073741789 && v5 != -2147483643 )
    return 3221225473LL;
  Pool2 = (void *)ExAllocatePool2(256LL, ResultLength, 1298297409LL);
  v7 = Pool2;
  if ( !Pool2 )
    return 3221225626LL;
  v8 = ZwQueryValueKey(KeyHandle, &ValueName, KeyValueFullInformationAlign64, Pool2, ResultLength, &ResultLength);
  if ( v8 < 0 )
  {
    ExFreePoolWithTag(v7, 0);
    return (unsigned int)v8;
  }
  else
  {
    *a3 = v7;
    return 0LL;
  }
}
