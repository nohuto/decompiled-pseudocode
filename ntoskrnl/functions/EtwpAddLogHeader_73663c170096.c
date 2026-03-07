unsigned __int64 __fastcall EtwpAddLogHeader(__int64 a1, LARGE_INTEGER *a2)
{
  bool v4; // cf
  unsigned __int64 result; // rax
  __int64 v6; // rcx
  unsigned __int16 v7; // r14
  struct _KTHREAD *CurrentThread; // r15
  _QWORD *v9; // r12
  unsigned int UsedProcessorCount; // eax
  char v11; // al
  char v12; // cl
  __int64 v13; // rdx
  bool v14; // zf
  int v15; // ecx
  LARGE_INTEGER v16; // rax
  __int64 v17; // r13
  char *v18; // r13
  __int64 v19; // rax
  unsigned int *v20; // rbx
  __int64 v21; // rdx
  unsigned __int64 v22; // xmm0_8
  __int64 v23; // rdx
  unsigned __int64 v24; // xmm0_8
  void *v25; // rcx
  char *v26; // rdx
  unsigned int LowPart; // r8d
  char *v28; // rdx
  __int64 v29; // rax
  __int64 v30; // rcx
  __int128 v31; // xmm1
  __int64 v32; // r13
  LARGE_INTEGER PerformanceFrequency; // [rsp+30h] [rbp-40h] BYREF
  int v34; // [rsp+38h] [rbp-38h] BYREF
  void *v35; // [rsp+40h] [rbp-30h]
  __int64 v36; // [rsp+58h] [rbp-18h] BYREF
  unsigned int v37; // [rsp+60h] [rbp-10h]

  v34 = 0;
  PerformanceFrequency.QuadPart = 0LL;
  v36 = 0LL;
  v37 = 0;
  v4 = (unsigned __int8)EtwpIsWow64Logger(a1, a2) != 0;
  result = *(unsigned int *)(a1 + 4);
  v7 = *(_WORD *)(v6 + 152) + *(_WORD *)(v6 + 136) + (v4 ? 276 : 284);
  if ( result >= (unsigned __int64)v7 + 104 )
  {
    if ( ((int (__fastcall *)(__int64, __int64, __int64 *, int *))off_140C020E8[0])(25LL, 12LL, &v36, &v34) < 0 )
    {
      v36 = 0LL;
      v37 = 0;
    }
    CurrentThread = KeGetCurrentThread();
    HIWORD(a2[9].QuadPart) = 0;
    v9 = (_QWORD *)(a1 + 312);
    WORD2(a2[9].QuadPart) = v7 + 32;
    a2[9].LowPart = -1073610750;
    a2[10].LowPart = CurrentThread[1].CurrentRunTime;
    a2[10].HighPart = CurrentThread[1].CycleTime;
    a2[12].LowPart = CurrentThread->SchedulerApc.SpareLong0;
    a2[12].HighPart = CurrentThread->UserTime;
    a2[11] = *(LARGE_INTEGER *)(a1 + 312);
    memset(&a2[13], 0, v7);
    a2[13].LowPart = *(_DWORD *)(a1 + 4);
    WORD2(a2[13].QuadPart) = 10;
    a2[14].LowPart = (unsigned __int16)NtBuildNumber;
    UsedProcessorCount = EtwpQueryUsedProcessorCount(a1);
    a2[14].HighPart = UsedProcessorCount;
    if ( (*(_DWORD *)(a1 + 12) & 0x4000000) != 0 || *(_DWORD *)(a1 + 4) > 0x100000u || UsedProcessorCount > 0x100 )
    {
      v11 = 0;
      v12 = 2;
    }
    else
    {
      v11 = 5;
      v12 = 1;
    }
    BYTE6(a2[13].QuadPart) = v12;
    HIBYTE(a2[13].QuadPart) = v11;
    a2[18].LowPart = 1;
    a2[17].LowPart = *(_DWORD *)(a1 + 12) & 0xFF3FFEFF;
    a2[16].HighPart = *(_DWORD *)(a1 + 292);
    a2[16].LowPart = KeMaximumIncrement;
    a2[19].HighPart = EtwCPUSpeedInMHz;
    KeQueryPerformanceCounter(&PerformanceFrequency);
    _InterlockedExchange64((volatile __int64 *)&EtwPerfFreq, PerformanceFrequency.QuadPart);
    v14 = (unsigned __int8)EtwpIsWow64Logger(a1, v13) == 0;
    v15 = 1;
    v16 = PerformanceFrequency;
    if ( v14 )
    {
      a2[45] = PerformanceFrequency;
      a2[46] = *(LARGE_INTEGER *)(a1 + 304);
      a2[44].QuadPart = EtwpBootTime;
      a2[18].HighPart = 8;
      if ( *(_DWORD *)(a1 + 200) != 4 )
        v15 = *(_DWORD *)(a1 + 200);
      a2[47].LowPart = v15;
      a2[20].QuadPart = HIDWORD(v36);
      a2[21].QuadPart = v37;
      v17 = *(unsigned __int16 *)(a1 + 136);
      v35 = &a2[48];
      v18 = (char *)&a2[48] + v17;
      v19 = 9LL;
    }
    else
    {
      a2[9].LowPart = -1073676286;
      a2[44] = v16;
      a2[18].HighPart = 4;
      a2[45] = *(LARGE_INTEGER *)(a1 + 304);
      a2[43].QuadPart = EtwpBootTime;
      if ( *(_DWORD *)(a1 + 200) != 4 )
        v15 = *(_DWORD *)(a1 + 200);
      a2[46].LowPart = v15;
      a2[20].LowPart = HIDWORD(v36);
      a2[20].HighPart = v37;
      v32 = *(unsigned __int16 *)(a1 + 136);
      v35 = &a2[47];
      v18 = (char *)&a2[47] + v32;
      v19 = 8LL;
    }
    v20 = (unsigned int *)&a2[v19 + 13];
    RtlpQueryTimeZoneInformationWorker(v20, 0xACuLL);
    v21 = *(_QWORD *)(v20 + 17);
    v22 = _mm_srli_si128(*(__m128i *)(v20 + 17), 8).m128i_u64[0];
    *((_WORD *)v20 + 34) = v21;
    *((_WORD *)v20 + 39) = v22;
    *((_WORD *)v20 + 35) = WORD1(v21);
    *((_WORD *)v20 + 37) = WORD2(v21);
    *((_WORD *)v20 + 36) = HIWORD(v22);
    *((_WORD *)v20 + 40) = WORD1(v22);
    *((_WORD *)v20 + 38) = HIWORD(v21);
    *((_WORD *)v20 + 41) = WORD2(v22);
    v23 = *((_QWORD *)v20 + 19);
    v24 = _mm_srli_si128(*(__m128i *)(v20 + 38), 8).m128i_u64[0];
    *((_WORD *)v20 + 76) = v23;
    *((_WORD *)v20 + 81) = v24;
    *((_WORD *)v20 + 77) = WORD1(v23);
    *((_WORD *)v20 + 79) = WORD2(v23);
    *((_WORD *)v20 + 78) = HIWORD(v24);
    *((_WORD *)v20 + 83) = WORD2(v24);
    v25 = v35;
    *((_WORD *)v20 + 80) = HIWORD(v23);
    *((_WORD *)v20 + 82) = WORD1(v24);
    memmove(v25, *(const void **)(a1 + 144), *(unsigned __int16 *)(a1 + 136) + 2LL);
    memmove(v18 + 2, *(const void **)(a1 + 160), *(unsigned __int16 *)(a1 + 152) + 2LL);
    a2[1].LowPart += (v7 + 39) & 0xFFFFFFF8;
    if ( (*(_DWORD *)(a1 + 12) & 0x2000000) != 0 && a2[1].LowPart + 68 <= a2->LowPart )
    {
      v28 = (char *)a2 + a2[1].LowPart;
      *((_DWORD *)v28 + 1) = 327748;
      *(_DWORD *)v28 = -1073610750;
      *((_DWORD *)v28 + 2) = CurrentThread[1].CurrentRunTime;
      *((_DWORD *)v28 + 3) = CurrentThread[1].CycleTime;
      *((_DWORD *)v28 + 6) = CurrentThread->SchedulerApc.SpareLong0;
      *((_DWORD *)v28 + 7) = CurrentThread->UserTime;
      *((_QWORD *)v28 + 2) = *v9;
      v29 = *(_QWORD *)(a1 + 1096);
      v30 = 32LL * *(unsigned __int8 *)(a1 + 818);
      *((_OWORD *)v28 + 2) = *(_OWORD *)(v30 + v29 + 4284);
      v31 = *(_OWORD *)(v30 + v29 + 4300);
      *((_DWORD *)v28 + 16) = 85;
      *((_OWORD *)v28 + 3) = v31;
      a2[1].LowPart += 72;
    }
    if ( a2[1].LowPart + 80 <= a2->LowPart )
    {
      v26 = (char *)a2 + a2[1].LowPart;
      *((_DWORD *)v26 + 1) = 5242960;
      *(_DWORD *)v26 = -1073610750;
      *((_DWORD *)v26 + 2) = CurrentThread[1].CurrentRunTime;
      *((_DWORD *)v26 + 3) = CurrentThread[1].CycleTime;
      *((_DWORD *)v26 + 6) = CurrentThread->SchedulerApc.SpareLong0;
      *((_DWORD *)v26 + 7) = CurrentThread->UserTime;
      *((_QWORD *)v26 + 2) = *v9;
      *((_DWORD *)v26 + 8) = 0;
      *((_DWORD *)v26 + 9) = *(_DWORD *)(*(_QWORD *)(a1 + 1096) + 4228LL);
      *((_OWORD *)v26 + 3) = *(_OWORD *)(*(_QWORD *)(a1 + 1096) + 4176LL);
      *((_QWORD *)v26 + 5) = *(_QWORD *)(a1 + 1280);
      *((_OWORD *)v26 + 4) = *(_OWORD *)(*(_QWORD *)(a1 + 1096) + 4192LL);
      a2[1].LowPart += 80;
    }
    LowPart = a2->LowPart;
    a2[6].LowPart = a2[1].LowPart;
    if ( a2[1].LowPart < LowPart )
    {
      if ( *(_QWORD *)(a1 + 96) != a1 + 96 || *(_DWORD *)(a1 + 120) )
        EtwpAddDebugInfoEvents(a1, (__int64)a2, LowPart, (__int64 *)(a1 + 312), 3);
      if ( *(_QWORD *)(a1 + 1040) != a1 + 1040 )
        EtwpAddBinaryInfoEvents(a1, a2, a2->LowPart, 2LL);
    }
    a2->HighPart = a2[6].LowPart;
    a2[5].HighPart = 3;
    EtwpPrepareHeader(a1, (__int64)a2, 1);
    result = a2[1].LowPart;
    a2->HighPart = result;
  }
  return result;
}
