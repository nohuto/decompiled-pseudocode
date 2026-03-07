__int64 __fastcall ViCopyBackModifiedBuffer(__int64 a1, int a2, char *a3, char *a4, SIZE_T Length)
{
  SIZE_T v5; // rdi
  __int64 v8; // rbp
  SIZE_T v10; // r10
  char *v11; // rax
  size_t v12; // rdi
  char *v13; // r14
  SIZE_T i; // rcx
  __int64 v15; // rax
  size_t v16; // rcx
  size_t v17; // r15
  void *MdlBufferSa; // rax
  size_t v19; // rbx
  size_t v20; // rax
  size_t v21; // rcx

  v5 = Length;
  LODWORD(v8) = a2;
  if ( !Length )
    return 0LL;
  v10 = RtlCompareMemory(a3, a4, Length);
  if ( Length > v10 )
  {
    v11 = &a4[Length - 1];
    while ( v11[a3 - a4] == *v11 )
    {
      --v5;
      --v11;
      if ( v5 <= v10 )
        goto LABEL_6;
    }
    goto LABEL_7;
  }
LABEL_6:
  if ( v5 == v10 )
    return 0LL;
LABEL_7:
  v12 = v5 - v10;
  v13 = &a3[v10];
  for ( i = (unsigned int)(*(_DWORD *)(a1 + 32) + *(_DWORD *)(a1 + 40) + *(_DWORD *)(a1 + 44) - v8);
        v10 >= i;
        i = *(unsigned int *)(v15 + 40) )
  {
    v15 = *(_QWORD *)a1;
    if ( !*(_QWORD *)a1 )
      break;
    v10 -= i;
    v8 = *(_QWORD *)(v15 + 32) + *(unsigned int *)(v15 + 44);
    a1 = *(_QWORD *)a1;
  }
  v16 = i - v10;
  LODWORD(v8) = v10 + v8;
  v17 = v12;
  if ( *(_QWORD *)a1 )
    v17 = v16;
  while ( 1 )
  {
    MdlBufferSa = (void *)ViGetMdlBufferSa(a1, v8);
    if ( !MdlBufferSa )
      break;
    if ( !*(_QWORD *)a1 )
    {
      memmove(MdlBufferSa, v13, v12);
      return 0LL;
    }
    v19 = v12;
    if ( v17 <= v12 )
      v19 = v17;
    memmove(MdlBufferSa, v13, v19);
    a1 = *(_QWORD *)a1;
    v20 = v12;
    v21 = v12 - v19;
    v12 = 0LL;
    v13 += v19;
    v8 = *(_QWORD *)(a1 + 32) + *(unsigned int *)(a1 + 44);
    v17 = *(unsigned int *)(a1 + 40);
    if ( v19 <= v20 )
      v12 = v21;
    if ( !v12 )
      return 0LL;
  }
  return 3221225473LL;
}
