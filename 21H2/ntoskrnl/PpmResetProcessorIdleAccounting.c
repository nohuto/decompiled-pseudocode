/*
 * XREFs of PpmResetProcessorIdleAccounting @ 0x1403C4C04
 * Callers:
 *     PoIdle @ 0x1402C67D0 (PoIdle.c)
 *     PpmResetIdlePolicy @ 0x1403C4BC8 (PpmResetIdlePolicy.c)
 * Callees:
 *     memset @ 0x140414300 (memset.c)
 */

__int64 __fastcall PpmResetProcessorIdleAccounting(unsigned int *a1, __int64 a2)
{
  unsigned int v2; // edi
  unsigned int v3; // r13d
  char *v6; // rbp
  __int64 v7; // rsi
  __int64 v8; // r14
  _QWORD *v9; // rax
  _QWORD *v10; // rcx
  __int64 v11; // rdx
  __int64 result; // rax

  v2 = *a1;
  v3 = a1[2];
  *(_OWORD *)a1 = 0LL;
  *((_OWORD *)a1 + 1) = 0LL;
  *((_QWORD *)a1 + 4) = 0LL;
  if ( v2 )
  {
    v6 = (char *)(a1 + 52);
    v7 = v2;
    v8 = v2;
    do
    {
      *(_OWORD *)a1 = 0LL;
      *((_OWORD *)a1 + 1) = 0LL;
      *((_QWORD *)a1 + 4) = 0LL;
      memset(v6, 0, 0x340uLL);
      v6 += 1000;
      --v8;
    }
    while ( v8 );
    v9 = a1 + 54;
    do
    {
      *(v9 - 19) = -1LL;
      v10 = v9;
      v11 = 26LL;
      do
      {
        *v10 = -1LL;
        v10 += 4;
        --v11;
      }
      while ( v11 );
      v9 += 125;
      --v7;
    }
    while ( v7 );
  }
  a1[8] = 0;
  result = v3 + 1;
  *a1 = v2;
  a1[2] = result;
  *((_QWORD *)a1 + 2) = a2;
  return result;
}
