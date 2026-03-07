__int64 PiDcInitUpdateProperties()
{
  __int64 Pool2; // rdi
  NTSTATUS v1; // eax
  NTSTATUS v2; // ebx
  ULONG v3; // r14d
  ULONG i; // edx
  NTSTATUS v5; // eax
  _WORD *v6; // r15
  unsigned __int16 v7; // ax
  int v8; // esi
  ULONG j; // edx
  NTSTATUS v10; // eax
  ULONG ResultLength; // [rsp+38h] [rbp-49h] BYREF
  HANDLE Handle; // [rsp+40h] [rbp-41h] BYREF
  UNICODE_STRING DestinationString; // [rsp+48h] [rbp-39h] BYREF
  HANDLE KeyHandle; // [rsp+58h] [rbp-29h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+60h] [rbp-21h] BYREF
  GUID Guid; // [rsp+90h] [rbp+Fh] BYREF
  ULONG Value; // [rsp+A0h] [rbp+1Fh] BYREF
  GUID Buffer; // [rsp+A8h] [rbp+27h] BYREF
  __int64 v20; // [rsp+B8h] [rbp+37h]

  KeyHandle = 0LL;
  Handle = 0LL;
  ResultLength = 0;
  Value = 0;
  v20 = 0LL;
  DestinationString = 0LL;
  Guid = 0LL;
  Buffer = 0LL;
  Pool2 = ExAllocatePool2(256LL, 536LL, 1198550608LL);
  if ( Pool2 )
  {
    RtlInitUnicodeString(
      &DestinationString,
      L"\\Registry\\Machine\\SYSTEM\\CurrentControlSet\\Control\\DeviceContainerPropertyUpdateEvents");
    memset(&ObjectAttributes.Attributes + 1, 0, 20);
    ObjectAttributes.RootDirectory = 0LL;
    *(_QWORD *)&ObjectAttributes.Length = 48LL;
    ObjectAttributes.ObjectName = &DestinationString;
    ObjectAttributes.Attributes = 576;
    v1 = ZwOpenKey(&KeyHandle, 8u, &ObjectAttributes);
    v2 = v1;
    if ( v1 != -1073741772 )
    {
      if ( v1 < 0 )
        goto LABEL_24;
      v3 = 0;
      for ( i = 0; ; i = v3 )
      {
        v5 = ZwEnumerateKey(KeyHandle, i, KeyBasicInformation, (PVOID)Pool2, 0x218u, &ResultLength);
        v2 = v5;
        if ( v5 == -2147483622 )
          break;
        if ( v5 < 0 )
          goto LABEL_24;
        memset(&ObjectAttributes.Attributes + 1, 0, 20);
        v6 = (_WORD *)(Pool2 + 16);
        DestinationString.Buffer = (wchar_t *)(Pool2 + 16);
        v7 = *(_WORD *)(Pool2 + 12);
        Handle = 0LL;
        DestinationString.Length = v7;
        DestinationString.MaximumLength = v7;
        ObjectAttributes.RootDirectory = KeyHandle;
        *(_QWORD *)&ObjectAttributes.Length = 48LL;
        ObjectAttributes.ObjectName = &DestinationString;
        ObjectAttributes.Attributes = 576;
        v2 = ZwOpenKey(&Handle, 0x20019u, &ObjectAttributes);
        if ( v2 < 0 )
          goto LABEL_24;
        v8 = 0;
        for ( j = 0; ; j = ++v8 )
        {
          v10 = ZwEnumerateValueKey(Handle, j, KeyValueFullInformation, (PVOID)Pool2, 0x218u, &ResultLength);
          v2 = v10;
          if ( v10 == -2147483622 )
          {
            v2 = 0;
            goto LABEL_21;
          }
          if ( v10 != -2147483643 )
          {
            if ( v10 < 0 )
              goto LABEL_21;
            if ( (unsigned int)(*(_DWORD *)v6 - 80) <= 0x12 )
            {
              *(_DWORD *)&DestinationString.Length = 4980812;
              DestinationString.Buffer = (wchar_t *)(Pool2 + 20);
              if ( RtlGUIDFromString(&DestinationString, &Guid) >= 0 )
              {
                DestinationString.Buffer = (wchar_t *)(Pool2 + 98);
                DestinationString.Length = *v6 - 78;
                DestinationString.MaximumLength = DestinationString.Length;
                if ( RtlUnicodeStringToInteger(&DestinationString, 0xAu, &Value) >= 0 )
                {
                  LODWORD(v20) = Value;
                  Buffer = Guid;
                  if ( *(_DWORD *)(Pool2 + 4) == 4 && *(_DWORD *)(Pool2 + 12) == 4 )
                    HIDWORD(v20) = *(_DWORD *)(*(unsigned int *)(Pool2 + 8) + Pool2);
                  else
                    HIDWORD(v20) = 0;
                  if ( !RtlInsertElementGenericTableAvl(&PiDcUpdateProperties, &Buffer, 0x18u, 0LL) )
                    break;
                }
              }
            }
          }
        }
        v2 = -1073741670;
LABEL_21:
        ZwClose(Handle);
        Handle = 0LL;
        if ( v2 < 0 )
          goto LABEL_24;
        ++v3;
      }
    }
    v2 = 0;
  }
  else
  {
    v2 = -1073741670;
  }
LABEL_24:
  if ( KeyHandle )
    ZwClose(KeyHandle);
  if ( Handle )
    ZwClose(Handle);
  if ( Pool2 )
    ExFreePoolWithTag((PVOID)Pool2, 0x47706E50u);
  return (unsigned int)v2;
}
