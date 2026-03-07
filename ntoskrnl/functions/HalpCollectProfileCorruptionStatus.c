__int64 __fastcall HalpCollectProfileCorruptionStatus(unsigned int **a1, __int64 a2, unsigned int *a3)
{
  unsigned int v4; // r10d
  unsigned int *v7; // r8
  __int64 v8; // rdx
  unsigned int v9; // ecx
  unsigned int v10; // eax
  __int64 v11; // rsi
  _DWORD *v12; // rdi
  unsigned int **v13; // rbx
  __int64 v14; // rbp
  __int64 v15; // rax
  __int64 v16; // rcx
  __int64 v17; // rdx
  bool v18; // al
  char v19; // cl

  v4 = a2;
  if ( (unsigned int)a2 < 8 )
  {
    *a3 = 8;
    return 3221225476LL;
  }
  v7 = *a1;
  if ( *a1 == (unsigned int *)&HalpSampleProfilingCounters )
    return HalpCollectSamplingProfileCorruptionStatus(a1, a2, a3);
  v8 = v7[5];
  v9 = v7[4];
  v10 = 16 * v7[5] + 24;
  *a3 = v10;
  if ( v4 < v10 )
    return 3221225476LL;
  *((_DWORD *)a1 + 4) = v8;
  *((_DWORD *)a1 + 2) = v9;
  if ( HalpProfileInterface == &DefaultProfileInterface )
    v11 = HalpCounterStatus;
  else
    v11 = HalpCounterStatus + 8LL * HalpNumberOfCounters * v9;
  if ( (_DWORD)v8 )
  {
    v12 = v7 + 10;
    v13 = a1 + 4;
    v14 = v8;
    do
    {
      v15 = (unsigned int)v12[3];
      if ( (_DWORD)v15 == -1 )
      {
        *((_WORD *)v13 + 2) = 256;
        *(_DWORD *)v13 = *v12;
        *((LARGE_INTEGER *)v13 - 1) = KeQueryPerformanceCounter(0LL);
      }
      else
      {
        v16 = *(_QWORD *)(v11 + 8 * v15);
        v17 = (unsigned int)v12[3];
        v18 = *(_DWORD *)(v16 + 24) == 1 && *(_DWORD *)(v16 + 32) == *v12;
        *((_BYTE *)v13 + 5) = v18;
        if ( v18 )
        {
          *(_DWORD *)v13 = *(_DWORD *)(*(_QWORD *)(v11 + 8 * v17) + 32LL);
          v19 = *(_BYTE *)(*(_QWORD *)(v11 + 8 * v17) + 36LL);
          *((_BYTE *)v13 + 4) = v19;
          if ( v19 )
            *(v13 - 1) = *(unsigned int **)(*(_QWORD *)(v11 + 8 * v17) + 8LL);
          else
            *(v13 - 1) = 0LL;
        }
      }
      v13 += 2;
      v12 += 10;
      --v14;
    }
    while ( v14 );
  }
  return 0LL;
}
