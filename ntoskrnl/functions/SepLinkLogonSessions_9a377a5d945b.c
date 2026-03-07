__int64 __fastcall SepLinkLogonSessions(__int64 a1, void *a2, KPROCESSOR_MODE a3)
{
  PVOID v5; // rdi
  _QWORD *v6; // r14
  NTSTATUS v8; // eax
  int v9; // ebx
  __int64 v10; // rcx
  __int64 v11; // rax
  PVOID v13; // [rsp+40h] [rbp-19h] BYREF
  PVOID Object; // [rsp+48h] [rbp-11h] BYREF
  _QWORD *v15; // [rsp+50h] [rbp-9h] BYREF
  __int128 v16; // [rsp+58h] [rbp-1h] BYREF
  __int128 v17; // [rsp+68h] [rbp+Fh]
  __int128 v18; // [rsp+78h] [rbp+1Fh]
  PVOID v19; // [rsp+D8h] [rbp+7Fh] BYREF

  v13 = 0LL;
  v19 = 0LL;
  v15 = 0LL;
  v5 = 0LL;
  *(_QWORD *)&v18 = 0LL;
  v6 = 0LL;
  DWORD2(v18) = 0;
  v16 = 0LL;
  v17 = 0LL;
  if ( !SeSinglePrivilegeCheck(SeCreateTokenPrivilege, a3) )
  {
    v9 = -1073741727;
    goto LABEL_20;
  }
  if ( *(_QWORD *)(*(_QWORD *)(a1 + 216) + 48LL) )
    goto LABEL_26;
  Object = 0LL;
  v8 = ObReferenceObjectByHandle(a2, 0x88u, (POBJECT_TYPE)SeTokenObjectType, a3, &Object, 0LL);
  v5 = Object;
  v9 = v8;
  if ( v8 < 0 )
  {
LABEL_20:
    if ( v13 )
      ObfDereferenceObjectWithTag(v13, 0x746C6644u);
    if ( v19 )
      ObfDereferenceObjectWithTag(v19, 0x746C6644u);
    if ( v6 )
      SepDeReferenceLogonSessionDirect(v6);
    goto LABEL_15;
  }
  v10 = *((_QWORD *)Object + 27);
  if ( *(_QWORD *)(v10 + 48) )
    goto LABEL_26;
  v11 = *(_QWORD *)(a1 + 216);
  if ( v11 == v10 )
  {
    *(_DWORD *)(v11 + 32) |= 4u;
    v9 = 0;
    goto LABEL_15;
  }
  if ( *(_DWORD *)(a1 + 192) != 1 || *((_DWORD *)Object + 48) != 1 )
  {
LABEL_26:
    v9 = -1073741811;
    goto LABEL_20;
  }
  LODWORD(v16) = 48;
  *((_QWORD *)&v16 + 1) = 0LL;
  DWORD2(v17) = 0;
  *(_QWORD *)&v17 = 0LL;
  v18 = 0LL;
  v9 = SepDuplicateToken(a1, (unsigned int)&v16, 0, 1, 0, 0, 0, (__int64)&v19);
  if ( v9 < 0 )
    goto LABEL_20;
  v9 = SepDuplicateToken((_DWORD)v5, (unsigned int)&v16, 0, 1, 0, 0, 0, (__int64)&v13);
  if ( v9 < 0 )
    goto LABEL_20;
  v9 = SepReferenceLogonSession((char *)v19 + 24, &v15);
  if ( v9 < 0 )
    goto LABEL_18;
  *(_QWORD *)(*((_QWORD *)v19 + 27) + 48LL) = v19;
  *(_QWORD *)(*((_QWORD *)v19 + 27) + 16LL) = *(_QWORD *)(*((_QWORD *)v13 + 27) + 8LL);
  *(_DWORD *)(*((_QWORD *)v19 + 27) + 32LL) |= 2u;
  *(_QWORD *)(*((_QWORD *)v13 + 27) + 48LL) = v13;
  *(_QWORD *)(*((_QWORD *)v13 + 27) + 16LL) = *(_QWORD *)(*((_QWORD *)v19 + 27) + 8LL);
  *(_DWORD *)(*((_QWORD *)v13 + 27) + 32LL) |= 4u;
  if ( HIDWORD(NlsMbOemCodePageTag) )
  {
    SepRemoveTokenLogonSession(v13);
    SepRemoveTokenLogonSession(v19);
  }
  v9 = SepStopReferencingLogonSession(v13);
  if ( v9 < 0 || (v9 = SepStopReferencingLogonSession(v19), v9 < 0) )
  {
LABEL_18:
    v6 = v15;
    goto LABEL_20;
  }
LABEL_15:
  if ( v5 )
    ObfDereferenceObjectWithTag(v5, 0x746C6644u);
  return (unsigned int)v9;
}
