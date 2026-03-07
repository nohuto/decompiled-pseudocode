void *__fastcall DXGMMS_EXPORT::FindExportAddress(DXGMMS_EXPORT *this, char *a2, unsigned int a3)
{
  _DWORD *v5; // rcx
  __int64 v6; // rax
  __int64 v7; // rbx
  unsigned int *v8; // rsi
  __int64 v9; // rbp
  unsigned int v10; // r15d
  __int64 v11; // r14
  size_t v12; // r12

  v5 = (_DWORD *)*((_QWORD *)this + 6);
  if ( !v5 )
    return 0LL;
  v6 = *((_QWORD *)this + 3);
  v7 = 0LL;
  v8 = (unsigned int *)(v6 + (unsigned int)v5[8]);
  v9 = v6 + (unsigned int)v5[9];
  v10 = v5[6];
  v11 = v6 + (unsigned int)v5[7];
  if ( !v10 )
    return 0LL;
  v12 = a3;
  while ( strncmp(a2, (const char *)(*((_QWORD *)this + 3) + *v8), v12) )
  {
    v7 = (unsigned int)(v7 + 1);
    ++v8;
    if ( (unsigned int)v7 >= v10 )
      return 0LL;
  }
  return (void *)(*((_QWORD *)this + 3) + *(unsigned int *)(v11 + 4LL * *(unsigned __int16 *)(v9 + 2 * v7)));
}
