char __fastcall PpmSnapPerformanceAccumulation(
        __int64 a1,
        unsigned __int8 a2,
        unsigned __int8 a3,
        char a4,
        __int64 a5,
        _DWORD *a6)
{
  _QWORD *v6; // r13
  LARGE_INTEGER v7; // rsi
  unsigned __int8 v8; // di
  LARGE_INTEGER v10; // rax
  __int64 v11; // r8
  LARGE_INTEGER PerformanceCounter; // r12
  unsigned int v13; // edi
  unsigned int v14; // ebx
  unsigned int i; // eax
  unsigned int v16; // r10d
  unsigned int v17; // r11d
  __int64 v18; // rdx
  __int64 v19; // r9
  struct _KPRCB *CurrentPrcb; // r8
  signed __int32 *SchedulerAssist; // rdx
  __int64 *v22; // rbx
  char result; // al
  __int64 v24; // r8
  __int64 v25; // r9
  __int64 v26; // r10
  __int64 v27; // rcx
  signed __int32 v28; // eax
  signed __int32 v29; // ett
  __int64 IdleGenerationCounter; // [rsp+38h] [rbp-60h]
  __int128 v34; // [rsp+40h] [rbp-58h] BYREF
  __int64 v35; // [rsp+50h] [rbp-48h]

  v6 = (_QWORD *)(a1 + 33680);
  v7.QuadPart = 0LL;
  v8 = a3;
  v35 = 0LL;
  IdleGenerationCounter = 0LL;
  v34 = 0LL;
  if ( a3 )
  {
    PerformanceCounter = KeQueryPerformanceCounter(0LL);
    IdleGenerationCounter = PpmGetIdleGenerationCounter(a1);
    if ( !IdleGenerationCounter )
      return 0;
  }
  else
  {
    _disable();
    v10 = KeQueryPerformanceCounter(0LL);
    LOBYTE(v11) = 1;
    PerformanceCounter = v10;
    ((void (__fastcall *)(_QWORD, _QWORD, _QWORD))PpmUpdateTimeAccumulation)(a1, (LARGE_INTEGER)v10.QuadPart, v11);
  }
  *(_OWORD *)a5 = 0LL;
  *(_OWORD *)(a5 + 16) = 0LL;
  *(_OWORD *)(a5 + 32) = 0LL;
  *(_QWORD *)(a5 + 48) = 0LL;
  if ( a6 )
  {
    v13 = a6[12];
    memset(a6, 0, (int)(112 * v13 + 56));
    a6[12] = v13;
    v14 = 0;
    *((_QWORD *)a6 + 1) = *(_QWORD *)(a1 + 33192) + *(_QWORD *)(a1 + 33400);
    *((_QWORD *)a6 + 2) = *(_QWORD *)(a1 + 33160);
    *((_QWORD *)a6 + 3) = *(_QWORD *)(a1 + 33168);
    *((_QWORD *)a6 + 4) = *(_QWORD *)(a1 + 33176);
    *((_QWORD *)a6 + 5) = *(_QWORD *)(a1 + 33184);
    do
    {
      for ( i = 0; i < 2; ++i )
      {
        v16 = 0;
        if ( v13 )
        {
          v17 = i + 2 * v14;
          do
          {
            v18 = v16 + (_DWORD)KiHgsPlusConfiguration * v17;
            v19 = v16 + a6[12] * v17;
            ++v16;
            *(_QWORD *)&a6[2 * v19 + 14] = *(_QWORD *)(*(_QWORD *)(a1 + 33200) + 8 * v18);
          }
          while ( v16 < v13 );
        }
      }
      ++v14;
    }
    while ( v14 < 7 );
    v8 = a3;
  }
  if ( !v8 )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    SchedulerAssist = (signed __int32 *)CurrentPrcb->SchedulerAssist;
    if ( SchedulerAssist )
    {
      _m_prefetchw(SchedulerAssist);
      v28 = *SchedulerAssist;
      do
      {
        v29 = v28;
        v28 = _InterlockedCompareExchange(SchedulerAssist, v28 & 0xFFDFFFFF, v28);
      }
      while ( v29 != v28 );
      if ( (v28 & 0x200000) != 0 )
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
    _enable();
  }
  v22 = 0LL;
  if ( *(_DWORD *)(a1 + 33824) == 3 )
    v22 = (__int64 *)&v34;
  result = PpmUpdatePerformanceFeedback(a1, a2, v8, 0, v22);
  if ( result )
  {
    if ( a4 && PopSnapEnergyCounters )
    {
      LOBYTE(v24) = 1;
      PopSnapEnergyCounters(*(unsigned int *)(a1 + 36), v8, v24);
    }
    if ( v22 )
    {
      PerformanceCounter.QuadPart = *v22;
      v25 = v22[1];
      v26 = v22[2];
    }
    else
    {
      v7 = *(LARGE_INTEGER *)(a1 + 33640);
      if ( PerformanceCounter.QuadPart <= (unsigned __int64)v7.QuadPart )
        PerformanceCounter = *(LARGE_INTEGER *)(a1 + 33640);
      v25 = *(_QWORD *)(a1 + 33624);
      v26 = v6[2];
    }
    if ( v6[3] )
    {
      v27 = v6[8];
    }
    else if ( v6[4] )
    {
      v27 = v6[9];
    }
    else
    {
      v27 = 100LL * v6[6];
    }
    *(_QWORD *)(a5 + 24) = v27;
    if ( v6[4] )
      v27 = v6[9];
    *(_QWORD *)(a5 + 32) = v27;
    *(_QWORD *)(a5 + 40) = v6[11];
    *(_QWORD *)(a5 + 16) = v6[16];
    *(_DWORD *)(a5 + 48) = *(_DWORD *)(a1 + 13148);
    if ( !v8 )
    {
      if ( !v22 )
        v25 += *(_QWORD *)(a1 + 33616);
LABEL_33:
      *(LARGE_INTEGER *)a5 = PerformanceCounter;
      *(_QWORD *)(a5 + 8) = PerformanceCounter.QuadPart - v25;
      if ( a6 )
        *(_QWORD *)a6 = v26;
      return 1;
    }
    if ( IdleGenerationCounter == PpmGetIdleGenerationCounter(a1) )
    {
      if ( !v22 )
        v25 += PerformanceCounter.QuadPart - v7.QuadPart;
      goto LABEL_33;
    }
    return 0;
  }
  return result;
}
