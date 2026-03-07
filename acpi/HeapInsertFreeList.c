_QWORD *__fastcall HeapInsertFreeList(__int64 a1, unsigned int *a2)
{
  unsigned int *v2; // r9
  unsigned int *v4; // rax
  __int64 **v5; // rcx
  __int64 *v6; // r8
  _QWORD *v7; // r10
  __int64 v8; // rbx
  __int64 v9; // rcx
  __int64 v10; // rcx
  _QWORD *v11; // rax
  unsigned int *v12; // rax
  unsigned int *v13; // r10
  __int64 v14; // rcx
  __int64 *v15; // rcx
  __int64 **v16; // rax
  _QWORD *result; // rax
  _QWORD *v18; // rdx
  __int64 v19; // rcx

  v2 = (unsigned int *)(a1 + 40);
  v4 = *(unsigned int **)(a1 + 40);
  if ( v4 != (unsigned int *)(a1 + 40) )
  {
    do
    {
      if ( a2 + 4 < v4 )
        break;
      v4 = *(unsigned int **)v4;
    }
    while ( v4 != v2 );
  }
  v5 = (__int64 **)*((_QWORD *)v4 + 1);
  v6 = (__int64 *)(a2 + 4);
  if ( *v5 != (__int64 *)v4 )
    goto LABEL_20;
  *v6 = (__int64)v4;
  *((_QWORD *)a2 + 3) = v5;
  *v5 = v6;
  *((_QWORD *)v4 + 1) = v6;
  v7 = (_QWORD *)*v6;
  v8 = *v6 - 16;
  if ( (unsigned int *)*v6 != v2 )
  {
    v9 = a2[1];
    if ( (unsigned int *)v8 == (unsigned int *)((char *)a2 + v9) )
    {
      a2[1] = *(_DWORD *)(v8 + 4) + v9;
      v10 = *v7;
      if ( *(_QWORD **)(*v7 + 8LL) != v7 )
        goto LABEL_20;
      v11 = (_QWORD *)v7[1];
      if ( (_QWORD *)*v11 != v7 )
        goto LABEL_20;
      *v11 = v10;
      *(_QWORD *)(v10 + 8) = v11;
    }
  }
  v12 = (unsigned int *)*((_QWORD *)a2 + 3);
  v13 = v12 - 4;
  if ( v12 != v2 )
  {
    v14 = v13[1];
    if ( a2 == (unsigned int *)((char *)v13 + v14) )
    {
      v13[1] = a2[1] + v14;
      v15 = (__int64 *)*v6;
      if ( *(__int64 **)(*v6 + 8) != v6 )
        goto LABEL_20;
      v16 = (__int64 **)*((_QWORD *)a2 + 3);
      if ( *v16 != v6 )
        goto LABEL_20;
      *v16 = v15;
      a2 = v13;
      v15[1] = (__int64)v16;
    }
  }
  result = (_QWORD *)((char *)a2 + a2[1]);
  if ( *(_QWORD *)(a1 + 32) > (unsigned __int64)result )
    return result;
  *(_QWORD *)(a1 + 32) = a2;
  v18 = a2 + 4;
  v19 = *v18;
  if ( *(_QWORD **)(*v18 + 8LL) != v18 || (result = (_QWORD *)v18[1], (_QWORD *)*result != v18) )
LABEL_20:
    __fastfail(3u);
  *result = v19;
  *(_QWORD *)(v19 + 8) = result;
  return result;
}
