/*
 * XREFs of FsRtlpDedupChangeQueryValueKey @ 0x14093B864
 * Callers:
 *     FsRtlDedupChangeInit @ 0x14093B690 (FsRtlDedupChangeInit.c)
 * Callees:
 *     ZwClose @ 0x1404124F0 (ZwClose.c)
 *     ZwOpenKey @ 0x140412550 (ZwOpenKey.c)
 *     ZwQueryValueKey @ 0x1404125F0 (ZwQueryValueKey.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

NTSTATUS __fastcall FsRtlpDedupChangeQueryValueKey(
        UNICODE_STRING *a1,
        UNICODE_STRING *a2,
        ULONG *a3,
        PVOID *a4,
        _BYTE *a5)
{
  NTSTATUS result; // eax
  ULONG Length; // edi
  _BYTE *i; // r15
  NTSTATUS v11; // eax
  int v12; // ebx
  __int64 Pool2; // rbx
  HANDLE KeyHandle; // [rsp+30h] [rbp-40h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+38h] [rbp-38h] BYREF
  ULONG ResultLength; // [rsp+A0h] [rbp+30h] BYREF

  KeyHandle = 0LL;
  ResultLength = 0;
  memset(&ObjectAttributes.Attributes + 1, 0, 20);
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = a1;
  *(_QWORD *)&ObjectAttributes.Length = 48LL;
  ObjectAttributes.Attributes = 576;
  result = ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes);
  if ( result >= 0 )
  {
    if ( a2 )
    {
      Length = *a3;
      for ( i = a5; ; *i = 1 )
      {
        v11 = ZwQueryValueKey(KeyHandle, a2, KeyValueFullInformation, *a4, Length, &ResultLength);
        v12 = v11;
        if ( v11 != -1073741789 && v11 != -2147483643 )
          break;
        if ( Length != *a3 )
          break;
        Length = ResultLength;
        Pool2 = ExAllocatePool2(256LL, ResultLength, 1749247300LL);
        if ( !Pool2 )
        {
          v12 = -1073741670;
          break;
        }
        if ( *i )
          ExFreePoolWithTag(*a4, 0);
        *a4 = (PVOID)Pool2;
        *a3 = Length;
      }
      ZwClose(KeyHandle);
      if ( v12 >= 0 && !*((_DWORD *)*a4 + 3) )
        return -1073741772;
      return v12;
    }
    else
    {
      ZwClose(KeyHandle);
      return 0;
    }
  }
  return result;
}
