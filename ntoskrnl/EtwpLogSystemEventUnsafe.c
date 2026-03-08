/*
 * XREFs of EtwpLogSystemEventUnsafe @ 0x14036F9F8
 * Callers:
 *     NtTraceEvent @ 0x140230D30 (NtTraceEvent.c)
 *     EtwpTraceThreadRundown @ 0x14036FE60 (EtwpTraceThreadRundown.c)
 *     EtwpLogRegistryEvent @ 0x1408A24EC (EtwpLogRegistryEvent.c)
 *     EtwpSetMark @ 0x1409E3AC0 (EtwpSetMark.c)
 * Callees:
 *     EtwpOpenLogger @ 0x140205B30 (EtwpOpenLogger.c)
 *     EtwpReleaseTraceBuffer @ 0x140205BD8 (EtwpReleaseTraceBuffer.c)
 *     EtwEventEnabled @ 0x140231870 (EtwEventEnabled.c)
 *     EtwpUpdateEventsLostCount @ 0x1402FAD84 (EtwpUpdateEventsLostCount.c)
 *     EtwpGetReserveTraceBufferStatus @ 0x1402FF40C (EtwpGetReserveTraceBufferStatus.c)
 *     EtwpReserveTraceBuffer @ 0x1403151E0 (EtwpReserveTraceBuffer.c)
 *     EtwpCopyEventData @ 0x14036FDD8 (EtwpCopyEventData.c)
 *     EtwpSendTraceEvent @ 0x14039D2E8 (EtwpSendTraceEvent.c)
 *     EtwpCloseLogger @ 0x1403BC590 (EtwpCloseLogger.c)
 *     EtwpTraceLostSystemEventOld @ 0x14040C628 (EtwpTraceLostSystemEventOld.c)
 *     Feature_Servicing_PropagateFlagsThroughLostSystemEvent__private_IsEnabledDeviceUsage @ 0x14040C8BC (Feature_Servicing_PropagateFlagsThroughLostSystemEvent__private_IsEnabledDeviceUsage.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     EtwpStackTraceDispatcher @ 0x140460750 (EtwpStackTraceDispatcher.c)
 *     EtwpTraceLastBranchRecord @ 0x140461546 (EtwpTraceLastBranchRecord.c)
 *     EtwpTraceLostSystemEvent @ 0x1405FA2E0 (EtwpTraceLostSystemEvent.c)
 *     EtwpInvokeEventCallback @ 0x1405FEBA4 (EtwpInvokeEventCallback.c)
 *     EtwpTraceProcessorTrace @ 0x140600834 (EtwpTraceProcessorTrace.c)
 */

