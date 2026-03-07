__int64 __fastcall IopCreateSecureDeviceClassSettings(unsigned int *a1, __int64 a2, _BYTE *a3)
{
  WCHAR *v6; // rdi
  int SecureDeviceClassState; // ebx
  __int64 v8; // rcx
  __int64 v9; // r8
  int PersistedStateLocation; // eax
  NTSTATUS v12; // eax
  NTSTATUS v13; // eax
  PVOID *v14; // rbx
  HANDLE Handle; // [rsp+30h] [rbp-59h] BYREF
  HANDLE KeyHandle; // [rsp+38h] [rbp-51h] BYREF
  HANDLE v17; // [rsp+40h] [rbp-49h] BYREF
  UNICODE_STRING String1; // [rsp+48h] [rbp-41h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+58h] [rbp-31h] BYREF
  UNICODE_STRING String2; // [rsp+88h] [rbp-1h] BYREF
  UNICODE_STRING DestinationString; // [rsp+98h] [rbp+Fh] BYREF
  PCWSTR SourceString[3]; // [rsp+A8h] [rbp+1Fh] BYREF
  ULONG v23; // [rsp+108h] [rbp+7Fh] BYREF

  *(_QWORD *)&String2.Length = 7471216LL;
  v23 = 0;
  String2.Buffer = L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\Class";
  Handle = 0LL;
  SourceString[0] = 0LL;
  KeyHandle = 0LL;
  v17 = 0LL;
  String1 = 0LL;
  v6 = 0LL;
  DestinationString = 0LL;
  RtlInitUnicodeString(&DestinationString, 0LL);
  SecureDeviceClassState = RtlStringFromGUIDEx(a1, (__int64)&DestinationString, 1);
  if ( SecureDeviceClassState >= 0 )
  {
    *(_QWORD *)&ObjectAttributes.Length = 48LL;
    ObjectAttributes.ObjectName = &String2;
    *(_QWORD *)&ObjectAttributes.Attributes = 576LL;
    ObjectAttributes.RootDirectory = 0LL;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    SecureDeviceClassState = ZwOpenKey(&KeyHandle, 0xF003Fu, &ObjectAttributes);
    if ( SecureDeviceClassState < 0 )
      goto LABEL_44;
    ObjectAttributes.RootDirectory = KeyHandle;
    *(_QWORD *)&ObjectAttributes.Length = 48LL;
    ObjectAttributes.ObjectName = &DestinationString;
    *(_QWORD *)&ObjectAttributes.Attributes = 576LL;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    SecureDeviceClassState = ZwOpenKey(&Handle, 0x20019u, &ObjectAttributes);
    if ( SecureDeviceClassState < 0
      || (RtlInitUnicodeString(&String1, L"Properties"),
          ObjectAttributes.RootDirectory = Handle,
          *(_QWORD *)&ObjectAttributes.Length = 48LL,
          ObjectAttributes.ObjectName = &String1,
          *(_QWORD *)&ObjectAttributes.Attributes = 576LL,
          *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL,
          SecureDeviceClassState = ZwOpenKey(&v17, 0x20019u, &ObjectAttributes),
          SecureDeviceClassState < 0) )
    {
LABEL_44:
      if ( SecureDeviceClassState != -1073741772 )
        goto LABEL_12;
    }
    else
    {
      SecureDeviceClassState = IopQuerySecureDeviceClassState(v17);
      if ( SecureDeviceClassState < 0 )
        goto LABEL_12;
      if ( (*a3 & 0xF) == 0xF )
        goto LABEL_11;
    }
    PersistedStateLocation = IopGetPersistedStateLocation(v8, String2.Buffer, v9, SourceString);
    v6 = (WCHAR *)SourceString[0];
    SecureDeviceClassState = PersistedStateLocation;
    if ( PersistedStateLocation >= 0 )
    {
      SecureDeviceClassState = RtlInitUnicodeStringEx(&String1, SourceString[0]);
      if ( SecureDeviceClassState >= 0 )
      {
        if ( RtlEqualUnicodeString(&String1, &String2, 1u) )
        {
          if ( Handle )
          {
LABEL_11:
            SecureDeviceClassState = 0;
            goto LABEL_12;
          }
        }
        else
        {
          if ( KeyHandle )
          {
            ZwClose(KeyHandle);
            KeyHandle = 0LL;
          }
          if ( Handle )
          {
            ZwClose(Handle);
            Handle = 0LL;
          }
          SecureDeviceClassState = IopCreateRegistryKeyEx(&KeyHandle, 0LL, &String1, 0xF003Fu, 0, &v23);
          if ( SecureDeviceClassState < 0 )
            goto LABEL_12;
        }
        SecureDeviceClassState = IopCreateRegistryKeyEx(&Handle, KeyHandle, &DestinationString, 0xF003Fu, 0, &v23);
        if ( SecureDeviceClassState < 0 )
          goto LABEL_12;
        if ( v23 == 2 )
        {
          if ( v17 )
            ZwClose(v17);
          RtlInitUnicodeString(&String1, L"Properties");
          ObjectAttributes.RootDirectory = Handle;
          *(_QWORD *)&ObjectAttributes.Length = 48LL;
          ObjectAttributes.ObjectName = &String1;
          *(_QWORD *)&ObjectAttributes.Attributes = 576LL;
          v17 = 0LL;
          *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
          v12 = ZwOpenKey(&v17, 0x20019u, &ObjectAttributes);
          SecureDeviceClassState = v12;
          if ( v12 >= 0 )
          {
            v13 = IopQuerySecureDeviceClassState(v17);
LABEL_41:
            SecureDeviceClassState = v13;
            goto LABEL_12;
          }
          if ( v12 == -1073741772 )
            goto LABEL_11;
        }
        else
        {
          v14 = (PVOID *)(*(_QWORD *)(a2 + 48) + 24LL);
          if ( *(_QWORD *)(a2 + 48) == -24LL )
          {
            SecureDeviceClassState = -1073741670;
            goto LABEL_12;
          }
          RtlInitUnicodeString(&String1, L"Class");
          SecureDeviceClassState = ZwSetValueKey(Handle, &String1, 0, 1u, v14[1], *(unsigned __int16 *)v14 + 2);
          if ( SecureDeviceClassState >= 0 )
          {
            RtlInitUnicodeString(&String1, L"NoDisplayClass");
            SecureDeviceClassState = ZwSetValueKey(Handle, &String1, 0, 1u, L"1", 4u);
            if ( SecureDeviceClassState >= 0 )
            {
              RtlInitUnicodeString(&String1, L"NoUseClass");
              v13 = ZwSetValueKey(Handle, &String1, 0, 1u, L"1", 4u);
              goto LABEL_41;
            }
          }
        }
      }
    }
  }
LABEL_12:
  if ( KeyHandle )
    ZwClose(KeyHandle);
  if ( Handle )
    ZwClose(Handle);
  if ( v17 )
    ZwClose(v17);
  if ( v6 )
    ExFreePoolWithTag(v6, 0);
  RtlFreeUnicodeString(&DestinationString);
  return (unsigned int)SecureDeviceClassState;
}
