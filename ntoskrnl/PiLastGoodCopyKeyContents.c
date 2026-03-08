/*
 * XREFs of PiLastGoodCopyKeyContents @ 0x140B6AE50
 * Callers:
 *     PpLastGoodDoBootProcessing @ 0x140B6ACC4 (PpLastGoodDoBootProcessing.c)
 * Callees:
 *     ZwClose @ 0x1404124F0 (ZwClose.c)
 *     ZwOpenKey @ 0x140412550 (ZwOpenKey.c)
 *     ZwEnumerateValueKey @ 0x140412570 (ZwEnumerateValueKey.c)
 *     ZwCreateKey @ 0x1404126B0 (ZwCreateKey.c)
 *     ZwSetValueKey @ 0x140412F10 (ZwSetValueKey.c)
 *     ZwDeleteKey @ 0x140413E50 (ZwDeleteKey.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PiLastGoodCopyKeyContents(UNICODE_STRING *a1, UNICODE_STRING *a2)
{
  __int64 Pool2; // rbx
  NTSTATUS v5; // edi
  NTSTATUS v7; // eax
  HANDLE v8; // rcx
  ULONG v9; // esi
  NTSTATUS v10; // eax
  HANDLE KeyHandle; // [rsp+40h] [rbp-49h] BYREF
  HANDLE Handle; // [rsp+48h] [rbp-41h] BYREF
  UNICODE_STRING ValueName; // [rsp+50h] [rbp-39h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+60h] [rbp-29h] BYREF
  OBJECT_ATTRIBUTES v15; // [rsp+90h] [rbp+7h] BYREF
  ULONG ResultLength; // [rsp+100h] [rbp+77h] BYREF
  ULONG Disposition; // [rsp+108h] [rbp+7Fh] BYREF

  *(&ObjectAttributes.Length + 1) = 0;
  *(&ObjectAttributes.Attributes + 1) = 0;
  *(&v15.Length + 1) = 0;
  *(&v15.Attributes + 1) = 0;
  KeyHandle = 0LL;
  Handle = 0LL;
  ResultLength = 0;
  Disposition = 0;
  ValueName = 0LL;
  Pool2 = ExAllocatePool2(256LL, 0x418uLL, 0x674C7050u);
  if ( !Pool2 )
    return 3221225626LL;
  ObjectAttributes.Length = 48;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 576;
  ObjectAttributes.ObjectName = a1;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v5 = ZwOpenKey(&KeyHandle, 0xF003Fu, &ObjectAttributes);
  if ( v5 >= 0 )
  {
    v15.Length = 48;
    v15.RootDirectory = 0LL;
    v15.Attributes = 576;
    v15.ObjectName = a2;
    *(_OWORD *)&v15.SecurityDescriptor = 0LL;
    v7 = ZwCreateKey(&Handle, 0xF003Fu, &v15, 0, 0LL, 0, &Disposition);
    v8 = KeyHandle;
    v5 = v7;
    if ( v7 >= 0 )
    {
      v5 = ZwEnumerateValueKey(KeyHandle, 0, KeyValueFullInformation, (PVOID)Pool2, 0x418u, &ResultLength);
      v9 = 1;
      if ( v5 < 0 )
      {
LABEL_9:
        if ( v5 == -2147483622 )
        {
          v5 = 0;
          ZwDeleteKey(KeyHandle);
        }
      }
      else
      {
        while ( 1 )
        {
          ValueName.Buffer = (wchar_t *)(Pool2 + 20);
          ValueName.Length = *(_WORD *)(Pool2 + 16);
          ValueName.MaximumLength = ValueName.Length;
          v5 = ZwSetValueKey(
                 Handle,
                 &ValueName,
                 0,
                 *(_DWORD *)(Pool2 + 4),
                 (PVOID)(Pool2 + *(unsigned int *)(Pool2 + 8)),
                 *(_DWORD *)(Pool2 + 12));
          if ( v5 < 0 )
            break;
          v10 = ZwEnumerateValueKey(KeyHandle, v9++, KeyValueFullInformation, (PVOID)Pool2, 0x418u, &ResultLength);
          v5 = v10;
          if ( v10 < 0 )
            goto LABEL_9;
        }
      }
      ZwClose(KeyHandle);
      v8 = Handle;
    }
    ZwClose(v8);
  }
  ExFreePoolWithTag((PVOID)Pool2, 0x674C7050u);
  return (unsigned int)v5;
}
