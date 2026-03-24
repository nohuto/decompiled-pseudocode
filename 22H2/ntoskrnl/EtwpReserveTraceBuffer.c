/*
 * XREFs of EtwpReserveTraceBuffer @ 0x1402D0E80
 * Callers:
 *     EtwpTraceMessageVa @ 0x14025CDC0 (EtwpTraceMessageVa.c)
 *     EtwpEventWriteFull @ 0x14025D7C0 (EtwpEventWriteFull.c)
 *     EtwpLogKernelEvent @ 0x1402D0790 (EtwpLogKernelEvent.c)
 *     EtwpLogSystemEventUnsafe @ 0x1403A993C (EtwpLogSystemEventUnsafe.c)
 *     EtwpLogContextSwapEvent @ 0x1403A9C30 (EtwpLogContextSwapEvent.c)
 *     EtwTraceEvent @ 0x1405A5FE0 (EtwTraceEvent.c)
 *     EtwTraceRaw @ 0x1405A6488 (EtwTraceRaw.c)
 *     EtwpReserveWithPebsIndex @ 0x1405A9374 (EtwpReserveWithPebsIndex.c)
 *     EtwpReserveWithPmcCounters @ 0x1405A9408 (EtwpReserveWithPmcCounters.c)
 *     EtwpWriteUserEvent @ 0x140627FE0 (EtwpWriteUserEvent.c)
 * Callees:
 *     KeQueryPerformanceCounter @ 0x14022BCB0 (KeQueryPerformanceCounter.c)
 *     EtwpSwitchBuffer @ 0x14032EE9C (EtwpSwitchBuffer.c)
 *     EtwpUnlockBufferList @ 0x14032F2D4 (EtwpUnlockBufferList.c)
 *     EtwpLockBufferList @ 0x14032F320 (EtwpLockBufferList.c)
 *     RtlGetSystemTimePrecise @ 0x140341F30 (RtlGetSystemTimePrecise.c)
 *     EtwpUpdateEventsLostCount @ 0x14036C6C8 (EtwpUpdateEventsLostCount.c)
 *     _guard_dispatch_icall @ 0x140407C30 (_guard_dispatch_icall.c)
 *     EtwpGetTimeStampAndQpcDelta @ 0x1405AB6E4 (EtwpGetTimeStampAndQpcDelta.c)
 */

