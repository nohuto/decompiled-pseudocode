/*
 * XREFs of EtwpLogSystemEventUnsafe @ 0x1403A993C
 * Callers:
 *     NtTraceEvent @ 0x14025C4C0 (NtTraceEvent.c)
 *     EtwpTraceThreadRundown @ 0x1403A9640 (EtwpTraceThreadRundown.c)
 *     EtwpLogRegistryEvent @ 0x140936F54 (EtwpLogRegistryEvent.c)
 *     EtwpSetMark @ 0x14093742C (EtwpSetMark.c)
 * Callees:
 *     EtwpOpenLogger @ 0x14025D3F8 (EtwpOpenLogger.c)
 *     EtwpReleaseTraceBuffer @ 0x14025D4A0 (EtwpReleaseTraceBuffer.c)
 *     EtwpReserveTraceBuffer @ 0x1402D0E80 (EtwpReserveTraceBuffer.c)
 *     EtwpUpdateEventsLostCount @ 0x14036C6C8 (EtwpUpdateEventsLostCount.c)
 *     EtwpCloseLogger @ 0x1403799A8 (EtwpCloseLogger.c)
 *     EtwpCopyEventData @ 0x1403AA1F8 (EtwpCopyEventData.c)
 *     memset @ 0x140413800 (memset.c)
 *     EtwpStackTraceDispatcher @ 0x1405A6E40 (EtwpStackTraceDispatcher.c)
 *     EtwpSendTraceEvent @ 0x1405AAAA8 (EtwpSendTraceEvent.c)
 *     EtwpInvokeEventCallback @ 0x1405AB5B8 (EtwpInvokeEventCallback.c)
 *     EtwpTraceLastBranchRecord @ 0x1405B01F4 (EtwpTraceLastBranchRecord.c)
 *     EtwpTraceProcessorTrace @ 0x1405B03F8 (EtwpTraceProcessorTrace.c)
 */

unsigned int *EtwpLogSystemEventUnsafe(
        __int64 a1,
        __int64 a2,
        _DWORD *a3,
        unsigned int a4,
        unsigned int a5,
        __int16 a6,
        unsigned int a7,
        char a8,
        ...)
{
  unsigned int v10; // ebx
  unsigned int *result; // rax
  __int64 v12; // rdi
  unsigned int v13; // esi
  _DWORD *v14; // rcx
  __int64 v15; // rdx
  unsigned __int64 v16; // r9
  int v17; // edx
  void *v18; // r13
  __int64 v19; // r8
  __int64 v20; // r9
  unsigned int *v21; // r15
  unsigned int v22; // edx
  __int16 v23; // si
  unsigned int v24; // edx
  __int64 v25; // rcx
  __int64 v26; // rcx
  char v27[4]; // [rsp+30h] [rbp-88h] BYREF
  unsigned int v28; // [rsp+34h] [rbp-84h]
  LARGE_INTEGER v29; // [rsp+38h] [rbp-80h] BYREF
  int v30; // [rsp+40h] [rbp-78h]
  unsigned int *v31; // [rsp+48h] [rbp-70h]
  unsigned __int64 v32; // [rsp+50h] [rbp-68h]
  unsigned int *v33; // [rsp+58h] [rbp-60h]
  __int128 v34; // [rsp+68h] [rbp-50h] BYREF
  __int64 v35; // [rsp+78h] [rbp-40h]

  v34 = 0LL;
  v35 = 0LL;
  v10 = 0;
  v27[0] = 0;
  v29.QuadPart = 0LL;
  result = (unsigned int *)EtwpOpenLogger(a4, a1, 1, v27);
  v31 = result;
  v12 = (__int64)result;
  v33 = result;
  if ( result )
  {
    v13 = 0;
    v28 = 0;
    if ( a5 )
    {
      v14 = (_DWORD *)(a2 + 8);
      v15 = a5;
      do
      {
        v13 += *v14;
        v14 += 4;
        --v15;
      }
      while ( v15 );
      v28 = v13;
    }
    v16 = EtwpReserveTraceBuffer(result, v13 + 32, (__int64)&v34, &v29, a7);
    if ( v16 )
    {
      v17 = -1073676288;
      if ( (a7 & 0xC0000000) != 0x80000000 )
        v17 = -1073610752;
      *(_DWORD *)v16 = (unsigned __int8)a7 | v17;
      *(LARGE_INTEGER *)(v16 + 16) = v29;
      *(_WORD *)(v16 + 4) = v13 + 32;
      *(_WORD *)(v16 + 6) = a6;
      *(_DWORD *)(v16 + 8) = a3[288];
      *(_DWORD *)(v16 + 12) = a3[286];
      *(_DWORD *)(v16 + 24) = a3[163];
      *(_DWORD *)(v16 + 28) = a3[183];
      v18 = (void *)(v16 + 32);
      v32 = v16 + 32;
      if ( v16 != -32LL )
      {
        v30 = EtwpCopyEventData(v18);
        v21 = v31;
        if ( v30 )
        {
          memset(v18, 0, v13);
          EtwpUpdateEventsLostCount(v12);
        }
        if ( (*(_DWORD *)(v12 + 12) & 0x80000) != 0
          && (!(_BYTE)KdDebuggerNotPresent && !KdPitchDebugger || KdEventLoggingPresent) )
        {
          EtwpSendTraceEvent(v12, &v34, v19);
        }
        if ( *(_QWORD *)(v12 + 1272) )
        {
          LOBYTE(v20) = a8;
          EtwpInvokeEventCallback(v12, &v34, 0LL, v20);
        }
        EtwpReleaseTraceBuffer((signed __int64 *)&v34);
        v22 = *(_DWORD *)(v12 + 832);
        if ( (v22 & 0x80u) != 0 )
        {
          v23 = a6;
          if ( _bittest(*(const signed __int32 **)(v12 + 984), a6 & 0x1FFF) )
          {
            EtwpStackTraceDispatcher(v12, &v29, a3, a7);
            v22 = v21[208];
          }
        }
        else
        {
          v23 = a6;
        }
        if ( (v22 & 0x8000) != 0 )
        {
          v24 = 0;
          if ( *(_DWORD *)(*(_QWORD *)(v12 + 1008) + 8LL) )
          {
            while ( 1 )
            {
              v25 = *(_QWORD *)(v12 + 1008);
              if ( *(_WORD *)(v25 + 2LL * v24 + 12) == v23 )
                break;
              if ( ++v24 >= *(_DWORD *)(v25 + 8) )
                goto LABEL_18;
            }
            EtwpTraceLastBranchRecord(v12, &v29, a3, a7);
          }
        }
LABEL_18:
        if ( (*(_DWORD *)(v12 + 832) & 0x4000000) != 0 && *(_DWORD *)(*(_QWORD *)(v12 + 1016) + 24LL) )
        {
          while ( 1 )
          {
            v26 = *(_QWORD *)(v12 + 1016);
            if ( *(_WORD *)(v26 + 2LL * v10 + 28) == v23 )
              break;
            if ( ++v10 >= *(_DWORD *)(v26 + 24) )
              return (unsigned int *)EtwpCloseLogger(a4, a1, v27[0]);
          }
          EtwpTraceProcessorTrace(v12, &v29, a3, a7);
        }
      }
    }
    return (unsigned int *)EtwpCloseLogger(a4, a1, v27[0]);
  }
  return result;
}
