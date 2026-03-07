__int64 __fastcall rimFindImageProcAddress(__int64 a1, const char *a2)
{
  _DWORD *v2; // r8
  __int64 v5; // rax
  __int64 v6; // rbx
  unsigned int *v7; // rsi
  __int64 v8; // rbp
  unsigned int v9; // r12d
  __int64 v10; // r14
  size_t v11; // r8

  v2 = *(_DWORD **)(a1 + 40);
  if ( !v2 )
    return 0LL;
  v5 = *(_QWORD *)(a1 + 16);
  v6 = 0LL;
  v7 = (unsigned int *)(v5 + (unsigned int)v2[8]);
  v8 = v5 + (unsigned int)v2[9];
  v9 = v2[6];
  v10 = v5 + (unsigned int)v2[7];
  if ( !v9 )
    return 0LL;
  while ( 1 )
  {
    v11 = -1LL;
    do
      ++v11;
    while ( a2[v11] );
    if ( !strncmp(a2, (const char *)(*(_QWORD *)(a1 + 16) + *v7), v11) )
      break;
    v6 = (unsigned int)(v6 + 1);
    ++v7;
    if ( (unsigned int)v6 >= v9 )
      return 0LL;
  }
  return *(_QWORD *)(a1 + 16) + *(unsigned int *)(v10 + 4LL * *(unsigned __int16 *)(v8 + 2 * v6));
}
