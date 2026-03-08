/*
 * XREFs of KeGetHeteroSetByPolicy @ 0x14038E4F8
 * Callers:
 *     PpmEventTraceHeteroSets @ 0x140826F54 (PpmEventTraceHeteroSets.c)
 * Callees:
 *     memset @ 0x14042CFC0 (memset.c)
 */

__int64 __fastcall KeGetHeteroSetByPolicy(__int64 a1, unsigned int a2, int a3, void *a4, void *a5, void *a6)
{
  size_t v8; // rbx
  __int64 result; // rax
  int v11; // r9d
  unsigned int i; // r10d
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rax

  v8 = (unsigned int)(8 * a3);
  memset(a4, 0, v8);
  memset(a5, 0, (unsigned int)v8);
  memset(a6, 0, (unsigned int)v8);
  result = *(unsigned __int8 *)(a1 + 185);
  v11 = 1;
  if ( a2 >= (unsigned int)result )
    a2 = *(unsigned __int8 *)(a1 + 185);
  do
  {
    for ( i = 0; i < a2; *((_QWORD *)a6 + v14) = result )
    {
      v13 = *(_QWORD *)(a1 + 192);
      v14 = v11 + 4 * i - 1;
      v15 = i + v11 * *(unsigned __int8 *)(a1 + 185);
      ++i;
      *((_QWORD *)a4 + v14) = *(_QWORD *)(v13 + 24 * v15 + 16);
      *((_QWORD *)a5 + v14) = *(_QWORD *)(v13 + 24 * v15);
      result = *(_QWORD *)(v13 + 24 * v15 + 8);
    }
    ++v11;
  }
  while ( v11 < 5 );
  return result;
}