unsigned __int64 __fastcall EtwpReserveTraceBuffer(__int64 i, __int64 a2, __int64 a3, LARGE_INTEGER *a4, int a5)
{
  __int64 v7; // rdi
  __int64 v8; // r9
  __int64 v9; // r8
  int v10; // r12d
  _QWORD *v11; // rsi
  unsigned __int64 *v12; // r14
  unsigned __int64 v13; // rbx
  signed __int64 v14; // rax
  int v15; // eax
  unsigned __int32 v16; // ebp
  unsigned __int64 v17; // rax
  LARGE_INTEGER v18; // rax
  unsigned __int32 v19; // eax
  signed __int64 v20; // rax
  signed __int64 j; // rcx
  signed __int64 v22; // rtt
  unsigned __int64 result; // rax
  int v24; // eax
  int v25; // ebx
  signed __int64 v26; // rax
  signed __int64 v27; // rtt
  signed __int64 v28; // r11
  unsigned __int32 v29; // eax
  bool v30; // zf
  LARGE_INTEGER PerformanceCounter; // rax
  LONGLONG v32; // r8
  signed __int64 v33; // r9
  unsigned int v34; // [rsp+30h] [rbp-58h]
  unsigned int v35; // [rsp+34h] [rbp-54h]
  unsigned int Number; // [rsp+38h] [rbp-50h]
  signed __int64 v37; // [rsp+40h] [rbp-48h] BYREF
  LARGE_INTEGER v38; // [rsp+48h] [rbp-40h] BYREF
  LARGE_INTEGER v39; // [rsp+50h] [rbp-38h] BYREF
  __int64 v40; // [rsp+58h] [rbp-30h]
  char v41; // [rsp+90h] [rbp+8h] BYREF

  v7 = i;
  if ( *(int *)(i + 16) < 0 || (unsigned int)a2 > *(_DWORD *)(i + 8) )
  {
LABEL_40:
    EtwpUpdateEventsLostCount(v7);
    return 0LL;
  }
  v8 = *(unsigned int *)(i + 4);
  v9 = *(unsigned int *)i;
  v10 = (a2 + 7) & 0xFFFFFFF8;
  v34 = *(_DWORD *)(i + 4);
  v35 = *(_DWORD *)i;
  while ( 1 )
  {
    Number = KeGetCurrentPrcb()->Number;
    v11 = (_QWORD *)(*(_QWORD *)(*(_QWORD *)(v7 + 1080) + 4136LL) + ((unsigned __int64)Number << 6));
    if ( (*(_DWORD *)(v7 + 12) & 0x10000000) != 0 )
    {
      v12 = (unsigned __int64 *)(v7 + 144);
    }
    else
    {
      i = (unsigned int)v9;
      v12 = (unsigned __int64 *)(*v11 + 8LL * (unsigned int)v9);
    }
    v41 = 0;
    _m_prefetchw(v12);
    v13 = *v12;
    if ( (*v12 & 0xF) != 0 )
    {
      do
      {
        i = v13 - 1;
        v14 = _InterlockedCompareExchange64((volatile signed __int64 *)v12, v13 - 1, v13);
        if ( v13 == v14 )
          break;
        v13 = v14;
      }
      while ( (v14 & 0xF) != 0 );
    }
    if ( v13 )
    {
      v15 = v13 & 0xF;
      if ( (v13 & 0xF) != 0 )
      {
        v13 &= 0xFFFFFFFFFFFFFFF0uLL;
        if ( v15 == 1 )
        {
          _InterlockedExchangeAdd((volatile signed __int32 *)(v13 + 12), 0xFu);
          _m_prefetchw(v12);
          v26 = *v12;
          for ( i = (*v12 & 0xF) + 15; (v26 & 0xF) == 0; i = (v26 & 0xF) + 15 )
          {
            i = v26 & 0xFFFFFFFFFFFFFFF0uLL;
            if ( v13 != (v26 & 0xFFFFFFFFFFFFFFF0uLL) )
              break;
            i = v26 + 15;
            v27 = v26;
            v26 = _InterlockedCompareExchange64((volatile signed __int64 *)v12, v26 + 15, v26);
            if ( v27 == v26 )
              goto LABEL_11;
          }
          _InterlockedExchangeAdd((volatile signed __int32 *)(v13 + 12), 0xFFFFFFF1);
        }
      }
      else
      {
        EtwpLockBufferList(v7, &v41);
        v13 = *v12 & 0xFFFFFFFFFFFFFFF0uLL;
        if ( v13 )
          _InterlockedIncrement((volatile signed __int32 *)(v13 + 12));
        EtwpUnlockBufferList(v7, &v41);
        v9 = v35;
        v8 = v34;
      }
LABEL_11:
      if ( v13 )
      {
        v37 = 0LL;
        v38.QuadPart = 0LL;
        _m_prefetchw((const void *)(v13 + 8));
        v16 = *(_DWORD *)(v13 + 8);
        if ( v16 <= (unsigned int)v8 )
          break;
      }
    }
LABEL_29:
    v25 = EtwpSwitchBuffer(v7, v13, (_DWORD)v12, Number, a5);
    if ( (*(_DWORD *)(v7 + 12) & 0x4000000) != 0 )
    {
      PerformanceCounter = KeQueryPerformanceCounter(0LL);
      v32 = PerformanceCounter.QuadPart
          - _InterlockedExchange64((volatile __int64 *)(v7 + 1240), PerformanceCounter.QuadPart);
      do
      {
        v33 = *(_QWORD *)(v7 + 1248);
        if ( v33 )
        {
          a2 = ((v33 + v32 + 2 * v33) >> 63) & 3;
          i = (v33 + v32 + 2 * v33) / 4;
        }
        else
        {
          i = v32;
        }
      }
      while ( v33 != _InterlockedCompareExchange64((volatile signed __int64 *)(v7 + 1248), i, v33) );
    }
    if ( v25 < 0 )
      goto LABEL_40;
    v9 = v35;
    v8 = v34;
  }
  while ( 1 )
  {
    if ( (*(_DWORD *)(v7 + 832) & 0x8000000) != 0 )
    {
      if ( (unsigned int)EtwpGetTimeStampAndQpcDelta(v7, &v38, &v37) )
      {
        v9 = v35;
LABEL_62:
        v8 = v34;
        goto LABEL_34;
      }
      v9 = v35;
      v28 = *(_QWORD *)(8LL * v35 + v11[2]);
      v40 = 8LL * v35;
      if ( v37 != v28 || v16 == 72 )
      {
        i = v16 + 24;
        v29 = _InterlockedCompareExchange((volatile signed __int32 *)(v13 + 8), i, v16);
        if ( v16 == v29 )
        {
          if ( (unsigned __int64)v29 + 24 > v34 )
          {
            *(_DWORD *)(v13 + 4) = v29;
            goto LABEL_29;
          }
          a2 = v11[2] + v40;
          i = v37;
          v30 = v28 == _InterlockedCompareExchange64((volatile signed __int64 *)a2, v37, v28);
          *(_DWORD *)(v29 + v13 + 4) = 5308440;
          v16 = v29;
          *(LARGE_INTEGER *)(v29 + v13 + 8) = v38;
          if ( v30 )
          {
            *(_QWORD *)(v29 + v13 + 16) = v37;
            *(_DWORD *)(v29 + v13) = -1072627710;
          }
          else
          {
            *(_DWORD *)(v29 + v13) = -1072627711;
            *(_QWORD *)(v29 + v13 + 16) = 0LL;
          }
        }
        else
        {
          v16 = v29;
        }
        goto LABEL_62;
      }
      v18 = v38;
      v8 = v34;
    }
    else
    {
      v17 = *(_QWORD *)(v7 + 40);
      if ( v17 > 3 )
        goto LABEL_70;
      if ( (_DWORD)v17 == 3 )
      {
        v18.QuadPart = __rdtsc();
      }
      else if ( (_DWORD)v17 )
      {
        v24 = v17 - 1;
        if ( v24 )
        {
          if ( v24 != 1 )
LABEL_70:
            __fastfail(0x3Du);
          v39.QuadPart = 0LL;
          ((void (__fastcall *)(LARGE_INTEGER *, __int64, __int64))off_140C009E0[0])(&v39, a2, v9);
          v18 = v39;
          v9 = v35;
          v8 = v34;
        }
        else
        {
          v18 = KeQueryPerformanceCounter(0LL);
          v9 = v35;
          v8 = v34;
        }
      }
      else
      {
        v18.QuadPart = RtlGetSystemTimePrecise(i, a2, v9, v8);
        v9 = v35;
        v8 = v34;
      }
    }
    *a4 = v18;
    i = v10 + v16;
    v19 = _InterlockedCompareExchange((volatile signed __int32 *)(v13 + 8), i, v16);
    a2 = v19;
    if ( v16 == v19 )
      break;
    v16 = v19;
LABEL_34:
    if ( v16 > (unsigned int)v8 )
      goto LABEL_29;
  }
  if ( v19 + v10 > (unsigned int)v8 )
  {
    *(_DWORD *)(v13 + 4) = v19;
    goto LABEL_29;
  }
  if ( (*(_DWORD *)(v7 + 12) & 0x400) != 0 )
  {
    v20 = *(_QWORD *)(v13 + 16);
    for ( j = a4->QuadPart; a4->QuadPart > v20; j = a4->QuadPart )
    {
      v22 = v20;
      v20 = _InterlockedCompareExchange64((volatile signed __int64 *)(v13 + 16), j, v20);
      if ( v22 == v20 )
        break;
    }
  }
  ++*(_QWORD *)(v11[1] + 8LL * (unsigned int)v9);
  result = v13 + a2;
  *(_QWORD *)a3 = v13;
  *(_QWORD *)(a3 + 8) = v12;
  *(_DWORD *)(a3 + 16) = a2;
  return result;
}
