__int64 __fastcall CmRegUtilCreateUcKey(
        void *BaseHandle,
        _UNICODE_STRING *KeyName,
        unsigned int SecurityDescriptor,
        unsigned int Disposition,
        void *Handle,
        unsigned int *BaseHandle_0,
        void **KeyName_0)
{
  NTSTATUS v7; // r8d
  void *v8; // rdx
  unsigned int v9; // ecx
  _OBJECT_ATTRIBUTES objectAttributes; // [rsp+40h] [rbp-30h] BYREF
  void *newHandle; // [rsp+80h] [rbp+10h] BYREF
  unsigned int disposition; // [rsp+98h] [rbp+28h] BYREF

  *(&objectAttributes.Attributes + 1) = 0;
  disposition = 0;
  newHandle = 0LL;
  objectAttributes.SecurityQualityOfService = 0LL;
  objectAttributes.SecurityDescriptor = Handle;
  objectAttributes.RootDirectory = BaseHandle;
  objectAttributes.ObjectName = KeyName;
  *(_QWORD *)&objectAttributes.Length = 48LL;
  objectAttributes.Attributes = 576;
  v7 = ZwCreateKey(&newHandle, 0xF003Fu, &objectAttributes, 0, 0LL, 0, &disposition);
  if ( v7 >= 0 )
  {
    v9 = disposition;
    v8 = newHandle;
  }
  else
  {
    v8 = 0LL;
    v9 = 0;
  }
  *KeyName_0 = v8;
  if ( BaseHandle_0 )
    *BaseHandle_0 = v9;
  return (unsigned int)v7;
}
