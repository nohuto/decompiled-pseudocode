/*
 * XREFs of CcCopyWriteEx @ 0x14021C0A0
 * Callers:
 *     CcCopyWrite @ 0x1403A3B60 (CcCopyWrite.c)
 *     CcFastCopyWrite @ 0x140535310 (CcFastCopyWrite.c)
 *     DifCcCopyWriteExWrapper @ 0x1405D3AE0 (DifCcCopyWriteExWrapper.c)
 *     DifCcCopyWriteWrapper @ 0x1405D3C40 (DifCcCopyWriteWrapper.c)
 *     DifCcFastCopyWriteWrapper @ 0x1405D3EE0 (DifCcFastCopyWriteWrapper.c)
 * Callees:
 *     CcMapAndCopyInToCache @ 0x14021CD00 (CcMapAndCopyInToCache.c)
 *     KeQueryPerformanceCounter @ 0x14022B950 (KeQueryPerformanceCounter.c)
 *     CcTelemetryBucketizeLatency @ 0x1406A74A0 (CcTelemetryBucketizeLatency.c)
 *     CcSetTelemetryPeriodicTimer @ 0x140872D84 (CcSetTelemetryPeriodicTimer.c)
 */

char __fastcall CcCopyWriteEx(__int64 a1, __int64 *a2, unsigned int a3, char a4, __int64 a5, __int64 a6)
{
  int v10; // ebx
  struct _KTHREAD *CurrentThread; // r10
  int v12; // r9d
  unsigned __int64 v13; // rcx
  __int64 v15; // r14
  __int64 v16; // rax
  int v17; // r9d
  int v18; // edx
  unsigned int v19; // r8d
  unsigned __int64 v20; // rax
  int v21; // ecx
  char v22; // di
  _QWORD *v23; // rbx
  __int64 v24; // r10
  __int64 v25; // r8
  _QWORD *v26; // r8
  __int64 v27; // rdx
  unsigned __int64 v28; // r10
  __int64 v29; // [rsp+58h] [rbp-50h] BYREF
  __int64 v30; // [rsp+60h] [rbp-48h]
  unsigned __int64 v31; // [rsp+68h] [rbp-40h]
  __int64 v32; // [rsp+70h] [rbp-38h] BYREF
  _QWORD v33[3]; // [rsp+78h] [rbp-30h] BYREF

  v10 = 0;
  v32 = 0LL;
  v29 = 0LL;
  v30 = 0LL;
  CurrentThread = KeGetCurrentThread();
  v12 = (*((_DWORD *)&CurrentThread[1].SwapListEntry + 2) >> 9) & 7;
  v13 = CurrentThread->Process[1].Affinity.StaticBitmap[16];
  if ( v13 && v12 >= *(_DWORD *)(v13 + 1068) )
    v12 = *(_DWORD *)(v13 + 1068);
  if ( (v12 >= 2 || CurrentThread != KeGetCurrentThread() || !LODWORD(CurrentThread[1].Timer.TimerListEntry.Flink))
    && v12 <= 0
    || (*(_DWORD *)(a1 + 80) & 0x10) != 0 )
  {
    v10 = 1;
  }
  ++qword_140C5F530;
  if ( !byte_140C5F501 && CcTelemetryGlobalData && !dword_140C5F610 && !dword_140C5F614 )
    CcSetTelemetryPeriodicTimer(DueTime);
  if ( v10 && !a4 )
    return 0;
  v15 = *(_QWORD *)(*(_QWORD *)(a1 + 40) + 8LL);
  v33[1] = v15;
  v16 = *a2;
  v32 = v16;
  v17 = 2;
  if ( (v16 & 0xFFF) == 0 && a3 >= 0x1000 )
    v17 = 3;
  v18 = v17 | 4;
  if ( (((_WORD)v16 + (_WORD)a3) & 0xFFF) != 0 )
    v18 = v17;
  v31 = v16 & 0xFFFFFFFFFFFFF000uLL;
  v33[0] = *(_QWORD *)(*(_QWORD *)(a1 + 24) + 40LL);
  v19 = LODWORD(v33[0]) - (v16 & 0xFFFFF000);
  v20 = (v33[0] - (v16 & 0xFFFFFFFFFFFFF000uLL)) >> 32;
  if ( (__int64)(v33[0] - v31) > 0 )
  {
    v21 = v18;
    if ( !(_DWORD)v20 && v19 <= 0x1000 )
      v21 = v18 | 6;
  }
  else
  {
    v21 = v18 | 7;
  }
  v22 = CcMapAndCopyInToCache(v15, a5, (unsigned int)&v32, a3, v21, a1, (__int64)v33, a4, a6, (__int64)&v29);
  if ( !byte_140C5F501 )
  {
    v23 = *(_QWORD **)(v15 + 512);
    if ( v22 )
    {
      if ( v29 )
        v24 = 1000000 * (*(_QWORD *)&KeQueryPerformanceCounter(0LL) - v29) / stru_140C5F4C8.QuadPart;
      else
        v24 = v30;
      v25 = 122LL;
      if ( !a4 )
        v25 = 146LL;
      v26 = &v23[v25];
      v27 = 110LL;
      if ( !a4 )
        v27 = 134LL;
      CcTelemetryBucketizeLatency(v24, &v23[v27], v26);
      if ( a4 )
      {
        ++v23[105];
        if ( v28 > *(_QWORD *)(*(_QWORD *)(v15 + 512) + 864LL) )
        {
          v23[108] = v28;
          return v22;
        }
      }
      else
      {
        ++v23[106];
        if ( v28 > v23[109] )
        {
          v23[109] = v28;
          return v22;
        }
      }
    }
    else
    {
      ++v23[107];
    }
  }
  return v22;
}
