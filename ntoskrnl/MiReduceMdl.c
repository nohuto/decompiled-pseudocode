/*
 * XREFs of MiReduceMdl @ 0x1402D674C
 * Callers:
 *     MiPfPutPagesInTransition @ 0x140288890 (MiPfPutPagesInTransition.c)
 *     MiResolvePageFileFault @ 0x140668EDC (MiResolvePageFileFault.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiReduceMdl(__int64 a1)
{
  char *v1; // rbx
  unsigned int v2; // r11d
  __int64 v3; // rsi
  char *v5; // rdx
  __int64 v6; // rdi
  unsigned int v7; // r10d
  unsigned __int64 v8; // r9
  __int64 v9; // r10
  __int16 v10; // cx
  int v12; // edx
  __int16 v13; // cx
  unsigned int v14; // eax
  unsigned int v15; // edx
  bool v16; // zf
  __int64 v17; // rcx
  char *v18; // r10
  signed __int64 v19; // rcx

  v1 = (char *)(a1 + 48);
  v2 = 0;
  v3 = *(unsigned int *)(a1 + 40);
  v5 = (char *)(a1 + 48);
  v6 = 0LL;
  v7 = 0;
  v8 = ((unsigned __int64)((*(_DWORD *)(a1 + 32) + *(_DWORD *)(a1 + 44)) & 0xFFF) + v3 + 4095) >> 12;
  if ( v8 != 1 )
  {
    do
    {
      if ( *(_QWORD *)v5 != qword_140C69388 )
        break;
      ++v7;
      ++v6;
      v5 += 8;
    }
    while ( v7 < v8 - 1 );
  }
  if ( v6 )
  {
    *(_WORD *)(a1 + 8) -= 8 * v6;
    v19 = v1 - v5;
    *(_DWORD *)(a1 + 40) = v3 - ((_DWORD)v6 << 12);
    do
    {
      ++v7;
      *(_QWORD *)&v5[v19] = *(_QWORD *)v5;
      v5 += 8;
    }
    while ( v7 < v8 );
    v8 -= v6;
  }
  v9 = a1 + 8 * v8;
  if ( *(_QWORD *)(v9 + 40) == qword_140C69388 )
  {
    v12 = *(_DWORD *)(a1 + 40);
    v13 = v12;
    *(_WORD *)(a1 + 8) -= 8;
    v14 = v12 - 4096;
    v15 = v12 & 0xFFFFF000;
    v16 = (v13 & 0xFFF) == 0;
    v17 = 0LL;
    if ( v16 )
      v15 = v14;
    v18 = (char *)(v9 + 32);
    *(_DWORD *)(a1 + 40) = v15;
    if ( v18 != v1 )
    {
      do
      {
        if ( *(_QWORD *)v18 != qword_140C69388 )
          break;
        ++v17;
        v18 -= 8;
      }
      while ( v18 != v1 );
      if ( v17 )
      {
        *(_WORD *)(a1 + 8) -= 8 * v17;
        *(_DWORD *)(a1 + 40) += -4096 * v17;
      }
    }
    v8 += -1 - v17;
  }
  v10 = *(_WORD *)(a1 + 10) | 0x4000;
  *(_WORD *)(a1 + 10) = v10;
  if ( v8 )
  {
    while ( *(_QWORD *)v1 != qword_140C69388 )
    {
      ++v2;
      v1 += 8;
      if ( v2 >= v8 )
        return v6;
    }
    *(_WORD *)(a1 + 10) = v10 & 0xBFFF;
  }
  return v6;
}
