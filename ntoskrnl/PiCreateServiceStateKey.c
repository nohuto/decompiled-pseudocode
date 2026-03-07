__int64 __fastcall PiCreateServiceStateKey(
        ULONG CreateOptions,
        char a2,
        void *a3,
        UNICODE_STRING *a4,
        ACCESS_MASK DesiredAccess,
        char a6,
        _QWORD *a7)
{
  void *v8; // rsi
  int DriverRedirectedStateKey; // eax
  unsigned int v13; // ebx
  void *v14; // rdi
  NTSTATUS v15; // eax
  __int64 v16; // rcx
  HANDLE v17; // rax
  int ServiceStateSecurityObject; // eax
  HANDLE KeyHandle; // [rsp+50h] [rbp-19h] BYREF
  void *v21; // [rsp+58h] [rbp-11h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+60h] [rbp-9h] BYREF

  KeyHandle = 0LL;
  v8 = 0LL;
  memset(&ObjectAttributes, 0, 44);
  v21 = 0LL;
  DriverRedirectedStateKey = PiCreateDriverRedirectedStateKey(CreateOptions);
  v13 = DriverRedirectedStateKey;
  if ( DriverRedirectedStateKey == -1073741772 )
  {
    if ( !a2 )
    {
      v14 = a3;
      goto LABEL_4;
    }
    DriverRedirectedStateKey = PiCreateUniqueServiceStateKey(CreateOptions);
    v13 = DriverRedirectedStateKey;
  }
  v14 = 0LL;
  if ( DriverRedirectedStateKey < 0 )
    goto LABEL_7;
LABEL_4:
  ObjectAttributes.RootDirectory = v14;
  ObjectAttributes.Attributes = 576;
  ObjectAttributes.Length = 48;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  ObjectAttributes.ObjectName = a4;
  v15 = ZwOpenKey(&KeyHandle, DesiredAccess, &ObjectAttributes);
  v13 = v15;
  if ( v15 == -1073741772 )
  {
    LOBYTE(v16) = a6;
    ServiceStateSecurityObject = PiAuGetServiceStateSecurityObject(v16, &v21);
    v8 = v21;
    v13 = ServiceStateSecurityObject;
    if ( ServiceStateSecurityObject < 0 )
      goto LABEL_7;
    ObjectAttributes.SecurityQualityOfService = 0LL;
    ObjectAttributes.Length = 48;
    ObjectAttributes.RootDirectory = v14;
    ObjectAttributes.Attributes = 576;
    ObjectAttributes.ObjectName = a4;
    ObjectAttributes.SecurityDescriptor = v21;
    v15 = ZwCreateKey(&KeyHandle, DesiredAccess, &ObjectAttributes, 0, 0LL, 0, 0LL);
    v13 = v15;
  }
  if ( v15 >= 0 )
  {
    v17 = KeyHandle;
    KeyHandle = 0LL;
    *a7 = v17;
  }
LABEL_7:
  if ( KeyHandle )
    ZwClose(KeyHandle);
  if ( v14 && v14 != a3 )
    ZwClose(v14);
  if ( v8 )
    ExFreePoolWithTag(v8, 0);
  return v13;
}
