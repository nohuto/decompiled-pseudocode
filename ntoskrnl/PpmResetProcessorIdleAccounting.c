/*
 * XREFs of PpmResetProcessorIdleAccounting @ 0x14039B074
 * Callers:
 *     PoIdle @ 0x14022D240 (PoIdle.c)
 *     PpmResetIdlePolicy @ 0x14039AFC8 (PpmResetIdlePolicy.c)
 * Callees:
 *     memset @ 0x14042CFC0 (memset.c)
 */

__int64 __fastcall PpmResetProcessorIdleAccounting(unsigned int *a1, __int64 a2)
{
  unsigned int v2; // esi
  unsigned int v3; // r13d
  __int64 v6; // rdi
  char *v7; // rbp
  __int64 v8; // r14
  unsigned int *v9; // rax
  unsigned int *v10; // rcx
  __int64 v11; // rdx
  __int64 result; // rax

  v2 = *a1;
  v3 = a1[2];
  v6 = *a1;
  *(_OWORD *)a1 = 0LL;
  *((_OWORD *)a1 + 1) = 0LL;
  *((_QWORD *)a1 + 4) = 0LL;
  if ( v2 )
  {
    v7 = (char *)(a1 + 54);
    v8 = v2;
    do
    {
      *(_OWORD *)a1 = 0LL;
      *((_OWORD *)a1 + 1) = 0LL;
      *((_QWORD *)a1 + 4) = 0LL;
      memset(v7, 0, 0x340uLL);
      v7 += 1008;
      --v8;
    }
    while ( v8 );
    v9 = a1 + 56;
    do
    {
      *((_QWORD *)v9 - 20) = -1LL;
      v10 = v9;
      v11 = 26LL;
      do
      {
        *(_QWORD *)v10 = -1LL;
        v10 += 8;
        --v11;
      }
      while ( v11 );
      v9 += 252;
      --v6;
    }
    while ( v6 );
  }
  a1[8] = 0;
  result = v3 + 1;
  *a1 = v2;
  a1[2] = result;
  *((_QWORD *)a1 + 2) = a2;
  return result;
}
