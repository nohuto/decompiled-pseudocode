/*
 * XREFs of KiUpdateTimeAssist @ 0x1403C9BA8
 * Callers:
 *     KeClockInterruptNotify @ 0x14022CD80 (KeClockInterruptNotify.c)
 *     KeResumeClockTimerFromIdle @ 0x14022E860 (KeResumeClockTimerFromIdle.c)
 *     KeSynchronizeTimeToQpc @ 0x140568B80 (KeSynchronizeTimeToQpc.c)
 * Callees:
 *     KeQueryPerformanceCounter @ 0x14022B950 (KeQueryPerformanceCounter.c)
 *     RtlBeginReadTickLock @ 0x140236FBC (RtlBeginReadTickLock.c)
 *     KiComputeNewSystemTime @ 0x1403BB6DC (KiComputeNewSystemTime.c)
 *     RtlWriteAcquireTickLock @ 0x1403BB750 (RtlWriteAcquireTickLock.c)
 *     KiComputeNewInterruptTime @ 0x1403C9D04 (KiComputeNewInterruptTime.c)
 */

__int64 __fastcall KiUpdateTimeAssist(LARGE_INTEGER *a1, char a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rdi
  LARGE_INTEGER v8; // rbp
  __int64 v9; // rbx
  __int64 v10; // rax
  __int64 v11; // rdx
  int v12; // ecx
  __int64 v13; // r11
  __int64 v14; // r8
  unsigned __int64 v15; // r10
  volatile CCHAR v16; // cl
  __int64 v17; // rcx
  __int64 result; // rax
  __int64 TickLock; // rbx
  LARGE_INTEGER PerformanceCounter; // rax
  unsigned __int64 v21; // [rsp+20h] [rbp-18h] BYREF
  __int64 v22; // [rsp+28h] [rbp-10h]

  v21 = 0LL;
  v5 = MmWriteableSharedUserData;
  if ( a2 )
    goto LABEL_2;
  do
  {
    TickLock = RtlBeginReadTickLock((__int64 *)(v5 + 832));
    PerformanceCounter = KeQueryPerformanceCounter(0LL);
    *(_QWORD *)a3 = ((__int64 (__fastcall *)(_QWORD, _QWORD))KiComputeNewInterruptTime)(
                      (LARGE_INTEGER)PerformanceCounter.QuadPart,
                      &v21);
  }
  while ( *(_QWORD *)(v5 + 832) != TickLock );
  if ( v21 > 0x1F4 )
  {
LABEL_2:
    RtlWriteAcquireTickLock((signed __int64 *)(v5 + 832));
    if ( a1 )
      v8 = *a1;
    else
      v8 = KeQueryPerformanceCounter(0LL);
    v22 = KiComputeNewSystemTime(v8.QuadPart);
    v9 = v22;
    v10 = ((__int64 (__fastcall *)(_QWORD, _QWORD))KiComputeNewInterruptTime)((LARGE_INTEGER)v8.QuadPart, &v21);
    v11 = MmWriteableSharedUserData;
    v12 = HIDWORD(v22);
    *(_QWORD *)a3 = v10;
    *(_DWORD *)(v11 + 28) = v12;
    *(_QWORD *)(v11 + 20) = v9;
    *(_DWORD *)(v11 + 16) = *(_DWORD *)(a3 + 4);
    *(_QWORD *)(v11 + 8) = *(_QWORD *)a3;
    *(LARGE_INTEGER *)(v11 + 840) = v8;
    *(LARGE_INTEGER *)(v11 + 848) = v8;
    v13 = MEMORY[0xFFFFF78000000320];
    v14 = (unsigned int)KiTickOffset - v21;
    *(_QWORD *)a4 = MEMORY[0xFFFFF78000000320];
    if ( v14 <= 0 )
    {
      v15 = 1LL;
      v14 += (unsigned int)KeMaximumIncrement;
      if ( v14 <= 0 )
      {
        v16 = KeNumberProcessorsGroup0[1];
        v15 = ((unsigned __int64)(((unsigned __int64)-v14
                                 * (unsigned __int128)(unsigned __int64)KiMaximumIncrementReciprocal) >> 64) >> v16)
            + 2;
        LODWORD(v14) = (((unsigned __int64)(((unsigned __int64)-v14
                                           * (unsigned __int128)(unsigned __int64)KiMaximumIncrementReciprocal) >> 64) >> v16)
                      + 1)
                     * KeMaximumIncrement
                     + v14;
      }
      v17 = MmWriteableSharedUserData;
      *(_QWORD *)a4 = v13 + v15;
      *(_DWORD *)(v17 + 808) = *(_DWORD *)(a4 + 4);
      *(_QWORD *)(v17 + 800) = *(_QWORD *)a4;
    }
    result = *(_QWORD *)(v5 + 832) + 1LL;
    KiTickOffset = v14;
    *(_QWORD *)(v5 + 832) = result;
  }
  else
  {
    *(_QWORD *)a3 = MEMORY[0xFFFFF78000000008];
    result = MEMORY[0xFFFFF78000000320];
    *(_QWORD *)a4 = MEMORY[0xFFFFF78000000320];
  }
  return result;
}
