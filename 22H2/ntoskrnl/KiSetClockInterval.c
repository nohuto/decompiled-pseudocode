/*
 * XREFs of KiSetClockInterval @ 0x1402F045C
 * Callers:
 *     ExpUpdateTimerConfigurationWorker @ 0x1402F02B0 (ExpUpdateTimerConfigurationWorker.c)
 *     KiSetVirtualHeteroClockIntervalRequest @ 0x1405208D4 (KiSetVirtualHeteroClockIntervalRequest.c)
 * Callees:
 *     RtlRbInsertNodeEx @ 0x1402C0B10 (RtlRbInsertNodeEx.c)
 *     RtlRbRemoveNode @ 0x1402C1170 (RtlRbRemoveNode.c)
 *     PoTraceSystemTimerResolutionKernel @ 0x1402F0908 (PoTraceSystemTimerResolutionKernel.c)
 *     KiSetClockIntervalToMinimumRequested @ 0x1402F0984 (KiSetClockIntervalToMinimumRequested.c)
 */

__int64 __fastcall KiSetClockInterval(unsigned int a1, char a2, unsigned __int64 a3)
{
  __int64 v6; // rdx
  bool v7; // r8
  __int64 v8; // rax
  unsigned int v9; // esi
  __int64 v10; // r8
  __int64 v11; // rdx

  if ( *(_BYTE *)(a3 + 24) )
    RtlRbRemoveNode((unsigned __int64 *)&KiClockIntervalRequests, a3);
  *(_DWORD *)(a3 + 28) = a1;
  v6 = KiClockIntervalRequests;
  if ( (qword_140CEC388 & 1) != 0 && KiClockIntervalRequests )
    v6 = (unsigned __int64)&KiClockIntervalRequests ^ KiClockIntervalRequests;
  v7 = 0;
  if ( v6 )
  {
    while ( 1 )
    {
      if ( a1 < *(_DWORD *)(v6 + 28) )
      {
        v8 = *(_QWORD *)v6;
        if ( (qword_140CEC388 & 1) != 0 )
        {
          if ( !v8 )
            break;
          v8 ^= v6;
        }
        if ( !v8 )
          break;
      }
      else
      {
        v8 = *(_QWORD *)(v6 + 8);
        if ( (qword_140CEC388 & 1) != 0 )
        {
          if ( !v8 )
            goto LABEL_18;
          v8 ^= v6;
        }
        if ( !v8 )
        {
LABEL_18:
          v7 = 1;
          break;
        }
      }
      v6 = v8;
    }
  }
  RtlRbInsertNodeEx((unsigned __int64 *)&KiClockIntervalRequests, v6, v7, a3);
  *(_BYTE *)(a3 + 24) = 1;
  v9 = KiSetClockIntervalToMinimumRequested();
  if ( a2 )
    KePseudoHrTimeIncrement = a1;
  v11 = *(unsigned int *)(a3 + 32);
  if ( (_DWORD)v11 )
  {
    LOBYTE(v10) = 1;
    PoTraceSystemTimerResolutionKernel(a1, v11, v10);
  }
  return v9;
}
