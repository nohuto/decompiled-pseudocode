/*
 * XREFs of EtwpLogKernelEvent @ 0x1403149F0
 * Callers:
 *     KiProcessExpiredTimerList @ 0x140251760 (KiProcessExpiredTimerList.c)
 *     KiExecuteAllDpcs @ 0x140252F60 (KiExecuteAllDpcs.c)
 *     EtwTraceTimedEvent @ 0x1402CD670 (EtwTraceTimedEvent.c)
 *     EtwpTraceFileIo @ 0x140316AB0 (EtwpTraceFileIo.c)
 *     EtwpTraceFileName @ 0x14035E5C0 (EtwpTraceFileName.c)
 *     EtwTraceSiloKernelEvent @ 0x14035EC20 (EtwTraceSiloKernelEvent.c)
 *     EtwTraceKernelEvent @ 0x14035F4C0 (EtwTraceKernelEvent.c)
 *     EtwpCCSwapFlush @ 0x1403858B4 (EtwpCCSwapFlush.c)
 *     EtwTraceSiloTimedEvent @ 0x14045F036 (EtwTraceSiloTimedEvent.c)
 *     EtwpTraceStackWalk @ 0x140460A6C (EtwpTraceStackWalk.c)
 *     EtwpTraceCachedStack @ 0x140460F38 (EtwpTraceCachedStack.c)
 *     EtwpTraceStackKey @ 0x140461010 (EtwpTraceStackKey.c)
 *     EtwpTraceLastBranchRecord @ 0x140461546 (EtwpTraceLastBranchRecord.c)
 *     EtwTracePool @ 0x1405FAD80 (EtwTracePool.c)
 *     EtwTraceSiloDcEvent @ 0x1405FB110 (EtwTraceSiloDcEvent.c)
 *     EtwpLogMemInfo @ 0x1405FBA14 (EtwpLogMemInfo.c)
 *     EtwpTraceKernelEventWithFilter @ 0x1405FC0F8 (EtwpTraceKernelEventWithFilter.c)
 *     PerfInfoLogIpiSend @ 0x1405FC690 (PerfInfoLogIpiSend.c)
 *     EtwpWriteProcessorTrace @ 0x1406008F0 (EtwpWriteProcessorTrace.c)
 *     EtwpEnumerateAddressSpace @ 0x1407EC24C (EtwpEnumerateAddressSpace.c)
 *     EtwpTraceImageRundown @ 0x140801B68 (EtwpTraceImageRundown.c)
 *     EtwpLogGroupMask @ 0x14080D970 (EtwpLogGroupMask.c)
 *     EtwpTraceProcessRundown @ 0x14080E0E4 (EtwpTraceProcessRundown.c)
 *     EtwpLogAlwaysPresentRundown @ 0x14080E2F8 (EtwpLogAlwaysPresentRundown.c)
 *     EtwpSysModuleRunDown @ 0x14080E368 (EtwpSysModuleRunDown.c)
 *     EtwpSystemImageEnumCallback @ 0x14083B2F0 (EtwpSystemImageEnumCallback.c)
 *     EtwpLogSessionWorkingSetInfo @ 0x1408A25EC (EtwpLogSessionWorkingSetInfo.c)
 *     EtwpProcessPerfCtrsRundown @ 0x1408A3722 (EtwpProcessPerfCtrsRundown.c)
 *     EtwpLogMemInfoWsHelper @ 0x1409E3278 (EtwpLogMemInfoWsHelper.c)
 *     EtwpLogTxREvent @ 0x1409E344C (EtwpLogTxREvent.c)
 *     EtwLogPfnInfoRundown @ 0x1409EB914 (EtwLogPfnInfoRundown.c)
 *     EtwpClockSourceRunDown @ 0x1409EBC38 (EtwpClockSourceRunDown.c)
 *     EtwpExecutiveResourceConfigRunDown @ 0x1409EBDB8 (EtwpExecutiveResourceConfigRunDown.c)
 *     EtwpLogPmcCounterRundown @ 0x1409EBF78 (EtwpLogPmcCounterRundown.c)
 *     EtwpObjectHandleEnumCallback @ 0x1409EC330 (EtwpObjectHandleEnumCallback.c)
 *     EtwpObjectTypeRundown @ 0x1409EC610 (EtwpObjectTypeRundown.c)
 *     EtwpPoolRunDown @ 0x1409EC76C (EtwpPoolRunDown.c)
 *     EtwpProcessorRundown @ 0x1409EC980 (EtwpProcessorRundown.c)
 *     EtwpSampledProfileRunDown @ 0x1409ECE34 (EtwpSampledProfileRunDown.c)
 *     EtwpSpinLockConfigRunDown @ 0x1409ECFE0 (EtwpSpinLockConfigRunDown.c)
 * Callees:
 *     EtwEventEnabled @ 0x140231870 (EtwEventEnabled.c)
 *     KeSetEvent @ 0x14025C2C0 (KeSetEvent.c)
 *     KeLeaveCriticalRegion @ 0x140262D70 (KeLeaveCriticalRegion.c)
 *     ExAcquireRundownProtectionCacheAwareEx @ 0x14028DD10 (ExAcquireRundownProtectionCacheAwareEx.c)
 *     KiCheckForKernelApcDelivery @ 0x1402B7850 (KiCheckForKernelApcDelivery.c)
 *     EtwpUpdateEventsLostCount @ 0x1402FAD84 (EtwpUpdateEventsLostCount.c)
 *     EtwpGetReserveTraceBufferStatus @ 0x1402FF40C (EtwpGetReserveTraceBufferStatus.c)
 *     KeAreInterruptsEnabled @ 0x140312C60 (KeAreInterruptsEnabled.c)
 *     EtwpReserveTraceBuffer @ 0x1403151E0 (EtwpReserveTraceBuffer.c)
 *     EtwpSendTraceEvent @ 0x14039D2E8 (EtwpSendTraceEvent.c)
 *     EtwpCloseLogger @ 0x1403BC590 (EtwpCloseLogger.c)
 *     EtwpTraceLostSystemEventOld @ 0x14040C628 (EtwpTraceLostSystemEventOld.c)
 *     Feature_Servicing_PropagateFlagsThroughLostSystemEvent__private_IsEnabledDeviceUsage @ 0x14040C8BC (Feature_Servicing_PropagateFlagsThroughLostSystemEvent__private_IsEnabledDeviceUsage.c)
 *     memmove @ 0x14042CCC0 (memmove.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     EtwpReserveWithPmcCounters @ 0x14045F958 (EtwpReserveWithPmcCounters.c)
 *     EtwpStackTraceDispatcher @ 0x140460750 (EtwpStackTraceDispatcher.c)
 *     EtwpTraceLastBranchRecord @ 0x140461546 (EtwpTraceLastBranchRecord.c)
 *     EtwpTraceLostSystemEvent @ 0x1405FA2E0 (EtwpTraceLostSystemEvent.c)
 *     EtwpReserveWithPebsIndex @ 0x1405FBE50 (EtwpReserveWithPebsIndex.c)
 *     EtwpInvokeEventCallback @ 0x1405FEBA4 (EtwpInvokeEventCallback.c)
 *     EtwpTraceProcessorTrace @ 0x140600834 (EtwpTraceProcessorTrace.c)
 */

