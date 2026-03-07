NTSTATUS __stdcall SeAssignSecurity(
        PSECURITY_DESCRIPTOR ParentDescriptor,
        PSECURITY_DESCRIPTOR ExplicitDescriptor,
        PSECURITY_DESCRIPTOR *NewDescriptor,
        BOOLEAN IsDirectoryObject,
        PSECURITY_SUBJECT_CONTEXT SubjectContext,
        PGENERIC_MAPPING GenericMapping,
        POOL_TYPE PoolType)
{
  int v7; // r11d
  _BYTE *v8; // r10

  v7 = 0;
  if ( ParentDescriptor )
  {
    v8 = (char *)ExplicitDescriptor + 2;
    if ( (!ExplicitDescriptor || (*v8 & 4) == 0) && _bittest16((const signed __int16 *)ParentDescriptor + 1, 0xAu) )
      v7 = 1;
    if ( !ExplicitDescriptor || (*v8 & 0x10) == 0 )
    {
      if ( _bittest16((const signed __int16 *)ParentDescriptor + 1, 0xBu) )
        v7 |= 2u;
    }
  }
  return RtlpNewSecurityObject(
           (_DWORD)ParentDescriptor,
           (_DWORD)ExplicitDescriptor,
           (_DWORD)NewDescriptor,
           0,
           0,
           IsDirectoryObject,
           v7,
           (__int64)SubjectContext,
           (__int64)GenericMapping,
           0LL);
}
