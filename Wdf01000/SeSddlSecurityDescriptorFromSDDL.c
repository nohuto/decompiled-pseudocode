int __fastcall SeSddlSecurityDescriptorFromSDDL(
        const _UNICODE_STRING *SecurityDescriptorString,
        unsigned int SecurityDescriptor,
        _SECURITY_DESCRIPTOR **a3)
{
  unsigned __int64 Length; // rdx
  SIZE_T v6; // r9
  wchar_t *Buffer; // rcx
  unsigned __int64 v8; // rdx
  PVOID PoolWithTag; // rax
  void *v11; // rsi
  unsigned int v12; // edx
  int v13; // ebx

  Length = SecurityDescriptorString->Length;
  v6 = Length + 2;
  if ( SecurityDescriptorString->MaximumLength == Length + 2 )
  {
    Buffer = SecurityDescriptorString->Buffer;
    v8 = Length >> 1;
    if ( !Buffer[v8] )
      return SepSddlSecurityDescriptorFromSDDLString(Buffer, v8, a3);
  }
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, v6, 0x73546553u);
  v11 = PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, SecurityDescriptorString->Length + 2LL);
    memmove(v11, SecurityDescriptorString->Buffer, SecurityDescriptorString->Length);
    *((_WORD *)v11 + ((unsigned __int64)SecurityDescriptorString->Length >> 1)) = 0;
    v13 = SepSddlSecurityDescriptorFromSDDLString((const wchar_t *)v11, v12, a3);
    ExFreePoolWithTag(v11, 0);
    return v13;
  }
  else
  {
    *a3 = 0LL;
    return -1073741670;
  }
}
