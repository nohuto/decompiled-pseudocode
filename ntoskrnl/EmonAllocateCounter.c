__int64 __fastcall EmonAllocateCounter(int a1, __int64 a2, int a3, int *a4)
{
  __int64 v8; // rdx
  unsigned int Number; // eax
  __int64 v10; // rbx
  int v11; // r8d
  int v12; // edi
  unsigned __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // r8

  if ( (int)HalpAllocateHalCounters() < 0 )
    return 2147483665LL;
  Number = KeGetPcr()->Prcb.Number;
  if ( HalpProfileInterface == &DefaultProfileInterface )
    v10 = HalpCounterStatus;
  else
    v10 = HalpCounterStatus + 8LL * HalpNumberOfCounters * Number;
  if ( !a2 || !*(_BYTE *)(v8 + 316) )
  {
    v12 = EmonNumberArchCounters - 1;
    v15 = EmonNumberArchCounters - 1;
    if ( EmonNumberArchCounters - 1 >= 0 )
    {
      while ( *(_DWORD *)(*(_QWORD *)(v10 + 8 * v15) + 24LL) != 3 || (__readmsr(v12 + 390) & 0x4000FF) != 0 )
      {
        --v12;
        if ( --v15 < 0 )
          goto LABEL_15;
      }
      goto LABEL_9;
    }
    goto LABEL_15;
  }
  v11 = *(unsigned __int8 *)(v8 + 308);
  v12 = v11 + EmonNumberArchCounters;
  if ( *(_DWORD *)(*(_QWORD *)(v10 + 8LL * (v11 + EmonNumberArchCounters)) + 24LL) != 3
    || (v13 = __readmsr(0x38Fu), _bittest64((const __int64 *)&v13, (unsigned __int8)(v11 + 32))) )
  {
LABEL_15:
    _InterlockedExchangeAdd((volatile signed __int32 *)&KeGetCurrentPrcb()->HalReserved[2], 0xFFFFFFFE);
    return 2147483665LL;
  }
LABEL_9:
  *(_DWORD *)(*(_QWORD *)(v10 + 8LL * v12) + 24LL) = a1;
  *(_BYTE *)(*(_QWORD *)(v10 + 8LL * v12) + 36LL) = 0;
  *(LARGE_INTEGER *)(*(_QWORD *)(v10 + 8LL * v12) + 8LL) = KeQueryPerformanceCounter(0LL);
  v14 = *(_QWORD *)(v10 + 8LL * v12);
  if ( a1 == 2 )
  {
    *(_DWORD *)(v14 + 32) = 24;
    **(_QWORD **)(v10 + 8LL * v12) = 0LL;
    **(_DWORD **)(*(_QWORD *)(v10 + 8LL * v12) + 16LL) = 0;
  }
  else
  {
    *(_DWORD *)(v14 + 32) = a3;
    **(_QWORD **)(v10 + 8LL * v12) = *(unsigned int *)(a2 + 24);
    **(_DWORD **)(*(_QWORD *)(v10 + 8LL * v12) + 16LL) = *(_DWORD *)(a2 + 304);
  }
  *a4 = v12;
  return 0LL;
}
