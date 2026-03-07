char *__fastcall ExpCovGetSectionInfo(char *a1, _DWORD *a2)
{
  __int64 v4; // rax
  __int64 v5; // r9
  unsigned int v6; // ecx
  __int64 v7; // r10
  __int64 v8; // rax
  _DWORD *v9; // r8
  __int64 v11; // rdx
  char *v12; // r8
  unsigned __int64 v13; // rax

  *a2 = 0;
  v4 = RtlImageNtHeader((__int64)a1);
  v5 = v4;
  if ( !v4 )
    return 0LL;
  v6 = *(unsigned __int16 *)(v4 + 6);
  v7 = v4 + *(unsigned __int16 *)(v4 + 20);
  v8 = 0LL;
  v9 = (_DWORD *)(v7 + 24);
  if ( !*(_WORD *)(v5 + 6) )
    return 0LL;
  while ( *v9 != 1987011374 )
  {
    v8 = (unsigned int)(v8 + 1);
    v9 += 10;
    if ( (unsigned int)v8 >= v6 )
      return 0LL;
  }
  v11 = *(unsigned int *)(v7 + 40 * v8 + 32);
  v12 = &a1[*(unsigned int *)(v7 + 40 * v8 + 36)];
  if ( &v12[v11] > &a1[*(unsigned int *)(v5 + 80)]
    || !*(_DWORD *)(v7 + 40 * v8 + 40)
    || (unsigned int)v11 < 0x28
    || *(_DWORD *)v12 != -557841984
    || (v13 = *((unsigned int *)v12 + 6), (_DWORD)v13 != (_DWORD)v11)
    || v13 <= (unsigned __int64)*((unsigned int *)v12 + 7) + 40
    || (*((_DWORD *)v12 + 8) & 7) != 0 )
  {
    DbgPrintEx(0x7Eu, 0, "COV: Malformed coverage section at ImageBase 0x%p\n", a1);
    return 0LL;
  }
  *a2 = v13;
  return v12;
}