__int64 __fastcall EtwpLogSystemEventUnsafe(
        __int64 a1,
        __int64 a2,
        _DWORD *a3,
        unsigned int a4,
        unsigned int a5,
        unsigned __int16 a6,
        unsigned int a7,
        char a8)
{
  unsigned int v10; // ebx
  __int64 result; // rax
  __int64 v12; // rdi
  unsigned int v13; // esi
  _DWORD *v14; // rax
  __int64 v15; // rcx
  __int64 v16; // r9
  int v17; // edx
  unsigned __int16 v18; // r14
  __int64 v19; // r8
  __int64 v20; // r9
  unsigned int v21; // r15d
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // r9
  __int64 v26; // r8
  unsigned int v27; // edx
  __int64 v28; // rcx
  __int64 v29; // rcx
  unsigned int ReserveTraceBufferStatus; // esi
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // r8
  __int64 v34; // r9
  _BYTE v35[4]; // [rsp+30h] [rbp-78h] BYREF
  unsigned int v36; // [rsp+34h] [rbp-74h]
  unsigned int v37; // [rsp+38h] [rbp-70h]
  __int64 v38[2]; // [rsp+40h] [rbp-68h] BYREF
  void *v39; // [rsp+50h] [rbp-58h]
  __int128 v40; // [rsp+58h] [rbp-50h] BYREF
  __int64 v41; // [rsp+68h] [rbp-40h]

  v40 = 0LL;
  v41 = 0LL;
  v10 = 0;
  v35[0] = 0;
  v38[0] = 0LL;
  result = EtwpOpenLogger(a4, a1, 1, v35);
  v12 = result;
  v38[1] = result;
  if ( result )
  {
    v13 = 0;
    v36 = 0;
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
      v36 = v13;
    }
    v16 = EtwpReserveTraceBuffer(v12, v13 + 32, (__int64)&v40, v38, a7);
    if ( v16 )
    {
      v17 = -1073676288;
      if ( (a7 & 0xC0000000) != 0x80000000 )
        v17 = -1073610752;
      *(_DWORD *)v16 = (unsigned __int8)a7 | v17;
      *(_QWORD *)(v16 + 16) = v38[0];
      *(_WORD *)(v16 + 4) = v13 + 32;
      v18 = a6;
      *(_WORD *)(v16 + 6) = a6;
      *(_DWORD *)(v16 + 8) = a3[308];
      *(_DWORD *)(v16 + 12) = a3[306];
      *(_DWORD *)(v16 + 24) = a3[163];
      *(_DWORD *)(v16 + 28) = a3[183];
      v39 = (void *)(v16 + 32);
      if ( v16 != -32 )
      {
        v21 = EtwpCopyEventData((void *)(v16 + 32));
        v37 = v21;
        if ( v21 )
        {
          memset(v39, 0, v13);
          EtwpUpdateEventsLostCount(v12);
          if ( (unsigned int)Feature_Servicing_PropagateFlagsThroughLostSystemEvent__private_IsEnabledDeviceUsage(
                               v23,
                               v22,
                               v24,
                               v25) )
          {
            if ( EtwEventEnabled(EtwpEventTracingProvRegHandle, &ETW_EVENT_LOST_SYSTEM_EVENT) )
              EtwpTraceLostSystemEvent(a6, v12 + 136, a7, v21);
          }
          else if ( EtwEventEnabled(EtwpEventTracingProvRegHandle, &ETW_EVENT_LOST_SYSTEM_EVENT) )
          {
            EtwpTraceLostSystemEventOld(a6, v12 + 136, v21);
          }
        }
        if ( (*(_DWORD *)(v12 + 12) & 0x80000) != 0
          && (!(_BYTE)KdDebuggerNotPresent && !KdPitchDebugger || KdEventLoggingPresent) )
        {
          EtwpSendTraceEvent(v12, &v40, v19);
        }
        if ( *(_QWORD *)(v12 + 1288) )
        {
          LOBYTE(v20) = a8;
          EtwpInvokeEventCallback(v12, &v40, 0LL, v20);
        }
        EtwpReleaseTraceBuffer((signed __int64 *)&v40);
        if ( (*(_DWORD *)(v12 + 816) & 0x80u) != 0
          && ((*(char *)(((unsigned __int64)(a6 & 0x1FFF) >> 3) + *(_QWORD *)(v12 + 1000)) >> (a6 & 7)) & 1) != 0 )
        {
          EtwpStackTraceDispatcher(v12, v38, a3, a7);
        }
        if ( (*(_DWORD *)(v12 + 816) & 0x8000) != 0 )
        {
          v27 = 0;
          if ( *(_DWORD *)(*(_QWORD *)(v12 + 1024) + 8LL) )
          {
            while ( 1 )
            {
              v28 = *(_QWORD *)(v12 + 1024);
              if ( *(_WORD *)(v28 + 2LL * v27 + 12) == a6 )
                break;
              if ( ++v27 >= *(_DWORD *)(v28 + 8) )
                goto LABEL_32;
            }
            EtwpTraceLastBranchRecord(v12, v38, a3, a7);
          }
        }
LABEL_32:
        if ( (*(_DWORD *)(v12 + 816) & 0x4000000) != 0 && *(_DWORD *)(*(_QWORD *)(v12 + 1032) + 24LL) )
        {
          while ( 1 )
          {
            v29 = *(_QWORD *)(v12 + 1032);
            if ( *(_WORD *)(v29 + 2LL * v10 + 28) == a6 )
              break;
            if ( ++v10 >= *(_DWORD *)(v29 + 24) )
              goto LABEL_44;
          }
          EtwpTraceProcessorTrace(v12, v38, a3, a7);
        }
        goto LABEL_44;
      }
    }
    else
    {
      v18 = a6;
    }
    ReserveTraceBufferStatus = EtwpGetReserveTraceBufferStatus(v12, v13);
    if ( (unsigned int)Feature_Servicing_PropagateFlagsThroughLostSystemEvent__private_IsEnabledDeviceUsage(
                         v32,
                         v31,
                         v33,
                         v34) )
    {
      if ( EtwEventEnabled(EtwpEventTracingProvRegHandle, &ETW_EVENT_LOST_SYSTEM_EVENT) )
        EtwpTraceLostSystemEvent(v18, v12 + 136, a7, ReserveTraceBufferStatus);
    }
    else if ( EtwEventEnabled(EtwpEventTracingProvRegHandle, &ETW_EVENT_LOST_SYSTEM_EVENT) )
    {
      EtwpTraceLostSystemEventOld(v18, v12 + 136, ReserveTraceBufferStatus);
    }
LABEL_44:
    LOBYTE(v26) = v35[0];
    return EtwpCloseLogger(a4, a1, v26);
  }
  return result;
}
