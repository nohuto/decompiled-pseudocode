__int64 __fastcall TranslateUmdFileNameToVmMultiString(unsigned __int16 *a1, int a2, unsigned int *a3)
{
  __int64 v3; // rbp
  _QWORD *v6; // rbx
  _QWORD *v7; // r15
  int v8; // esi
  unsigned int v9; // edi
  __int64 v10; // rax
  unsigned int v11; // edx
  unsigned __int16 *v12; // r8
  unsigned __int16 v13; // r9
  unsigned int v14; // edx
  _QWORD *v15; // r8
  __int64 v16; // r9
  __int64 v17; // rax
  unsigned __int16 v18; // cx
  __int64 v19; // rax
  __int64 v20; // rax
  int v21; // edi
  void *v22; // rcx
  __int64 v23; // rax
  int v24; // edi

  v3 = (unsigned int)(a2 - 1);
  v6 = 0LL;
  v7 = 0LL;
  v8 = 0;
  v9 = 0;
  a1[v3] = 0;
  if ( a2 != 1 )
  {
    do
    {
      if ( a1[v9] )
      {
        v10 = operator new[](0x210uLL, 0x4B677844u, 256LL);
        if ( !v10 )
        {
          v8 = -1073741801;
          goto LABEL_21;
        }
        *(_QWORD *)v10 = 0LL;
        *(_WORD *)(v10 + 526) = 0;
        if ( v6 )
          *v7 = v10;
        else
          v6 = (_QWORD *)v10;
        v11 = 0;
        v12 = (unsigned __int16 *)(v10 + 8);
        v7 = (_QWORD *)v10;
        do
        {
          v13 = a1[v9];
          if ( !v13 )
            break;
          if ( v9 >= (unsigned int)v3 )
            break;
          *v12 = v13;
          ++v9;
          ++v12;
          ++v11;
        }
        while ( v11 < 0x103 );
        *(_WORD *)(v10 + 2LL * v11 + 8) = 0;
        v8 = TranslateUmdFileNameToVm((size_t *)(v10 + 8), 0x104u, 0LL);
        if ( v8 < 0 )
          goto LABEL_21;
      }
      else
      {
        ++v9;
      }
    }
    while ( v9 < (unsigned int)v3 );
  }
  v14 = 0;
  v15 = v6;
  if ( !v6 )
  {
LABEL_21:
    v21 = 0;
    goto LABEL_27;
  }
  while ( 1 )
  {
    LODWORD(v16) = 0;
    if ( *((_WORD *)v15 + 4) )
      break;
LABEL_18:
    v20 = v14++;
    a1[v20] = 0;
    v15 = (_QWORD *)*v15;
    if ( !v15 )
      goto LABEL_23;
  }
  while ( v14 < (unsigned int)v3 )
  {
    v17 = (unsigned int)v16;
    v16 = (unsigned int)(v16 + 1);
    v18 = *((_WORD *)v15 + v17 + 4);
    v19 = v14++;
    a1[v19] = v18;
    if ( !*((_WORD *)v15 + v16 + 4) )
      goto LABEL_18;
  }
  v8 = -2147483643;
LABEL_23:
  v21 = 0;
  do
  {
    v22 = v6;
    v23 = -1LL;
    do
      ++v23;
    while ( *((_WORD *)v6 + v23 + 4) );
    v6 = (_QWORD *)*v6;
    v21 += v23 + 1;
    operator delete(v22);
LABEL_27:
    ;
  }
  while ( v6 );
  v24 = 2 * v21 + 2;
  if ( (int)(v8 + 0x80000000) < 0 || v8 == -2147483643 )
    *a3 = v24;
  return (unsigned int)v8;
}
