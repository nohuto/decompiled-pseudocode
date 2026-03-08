/*
 * XREFs of CcCopyReadEx @ 0x14021E070
 * Callers:
 *     CcCopyRead @ 0x1407998C0 (CcCopyRead.c)
 *     CcFastCopyRead @ 0x140933BC0 (CcFastCopyRead.c)
 *     FsRtlCopyRead @ 0x140939DF0 (FsRtlCopyRead.c)
 * Callees:
 *     CcScheduleReadAheadNuma @ 0x14020D0BC (CcScheduleReadAheadNuma.c)
 *     IoReferenceIoAttributionFromThread @ 0x140216E60 (IoReferenceIoAttributionFromThread.c)
 *     KeQueryPerformanceCounter @ 0x14022B950 (KeQueryPerformanceCounter.c)
 *     RtlRaiseStatus @ 0x140292590 (RtlRaiseStatus.c)
 *     CcUpdateSharedCacheMapFlag @ 0x1402E0460 (CcUpdateSharedCacheMapFlag.c)
 *     IoDiskIoAttributionDereference @ 0x14030C4DC (IoDiskIoAttributionDereference.c)
 *     KeBugCheckEx @ 0x140416000 (KeBugCheckEx.c)
 *     CcTelemetryBucketizeLatency @ 0x1406A74A0 (CcTelemetryBucketizeLatency.c)
 *     CcMapAndCopyFromCache @ 0x1406A7510 (CcMapAndCopyFromCache.c)
 *     CcSetTelemetryPeriodicTimer @ 0x140872D84 (CcSetTelemetryPeriodicTimer.c)
 */

__int64 __fastcall CcCopyReadEx(
        _QWORD *Object,
        __int64 *a2,
        unsigned int a3,
        char a4,
        void *a5,
        _DWORD *a6,
        struct _KTHREAD *a7)
{
  struct _KTHREAD *CurrentThread; // r10
  int v11; // ebx
  unsigned __int64 v12; // rcx
  __int64 v13; // rdi
  _DWORD *v14; // r13
  __int64 v15; // rdx
  __int64 v16; // r12
  struct _KTHREAD *v17; // rbx
  unsigned int v18; // eax
  __int64 v19; // r10
  __int64 v20; // r9
  __int64 v21; // rbx
  _DWORD *v22; // rax
  _DWORD *v23; // rax
  _QWORD *v24; // rdi
  __int64 v25; // rbx
  __int64 v26; // r10
  __int64 v27; // r8
  _QWORD *v28; // r8
  _QWORD *v29; // rdx
  unsigned __int64 v30; // r10
  unsigned __int8 v32; // [rsp+50h] [rbp-68h]
  __int64 v33; // [rsp+58h] [rbp-60h] BYREF
  __int64 v34; // [rsp+60h] [rbp-58h]
  __int64 v35; // [rsp+68h] [rbp-50h]
  __int64 v36; // [rsp+70h] [rbp-48h]
  struct _KTHREAD *v37; // [rsp+78h] [rbp-40h]
  __int64 v38; // [rsp+C0h] [rbp+8h] BYREF
  __int64 v39; // [rsp+C8h] [rbp+10h] BYREF
  unsigned int v40; // [rsp+D0h] [rbp+18h]
  char v41; // [rsp+D8h] [rbp+20h]

