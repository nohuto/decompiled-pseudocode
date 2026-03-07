void __fastcall KiCalibrateTimeAdjustment(ULONG_PTR Argument)
{
  struct _KPRCB *CurrentPrcb; // r14
  __int64 v3; // r12
  volatile signed __int32 *v4; // rcx
  unsigned int v5; // ebp
  volatile signed __int32 *SchedulerAssist; // rcx
  unsigned __int64 v7; // rdi
  unsigned __int64 v8; // rbx
  unsigned __int64 v9; // r9
  unsigned __int64 v10; // rcx
  unsigned int v11; // edi
  __int64 v12; // r11
  int v13; // r9d
  unsigned __int64 v14; // rdx
  __int64 v15; // r9
  int v16; // eax
  __int64 v17; // r8
  __int64 v18; // r11
  char v19; // bp
  __int64 v20; // rbx
  __int64 v21; // rbx
  LARGE_INTEGER PerformanceCounter; // rax
  struct _KPRCB *v23; // rcx
  signed __int32 *v24; // r8
  signed __int32 v25; // eax
  signed __int32 v26; // ett
  ULARGE_INTEGER Dividend; // [rsp+30h] [rbp-68h] BYREF
  LARGE_INTEGER PerformanceFrequency; // [rsp+38h] [rbp-60h] BYREF
  unsigned __int64 v29; // [rsp+40h] [rbp-58h]
  LARGE_INTEGER v30; // [rsp+48h] [rbp-50h] BYREF
  unsigned __int64 v31; // [rsp+50h] [rbp-48h]
  LARGE_INTEGER *v32; // [rsp+58h] [rbp-40h] BYREF
  int v33; // [rsp+60h] [rbp-38h]
  int v34; // [rsp+64h] [rbp-34h]
  unsigned int v35; // [rsp+90h] [rbp-8h]

  v30.QuadPart = 0LL;
  CurrentPrcb = KeGetCurrentPrcb();
  Dividend.QuadPart = 0LL;
  PerformanceFrequency.QuadPart = 0LL;
  v3 = MmWriteableSharedUserData;
  if ( CurrentPrcb->Number == *(_DWORD *)(Argument + 4) )
  {
    _disable();
    SchedulerAssist = (volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist;
    if ( SchedulerAssist )
      _InterlockedOr(SchedulerAssist, 0x200000u);
    v7 = *(_QWORD *)(Argument + 8);
    v5 = v35 >> 9;
    v29 = v7;
    v8 = MEMORY[0xFFFFF78000000008] + v7;
    v31 = MEMORY[0xFFFFF78000000008] + v7;
    KeQueryPerformanceCounter(&PerformanceFrequency);
    if ( *(_BYTE *)Argument )
    {
      v9 = (unsigned int)v7 * (unsigned __int64)PerformanceFrequency.LowPart;
      v10 = (unsigned int)v7 * (unsigned __int64)(unsigned int)PerformanceFrequency.HighPart;
      v11 = v7 * PerformanceFrequency.LowPart;
      v9 >>= 32;
      Dividend.LowPart = v10 + v9 + PerformanceFrequency.LowPart * HIDWORD(v29);
      Dividend.HighPart = PerformanceFrequency.HighPart * HIDWORD(v29)
                        + ((v10 + v9 + PerformanceFrequency.LowPart * (unsigned __int64)HIDWORD(v29)) >> 32);
      *(_DWORD *)(Argument + 20) = RtlEnlargedUnsignedDivide(Dividend, PerformanceFrequency.LowPart, &Dividend.HighPart);
      Dividend.LowPart = v11;
      *(_DWORD *)(Argument + 16) = Dividend.QuadPart / 0x989680;
      *(_QWORD *)(Argument + 16) += v12;
    }
    v13 = KeMaximumIncrement;
    v29 = v8 / (unsigned int)KeMaximumIncrement;
    v14 = v8 % (unsigned int)KeMaximumIncrement;
    *(_QWORD *)(MmWriteableSharedUserData + 944) += *(_QWORD *)(Argument + 8);
    KiTickOffset = v13 - v14;
    if ( MEMORY[0xFFFFF780000003B0] < 0 )
      __fastfail(5u);
    RtlWriteAcquireTickLock((signed __int64 *)(v3 + 832));
    v15 = MmWriteableSharedUserData;
    *(_DWORD *)(MmWriteableSharedUserData + 16) = HIDWORD(v31);
    v16 = HIDWORD(v29);
    *(_QWORD *)(v15 + 8) = v8;
    *(_DWORD *)(v15 + 808) = v16;
    *(_QWORD *)(v15 + 800) = v17;
    *(_QWORD *)(v15 + 848) = v18;
    KiInterruptTimeErrorAccumulator = 0LL;
    RtlWriteReleaseTickLock((__int64 *)(v3 + 832));
    *(_DWORD *)(Argument + 28) = 0;
  }
  else
  {
    _disable();
    v4 = (volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist;
    if ( v4 )
      _InterlockedOr(v4, 0x200000u);
    v5 = v35 >> 9;
    do
      KiPollFreezeExecution();
    while ( *(_DWORD *)(Argument + 28) );
  }
  v19 = v5 & 1;
  if ( KiSelectActiveTimerTable((__int64)CurrentPrcb, 1) )
  {
    v20 = MEMORY[0xFFFFF78000000008] >> 18;
    KeRemoveQueueDpc(&CurrentPrcb->TimerExpirationDpc);
    KeInsertQueueDpc(&CurrentPrcb->TimerExpirationDpc, (PVOID)(unsigned int)(v20 - 256), 0LL);
  }
  CurrentPrcb->LastTick = MEMORY[0xFFFFF78000000320];
  v21 = *(_QWORD *)(Argument + 8);
  if ( *(_BYTE *)Argument )
  {
    HalCalibratePerformanceCounter((volatile signed __int32 *)(Argument + 24), *(_QWORD *)(Argument + 16));
    KeRebaselineInterruptTime();
    if ( (xmmword_140D1EAD0 & 0x8000) != 0 )
    {
      PerformanceCounter = KeQueryPerformanceCounter(0LL);
      v34 = 0;
      v30 = PerformanceCounter;
      v33 = 8;
      v32 = &v30;
      EtwTraceKernelEvent((__int64)&v32, 1u, 0x80008000, 0x1232u, 0x401802u);
    }
  }
  if ( CurrentPrcb->ClockOwner )
    KiUpdateSystemTime(v21, 0LL, 3);
  if ( v19 )
  {
    v23 = KeGetCurrentPrcb();
    v24 = (signed __int32 *)v23->SchedulerAssist;
    if ( v24 )
    {
      _m_prefetchw(v24);
      v25 = *v24;
      do
      {
        v26 = v25;
        v25 = _InterlockedCompareExchange(v24, v25 & 0xFFDFFFFF, v25);
      }
      while ( v26 != v25 );
      if ( (v25 & 0x200000) != 0 )
        KiRemoveSystemWorkPriorityKick((__int64)v23);
    }
    _enable();
  }
}
