LONG_PTR __fastcall SmKmEtwAppendProductName(__int64 *a1, __int64 a2)
{
  __int64 v3; // rcx
  void *v4; // rbp
  __int64 v5; // rdx
  wchar_t *v6; // rdi
  unsigned int v7; // ebx
  __int64 v8; // r8
  unsigned __int64 v9; // rdx
  __int64 v10; // rsi
  __int64 v11; // rcx
  wchar_t *v12; // r15
  unsigned int v13; // ebx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // rax
  __int64 v17; // r12
  unsigned int v18; // r13d
  void *v19; // rdi
  __int64 v20; // rax
  LONG_PTR result; // rax
  __int64 v22; // [rsp+60h] [rbp+8h] BYREF
  void *v23; // [rsp+68h] [rbp+10h] BYREF

  v3 = *(_QWORD *)(a2 + 24);
  v23 = 0LL;
  v4 = 0LL;
  v22 = v3;
  if ( !v3 )
  {
    SmKmStoreFileOpenVolume(*(_QWORD *)(a2 + 8), &v23, &v22);
    v3 = v22;
    v4 = v23;
  }
  v5 = a1[1] + *((unsigned int *)a1 + 6);
  v6 = (wchar_t *)((v5 + 1) & 0xFFFFFFFFFFFFFFFEuLL);
  v7 = v5 + *((_DWORD *)a1 + 7) - *((_DWORD *)a1 + 6) - (_DWORD)v6;
  if ( !v3 )
    goto LABEL_7;
  v8 = 256LL;
  v9 = (v5 + 1) & 0xFFFFFFFFFFFFFFFEuLL;
  if ( v7 < 0x100 )
    v8 = v7;
  if ( (int)SmKmVolumeQueryUniqueId(v3, v9, v8) < 0 )
LABEL_7:
    *v6 = 0;
  v10 = -1LL;
  v11 = -1LL;
  do
    ++v11;
  while ( v6[v11] );
  v12 = &v6[(unsigned int)v11 + 1];
  if ( (int)SmUniqueIdParseProductName(v6, v12, v7 - 2 * (_DWORD)v11 - 2) < 0 )
  {
    LODWORD(v10) = 0;
  }
  else
  {
    do
      ++v10;
    while ( v12[v10] );
  }
  v13 = 2 * v10;
  v14 = *((unsigned int *)a1 + 6);
  v15 = a1[1];
  v16 = 2LL * *((unsigned int *)a1 + 4);
  v17 = *a1;
  v18 = *((_DWORD *)a1 + 4) + 1;
  *(_WORD *)(v14 + v15) = v10;
  *(_QWORD *)(v17 + 8 * v16) = v14 + v15;
  *(_QWORD *)(v17 + 8 * v16 + 8) = 2LL;
  v19 = (void *)(v15 + (unsigned int)(v14 + 2));
  LODWORD(v22) = v14 + 2;
  if ( v12 )
    memmove(v19, v12, v13);
  v20 = v17 + 16LL * v18;
  *(_DWORD *)(v20 + 12) = 0;
  *(_QWORD *)v20 = v19;
  *(_DWORD *)(v20 + 8) = v13;
  *((_DWORD *)a1 + 4) = v18 + 1;
  result = v13 + (unsigned int)v22;
  *((_DWORD *)a1 + 6) = result;
  if ( v4 )
    return ObfDereferenceObjectWithTag(v4, 0x746C6644u);
  return result;
}
