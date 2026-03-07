void __fastcall PopFxIdleComponent(ULONG_PTR BugCheckParameter2, ULONG_PTR BugCheckParameter3, char a3)
{
  __int64 v3; // r11
  unsigned int v4; // esi
  ULONG_PTR v7; // rbx
  __int64 InterruptTimePrecise; // rax
  LARGE_INTEGER v9[2]; // [rsp+20h] [rbp-38h] BYREF
  __int64 v10; // [rsp+60h] [rbp+8h] BYREF

  v3 = 0LL;
  v4 = BugCheckParameter3;
  v10 = 0LL;
  if ( (a3 & 3) == 3 )
    PopFxBugCheck(0x614uLL, BugCheckParameter2, (unsigned int)BugCheckParameter3, 1uLL);
  if ( (unsigned int)BugCheckParameter3 >= *(_DWORD *)(BugCheckParameter2 + 828) )
    PopFxBugCheck(0x614uLL, BugCheckParameter2, (unsigned int)BugCheckParameter3, 2uLL);
  _mm_lfence();
  v7 = *(_QWORD *)(*(_QWORD *)(BugCheckParameter2 + 832) + 8LL * (unsigned int)BugCheckParameter3);
  if ( PopFxActiveIdleLevel == 2 )
  {
    InterruptTimePrecise = RtlGetInterruptTimePrecise(v9);
    PpmInterlockedUpdateTimeNoFence(v7 + 144, InterruptTimePrecise, &v10);
  }
  else
  {
    v10 = *(_QWORD *)(v7 + 144);
  }
  if ( (*(_DWORD *)(v7 + 88) & 0x3FFFFFFF) == 0 )
    PopFxBugCheck(0x608uLL, v7, *(int *)(v7 + 88), 0LL);
  if ( _InterlockedDecrement((volatile signed __int32 *)(v7 + 88)) == 0x80000000 )
  {
    if ( !v3 )
      v3 = RtlGetInterruptTimePrecise(v9);
    if ( (*(_DWORD *)(v7 + 92) & 2) == 0
      && !PopFxLowPowerEpoch
      && v3 - v10 < (unsigned __int64)(unsigned int)PopFxActiveIdleThreshold )
    {
      if ( _InterlockedCompareExchange((volatile signed __int32 *)(v7 + 88), -2147483647, 0x80000000) != 0x80000000 )
        return;
      if ( _InterlockedIncrement((volatile signed __int32 *)(v7 + 96)) == 1 )
      {
        if ( _InterlockedIncrement(&PopFxResidentComponentCount) == 1 )
          PopFxArmResidentTimer(0);
        return;
      }
      _InterlockedDecrement((volatile signed __int32 *)(v7 + 96));
      _InterlockedDecrement((volatile signed __int32 *)(v7 + 88));
    }
    if ( PopFxActiveIdleLevel == 1 )
      PpmInterlockedUpdateTimeNoFence(v7 + 144, v3, 0LL);
    if ( (a3 & 2) != 0 )
      PopFxQueueWorkOrder(v7 + 24, BugCheckParameter2);
    else
      PopFxIdleWorker((__int64 *)BugCheckParameter2, v4);
  }
}
