__int64 __fastcall IopCreateRegistryKeyEx(
        _QWORD *a1,
        void *a2,
        UNICODE_STRING *a3,
        ACCESS_MASK a4,
        ULONG CreateOptions,
        ULONG *a6)
{
  _QWORD *v6; // rdi
  __int64 v7; // r15
  __int64 v8; // r13
  NTSTATUS v11; // esi
  wchar_t *Buffer; // rdi
  __int64 Length; // r12
  unsigned int v15; // ebx
  wchar_t *v16; // r12
  __int64 v17; // rcx
  wchar_t *v18; // r14
  char v19; // al
  HANDLE Handle[2]; // [rsp+48h] [rbp-51h] BYREF
  __int128 v21; // [rsp+58h] [rbp-41h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+68h] [rbp-31h] BYREF
  char v24; // [rsp+F8h] [rbp+5Fh]
  ULONG Disposition; // [rsp+100h] [rbp+67h] BYREF
  ACCESS_MASK DesiredAccess; // [rsp+108h] [rbp+6Fh]

  DesiredAccess = a4;
  *(&ObjectAttributes.Attributes + 1) = 0;
  v6 = a1;
  Disposition = 0;
  LODWORD(v7) = 0;
  *a1 = 0LL;
  ObjectAttributes.RootDirectory = a2;
  LODWORD(v8) = 1;
  ObjectAttributes.ObjectName = a3;
  *(_QWORD *)&ObjectAttributes.Length = 48LL;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)Handle = 0LL;
  v21 = 0LL;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v11 = ZwCreateKey(&Handle[1], a4, &ObjectAttributes, 0, 0LL, CreateOptions, &Disposition);
  if ( v11 == -1073741772 )
  {
    if ( !a2 )
      return (unsigned int)v11;
    Handle[0] = 0LL;
    Buffer = a3->Buffer;
    Length = a3->Length;
    Handle[1] = a2;
    v15 = 0;
    v16 = (wchar_t *)((char *)Buffer + Length);
    v24 = 1;
    while ( 1 )
    {
      if ( v15 > 1 )
        ZwClose(Handle[(unsigned int)v7]);
      v17 = (unsigned int)v8;
      v18 = Buffer;
      v8 = ((_BYTE)v8 - 1) & 1;
      for ( Handle[v8] = 0LL; v18 < v16; ++v18 )
      {
        if ( *v18 == 92 )
          break;
      }
      v7 = v17;
      if ( (_DWORD)v18 == (_DWORD)Buffer )
        break;
      WORD1(v21) = (_WORD)v18 - (_WORD)Buffer;
      LOWORD(v21) = (_WORD)v18 - (_WORD)Buffer;
      ObjectAttributes.RootDirectory = Handle[v17];
      ObjectAttributes.ObjectName = (PUNICODE_STRING)&v21;
      *((_QWORD *)&v21 + 1) = Buffer;
      ObjectAttributes.Length = 48;
      ObjectAttributes.Attributes = 576;
      *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
      v11 = ZwCreateKey(&Handle[v8], DesiredAccess, &ObjectAttributes, 0, 0LL, CreateOptions, &Disposition);
      if ( v11 >= 0 )
      {
        ++v15;
        if ( v18 == v16 || (Buffer = v18 + 1, v18 + 1 == v16) )
          v19 = 0;
        else
          v19 = v24;
        v24 = v19;
        if ( v19 )
          continue;
      }
      goto LABEL_22;
    }
    v11 = -1073741811;
LABEL_22:
    if ( v15 > 1 )
      ZwClose(Handle[v7]);
    v6 = a1;
  }
  if ( v11 >= 0 )
  {
    *v6 = Handle[(unsigned int)v8];
    if ( a6 )
      *a6 = Disposition;
  }
  return (unsigned int)v11;
}
