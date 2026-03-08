/*
 * XREFs of KiCopyCountersWorker @ 0x140972238
 * Callers:
 *     KiCopyCounters @ 0x140571D30 (KiCopyCounters.c)
 * Callees:
 *     KeGetCurrentProcessorNumberEx @ 0x1402C1200 (KeGetCurrentProcessorNumberEx.c)
 */

__int64 __fastcall KiCopyCountersWorker(__int64 a1, __int64 a2)
{
  __int64 v4; // rbx
  unsigned int v5; // r9d
  __int64 v6; // r11
  __int64 v7; // r10
  __int64 v8; // r8

  v4 = *(_QWORD *)(a2 + 8);
  KeGetCurrentProcessorNumberEx((PPROCESSOR_NUMBER)(v4 + 4));
  *(_QWORD *)(v4 + 56) = *(_QWORD *)(a1 + 72) - *(_QWORD *)(a2 + 24);
  *(_QWORD *)(v4 + 48) = KeGetCurrentPrcb()->StartCycles;
  v5 = 0;
  if ( (*(_DWORD *)(a2 + 16) & 1) != 0 )
  {
    *(_DWORD *)(v4 + 8) = *(_DWORD *)(a2 + 20);
    if ( *(_QWORD *)a2 )
      *(_QWORD *)(v4 + 24) |= _InterlockedExchange64((volatile __int64 *)a2, 0LL);
  }
  v6 = *(_QWORD *)(a2 + 32);
  if ( v6 )
  {
    v7 = 1LL;
    while ( v5 < KiHwCountersCount )
    {
      if ( (v6 & v7) != 0 )
      {
        v8 = 3LL * v5;
        *(_DWORD *)(v4 + 8 * v8 + 68) = KiHwCounters[v5];
        *(_QWORD *)(v4 + 24LL * v5 + 72) = *(_QWORD *)(a2 + 24LL * v5 + 48);
        *(_QWORD *)(v4 + 8 * v8 + 80) = *(_QWORD *)(a2 + 24LL * v5 + 56);
      }
      v7 *= 2LL;
      ++v5;
    }
    *(_DWORD *)(v4 + 12) = KiHwCountersCount;
  }
  ++*(_QWORD *)(v4 + 16);
  return 0LL;
}
