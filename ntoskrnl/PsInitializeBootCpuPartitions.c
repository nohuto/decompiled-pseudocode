__int64 PsInitializeBootCpuPartitions()
{
  __int64 Pool2; // rax
  __int64 v1; // rdi
  _WORD *v2; // r13
  _WORD *v3; // rsi
  NTSTATUS v4; // eax
  NTSTATUS v5; // ebx
  void *v7; // r12
  ULONG v8; // r15d
  NTSTATUS v9; // eax
  ULONG v10; // ebx
  NTSTATUS v11; // eax
  unsigned int v12; // eax
  size_t v13; // r8
  unsigned __int16 v14; // r9
  __int64 v15; // rdx
  __int64 v16; // r8
  __int64 v17; // rdx
  HANDLE v18; // [rsp+30h] [rbp-89h] BYREF
  HANDLE KeyHandle; // [rsp+38h] [rbp-81h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+40h] [rbp-79h] BYREF
  PVOID Object; // [rsp+70h] [rbp-49h] BYREF
  UNICODE_STRING String; // [rsp+78h] [rbp-41h] BYREF
  _QWORD v23[2]; // [rsp+88h] [rbp-31h] BYREF
  _QWORD v24[2]; // [rsp+98h] [rbp-21h] BYREF
  _DWORD v25[2]; // [rsp+A8h] [rbp-11h] BYREF
  __int64 v26; // [rsp+B0h] [rbp-9h]
  UNICODE_STRING DestinationString; // [rsp+B8h] [rbp-1h] BYREF
  ULONG ResultLength; // [rsp+120h] [rbp+67h] BYREF
  ULONG Value; // [rsp+128h] [rbp+6Fh] BYREF
  ULONG v30; // [rsp+130h] [rbp+77h]
  HANDLE Handle; // [rsp+138h] [rbp+7Fh] BYREF

  v23[0] = 11665584LL;
  Object = 0LL;
  Value = 0;
  v23[1] = L"\\Registry\\Machine\\SYSTEM\\CurrentControlSet\\Control\\Session Manager\\kernel\\CPU Partitions";
  ResultLength = 0;
  v24[1] = L"Masks";
  v25[1] = 0;
  v24[0] = 786442LL;
  String = 0LL;
  KeyHandle = 0LL;
  memset(&ObjectAttributes, 0, 44);
  v18 = 0LL;
  Handle = 0LL;
  DestinationString = 0LL;
  Pool2 = ExAllocatePool2(256LL, 0x640uLL, 0x50707350u);
  v1 = Pool2;
  if ( Pool2 )
  {
    v2 = (_WORD *)(Pool2 + 536);
    *(_QWORD *)(Pool2 + 536) = 2097153LL;
    memset((void *)(Pool2 + 544), 0, 0x100uLL);
    v3 = (_WORD *)(v1 + 800);
    *(_QWORD *)(v1 + 800) = 2097153LL;
    memset((void *)(v1 + 808), 0, 0x100uLL);
    v25[0] = 256;
    ObjectAttributes.ObjectName = (PUNICODE_STRING)v23;
    v26 = v1;
    ObjectAttributes.Length = 48;
    ObjectAttributes.RootDirectory = 0LL;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    ObjectAttributes.Attributes = 576;
    v4 = ZwOpenKey(&KeyHandle, 8u, &ObjectAttributes);
    v5 = v4;
    if ( v4 < 0 )
    {
      if ( v4 != -1073741772 )
      {
LABEL_5:
        ExFreePoolWithTag((PVOID)v1, 0);
        goto LABEL_6;
      }
LABEL_4:
      v5 = 0;
      goto LABEL_5;
    }
    v7 = (void *)(v1 + 1064);
    v8 = 0;
    v9 = ZwEnumerateKey(KeyHandle, 0, KeyBasicInformation, (PVOID)(v1 + 1064), 0x216u, &ResultLength);
    if ( v9 == -2147483622 )
      goto LABEL_4;
    while ( 1 )
    {
      v30 = ++v8;
      if ( v9 >= 0 )
      {
        *(_WORD *)(v1 + 2 * ((unsigned __int64)*(unsigned int *)(v1 + 1076) >> 1) + 1080) = 0;
        RtlInitUnicodeString(&DestinationString, (PCWSTR)(v1 + 1080));
        ObjectAttributes.RootDirectory = KeyHandle;
        ObjectAttributes.Length = 48;
        ObjectAttributes.ObjectName = &DestinationString;
        ObjectAttributes.Attributes = 576;
        *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
        v5 = ZwOpenKey(&v18, 8u, &ObjectAttributes);
        if ( v5 < 0 )
          goto LABEL_5;
        ObjectAttributes.RootDirectory = v18;
        ObjectAttributes.Length = 48;
        ObjectAttributes.ObjectName = (PUNICODE_STRING)v24;
        ObjectAttributes.Attributes = 576;
        *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
        v5 = ZwOpenKey(&Handle, 1u, &ObjectAttributes);
        if ( v5 < 0 )
          goto LABEL_5;
        v10 = 0;
        v11 = ZwEnumerateValueKey(Handle, 0, KeyValueFullInformation, (PVOID)(v1 + 256), 0x118u, &ResultLength);
        if ( v11 != -2147483622 )
        {
          do
          {
            ++v10;
            if ( v11 >= 0 )
            {
              *(_DWORD *)(&String.MaximumLength + 1) = 0;
              String.Buffer = (wchar_t *)(v1 + 276);
              String.Length = *(_WORD *)(v1 + 272);
              String.MaximumLength = String.Length;
              if ( RtlUnicodeStringToInteger(&String, 0xAu, &Value) >= 0 )
              {
                memset((void *)v1, 0, 0x100uLL);
                v12 = *(_DWORD *)(v1 + 268);
                v13 = 256LL;
                if ( v12 <= 0x100 )
                  v13 = v12;
                memmove((void *)v1, (const void *)(v1 + *(unsigned int *)(v1 + 264) + 256LL), v13);
                PspCopyNodeRelativeMaskToAffinityEx((unsigned __int16)Value, v25, v2);
                v14 = 0;
                if ( v1 != -800 )
                  v14 = *(_WORD *)(v1 + 802);
                KiOrAffinityEx((char *)(v1 + 800), v2, (_BYTE *)(v1 + 800), v14);
              }
            }
            v11 = ZwEnumerateValueKey(Handle, v10, KeyValueFullInformation, (PVOID)(v1 + 256), 0x118u, &ResultLength);
          }
          while ( v11 != -2147483622 );
          v8 = v30;
          v7 = (void *)(v1 + 1064);
        }
        if ( (unsigned int)KeIsEmptyAffinityEx((_WORD *)(v1 + 800)) )
          goto LABEL_33;
        ObjectAttributes.RootDirectory = (HANDLE)PspCpuPartitionDirectoryHandle;
        ObjectAttributes.Length = 48;
        ObjectAttributes.ObjectName = &DestinationString;
        ObjectAttributes.SecurityDescriptor = (PVOID)PsCpuPartitionDefaultSd;
        ObjectAttributes.Attributes = 592;
        ObjectAttributes.SecurityQualityOfService = 0LL;
        if ( (int)PsCreateCpuPartition((__int64)&ObjectAttributes, v15, v16, &Object) >= 0 )
        {
          if ( (int)PsCpuPartitionMoveCpus((__int64)Object, v17, (char *)(v1 + 800)) >= 0 )
          {
            memset((void *)(v1 + 808), 0, 8LL * (unsigned __int16)*v3);
            *v3 = 1;
LABEL_33:
            ZwClose(v18);
            v18 = 0LL;
            ZwClose(Handle);
            Handle = 0LL;
            goto LABEL_34;
          }
          ObfDereferenceObjectWithTag(Object, 0x746C6644u);
        }
      }
LABEL_34:
      v9 = ZwEnumerateKey(KeyHandle, v8, KeyBasicInformation, v7, 0x216u, &ResultLength);
      if ( v9 == -2147483622 )
        goto LABEL_4;
    }
  }
  v5 = -1073741670;
LABEL_6:
  if ( Handle )
    ZwClose(Handle);
  if ( v18 )
    ZwClose(v18);
  if ( KeyHandle )
    ZwClose(KeyHandle);
  return (unsigned int)v5;
}
