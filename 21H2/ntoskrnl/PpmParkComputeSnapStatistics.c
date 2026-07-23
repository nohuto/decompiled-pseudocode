/*
 * XREFs of PpmParkComputeSnapStatistics @ 0x1402069B0
 * Callers:
 *     PpmParkRecordNodeStatistics @ 0x140206840 (PpmParkRecordNodeStatistics.c)
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
  unsigned __int64 v7; // r11
  __int64 v8; // rsi
  __int64 v9; // rbp
  int v10; // r8d
  unsigned __int64 v11; // rbx
  int i; // edi
  __int64 v13; // rax
  int v14; // edx
  unsigned __int64 j; // rcx
  int k; // ecx
  int v17; // r8d
  unsigned __int64 v18; // rdx
  __int64 v19; // rcx

  v7 = *(_QWORD *)(a4 + 24) - *(_QWORD *)(a4 + 32);
  v8 = a3;
  v9 = a2;
  if ( a1 )
    v7 /= (unsigned int)(a1 + 1);
  if ( !v7 )
    return 0;
  v10 = *(_DWORD *)(a4 + 40);
  v11 = 0LL;
  for ( i = 0; i < v10; v10 = *(_DWORD *)(a4 + 40) )
  {
    v13 = i++;
    *(_QWORD *)(8 * v13 + *(_QWORD *)(a4 + 16)) = *(_QWORD *)(*(_QWORD *)a4 + 8 * v13)
                                                - *(_QWORD *)(*(_QWORD *)(a4 + 8) + 8 * v13);
  }
  v14 = v10 - 1;
  for ( j = 0LL; v14 >= 0; --v14 )
  {
    j += *(_QWORD *)(*(_QWORD *)(a4 + 16) + 8LL * v14);
    if ( j >= v7 - v7 * v8 / 0x64 )
      break;
  }
  *a7 = v14;
  if ( __PAIR128__((unsigned __int64)a6, (unsigned __int64)a5) != 0 )
  {
    for ( k = *(_DWORD *)(a4 + 40) - 1; k >= 0; --k )
    {
      v11 += *(_QWORD *)(*(_QWORD *)(a4 + 16) + 8LL * k);
      if ( v11 >= v7 - v7 * v9 / 0x64 )
        break;
    }
    if ( a5 )
      *a5 = k;
    if ( a6 )
    {
      if ( k > 0 )
        *a6 = 100LL * *(_QWORD *)(*(_QWORD *)(a4 + 16) + 8LL * k) / v7;
      else
        *a6 = 0;
    }
  }
  *(_QWORD *)(a4 + 32) += v7;
  v17 = *(_DWORD *)(a4 + 40) - 1;
  if ( v17 >= 0 )
  {
    while ( 1 )
    {
      v18 = *(_QWORD *)(*(_QWORD *)(a4 + 16) + 8LL * v17);
      v19 = *(_QWORD *)(a4 + 8);
      if ( v18 > v7 )
        break;
      *(_QWORD *)(v19 + 8LL * v17) += v18;
      v7 -= v18;
      if ( --v17 < 0 )
        return 1;
    }
    *(_QWORD *)(v19 + 8LL * v17) += v7;
  }
  return 1;
}
