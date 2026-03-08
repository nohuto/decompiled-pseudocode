/*
 * XREFs of PpmParkComputeSnapStatistics @ 0x1402D3C1C
 * Callers:
 *     PpmParkRecordNodeStatistics @ 0x1402D3A10 (PpmParkRecordNodeStatistics.c)
 * Callees:
 *     <none>
 */

char __fastcall PpmParkComputeSnapStatistics(
        int a1,
        unsigned __int8 a2,
        unsigned __int8 a3,
        __int64 a4,
        _BYTE *a5,
        _BYTE *a6,
        _BYTE *a7)
{
  unsigned __int64 v8; // rbx
  __int64 v9; // rsi
  __int64 v10; // rbp
  int v11; // r8d
  int v12; // edi
  char i; // r10
  __int64 v14; // r9
  int v15; // edx
  unsigned __int64 j; // rcx
  unsigned __int64 v17; // rdx
  int k; // ecx
  unsigned __int64 v19; // rcx
  int v20; // edx
  unsigned __int64 v21; // r8
  __int64 v22; // rax

  v8 = *(_QWORD *)(a4 + 24) - *(_QWORD *)(a4 + 32);
  v9 = a3;
  v10 = a2;
  if ( a1 )
    v8 /= (unsigned int)(a1 + 1);
  if ( !v8 )
    return 0;
  v11 = *(_DWORD *)(a4 + 48);
  v12 = 0;
  for ( i = 1; v12 < v11; v11 = *(_DWORD *)(a4 + 48) )
  {
    v14 = v12++;
    *(_QWORD *)(*(_QWORD *)(a4 + 16) + 8 * v14) = *(_QWORD *)(*(_QWORD *)a4 + 8 * v14)
                                                - *(_QWORD *)(*(_QWORD *)(a4 + 8) + 8 * v14);
  }
  v15 = v11 - 1;
  for ( j = 0LL; v15 >= 0; --v15 )
  {
    j += *(_QWORD *)(*(_QWORD *)(a4 + 16) + 8LL * v15);
    if ( j >= v8 - v8 * v9 / 0x64 )
      break;
  }
  *a7 = v15;
  v17 = 0LL;
  for ( k = *(_DWORD *)(a4 + 48) - 1; k >= 0; --k )
  {
    v17 += *(_QWORD *)(*(_QWORD *)(a4 + 16) + 8LL * k);
    if ( v17 >= v8 - v8 * v10 / 0x64 )
      break;
  }
  *a5 = k;
  if ( k <= 0 )
    LOBYTE(v19) = 0;
  else
    v19 = 100LL * *(_QWORD *)(*(_QWORD *)(a4 + 16) + 8LL * k) / v8;
  *a6 = v19;
  *(_QWORD *)(a4 + 32) += v8;
  v20 = *(_DWORD *)(a4 + 48);
  *(_QWORD *)(a4 + 40) = v8;
  while ( --v20 >= 0 )
  {
    v21 = *(_QWORD *)(*(_QWORD *)(a4 + 16) + 8LL * v20);
    v22 = *(_QWORD *)(a4 + 8);
    if ( v21 > v8 )
    {
      *(_QWORD *)(v22 + 8LL * v20) += v8;
      return i;
    }
    *(_QWORD *)(v22 + 8LL * v20) += v21;
    v8 -= v21;
  }
  return i;
}
