char IsWin32kRefreshed(void)
{
  char v0; // di
  __int64 Pool2; // rbx
  ULONG v2; // ecx
  __int64 v4; // rax
  ULONG Length; // [rsp+38h] [rbp-69h] BYREF
  void *KeyHandle; // [rsp+40h] [rbp-61h] BYREF
  ULONGLONG Value; // [rsp+48h] [rbp-59h] BYREF
  struct _UNICODE_STRING String; // [rsp+50h] [rbp-51h] BYREF
  struct _UNICODE_STRING ValueName; // [rsp+60h] [rbp-41h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+70h] [rbp-31h] BYREF
  UNICODE_STRING String1; // [rsp+80h] [rbp-21h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+90h] [rbp-11h] BYREF
  _WORD Data[20]; // [rsp+C0h] [rbp+1Fh] BYREF

  KeyHandle = 0LL;
  Length = 0;
  memset(&ObjectAttributes, 0, sizeof(ObjectAttributes));
  v0 = 1;
  Value = 0LL;
  DestinationString = 0LL;
  ValueName = 0LL;
  String = 0LL;
  String1 = 0LL;
  if ( Win32FileInfo(L"\\systemroot\\system32\\win32kbase.sys", &Value, 0LL) )
  {
    String.Buffer = Data;
    *(_DWORD *)&String.Length = 2228224;
    if ( RtlInt64ToUnicodeString(Value, 0x10u, &String) >= 0 )
    {
      RtlInitUnicodeString(
        &DestinationString,
        L"\\REGISTRY\\MACHINE\\SOFTWARE\\MICROSOFT\\WINDOWS NT\\CURRENTVERSION\\WINDOWS");
      ObjectAttributes.Length = 48;
      ObjectAttributes.ObjectName = &DestinationString;
      ObjectAttributes.RootDirectory = 0LL;
      ObjectAttributes.Attributes = 576;
      *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
      if ( ZwOpenKey(&KeyHandle, 0x2001Fu, &ObjectAttributes) >= 0 )
      {
        RtlInitUnicodeString(&ValueName, L"Win32kLastWriteTime");
        Length = 46;
        Pool2 = ExAllocatePool2(260LL, 46LL, 1953264469LL);
        if ( Pool2 )
        {
          if ( ZwQueryValueKey(KeyHandle, &ValueName, KeyValuePartialInformation, (PVOID)Pool2, Length, &Length) < 0 )
            goto LABEL_16;
          v2 = Length;
          if ( *(_DWORD *)(Pool2 + 8) >> 1 < Length )
            v2 = *(_DWORD *)(Pool2 + 8) >> 1;
          Length = v2;
          if ( v2 <= 1
            || !*(_WORD *)(Pool2 + 12)
            || (*(_WORD *)(Pool2 + 2LL * (v2 - 1) + 12) = 0,
                RtlInitUnicodeString(&String1, (PCWSTR)(Pool2 + 12)),
                RtlCompareUnicodeString(&String1, &String, 0)) )
          {
LABEL_16:
            v4 = -1LL;
            do
              ++v4;
            while ( Data[v4] );
            if ( ZwSetValueKey(KeyHandle, &ValueName, 0, 1u, Data, 2 * v4 + 2) >= 0 )
              ZwFlushKey(KeyHandle);
          }
          else
          {
            v0 = 0;
          }
          ExFreePoolWithTag((PVOID)Pool2, 0);
        }
      }
    }
  }
  if ( KeyHandle )
    ZwClose(KeyHandle);
  return v0;
}
