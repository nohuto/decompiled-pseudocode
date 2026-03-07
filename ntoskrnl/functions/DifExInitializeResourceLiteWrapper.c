NTSTATUS __fastcall DifExInitializeResourceLiteWrapper(PERESOURCE Resource)
{
  __int64 *APIThunkContextById; // rax
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 *v7; // rdi
  int v8; // eax
  __int64 ReturnAddressForWrappers; // rax
  __int64 *i; // rbx
  NTSTATUS result; // eax
  _QWORD **v12; // rdi
  _QWORD *v13; // rbx
  __int128 v14; // [rsp+20h] [rbp-20h] BYREF
  __int64 v15; // [rsp+30h] [rbp-10h]
  __int64 retaddr; // [rsp+48h] [rbp+8h]

  v15 = 0LL;
  v14 = 0LL;
  APIThunkContextById = DifGetAPIThunkContextById(46);
  v7 = APIThunkContextById;
  if ( !APIThunkContextById )
    goto LABEL_17;
  if ( ViVerifierEnabled && (VfRuleClasses & 0xFF217644) != 0
    || (v4 = HIDWORD(VfRuleClasses), (VfRuleClasses & 0x800000000LL) == 0) )
  {
    if ( (*((_DWORD *)APIThunkContextById + 3) & 0x20) == 0 )
      goto LABEL_8;
  }
  else
  {
    v8 = *((_DWORD *)APIThunkContextById + 3);
    if ( (v8 & 0x18) != 0 )
    {
      ReturnAddressForWrappers = retaddr;
LABEL_9:
      *(_QWORD *)&v14 = ReturnAddressForWrappers;
      goto LABEL_10;
    }
    if ( (v8 & 4) != 0 )
    {
LABEL_8:
      ReturnAddressForWrappers = DifGetReturnAddressForWrappers(v4, v3, v5, v6);
      goto LABEL_9;
    }
  }
  *(_QWORD *)&v14 = 0LL;
LABEL_10:
  *((_QWORD *)&v14 + 1) = Resource;
  for ( i = (__int64 *)v7[4]; i != v7 + 4; i = (__int64 *)*i )
  {
    if ( i != (__int64 *)16 )
      ((void (__fastcall *)(__int128 *))*(i - 1))(&v14);
  }
LABEL_17:
  result = ExInitializeResourceLite(Resource);
  LODWORD(v15) = result;
  if ( v7 )
  {
    v12 = (_QWORD **)(v7 + 6);
    v13 = *v12;
    if ( *v12 != v12 )
    {
      do
      {
        if ( v13 != (_QWORD *)16 )
          ((void (__fastcall *)(__int128 *))*(v13 - 1))(&v14);
        v13 = (_QWORD *)*v13;
      }
      while ( v13 != v12 );
      return v15;
    }
  }
  return result;
}