  v40 = a3;
  LODWORD(v38) = 0;
  CurrentThread = KeGetCurrentThread();
  v11 = (*((_DWORD *)&CurrentThread[1].SwapListEntry + 2) >> 9) & 7;
  v12 = CurrentThread->Process[1].Affinity.StaticBitmap[16];
  if ( v12 && v11 >= *(_DWORD *)(v12 + 1068) )
    v11 = *(_DWORD *)(v12 + 1068);
  if ( v11 < 2 && CurrentThread == KeGetCurrentThread() && LODWORD(CurrentThread[1].Timer.TimerListEntry.Flink) )
    v11 = 2;
  v39 = 0LL;
  v33 = 0LL;
  v34 = 0LL;
  v13 = *(_QWORD *)(Object[5] + 8LL);
  v36 = v13;
  v14 = (_DWORD *)Object[6];
  ++qword_140C5F520;
  if ( !byte_140C5F501 && CcTelemetryGlobalData && !dword_140C5F610 && !dword_140C5F614 )
  {
    CcSetTelemetryPeriodicTimer(DueTime);
    a3 = v40;
  }
  if ( v11 <= 0 )
    a4 = 1;
  v41 = a4;
  v35 = a3;
  if ( *a2 + a3 > *(_QWORD *)(v13 + 8) )
    KeBugCheckEx(0x34u, 0x299uLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
  if ( !a5 )
    RtlRaiseStatus(3221225704LL);
  v15 = KeGetCurrentPrcb()->SchedulerSubNode->Affinity.Reserved[0] % (unsigned int)CcNumberNumaNodes;
  if ( CcEnablePerVolumeLazyWriter )
  {
    v16 = *(_QWORD *)(*(_QWORD *)(v13 + 600) + 8 * v15 + 64);
    a3 = v40;
  }
  else
  {
    v16 = *(_QWORD *)(*(_QWORD *)(v13 + 536) + 8 * v15 + 112);
  }
  v17 = a7;
  if ( (*v14 & 0x20000) != 0 )
    CcScheduleReadAheadNuma(Object, a2, a3, a7, v16);
  v18 = 11988;
  if ( !a4 )
    v18 = 11984;
  __incgsdword(v18);
  KeGetCurrentThread()[1].Timer.DueTime.HighPart = 0;
  if ( v17 && v17 != KeGetCurrentThread() )
    IoReferenceIoAttributionFromThread((__int64)v17, (__int64)&v39);
  v32 = CcMapAndCopyFromCache((int)Object, a5, (__int64)&v38, (*v14 >> 18) & 7, v39, (__int64)&v33);
  if ( v32 )
  {
    v37 = KeGetCurrentThread();
    __addgsdword(0x8484u, v37[1].Timer.DueTime.HighPart);
    if ( (*(_DWORD *)(v13 + 152) & 0x40000000) != 0 )
    {
      v21 = v35;
    }
    else
    {
      if ( (_DWORD)v38 && (*v14 & 0x20000) == 0 )
        CcScheduleReadAheadNuma(Object, a2, v40, v17, v16);
      v19 = *(_QWORD *)(Object[5] + 8LL);
      v20 = Object[6];
      _InterlockedExchange64((volatile __int64 *)(v20 + 16), *(_QWORD *)(v20 + 32));
      _InterlockedExchange64((volatile __int64 *)(v20 + 24), *(_QWORD *)(v20 + 40));
      _InterlockedExchange64((volatile __int64 *)(v20 + 32), *a2);
      v21 = v35;
      _InterlockedExchange64((volatile __int64 *)(v20 + 40), v35 + *a2);
      if ( (*(_DWORD *)(v19 + 152) & 0x200000) != 0
        && (unsigned int)((*(_DWORD *)(v20 + 32) >> 12) - (*(_DWORD *)(v20 + 24) >> 12)) > 1 )
      {
        CcUpdateSharedCacheMapFlag(v19, 0x200000LL, 0LL);
        v22 = a6;
        *a6 = 0;
        *((_QWORD *)v22 + 1) = v21;
        goto LABEL_38;
      }
    }
    v23 = a6;
    *a6 = 0;
    *((_QWORD *)v23 + 1) = v21;
  }
  else
  {
    __incgsdword(0x2ED8u);
  }
LABEL_38:
  if ( v39 )
    IoDiskIoAttributionDereference(v39);
  if ( !byte_140C5F501 )
  {
    v24 = *(_QWORD **)(v13 + 512);
    if ( v32 )
    {
      v25 = v33;
      if ( v33 )
        v26 = 1000000 * (*(_QWORD *)&KeQueryPerformanceCounter(0LL) - v25) / stru_140C5F4C8.QuadPart;
      else
        v26 = v34;
      v27 = 69LL;
      if ( !a4 )
        v27 = 93LL;
      v28 = &v24[v27];
      v29 = v24 + 57;
      if ( !a4 )
        v29 = v24 + 81;
      CcTelemetryBucketizeLatency(v26, v29, v28);
      if ( a4 )
      {
        ++v24[45];
        if ( v30 > v24[55] )
        {
          v24[55] = v30;
          return v32;
        }
      }
      else
      {
        ++v24[46];
        if ( v30 > v24[56] )
        {
          v24[56] = v30;
          return v32;
        }
      }
    }
    else
    {
      ++v24[47];
    }
  }
  return v32;
}
