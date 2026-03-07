__int64 __fastcall ACPIGetConvertToStringWideWithPrepend(__int64 a1, int a2, __int64 a3, int a4, char **a5, _DWORD *a6)
{
  unsigned int v9; // r9d
  __int64 v10; // rax
  _BYTE *v11; // rcx
  _BYTE *v12; // rdx
  char v13; // si
  int v14; // r14d
  __int64 v15; // rax
  __int64 v16; // rbx
  __int64 v17; // rbx
  char *Pool2; // rax
  char *v19; // rbp
  __int64 v20; // rcx

  if ( a2 < 0 )
    return (unsigned int)a2;
  if ( *(_WORD *)(a3 + 2) != 2 )
    return 3222536207LL;
  v9 = *(_DWORD *)(a3 + 24);
  v10 = 0LL;
  v11 = *(_BYTE **)(a3 + 32);
  if ( v9 )
  {
    v12 = *(_BYTE **)(a3 + 32);
    while ( *v12 )
    {
      if ( *v12 == 92 )
      {
        if ( &v11[v10] )
          goto LABEL_14;
        break;
      }
      v10 = (unsigned int)(v10 + 1);
      ++v12;
      if ( (unsigned int)v10 >= v9 )
        break;
    }
  }
  if ( *v11 == 42 )
  {
LABEL_14:
    v13 = 0;
    v14 = 0;
  }
  else
  {
    v13 = 1;
    v14 = 5;
  }
  v15 = -1LL;
  v16 = -1LL;
  do
    ++v16;
  while ( v11[v16] );
  v17 = (unsigned int)(v16 + 1);
  if ( v13 )
  {
    do
      ++v15;
    while ( v11[v15] );
    v17 = (unsigned int)(v14 + v15 + v17 + 1);
  }
  Pool2 = (char *)ExAllocatePool2(
                    (-(__int64)((a4 & 0x8000000) != 0) & 0xFFFFFFFFFFFFFF40uLL) + 256,
                    2 * v17,
                    1399874369LL);
  v19 = Pool2;
  if ( !Pool2 )
    return 3221225626LL;
  v20 = 0LL;
  if ( v13 )
  {
    RtlStringCchPrintfA(Pool2, (unsigned int)v17, "ACPI\\%s", *(const char **)(a3 + 32));
    v20 = (unsigned int)(v14 + *(_DWORD *)(a3 + 24));
  }
  RtlStringCchPrintfA(&v19[v20], (unsigned int)(v17 - v20), "%s", *(const char **)(a3 + 32));
  ACPIAnsiStringToWideHelper(v19, 2 * v17);
  *a5 = v19;
  if ( a6 )
    *a6 = 2 * v17;
  return 0LL;
}
