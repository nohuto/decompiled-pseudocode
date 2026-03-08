/*
 * XREFs of SepFlattenAcl @ 0x1405B61F4
 * Callers:
 *     SeLogAccessFailure @ 0x1402EE66C (SeLogAccessFailure.c)
 * Callees:
 *     memmove @ 0x14042CCC0 (memmove.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 */

__int64 __fastcall SepFlattenAcl(__int64 a1, __int64 *a2, unsigned int *a3, _WORD *a4)
{
  unsigned int v4; // eax
  unsigned __int8 *v5; // r14
  unsigned int v6; // r15d
  __int16 v8; // bp
  char *v9; // r10
  unsigned int v10; // edi
  __int64 v11; // rcx
  unsigned __int8 v12; // al
  __int64 Pool2; // rax
  __int64 v14; // r12
  _DWORD *v16; // rsi
  char v17; // al
  int v18; // ecx
  int v19; // eax

  v4 = *(unsigned __int16 *)(a1 + 4);
  v5 = (unsigned __int8 *)(a1 + 8);
  v6 = 0;
  *a2 = 0LL;
  v8 = 0;
  *a3 = 0;
  v9 = (char *)(a1 + 8);
  v10 = 0;
  if ( !(_WORD)v4 )
    return 3221226021LL;
  v11 = v4;
  do
  {
    v12 = *v9;
    v10 += 12;
    if ( (unsigned __int8)*v9 <= 3u || v12 == 17 || v12 == 20 || v12 == 21 )
    {
      v10 += 4 * (unsigned __int8)v9[9] + 8;
      ++v8;
    }
    v9 += *((unsigned __int16 *)v9 + 1);
    --v11;
  }
  while ( v11 );
  if ( !v8 )
    return 3221226021LL;
  Pool2 = ExAllocatePool2(256LL, v10, 1632396627LL);
  v14 = Pool2;
  if ( !Pool2 )
    return 3221225495LL;
  v16 = (_DWORD *)Pool2;
  if ( *(_WORD *)(a1 + 4) )
  {
    do
    {
      v17 = *v5;
      if ( *v5 <= 3u || v17 == 17 || v17 == 20 || v17 == 21 )
      {
        v18 = *((_DWORD *)v5 + 1);
        v16[1] = v5[1];
        v19 = *v5;
        v16[2] = v18;
        *v16 = v19;
        memmove(v16 + 3, v5 + 8, 4LL * v5[9] + 8);
        v16 += v5[9] + 5;
      }
      ++v6;
      v5 += *((unsigned __int16 *)v5 + 1);
    }
    while ( v6 < *(unsigned __int16 *)(a1 + 4) );
  }
  *a2 = v14;
  *a3 = v10;
  *a4 = v8;
  return 0LL;
}
