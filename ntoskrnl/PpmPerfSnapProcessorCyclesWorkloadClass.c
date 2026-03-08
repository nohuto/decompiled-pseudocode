/*
 * XREFs of PpmPerfSnapProcessorCyclesWorkloadClass @ 0x140235748
 * Callers:
 *     PpmPerfSnapDeliveredPerformance @ 0x140234BB0 (PpmPerfSnapDeliveredPerformance.c)
 * Callees:
 *     <none>
 */

_UNKNOWN **__fastcall PpmPerfSnapProcessorCyclesWorkloadClass(__int64 a1, __int64 a2, __int64 a3)
{
  _UNKNOWN **result; // rax
  unsigned int v6; // r10d
  __int64 v7; // r9
  _QWORD *v8; // r8
  __int64 v9; // r11
  __int64 v10; // rdi
  __int64 v11; // rsi
  unsigned int i; // edx
  unsigned int j; // r9d
  __int64 v14; // rcx
  __int64 v15; // rcx
  _UNKNOWN *retaddr; // [rsp+20h] [rbp+0h] BYREF

  result = &retaddr;
  if ( PpmHeteroHgsParkingEnabled )
  {
    v6 = 0;
    v7 = *(_QWORD *)(a1 + 34136);
    if ( PpmHeteroWorkloadClasses )
    {
      v8 = (_QWORD *)(v7 + 8);
      v9 = *(_QWORD *)(a1 + 34144) - v7;
      do
      {
        v10 = 0LL;
        v11 = 0LL;
        for ( i = 0; i < 7; ++i )
        {
          for ( j = 0; j < 2; ++j )
          {
            v14 = v6 + *(_DWORD *)(a2 + 48) * (2 * i + j);
            result = *(_UNKNOWN ***)(a3 + 8 * v14 + 56);
            v15 = *(_QWORD *)(a2 + 8 * v14 + 56);
            if ( (unsigned int)(KiDynamicHeteroCpuPolicy[2 * i + j] - 3) <= 1 )
              v10 += v15 - (_QWORD)result;
            else
              v11 += v15 - (_QWORD)result;
          }
        }
        *(_QWORD *)((char *)v8 + v9) = v11;
        ++v6;
        *v8++ = v10;
      }
      while ( v6 < PpmHeteroWorkloadClasses );
    }
  }
  return result;
}
