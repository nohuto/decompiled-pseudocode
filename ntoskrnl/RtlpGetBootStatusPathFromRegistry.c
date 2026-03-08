/*
 * XREFs of RtlpGetBootStatusPathFromRegistry @ 0x1403C0450
 * Callers:
 *     RtlpGetBootStatusPath @ 0x1403C03F4 (RtlpGetBootStatusPath.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14030EBB0 (RtlInitUnicodeString.c)
 *     ZwClose @ 0x1404124F0 (ZwClose.c)
 *     ZwOpenKey @ 0x140412550 (ZwOpenKey.c)
 *     ZwQueryValueKey @ 0x1404125F0 (ZwQueryValueKey.c)
 *     memmove @ 0x14042CCC0 (memmove.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall RtlpGetBootStatusPathFromRegistry(_QWORD *a1)
{
  NTSTATUS v2; // ebx
  NTSTATUS v3; // eax
  unsigned int *Pool2; // rdi
  void *v6; // rax
  void *v7; // rsi
  UNICODE_STRING DestinationString; // [rsp+30h] [rbp-40h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+40h] [rbp-30h] BYREF
  ULONG ResultLength; // [rsp+A8h] [rbp+38h] BYREF
  ULONG v11; // [rsp+B0h] [rbp+40h] BYREF
  HANDLE KeyHandle; // [rsp+B8h] [rbp+48h] BYREF

  v11 = 0;
  ResultLength = 0;
  *(&ObjectAttributes.Attributes + 1) = 0;
  KeyHandle = 0LL;
  *(_QWORD *)&ObjectAttributes.Length = 48LL;
  DestinationString = 0LL;
  RtlInitUnicodeString(&DestinationString, L"\\REGISTRY\\MACHINE\\SYSTEM\\CurrentControlSet\\Control");
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v2 = ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes);
  if ( v2 >= 0 )
  {
    RtlInitUnicodeString(&DestinationString, L"OsBootstatPath");
    v3 = ZwQueryValueKey(KeyHandle, &DestinationString, KeyValuePartialInformation, 0LL, 0, &ResultLength);
    v2 = v3;
    if ( v3 == -1073741789 )
    {
      Pool2 = (unsigned int *)ExAllocatePool2(256LL, ResultLength, 1717859170LL);
      if ( Pool2 )
      {
        v2 = ZwQueryValueKey(KeyHandle, &DestinationString, KeyValuePartialInformation, Pool2, ResultLength, &v11);
        if ( v2 >= 0 )
        {
          v6 = (void *)ExAllocatePool2(256LL, Pool2[2], 1717859170LL);
          v7 = v6;
          if ( v6 )
          {
            memmove(v6, Pool2 + 3, Pool2[2]);
            *a1 = v7;
          }
          else
          {
            v2 = -1073741801;
          }
        }
        ExFreePoolWithTag(Pool2, 0);
      }
      else
      {
        v2 = -1073741801;
      }
    }
    else if ( v3 >= 0 )
    {
      v2 = -1073741823;
    }
  }
  if ( KeyHandle )
    ZwClose(KeyHandle);
  return (unsigned int)v2;
}
