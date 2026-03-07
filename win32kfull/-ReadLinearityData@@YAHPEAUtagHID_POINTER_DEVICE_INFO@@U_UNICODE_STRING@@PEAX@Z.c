__int64 __fastcall ReadLinearityData(struct tagHID_POINTER_DEVICE_INFO *a1, struct _UNICODE_STRING *a2, void *a3)
{
  PWSTR Buffer; // r12
  unsigned int v6; // edi
  WCHAR *v7; // rsi
  __int64 v8; // rax
  void **v9; // rbx
  __int64 v10; // r15
  unsigned __int64 v11; // rdi
  char *v12; // rax
  void *v13; // rcx
  int v14; // r14d
  struct _UNICODE_STRING v16; // [rsp+30h] [rbp-79h] BYREF
  struct _UNICODE_STRING v17; // [rsp+40h] [rbp-69h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+50h] [rbp-59h] BYREF
  struct _UNICODE_STRING v19; // [rsp+80h] [rbp-29h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+90h] [rbp-19h] BYREF
  struct _UNICODE_STRING v21; // [rsp+A0h] [rbp-9h] BYREF
  struct _UNICODE_STRING v22; // [rsp+B0h] [rbp+7h] BYREF
  struct _UNICODE_STRING v23; // [rsp+C0h] [rbp+17h] BYREF
  void *KeyHandle; // [rsp+118h] [rbp+6Fh] BYREF
  unsigned __int16 *v26; // [rsp+128h] [rbp+7Fh] BYREF

  Buffer = a2->Buffer;
  KeyHandle = 0LL;
  *(&ObjectAttributes.Length + 1) = 0;
  *(&ObjectAttributes.Attributes + 1) = 0;
  v6 = 0;
  DestinationString = 0LL;
  v7 = 0LL;
  v22 = 0LL;
  v21 = 0LL;
  v19 = 0LL;
  v8 = Win32AllocPoolZInit(88LL, 2020635477LL);
  v9 = (void **)v8;
  if ( !v8 )
    return v6;
  v10 = v8 + 8;
  RtlInitUnicodeString(
    &DestinationString,
    L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\TabletPC\\LinearityData");
  RtlInitUnicodeString(&v22, L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\TabletPC");
  RtlInitUnicodeString(&v19, L"LinearityData");
  v16 = v19;
  v6 = ReadLinearityDataImp(a3, &v16, 1LL, v10, v9);
  if ( v6 )
    goto LABEL_23;
  if ( Buffer )
  {
    Buffer = 0LL;
    v16 = *a2;
    v26 = 0LL;
    *(_QWORD *)&v17.Length = 0LL;
    if ( (int)GetDeviceId(&v16, &v26, (unsigned __int16 **)&v17) >= 0 )
    {
      v11 = (__int64)(*(_QWORD *)&v17.Length - (_QWORD)v26) >> 1;
      v12 = (char *)Win32AllocPoolZInit(2 * v11 + 2, 2020635477LL);
      v7 = (WCHAR *)v12;
      if ( v12 )
      {
        RtlStringCchCopyNW(v12, v11 + 1, (char *)v26, v11);
        RtlInitUnicodeString(&v21, v7);
        ObjectAttributes.Length = 48;
        ObjectAttributes.ObjectName = &DestinationString;
        ObjectAttributes.RootDirectory = 0LL;
        ObjectAttributes.Attributes = 576;
        *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
        if ( ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes) >= 0 )
        {
          v16 = v21;
          v6 = ReadLinearityDataImp(KeyHandle, &v16, 1LL, v10, v9);
          ZwClose(KeyHandle);
          if ( v6 )
          {
LABEL_19:
            Win32FreePool(v7);
            if ( !v6 )
              goto LABEL_20;
LABEL_23:
            *((_QWORD *)a1 + 49) = v9;
            return v6;
          }
        }
      }
    }
  }
  ObjectAttributes.Length = 48;
  ObjectAttributes.ObjectName = &v22;
  ObjectAttributes.RootDirectory = Buffer;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  if ( ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes) < 0 )
  {
    v13 = a3;
    v14 = (int)Buffer;
    KeyHandle = a3;
  }
  else
  {
    v13 = KeyHandle;
    v14 = 1;
  }
  v16 = v19;
  v6 = ReadLinearityDataImp(v13, &v16, 1LL, v10, v9);
  if ( v14 )
    ZwClose(KeyHandle);
  if ( v6
    || (v17 = 0LL,
        RtlInitUnicodeString(&v17, L"UserLinearityData"),
        v16 = v17,
        (v6 = ReadLinearityDataImp(a3, &v16, 2LL, v10, v9)) != 0) )
  {
    if ( !v7 )
      goto LABEL_23;
    goto LABEL_19;
  }
  v17 = 0LL;
  if ( v7 )
  {
    RtlInitUnicodeString(&v17, L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\TabletPC\\UserLinearityData");
    ObjectAttributes.Length = 48;
    ObjectAttributes.ObjectName = &v17;
    ObjectAttributes.RootDirectory = Buffer;
    ObjectAttributes.Attributes = 576;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    if ( ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes) >= 0 )
    {
      v16 = 0LL;
      RtlInitUnicodeString(&v16, v7);
      v23 = v16;
      v6 = ReadLinearityDataImp(KeyHandle, &v23, 2LL, v10, v9);
      ZwClose(KeyHandle);
    }
    goto LABEL_19;
  }
LABEL_20:
  if ( *v9 )
  {
    Win32FreePool(*v9);
    *v9 = Buffer;
  }
  Win32FreePool(v9);
  return v6;
}
