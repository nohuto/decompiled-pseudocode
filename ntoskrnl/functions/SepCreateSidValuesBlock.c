__int64 __fastcall SepCreateSidValuesBlock(_QWORD *a1, PSID *a2, unsigned int a3, __int64 a4, int a5, unsigned int a6)
{
  _QWORD *v9; // rsi
  unsigned int v11; // r14d
  int v12; // edx
  unsigned int v13; // r15d
  char *Pool2; // rax
  char *v15; // rbx
  unsigned __int8 *v16; // r13
  unsigned int v17; // r15d
  unsigned int v18; // edi
  PSID *v19; // r8
  char *v20; // [rsp+20h] [rbp-38h]

  v9 = a1;
  if ( !a1 )
    return 3221225485LL;
  *a1 = 0LL;
  v11 = a3;
  v12 = a5;
  if ( a6 < a3 )
  {
    _mm_lfence();
    v11 = a3 - 1;
    v12 = a5 - 4 * *(unsigned __int8 *)(*(_QWORD *)(a4 + 16LL * a6) + 1LL) - 8;
  }
  v13 = (((4 * *((unsigned __int8 *)*a2 + 1) + 11) & 0xFFFFFFFC) + 27 + ((v12 + 7) & 0xFFFFFFF8)) & 0xFFFFFFFC;
  Pool2 = (char *)ExAllocatePool2(256LL, v13, 1985176915LL);
  v20 = Pool2;
  v15 = Pool2;
  if ( !Pool2 )
    return 3221225626LL;
  memset(Pool2, 0, v13);
  *(_DWORD *)v15 = v13;
  v16 = (unsigned __int8 *)(v15 + 24);
  v17 = a3 + 1;
  *((_QWORD *)v15 + 1) = 1LL;
  v18 = 0;
  if ( !v17 )
    goto LABEL_15;
  do
  {
    if ( v18 )
    {
      if ( v18 - 1 == a6 )
        goto LABEL_13;
      v19 = (PSID *)(a4 + 16LL * (v18 - 1));
    }
    else
    {
      v19 = a2;
    }
    RtlCopySid(4 * *((unsigned __int8 *)*v19 + 1) + 8, v16, *v19);
    v16 += (4LL * v16[1] + 11) & 0xFFFFFFFCLL;
LABEL_13:
    ++v18;
  }
  while ( v18 < v17 );
  v15 = v20;
  v9 = a1;
LABEL_15:
  *v9 = v15;
  *((_DWORD *)v15 + 4) = v11 + 1;
  return 0LL;
}