void __fastcall EtwpLogKernelEvent(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        unsigned int a4,
        unsigned __int16 a5,
        unsigned int a6)
{
  __int64 v6; // r15
  unsigned int v7; // r14d
  unsigned __int8 v11; // bl
  struct _KTHREAD *CurrentThread; // rax
  __int64 v13; // rsi
  __int64 v14; // rax
  __int64 v15; // rsi
  unsigned int v16; // r13d
  unsigned int v17; // r10d
  __m128i v18; // xmm4
  __m128i v19; // xmm5
  unsigned int v20; // r11d
  __int64 v21; // r9
  __m128i v22; // xmm3
  __int64 v23; // r9
  __int64 v24; // rdx
  __m128i v25; // xmm2
  __int64 v26; // rcx
  __m128i v27; // xmm3
  __m128i v28; // xmm4
  __m128i v29; // xmm4
  int v30; // edx
  int v31; // r8d
  __int64 v32; // r11
  _DWORD *v33; // rcx
  unsigned int v34; // eax
  __int64 v35; // r9
  unsigned int v36; // eax
  unsigned int v37; // edi
  __int64 v38; // rax
  _DWORD *p_LockNV; // r8
  struct _KTHREAD *v40; // r9
  __int64 v41; // rax
  int v42; // eax
  unsigned int v43; // edx
  __int64 v44; // rcx
  __int64 v45; // rax
  unsigned int v46; // eax
  struct _KTHREAD *v47; // rcx
  __int64 v48; // r13
  signed __int64 *v49; // roff
  signed __int64 v50; // rax
  __int64 v51; // rdx
  signed __int64 v52; // rtt
  unsigned int v53; // edx
  __int64 v54; // rcx
  __int64 v55; // rdx
  __int64 v56; // rcx
  __int64 v57; // r8
  __int64 v58; // r9
  __int64 v59; // rcx
  unsigned int ReserveTraceBufferStatus; // r14d
  __int64 v61; // rdx
  __int64 v62; // rcx
  __int64 v63; // r8
  __int64 v64; // r9
  __int64 v65; // r9
  signed __int64 *v66; // r8
  signed __int64 v67; // rdx
  unsigned __int64 v68; // rdx
  struct _KTHREAD *v69; // rcx
  bool v70; // zf
  __int64 v71; // [rsp+38h] [rbp-48h] BYREF
  unsigned int Size; // [rsp+40h] [rbp-40h]
  unsigned int Size_4; // [rsp+44h] [rbp-3Ch]
  int v74; // [rsp+48h] [rbp-38h]
  void *v75; // [rsp+50h] [rbp-30h]
  struct _KTHREAD *v76; // [rsp+58h] [rbp-28h]
  __int128 v77; // [rsp+60h] [rbp-20h] BYREF
  __int64 v78; // [rsp+70h] [rbp-10h]
  __int64 v79; // [rsp+78h] [rbp-8h]

  v6 = a3;
  v7 = 0;
  v77 = 0LL;
  v78 = 0LL;
  v71 = 0LL;
  v11 = 0;
  if ( KeAreInterruptsEnabled() && KeGetCurrentIrql() < 2u )
  {
    CurrentThread = KeGetCurrentThread();
    v13 = (unsigned int)v6;
    --CurrentThread->KernelApcDisable;
    if ( !ExAcquireRundownProtectionCacheAwareEx(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(*(_QWORD *)(a2 + 448) + 8 * v6), 1u) )
    {
      KeLeaveCriticalRegion();
      return;
    }
    v11 = 1;
  }
  else
  {
    v13 = v6;
  }
  v14 = *(_QWORD *)(a2 + 456);
  v79 = 8 * v13;
  v15 = *(_QWORD *)(8 * v13 + v14);
  if ( (v15 & 1) != 0 )
  {
    EtwpCloseLogger((unsigned int)v6, a2, v11);
    return;
  }
  if ( !v15 )
    return;
  Size = 0;
  v16 = 0;
  v17 = 0;
  if ( a4 >= 8 )
  {
    v18 = 0LL;
    v19 = 0LL;
    v20 = 2;
    do
    {
      v21 = 2LL * v17;
      v17 += 8;
      v22 = _mm_unpacklo_epi32(
              _mm_cvtsi32_si128(*(_DWORD *)(a1 + 8 * v21 + 8)),
              _mm_cvtsi32_si128(*(_DWORD *)(a1 + 16LL * (v20 - 1) + 8)));
      v23 = 2LL * (v20 + 5);
      v24 = 2LL * (v20 + 3);
      v25 = _mm_cvtsi32_si128(*(_DWORD *)(a1 + 16LL * (v20 + 4) + 8));
      v18 = _mm_add_epi32(
              v18,
              _mm_unpacklo_epi64(
                v22,
                _mm_unpacklo_epi32(
                  _mm_cvtsi32_si128(*(_DWORD *)(a1 + 16LL * v20 + 8)),
                  _mm_cvtsi32_si128(*(_DWORD *)(a1 + 16LL * (v20 + 1) + 8)))));
      v26 = 2LL * (v20 + 2);
      v20 += 8;
      v27 = _mm_add_epi32(
              _mm_unpacklo_epi64(
                _mm_unpacklo_epi32(
                  _mm_cvtsi32_si128(*(_DWORD *)(a1 + 8 * v26 + 8)),
                  _mm_cvtsi32_si128(*(_DWORD *)(a1 + 8 * v24 + 8))),
                _mm_unpacklo_epi32(v25, _mm_cvtsi32_si128(*(_DWORD *)(a1 + 8 * v23 + 8)))),
              v19);
      v19 = v27;
    }
    while ( v17 < (a4 & 0xFFFFFFF8) );
    v28 = _mm_add_epi32(v18, v27);
    v29 = _mm_add_epi32(v28, _mm_srli_si128(v28, 8));
    v16 = _mm_cvtsi128_si32(_mm_add_epi32(v29, _mm_srli_si128(v29, 4)));
    Size = v16;
  }
  v30 = 0;
  v31 = 0;
  if ( v17 < a4 )
  {
    v32 = v17;
    if ( a4 - v17 < 2 )
      goto LABEL_18;
    v33 = (_DWORD *)(16LL * v17 + a1 + 24);
    v34 = ((a4 - v17 - 2) >> 1) + 1;
    v35 = v34;
    v36 = v17 + 2 * v34;
    v32 = v17 + 2 * v35;
    do
    {
      v30 += *(v33 - 4);
      v31 += *v33;
      v33 += 8;
      --v35;
    }
    while ( v35 );
    if ( v36 < a4 )
LABEL_18:
      v16 += *(_DWORD *)(a1 + 16 * v32 + 8);
    v16 += v31 + v30;
    Size = v16;
  }
  v37 = a6;
  if ( (a6 & 0x100) != 0 )
  {
    if ( (a6 & 0x10000000) != 0 )
    {
      v41 = EtwpReserveTraceBuffer(v15, v16 + 24, (unsigned int)&v77, (unsigned int)&v71, a6);
      p_LockNV = (_DWORD *)v41;
      if ( !v41 )
        goto LABEL_73;
      *(_WORD *)(v41 + 6) = a5;
      v40 = (struct _KTHREAD *)(v41 + 24);
      *(_DWORD *)v41 = (unsigned __int8)a6 | 0xC0040000;
      *(_QWORD *)(v41 + 16) = v71;
      *(_WORD *)(v41 + 4) = v16 + 24;
      *(_DWORD *)(v41 + 8) = KeGetCurrentThread()[1].CurrentRunTime;
      *(_DWORD *)(v41 + 12) = KeGetCurrentThread()->ApcState.Process[1].Header.WaitListHead.Flink;
    }
    else
    {
      v76 = KeGetCurrentThread();
      v38 = EtwpReserveTraceBuffer(v15, v16 + 32, (unsigned int)&v77, (unsigned int)&v71, a6);
      if ( !v38 )
        goto LABEL_73;
      p_LockNV = &v76->Header.LockNV;
      v40 = (struct _KTHREAD *)(v38 + 32);
      *(_DWORD *)v38 = (unsigned __int8)a6 | 0xC0020000;
      *(_QWORD *)(v38 + 16) = v71;
      *(_WORD *)(v38 + 4) = v16 + 32;
      *(_WORD *)(v38 + 6) = a5;
      *(_DWORD *)(v38 + 8) = p_LockNV[308];
      *(_DWORD *)(v38 + 12) = p_LockNV[306];
      *(_DWORD *)(v38 + 24) = p_LockNV[163];
      *(_DWORD *)(v38 + 28) = p_LockNV[183];
    }
    goto LABEL_36;
  }
  v42 = *(_DWORD *)(v15 + 816);
  if ( (v42 & 0xC00) == 0 )
    goto LABEL_34;
  if ( (v42 & 0x400) != 0 && a5 == 1316 )
  {
    v40 = (struct _KTHREAD *)EtwpReserveWithPebsIndex(v15, 1316, v16, (unsigned int)&v77, (__int64)&v71, a6);
    goto LABEL_36;
  }
  if ( (v42 & 0x800) != 0 && (v43 = 0, *(_DWORD *)(*(_QWORD *)(v15 + 1016) + 8LL)) )
  {
    while ( 1 )
    {
      v44 = *(_QWORD *)(v15 + 1016);
      if ( *(_WORD *)(v44 + 2LL * v43 + 12) == a5 )
        break;
      if ( ++v43 >= *(_DWORD *)(v44 + 8) )
        goto LABEL_34;
    }
    v40 = (struct _KTHREAD *)EtwpReserveWithPmcCounters(v15, a5, v16, (unsigned int)&v77, (__int64)&v71, a6);
  }
  else
  {
LABEL_34:
    v45 = EtwpReserveTraceBuffer(v15, v16 + 16, (unsigned int)&v77, (unsigned int)&v71, a6);
    if ( !v45 )
      goto LABEL_73;
    v40 = (struct _KTHREAD *)(v45 + 16);
    *(_QWORD *)(v45 + 8) = v71;
    *(_WORD *)(v45 + 6) = a5;
    *(_DWORD *)v45 = (unsigned __int8)a6 | 0xC0110000;
    *(_WORD *)(v45 + 4) = v16 + 16;
  }
LABEL_36:
  v75 = v40;
  if ( v40 )
  {
    v46 = v16;
    v47 = v40;
    Size_4 = v16;
    v76 = v40;
    v74 = 0;
    if ( a4 )
    {
      while ( 1 )
      {
        v48 = *(unsigned int *)(a1 + 8);
        if ( (unsigned int)v48 > v46 )
          break;
        memmove(v47, *(const void **)a1, (unsigned int)v48);
        a1 += 16LL;
        v47 = (struct _KTHREAD *)((char *)v76 + v48);
        v46 = Size_4 - v48;
        v76 = (struct _KTHREAD *)((char *)v76 + v48);
        Size_4 -= v48;
        if ( ++v74 >= a4 )
          goto LABEL_40;
      }
      memset(v75, 0, Size);
      EtwpUpdateEventsLostCount(v15);
      if ( !(unsigned int)Feature_Servicing_PropagateFlagsThroughLostSystemEvent__private_IsEnabledDeviceUsage(
                            v56,
                            v55,
                            v57,
                            v58) )
      {
        if ( EtwEventEnabled(EtwpEventTracingProvRegHandle, &ETW_EVENT_LOST_SYSTEM_EVENT) )
          EtwpTraceLostSystemEventOld(a5, v15 + 136, 3221225476LL);
LABEL_40:
        v37 = a6;
        goto LABEL_41;
      }
      v37 = a6;
      if ( EtwEventEnabled(EtwpEventTracingProvRegHandle, &ETW_EVENT_LOST_SYSTEM_EVENT) )
        EtwpTraceLostSystemEvent(a5, v15 + 136, a6, 3221225476LL);
    }
LABEL_41:
    if ( (*(_DWORD *)(v15 + 12) & 0x80000) != 0
      && (!(_BYTE)KdDebuggerNotPresent && !KdPitchDebugger || KdEventLoggingPresent) )
    {
      EtwpSendTraceEvent(v15, &v77, p_LockNV);
    }
    if ( *(_QWORD *)(v15 + 1288) )
      EtwpInvokeEventCallback(v15, &v77, 0LL, 0LL);
    v49 = (signed __int64 *)*((_QWORD *)&v77 + 1);
    _m_prefetchw(*((const void **)&v77 + 1));
    v50 = *v49;
    v51 = v77;
    if ( (*v49 ^ (unsigned __int64)v77) >= 0xF )
    {
LABEL_51:
      _InterlockedDecrement((volatile signed __int32 *)(v51 + 12));
    }
    else
    {
      while ( 1 )
      {
        v52 = v50;
        v50 = _InterlockedCompareExchange64(*((volatile signed __int64 **)&v77 + 1), v50 + 1, v50);
        if ( v52 == v50 )
          break;
        v51 = v77;
        if ( (v50 ^ (unsigned __int64)v77) >= 0xF )
          goto LABEL_51;
      }
    }
    if ( (*(_DWORD *)(v15 + 816) & 0x80u) != 0
      && ((*(char *)(((unsigned __int64)(a5 & 0x1FFF) >> 3) + *(_QWORD *)(v15 + 1000)) >> (a5 & 7)) & 1) != 0 )
    {
      EtwpStackTraceDispatcher(v15, &v71, 0LL, v37);
    }
    if ( (*(_DWORD *)(v15 + 816) & 0x8000) != 0 )
    {
      v53 = 0;
      if ( *(_DWORD *)(*(_QWORD *)(v15 + 1024) + 8LL) )
      {
        while ( 1 )
        {
          v54 = *(_QWORD *)(v15 + 1024);
          if ( *(_WORD *)(v54 + 2LL * v53 + 12) == a5 )
            break;
          if ( ++v53 >= *(_DWORD *)(v54 + 8) )
            goto LABEL_67;
        }
        EtwpTraceLastBranchRecord(v15, &v71, 0LL, v37);
      }
    }
LABEL_67:
    if ( (*(_DWORD *)(v15 + 816) & 0x4000000) != 0 && *(_DWORD *)(*(_QWORD *)(v15 + 1032) + 24LL) )
    {
      while ( 1 )
      {
        v59 = *(_QWORD *)(v15 + 1032);
        if ( *(_WORD *)(v59 + 2LL * v7 + 28) == a5 )
          break;
        if ( ++v7 >= *(_DWORD *)(v59 + 24) )
          goto LABEL_78;
      }
      EtwpTraceProcessorTrace(v15, &v71, 0LL, v37);
    }
    goto LABEL_78;
  }
LABEL_73:
  ReserveTraceBufferStatus = EtwpGetReserveTraceBufferStatus(v15, v16);
  if ( (unsigned int)Feature_Servicing_PropagateFlagsThroughLostSystemEvent__private_IsEnabledDeviceUsage(
                       v62,
                       v61,
                       v63,
                       v64) )
  {
    if ( EtwEventEnabled(EtwpEventTracingProvRegHandle, &ETW_EVENT_LOST_SYSTEM_EVENT) )
      EtwpTraceLostSystemEvent(a5, v15 + 136, a6, ReserveTraceBufferStatus);
  }
  else if ( EtwEventEnabled(EtwpEventTracingProvRegHandle, &ETW_EVENT_LOST_SYSTEM_EVENT) )
  {
    EtwpTraceLostSystemEventOld(a5, v15 + 136, ReserveTraceBufferStatus);
  }
LABEL_78:
  if ( v11 )
  {
    v65 = *(_QWORD *)(v79 + *(_QWORD *)(a2 + 448));
    v66 = (signed __int64 *)(*(_QWORD *)v65 + *(_DWORD *)(v65 + 16) * (KeGetPcr()->Prcb.Number % *(_DWORD *)(v65 + 20)));
    _m_prefetchw(v66);
    while ( 1 )
    {
      while ( 1 )
      {
        v67 = *v66;
        if ( (*v66 & 1) != 0 )
          break;
        if ( v67 == _InterlockedCompareExchange64(v66, v67 - 2, v67) )
          goto LABEL_87;
      }
      if ( v67 != 1 )
        break;
      v66 = *(signed __int64 **)v65;
    }
    v68 = v67 & 0xFFFFFFFFFFFFFFFEuLL;
    if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v68, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      KeSetEvent((PRKEVENT)(v68 + 8), 0, 0);
LABEL_87:
    v69 = KeGetCurrentThread();
    v70 = v69->KernelApcDisable++ == -1;
    if ( v70
      && ($C71981A45BEB2B45F82C232A7085991E *)v69->ApcState.ApcListHead[0].Flink != &v69->152
      && !v69->SpecialApcDisable )
    {
      KiCheckForKernelApcDelivery();
    }
  }
}
