/*
 * XREFs of EtwpAllocateStringFilterData @ 0x1409F1DA4
 * Callers:
 *     EtwpAllocateFilter @ 0x14077F2A4 (EtwpAllocateFilter.c)
 * Callees:
 *     memmove @ 0x14042CCC0 (memmove.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 */

__int64 __fastcall EtwpAllocateStringFilterData(__int64 a1, unsigned __int16 **a2)
{
  unsigned int v3; // r8d
  unsigned int v4; // r8d
  _WORD *v5; // r15
  unsigned __int16 v6; // si
  unsigned int i; // ebx
  __int16 v8; // cx
  unsigned __int16 v9; // ax
  unsigned int v10; // ebx
  unsigned __int16 *Pool2; // rax
  unsigned __int16 *v12; // rdi
  __int64 result; // rax
  unsigned __int16 *v14; // rsi
  unsigned __int16 v15; // r8
  __int16 v16; // r10
  unsigned int j; // edx
  unsigned __int16 v18; // ax
  unsigned __int16 v19; // ax
  __int64 v20; // rcx

  if ( *a2 )
    return 3221225485LL;
  v3 = *(_DWORD *)(a1 + 8);
  if ( v3 - 2 > 0x3FE )
    return 3221225485LL;
  v4 = v3 >> 1;
  v5 = *(_WORD **)a1;
  v6 = 1;
  for ( i = 0; i < v4; v6 = v9 )
  {
    v8 = v5[i];
    if ( !v8 )
      break;
    ++i;
    v9 = v6 + 1;
    if ( v8 != 59 )
      v9 = v6;
  }
  v10 = i + 1;
  if ( v4 <= v10 )
    v10 = v4;
  Pool2 = (unsigned __int16 *)ExAllocatePool2(256LL, 2 * (v10 + 8 * v6) + 24, 1182233669LL);
  v12 = Pool2;
  if ( !Pool2 )
    return 3221225495LL;
  *Pool2 = v6;
  v14 = &Pool2[8 * v6 + 12];
  memmove(v14, v5, 2LL * v10);
  *((_QWORD *)v12 + 2) = v14;
  v15 = 1;
  v16 = 0;
  for ( j = 0; j < v10; ++j )
  {
    v18 = v14[j];
    if ( !v18 || v15 >= *v12 )
      break;
    if ( v18 == 59 )
    {
      v19 = j - v16;
      v14[j] = 0;
      v20 = 2LL * v15;
      v16 = j + 1;
      ++v15;
      v12[4 * v20 - 4] = v19;
      *(_QWORD *)&v12[4 * v20 + 8] = &v14[j + 1];
    }
  }
  v12[8 * v15 - 4] = v10 - v16 - 1;
  result = 0LL;
  *a2 = v12;
  return result;
}
