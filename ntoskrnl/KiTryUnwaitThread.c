/*
 * XREFs of KiTryUnwaitThread @ 0x140258880
 * Callers:
 *     KeSetEventBoostPriorityEx @ 0x1402396C0 (KeSetEventBoostPriorityEx.c)
 *     KiExpireTimer2 @ 0x14024FED0 (KiExpireTimer2.c)
 *     KiTimerWaitTest @ 0x140251B00 (KiTimerWaitTest.c)
 *     KeSetEvent @ 0x14025C2C0 (KeSetEvent.c)
 *     ExpReleaseResourceSharedForThreadLite @ 0x14025D990 (ExpReleaseResourceSharedForThreadLite.c)
 *     KeReleaseSemaphore @ 0x140292210 (KeReleaseSemaphore.c)
 *     KeRundownQueueCommon @ 0x140292D44 (KeRundownQueueCommon.c)
 *     KeDeleteMutant @ 0x140292FB8 (KeDeleteMutant.c)
 *     KiWakeOtherQueueWaiters @ 0x140293BF4 (KiWakeOtherQueueWaiters.c)
 *     KeSetProcess @ 0x140293FE4 (KeSetProcess.c)
 *     KeTimeOutQueueWaiters @ 0x1402E1F60 (KeTimeOutQueueWaiters.c)
 *     KeSignalGate @ 0x1402F0524 (KeSignalGate.c)
 *     CcUnpinFileDataEx @ 0x140337E50 (CcUnpinFileDataEx.c)
 *     KeWakeWaitChain @ 0x14033AF30 (KeWakeWaitChain.c)
 *     ExpCommitWakeResourceShared @ 0x14033B220 (ExpCommitWakeResourceShared.c)
 *     ExpReleaseResourceExclusiveForThreadLite @ 0x14033B5E0 (ExpReleaseResourceExclusiveForThreadLite.c)
 *     KeReleaseSemaphoreEx @ 0x14033E940 (KeReleaseSemaphoreEx.c)
 *     KeTerminateThread @ 0x140353168 (KeTerminateThread.c)
 *     KiResumeThread @ 0x1403538F8 (KiResumeThread.c)
 *     KiRundownMutants @ 0x140353C9C (KiRundownMutants.c)
 *     KePulseEvent @ 0x14035F580 (KePulseEvent.c)
 *     KeReleaseMutantEx @ 0x14040A86C (KeReleaseMutantEx.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x1403512B0 (KeYieldProcessorEx.c)
 *     KiWaitSatisfyMutant @ 0x140352000 (KiWaitSatisfyMutant.c)
 */

__int64 __fastcall KiTryUnwaitThread(__int64 a1, __int64 a2, __int64 a3, _QWORD *a4)
{
  __int64 v4; // rbx
  unsigned __int8 v5; // si
  char v10; // cl
  int v11; // eax
  __int64 v12; // rdx
  __int64 v13; // rsi
  char v14; // al
  __int64 v15; // rcx
  __int64 result; // rax
  __int64 v17; // rdx
  _QWORD *v18; // rcx
  __int64 v19; // rax
  _BYTE *v20; // rcx
  _DWORD v21[14]; // [rsp+20h] [rbp-38h] BYREF
  int v22; // [rsp+68h] [rbp+10h] BYREF

  v4 = *(_QWORD *)(a2 + 24);
  v5 = 0;
  v22 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(v4 + 64), 0LL) )
  {
    do
      KeYieldProcessorEx(&v22);
    while ( *(_QWORD *)(v4 + 64) );
  }
  if ( *(_BYTE *)(v4 + 388) != 5 )
    goto LABEL_13;
  v10 = *(_BYTE *)(v4 + 112);
  v11 = v10 & 7;
  if ( v11 == 1 || v11 == 4 )
  {
    v12 = *(_QWORD *)(v4 + 232);
    if ( v12 )
    {
      if ( (*(_BYTE *)v12 & 0x7F) == 0x15 )
      {
        v19 = (unsigned __int8)*(_DWORD *)(v4 + 540);
        *(_DWORD *)(v4 + 540) = v19;
        _InterlockedIncrement((volatile signed __int32 *)(v12 + 4 * v19 + 536));
      }
      else
      {
        _InterlockedIncrement((volatile signed __int32 *)(v12 + 40));
      }
    }
    v13 = *(_QWORD *)(v4 + 712);
    if ( v13 )
    {
      v21[0] = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v13 + 32464), 0LL) )
      {
        do
          KeYieldProcessorEx(v21);
        while ( *(_QWORD *)(v13 + 32464) );
      }
      if ( *(_QWORD *)(v4 + 712) )
      {
        v17 = *(_QWORD *)(v4 + 216);
        v18 = *(_QWORD **)(v4 + 224);
        if ( *(_QWORD *)(v17 + 8) != v4 + 216 || *v18 != v4 + 216 )
          __fastfail(3u);
        *v18 = v17;
        *(_QWORD *)(v17 + 8) = v18;
        *(_QWORD *)(v4 + 712) = 0LL;
      }
      _InterlockedAnd64((volatile signed __int64 *)(v13 + 32464), 0LL);
    }
    v14 = *(_BYTE *)(v4 + 388);
    if ( v14 == 1 )
    {
      *(_DWORD *)(v4 + 116) |= 2u;
    }
    else if ( v14 == 5 )
    {
      v15 = (unsigned int)(MEMORY[0xFFFFF78000000320] - *(_DWORD *)(v4 + 436));
      if ( *(_BYTE *)(v4 + 391) )
        *(_QWORD *)(v4 + 1000) += v15;
      else
        *(_QWORD *)(v4 + 992) += v15;
    }
    *(_BYTE *)(v4 + 388) = 7;
    *(_QWORD *)(v4 + 216) = *(_QWORD *)(a1 + 11528);
    *(_QWORD *)(a1 + 11528) = v4 + 216;
    *(_QWORD *)(v4 + 200) = a3;
    *(_QWORD *)(v4 + 976) = 0LL;
    goto LABEL_12;
  }
  if ( (*(_BYTE *)(v4 + 112) & 7) == 0 )
  {
    *(_BYTE *)(v4 + 112) = v10 & 0xF8 | 2;
    *(_QWORD *)(v4 + 200) = a3;
    *(_QWORD *)(v4 + 976) = 0LL;
    *(_BYTE *)(a2 + 17) = 0;
LABEL_12:
    v5 = 1;
    if ( a4 )
    {
      *a4 = v4;
      v20 = *(_BYTE **)(a2 + 32);
      if ( (*v20 & 0x7F) == 2 )
        KiWaitSatisfyMutant(v20, v4, a1);
    }
    goto LABEL_13;
  }
  if ( v11 == 5 )
  {
    *(_BYTE *)(v4 + 112) = v10 & 0xF8 | 6;
  }
  else if ( v11 == 3 )
  {
    *(_BYTE *)(a2 + 17) = 2;
  }
LABEL_13:
  result = v5;
  *(_QWORD *)(v4 + 64) = 0LL;
  ++*(_BYTE *)(a2 + 17);
  return result;
}
