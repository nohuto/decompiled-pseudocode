void __fastcall vSrcOpaqCopyS4D32Unsave(
        const unsigned __int8 *a1,
        int a2,
        int a3,
        unsigned __int8 *a4,
        int a5,
        int a6,
        int a7,
        int a8,
        unsigned int a9,
        unsigned int a10,
        struct SURFACE *a11)
{
  __int64 v12; // r14
  _DWORD *v15; // rdi
  const unsigned __int8 *v16; // rbx
  unsigned __int8 *v17; // r10
  const unsigned __int8 *v19; // r8
  unsigned __int8 *v20; // rdx
  int i; // r9d
  unsigned __int64 v22; // rax
  _DWORD *v23; // rdx

  v12 = a3;
  v15 = pvFillOpaqTable(4LL, a9, a10, a11);
  v16 = &a1[a2 / 2];
  v17 = &a4[4 * a5];
  while ( a8 )
  {
    v19 = v16;
    v20 = v17;
    if ( ((a5 + 1) & 0xFFFFFFFE) != a5 )
    {
      v19 = v16 + 1;
      *(_DWORD *)v17 = v15[*v16 & 0xF];
      v20 = v17 + 4;
    }
    for ( i = 0; i < (int)((a6 & 0xFFFFFFFE) - ((a5 + 1) & 0xFFFFFFFE)) / 2; ++i )
    {
      v22 = *v19++;
      *(_DWORD *)v20 = v15[v22 >> 4];
      v23 = v20 + 4;
      *v23 = v15[v22 & 0xF];
      v20 = (unsigned __int8 *)(v23 + 1);
    }
    if ( a6 != (a6 & 0xFFFFFFFE) )
      *(_DWORD *)v20 = v15[(unsigned __int64)*v19 >> 4];
    --a8;
    v16 += v12;
    v17 += a7;
  }
}
