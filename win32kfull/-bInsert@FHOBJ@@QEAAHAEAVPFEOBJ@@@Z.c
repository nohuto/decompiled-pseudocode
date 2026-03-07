__int64 __fastcall FHOBJ::bInsert(FHOBJ *this, struct PFEOBJ *a2)
{
  __int64 v4; // r8
  unsigned __int16 *v5; // rax
  unsigned int v6; // ebx
  __int64 *v7; // r11
  __int64 v8; // r10
  __int64 *i; // rdx
  unsigned __int16 *v10; // rax
  unsigned __int64 v12; // rcx
  unsigned __int64 v13; // rax
  int v14; // eax
  unsigned __int16 v15; // cx
  unsigned __int16 *v16; // rbx
  struct _HASHBUCKET *v18; // rax
  unsigned int v20; // [rsp+30h] [rbp-19h] BYREF
  unsigned __int64 v21; // [rsp+38h] [rbp-11h]
  unsigned __int16 v22[32]; // [rsp+40h] [rbp-9h] BYREF

  memset_0(v22, 0, sizeof(v22));
  if ( !*(_DWORD *)(*((_QWORD *)this + 1) + 4LL)
    && !_wcsicmp(
          (const wchar_t *)(*(_QWORD *)(*(_QWORD *)a2 + 32LL) + *(int *)(*(_QWORD *)(*(_QWORD *)a2 + 32LL) + 16LL)),
          (const wchar_t *)(*(_QWORD *)(*(_QWORD *)a2 + 32LL) + *(int *)(*(_QWORD *)(*(_QWORD *)a2 + 32LL) + 8LL))) )
  {
    return 1LL;
  }
  v4 = *((_QWORD *)this + 1);
  if ( *(_DWORD *)(v4 + 4) == 2 )
  {
    v12 = *(_QWORD *)(*(_QWORD *)a2 + 84LL);
    v21 = v12;
    if ( (_DWORD)v12 == 1 )
      v13 = HIDWORD(v12);
    else
      LODWORD(v13) = v12;
    v6 = (unsigned int)v13 % *(_DWORD *)(v4 + 8);
    v20 = v6;
    for ( i = *(__int64 **)(v4 + 8LL * v6 + 40); i; i = (__int64 *)*i )
    {
      v14 = *((_DWORD *)i + 15);
      if ( v14 == 1 && (_DWORD)v12 == 1 )
      {
        if ( *((_DWORD *)i + 16) == HIDWORD(v21) )
          goto LABEL_7;
      }
      else if ( v14 == (_DWORD)v12 )
      {
        goto LABEL_7;
      }
    }
    i = 0LL;
  }
  else
  {
    v5 = FHOBJ::pwszName(this, a2);
    cCapString(v22, v5, 32LL);
    v6 = iHash(v22, *(_DWORD *)(*((_QWORD *)this + 1) + 8LL));
    v20 = v6;
    for ( i = *(__int64 **)(v8 + 8LL * v6 + 40); i; i = (__int64 *)*i )
    {
      v10 = v22;
      if ( v22[0] == *((_WORD *)i + 30) )
      {
        v15 = v22[0];
        while ( v15 )
        {
          v15 = *++v10;
          if ( *v10 != *(unsigned __int16 *)((char *)v10 + (char *)i - (char *)v22 + 60) )
            goto LABEL_5;
        }
        if ( (i[4] & 2) == 0 )
          goto LABEL_7;
        v7 = i;
      }
LABEL_5:
      ;
    }
    i = v7;
  }
LABEL_7:
  if ( (unsigned int)FHOBJ::bAddPFELink(this, (struct _HASHBUCKET *)i, v6, v22, a2, 0) )
  {
    if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)a2 + 32LL) + 48LL) & 0x8000000) != 0
      && *(_DWORD *)(*((_QWORD *)this + 1) + 4LL) == 1 )
    {
      v16 = FHOBJ::pwszName(this, a2);
      while ( *v16++ )
        ;
      while ( *v16 )
      {
        cCapString(v22, v16, 32LL);
        v18 = FHOBJ::pbktSearch(this, v22, &v20, 0LL, 1);
        if ( !(unsigned int)FHOBJ::bAddPFELink(this, v18, v20, v22, a2, 1) )
          return 0LL;
        while ( *v16++ )
          ;
      }
    }
    return 1LL;
  }
  return 0LL;
}
