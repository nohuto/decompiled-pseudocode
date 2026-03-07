void HalpDmaFinalizeDoubleBufferingDisposition()
{
  void *v0; // rbx
  _BYTE *v1; // rdi
  NTSTATUS v2; // eax
  void *Pool2; // rax
  size_t v4; // rax
  unsigned int *v5; // rdx
  __int64 v6; // rax
  unsigned __int64 v7; // rax
  ULONG ResultLength; // [rsp+30h] [rbp-29h] BYREF
  unsigned int v9; // [rsp+34h] [rbp-25h] BYREF
  HANDLE KeyHandle; // [rsp+38h] [rbp-21h] BYREF
  UNICODE_STRING ValueName; // [rsp+40h] [rbp-19h] BYREF
  _QWORD v12[2]; // [rsp+50h] [rbp-9h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+60h] [rbp+7h] BYREF
  _BYTE KeyValueInformation[16]; // [rsp+90h] [rbp+37h] BYREF

  memset(&ObjectAttributes.Attributes + 1, 0, 20);
  ResultLength = 0;
  v12[1] = L"\\Registry\\MACHINE\\SYSTEM\\CurrentControlSet\\Control\\Session Manager\\Memory Management";
  *(_QWORD *)&ObjectAttributes.Length = 48LL;
  v0 = 0LL;
  KeyHandle = 0LL;
  ObjectAttributes.RootDirectory = 0LL;
  ValueName.Buffer = L"DynamicMemory";
  ObjectAttributes.ObjectName = (PUNICODE_STRING)v12;
  v12[0] = 11141288LL;
  *(_QWORD *)&ValueName.Length = 1835034LL;
  ObjectAttributes.Attributes = 576;
  if ( !ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes) )
  {
    v1 = KeyValueInformation;
    v2 = ZwQueryValueKey(KeyHandle, &ValueName, KeyValuePartialInformation, KeyValueInformation, 0x10u, &ResultLength);
    if ( (v2 == -2147483643 || v2 == -1073741789) && ResultLength > 0x10 )
    {
      Pool2 = (void *)ExAllocatePool2(258LL, ResultLength, 0x446C6148u);
      v0 = Pool2;
      if ( !Pool2 )
      {
LABEL_7:
        if ( KeyHandle )
          ZwClose(KeyHandle);
        return;
      }
      v1 = Pool2;
      v2 = ZwQueryValueKey(KeyHandle, &ValueName, KeyValuePartialInformation, Pool2, ResultLength, &ResultLength);
    }
    if ( !v2 )
    {
      v4 = *((unsigned int *)v1 + 2);
      v5 = (unsigned int *)(v1 + 12);
      if ( (unsigned int)v4 < 4 )
      {
        v9 = 0;
        memmove(&v9, v5, v4);
        v6 = v9;
      }
      else
      {
        v6 = *v5;
      }
      v7 = (v6 << 30) - 1;
      if ( v7 > HalpMaximumPhysicalMemoryAddress )
        HalpMaximumPhysicalMemoryAddress = v7;
    }
    if ( v0 )
      ExFreePoolWithTag(v0, 0x446C6148u);
    goto LABEL_7;
  }
}
