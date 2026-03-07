__int64 __fastcall IoOpenDriverRegistryKey(__int64 a1, int a2, ACCESS_MASK a3, int a4, _QWORD *a5)
{
  void *v7; // rdi
  HANDLE v10; // r14
  __int64 v11; // rax
  _QWORD *v12; // r12
  NTSTATUS v13; // eax
  NTSTATUS ServiceNameInfo; // ebx
  NTSTATUS RegistryValue; // eax
  HANDLE v16; // rax
  int ServiceStateKey; // eax
  HANDLE KeyHandle; // [rsp+48h] [rbp-31h] BYREF
  _DWORD *v20; // [rsp+50h] [rbp-29h] BYREF
  HANDLE Handle; // [rsp+58h] [rbp-21h] BYREF
  UNICODE_STRING DestinationString; // [rsp+60h] [rbp-19h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+70h] [rbp-9h] BYREF
  char v24; // [rsp+D8h] [rbp+5Fh] BYREF

  KeyHandle = 0LL;
  v24 = 0;
  v20 = 0LL;
  memset(&ObjectAttributes, 0, 44);
  v7 = 0LL;
  DestinationString = 0LL;
  RtlInitUnicodeString(&DestinationString, 0LL);
  Handle = 0LL;
  v10 = 0LL;
  if ( !a1 )
    goto LABEL_41;
  v11 = *(_QWORD *)(a1 + 48);
  if ( !v11 )
    goto LABEL_41;
  if ( !*(_QWORD *)(v11 + 32) )
    goto LABEL_41;
  if ( !*(_WORD *)(v11 + 24) )
    goto LABEL_41;
  if ( a4 )
    goto LABEL_41;
  v12 = a5;
  if ( !a5 )
    goto LABEL_41;
  v13 = PipOpenServiceEnumKeys((UNICODE_STRING *)(v11 + 24), 0x2001Du, &Handle, 0LL, 0);
  v10 = Handle;
  ServiceNameInfo = v13;
  if ( v13 < 0 )
    goto LABEL_23;
  RegistryValue = IopGetRegistryValue(Handle, L"Type", 0, &v20);
  v7 = v20;
  ServiceNameInfo = RegistryValue;
  if ( RegistryValue == -1073741772 )
    goto LABEL_41;
  if ( RegistryValue < 0 )
    goto LABEL_23;
  if ( v20[1] != 4 || v20[3] != 4 )
  {
    ServiceNameInfo = -1073741492;
    goto LABEL_23;
  }
  if ( (*(_DWORD *)((char *)v20 + (unsigned int)v20[2]) & 0xB) == 0 )
    goto LABEL_41;
  if ( a2 )
  {
    if ( a2 == 1 )
    {
      ServiceNameInfo = PiGetServiceNameInfo(a1, &DestinationString, &v24);
      if ( ServiceNameInfo < 0 )
        goto LABEL_23;
      ServiceStateKey = PiCreateServiceStateKey((ULONG)&DestinationString, a3, 0, (__int64)&KeyHandle);
      goto LABEL_33;
    }
    if ( a2 == 2 )
    {
      ServiceNameInfo = PiGetServiceNameInfo(a1, &DestinationString, &v24);
      if ( ServiceNameInfo < 0 )
        goto LABEL_23;
      ServiceStateKey = PiCreateServiceStateKey((ULONG)&DestinationString, a3, 1, (__int64)&KeyHandle);
LABEL_33:
      ServiceNameInfo = ServiceStateKey;
      if ( ServiceStateKey >= 0 )
      {
LABEL_34:
        v16 = KeyHandle;
        if ( !KeyHandle )
          goto LABEL_22;
        IopApplyMutableTagToRegistryKey(KeyHandle);
LABEL_21:
        v16 = KeyHandle;
LABEL_22:
        KeyHandle = 0LL;
        *v12 = v16;
        goto LABEL_23;
      }
LABEL_18:
      if ( ServiceNameInfo < 0 )
        goto LABEL_23;
      if ( a2 != 1 && a2 != 2 )
        goto LABEL_21;
      goto LABEL_34;
    }
LABEL_41:
    ServiceNameInfo = -1073741811;
    goto LABEL_23;
  }
  if ( (a3 & 0x2000000) != 0 )
    a3 = a3 & 0xFDFDFFE6 | 0x20019;
  if ( (a3 & 0x7FFDFFE6) == 0 )
  {
    ObjectAttributes.Length = 48;
    ObjectAttributes.ObjectName = (PUNICODE_STRING)&PiDriverRegKeyParametersName;
    ObjectAttributes.RootDirectory = v10;
    ObjectAttributes.Attributes = 576;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    ServiceNameInfo = ZwOpenKey(&KeyHandle, a3, &ObjectAttributes);
    goto LABEL_18;
  }
  ServiceNameInfo = -1073741790;
LABEL_23:
  RtlFreeUnicodeString(&DestinationString);
  if ( v7 )
    ExFreePoolWithTag(v7, 0);
  if ( KeyHandle )
    ZwClose(KeyHandle);
  if ( v10 )
    ZwClose(v10);
  return (unsigned int)ServiceNameInfo;
}
