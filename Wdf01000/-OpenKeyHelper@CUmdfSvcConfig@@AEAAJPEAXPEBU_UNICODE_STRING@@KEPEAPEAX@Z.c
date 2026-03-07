NTSTATUS __fastcall CUmdfSvcConfig::OpenKeyHelper(
        CUmdfSvcConfig *this,
        void *ParentKey,
        _UNICODE_STRING *KeyPath,
        unsigned int SetHandleForAutoClose,
        unsigned __int8 RegKeyHandle,
        void **KeyHandle)
{
  NTSTATUS result; // eax
  _OBJECT_ATTRIBUTES oa; // [rsp+20h] [rbp-38h] BYREF

  *(&oa.Length + 1) = 0;
  *(&oa.Attributes + 1) = 0;
  *KeyHandle = 0LL;
  if ( RegKeyHandle && this->m_Key )
    return -1073741811;
  oa.RootDirectory = ParentKey;
  oa.ObjectName = KeyPath;
  oa.Length = 48;
  oa.Attributes = 576;
  *(_OWORD *)&oa.SecurityDescriptor = 0LL;
  result = ZwOpenKey(KeyHandle, 0x20019u, &oa);
  if ( result >= 0 )
  {
    if ( RegKeyHandle )
      this->m_Key = *KeyHandle;
  }
  return result;
}
