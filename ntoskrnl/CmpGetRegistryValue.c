/*
 * XREFs of CmpGetRegistryValue @ 0x140B960BC
 * Callers:
 *     CmpSetSystemBiosInformation @ 0x140B9565C (CmpSetSystemBiosInformation.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14030EBB0 (RtlInitUnicodeString.c)
 *     ZwQueryValueKey @ 0x1404125F0 (ZwQueryValueKey.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

NTSTATUS __fastcall CmpGetRegistryValue(HANDLE KeyHandle, const WCHAR *a2, _QWORD *a3)
{
  NTSTATUS result; // eax
  void *Pool2; // rax
  void *v7; // rbx
  NTSTATUS v8; // edi
  UNICODE_STRING ValueName; // [rsp+30h] [rbp-18h] BYREF
  ULONG ResultLength; // [rsp+68h] [rbp+20h] BYREF

  ResultLength = 0;
  ValueName = 0LL;
  RtlInitUnicodeString(&ValueName, a2);
  result = ZwQueryValueKey(KeyHandle, &ValueName, KeyValuePartialInformation, 0LL, 0, &ResultLength);
  if ( result >= 0 || result == -2147483643 || result == -1073741789 )
  {
    Pool2 = (void *)ExAllocatePool2(64LL, ResultLength, 0x49504341u);
    v7 = Pool2;
    if ( Pool2 )
    {
      v8 = ZwQueryValueKey(KeyHandle, &ValueName, KeyValuePartialInformation, Pool2, ResultLength, &ResultLength);
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
