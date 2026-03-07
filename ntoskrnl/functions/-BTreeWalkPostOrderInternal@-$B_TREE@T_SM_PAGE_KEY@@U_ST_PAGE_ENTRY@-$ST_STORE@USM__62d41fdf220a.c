__int64 __fastcall B_TREE<_SM_PAGE_KEY,ST_STORE<SM_TRAITS>::_ST_PAGE_ENTRY,4096,NP_CONTEXT,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeWalkPostOrderInternal(
        __int64 a1,
        const void *a2,
        _QWORD **a3,
        __int64 (__fastcall *a4)(_QWORD *, __int64, __int64),
        __int64 a5,
        __int64 a6)
{
  _QWORD *v6; // rsi
  _QWORD *v10; // rcx
  _QWORD *v11; // rdi
  int v12; // ecx
  _QWORD *v13; // r9
  unsigned __int64 v14; // rbp
  unsigned __int64 v15; // rbx
  _QWORD *v16; // r15
  _QWORD *v17; // r8
  _QWORD *v18; // rax
  _QWORD *v19; // r15
  _QWORD *v20; // rdx

  v6 = *a3;
  if ( *a3 )
  {
    v10 = *a3;
    *a3 = (_QWORD *)*v6;
    v11 = v6;
    memmove(v10, a2, 0x1000uLL);
  }
  else
  {
    v11 = a2;
  }
  if ( *((_BYTE *)v11 + 3) )
  {
    v12 = a4(v11, a5, a6);
    goto LABEL_23;
  }
  v13 = v11 + 2;
  v14 = (unsigned __int64)&v11[2 * (unsigned __int16)*(_DWORD *)v11 + 2];
  v15 = (unsigned __int64)(v11 + 2);
  if ( **(_DWORD **)((a1 + 16) & -(__int64)(a1 != 0)) != -1 && *((_BYTE *)v11 + 2) == 2 )
  {
    if ( v15 <= v14 )
    {
      v16 = v11 + 1;
      do
      {
        v17 = v16;
        if ( v15 <= (unsigned __int64)v13 )
          v17 = v11 + 1;
        v12 = a4(0LL, a5, (__int64)v17);
        if ( v12 < 0 )
          goto LABEL_23;
        v15 += 16LL;
        v13 = v11 + 2;
        v16 += 2;
      }
      while ( v15 <= v14 );
    }
LABEL_21:
    v12 = a4(v11, a5, a6);
    if ( v12 >= 0 )
      v12 = 0;
    goto LABEL_23;
  }
  if ( v15 > v14 )
    goto LABEL_21;
  v18 = v11 + 1;
  v19 = v11 + 1;
  while ( 1 )
  {
    v20 = v19;
    if ( v15 <= (unsigned __int64)v13 )
      v20 = v18;
    v12 = B_TREE<_SM_PAGE_KEY,ST_STORE<SM_TRAITS>::_ST_PAGE_ENTRY,4096,NP_CONTEXT,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeWalkPostOrderInternal(
            a1,
            *v20,
            (_DWORD)a3,
            (_DWORD)a4,
            a5,
            (__int64)v20);
    if ( v12 < 0 )
      break;
    v15 += 16LL;
    v13 = v11 + 2;
    v19 += 2;
    v18 = v11 + 1;
    if ( v15 > v14 )
      goto LABEL_21;
  }
LABEL_23:
  if ( v6 )
  {
    *v6 = *a3;
    *a3 = v6;
  }
  return (unsigned int)v12;
}
