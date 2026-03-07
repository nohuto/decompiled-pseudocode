_QWORD *__fastcall B_TREE<_SM_PAGE_KEY,ST_STORE<SM_TRAITS>::_ST_PAGE_ENTRY,4096,NP_CONTEXT,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeDescendToSibling(
        __int64 *a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v3; // r9
  __int64 v4; // rdx
  _QWORD *v5; // rax
  _QWORD *v6; // rcx
  __int64 i; // r9

  v3 = a1[1];
  v4 = *a1;
  if ( a3 )
    v5 = (_QWORD *)(*(_QWORD *)a3 + 16LL * (*(_DWORD *)(a3 + 24) - (unsigned int)*(unsigned __int8 *)(v4 + 2)));
  else
    v5 = 0LL;
  v6 = (_QWORD *)(v3 + 8);
  for ( i = v3 + 16; ; i = v4 + 16 )
  {
    if ( v5 )
    {
      *v5 = v4;
      v5[1] = i;
      v5 += 2;
    }
    if ( *(_BYTE *)(v4 + 2) == 2 )
      break;
    v4 = *v6;
    v6 = (_QWORD *)(*v6 + 8LL);
  }
  return v6;
}
