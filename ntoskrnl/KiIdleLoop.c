/*
 * XREFs of KiIdleLoop @ 0x14041AF70
 * Callers:
 *     KiSystemStartup @ 0x140A84010 (KiSystemStartup.c)
 * Callees:
 *     KiIdleSchedule @ 0x140228140 (KiIdleSchedule.c)
 *     PoIdle @ 0x14022D240 (PoIdle.c)
 *     KiRetireDpcList @ 0x1402521E0 (KiRetireDpcList.c)
 *     KiQuantumEnd @ 0x140254F30 (KiQuantumEnd.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x1403C8140 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     HvlNotifyLongSpinWait @ 0x1403C8170 (HvlNotifyLongSpinWait.c)
 *     SwapContext @ 0x14041F970 (SwapContext.c)
 *     KzSetIrqlUnsafe @ 0x140569C60 (KzSetIrqlUnsafe.c)
 */

void __noreturn KiIdleLoop()
{
  struct _KPRCB *CurrentPrcb; // rbx
  _KTHREAD *IdleThread; // rdi
  unsigned int v2; // esi
  _KTHREAD *NextThread; // rsi
  unsigned __int64 v4; // rax
  unsigned __int64 v5; // rax
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h]

  if ( (_BYTE)KeSmapEnabled )
    __asm { clac }
  retaddr = 0LL;
  CurrentPrcb = KeGetCurrentPrcb();
  while ( 1 )
  {
    while ( 1 )
    {
      if ( HvlEnableIdleYield )
        _mm_pause();
      _enable();
      _disable();
      if ( (CurrentPrcb->DpcRequestSummary & 0xBF) != 0 )
        KiRetireDpcList((__int64)CurrentPrcb);
      if ( CurrentPrcb->QuantumEnd )
      {
        CurrentPrcb->QuantumEnd = 0;
        _enable();
        KiQuantumEnd();
        _disable();
      }
      _InterlockedOr8((volatile signed __int8 *)&CurrentPrcb->IdleHalt, 1u);
      if ( !CurrentPrcb->NextThread )
        break;
      CurrentPrcb->IdleHalt = 0;
      _enable();
      IdleThread = CurrentPrcb->IdleThread;
      if ( _interlockedbittestandset64((volatile signed __int32 *)&CurrentPrcb->PrcbLock, 0LL) )
      {
        v2 = 0;
        do
        {
          if ( (++v2 & HvlLongSpinCountMask) == 0
            && (HvlEnlightenments & 0x40) != 0
            && KiCheckVpBackingLongSpinWaitHypercall() )
          {
            HvlNotifyLongSpinWait(v2);
          }
          _mm_pause();
        }
        while ( (CurrentPrcb->PrcbLock & 1) != 0
             || _interlockedbittestandset64((volatile signed __int32 *)&CurrentPrcb->PrcbLock, 0LL) );
      }
      NextThread = CurrentPrcb->NextThread;
      CurrentPrcb->NextThread = 0LL;
      if ( NextThread != IdleThread )
      {
        _disable();
        ++CurrentPrcb->NestingLevel;
        v4 = __rdtsc();
        v5 = (((unsigned __int64)HIDWORD(v4) << 32) | (unsigned int)v4) - CurrentPrcb->StartCycles;
        IdleThread->CycleTime += v5;
        CurrentPrcb->StartCycles += v5;
        _enable();
        CurrentPrcb->CurrentThread = NextThread;
        NextThread->WaitBlockFill6[68] = 2;
        _InterlockedAnd64((volatile signed __int64 *)&CurrentPrcb->PrcbLock, 0LL);
        goto LABEL_33;
      }
      CurrentPrcb->PrcbLock = 0LL;
    }
    if ( CurrentPrcb->IdleSchedule )
    {
      CurrentPrcb->IdleHalt = 0;
      _enable();
      if ( KiIdleSchedule((__int64)CurrentPrcb) )
      {
LABEL_33:
        CurrentPrcb->InterruptRequest |= (CurrentPrcb->DpcRequestSummary & 0xAF) != 0;
        if ( (_BYTE)KeSmapEnabled )
          __asm { stac }
        SwapContext(1LL);
        if ( (_BYTE)KeSmapEnabled )
          __asm { clac }
      }
    }
    else
    {
      if ( (CurrentPrcb->DpcRequestSummary & 0xBF) == 0 )
      {
        if ( (_BYTE)KeSmapEnabled )
          __asm { stac }
        if ( KiIrqlFlags )
          KzSetIrqlUnsafe(0LL);
        else
          __writecr8(0LL);
        PoIdle((ULONG_PTR)CurrentPrcb);
        _enable();
        if ( KiIrqlFlags )
          KzSetIrqlUnsafe(2LL);
        else
          __writecr8(2uLL);
        if ( (_BYTE)KeSmapEnabled )
          __asm { clac }
      }
      CurrentPrcb->IdleHalt = 0;
    }
  }
}
