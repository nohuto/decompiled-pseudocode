char *__fastcall PfpPrefetchRequestPatchOffsets(_DWORD *a1)
{
  __int64 v1; // r8
  char *result; // rax
  __int64 v4; // r11
  __int64 v5; // r10
  __int64 v6; // r9
  bool v7; // zf
  __int64 v8; // rcx
  __int64 v9; // rax
  __int64 v10; // r9
  char *v11; // r8
  char *v12; // r10

  v1 = 0LL;
  result = (char *)a1 + (unsigned int)a1[8];
  for ( *((_QWORD *)a1 + 4) = result; (unsigned int)v1 < a1[2]; v1 = (unsigned int)(v1 + 1) )
  {
    v4 = *((_QWORD *)a1 + 4);
    v5 = 5 * v1;
    v6 = 0LL;
    *(_QWORD *)(v4 + 8 * v5 + 32) = (char *)a1 + *(unsigned int *)(v4 + 40 * v1 + 32);
    result = (char *)a1 + *(unsigned int *)(v4 + 40 * v1 + 16);
    v7 = (*(_DWORD *)(v4 + 40 * v1 + 12) & 0xFFFFFFFE) == 0;
    *(_QWORD *)(v4 + 8 * v5 + 16) = result;
    if ( !v7 )
    {
      do
      {
        v8 = *(_QWORD *)(v4 + 40 * v1 + 16) + 48 * v6;
        v9 = *(unsigned int *)(v8 + 32);
        if ( (_DWORD)v9 )
          *(_QWORD *)(v8 + 32) = (char *)a1 + v9;
        if ( *(_DWORD *)(v8 + 16) )
          *(_QWORD *)(v8 + 24) = (char *)a1 + *(unsigned int *)(v8 + 24);
        v6 = (unsigned int)(v6 + 1);
        result = (char *)(*(_DWORD *)(v4 + 40 * v1 + 12) >> 1);
      }
      while ( (unsigned int)v6 < (unsigned int)result );
    }
  }
  v10 = 0LL;
  v11 = (char *)a1 + (unsigned int)a1[14];
  for ( *((_QWORD *)a1 + 7) = v11; (unsigned int)v10 < a1[5]; v10 = (unsigned int)(v10 + 1) )
  {
    v12 = &v11[40 * v10];
    if ( *((_DWORD *)v12 + 6) )
    {
      result = (char *)a1 + *((unsigned int *)v12 + 8);
      *((_QWORD *)v12 + 4) = result;
      v11 = (char *)*((_QWORD *)a1 + 7);
    }
  }
  return result;
}
