/*
 * XREFs of ExpGetPoolTagInfoTarget @ 0x14038BCC0
 * Callers:
 *     <none>
 * Callees:
 *     KeYieldProcessorEx @ 0x1403512B0 (KeYieldProcessorEx.c)
 *     memmove @ 0x14042CCC0 (memmove.c)
 */

__int64 __fastcall ExpGetPoolTagInfoTarget(__int64 a1, __int64 a2, volatile signed __int32 *a3, __int64 a4)
{
  signed __int32 v7; // eax
  unsigned int v8; // ebx
  _DWORD *v9; // rbp
  __int64 *v10; // r8
  __int64 v11; // r10
  __int64 v12; // r9
  __int64 v13; // rdx
  __int64 v14; // rax
  _QWORD *i; // rcx
  __int64 result; // rax
  unsigned int v17; // ebx
  int v18; // [rsp+58h] [rbp+10h] BYREF
  int j; // [rsp+68h] [rbp+20h] BYREF

  v7 = _InterlockedDecrement((volatile signed __int32 *)a4);
  v8 = ~v7 & 0x80000000;
  if ( (v7 & 0x7FFFFFFF) != 0 )
  {
    v18 = 0;
    while ( (*(_DWORD *)a4 & 0x80000000) != v8 )
      KeYieldProcessorEx(&v18);
    v9 = (_DWORD *)(a4 + 4);
  }
  else
  {
    v9 = (_DWORD *)(a4 + 4);
    *(_DWORD *)a4 = *(_DWORD *)(a4 + 4) | v8;
    memmove(*(void **)a2, ExPoolTagTables, 80LL * *(_QWORD *)(a2 + 8));
    v10 = (__int64 *)&unk_140C2D388;
    v11 = 2047LL;
    v12 = *(_QWORD *)a2 + 80LL * *(_QWORD *)(a2 + 8);
    do
    {
      v13 = *v10;
      if ( *v10 )
      {
        for ( i = *(_QWORD **)a2; i != (_QWORD *)v12; i += 10 )
        {
          if ( *(_DWORD *)v13 )
          {
            i[2] += *(_QWORD *)(v13 + 16);
            i[3] += *(_QWORD *)(v13 + 24);
            i[1] += *(_QWORD *)(v13 + 8);
            i[5] += *(_QWORD *)(v13 + 40);
            i[6] += *(_QWORD *)(v13 + 48);
            i[4] += *(_QWORD *)(v13 + 32);
          }
          v13 += 80LL;
        }
      }
      ++v10;
      --v11;
    }
    while ( v11 );
    v14 = *(_QWORD *)(a2 + 24);
    if ( v14 )
      memmove(*(void **)(a2 + 16), (const void *)PoolTrackTableExpansion, 80 * v14);
  }
  result = (unsigned int)_InterlockedDecrement((volatile signed __int32 *)a4);
  v17 = ~(_DWORD)result & 0x80000000;
  if ( (result & 0x7FFFFFFF) != 0 )
  {
    for ( j = 0; ; KeYieldProcessorEx(&j) )
    {
      result = *(_DWORD *)a4 & 0x80000000;
      if ( (_DWORD)result == v17 )
        break;
    }
  }
  else
  {
    *(_DWORD *)a4 = *v9 | v17;
  }
  _InterlockedDecrement(a3);
  return result;
}
