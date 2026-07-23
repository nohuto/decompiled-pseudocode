/*
 * XREFs of VfFreePoolNotification @ 0x1409E1074
 * Callers:
 *     ExpFreePoolChecks @ 0x14021898C (ExpFreePoolChecks.c)
 *     ExFreeHeapPool @ 0x14034C810 (ExFreeHeapPool.c)
 *     VerifierExFreePool @ 0x1409D6190 (VerifierExFreePool.c)
 *     VerifierExFreePoolWithTag @ 0x1409D6220 (VerifierExFreePoolWithTag.c)
 * Callees:
 *     VfIsVerifierEnabled @ 0x140252060 (VfIsVerifierEnabled.c)
 *     VfRemLockDeleteMemoryRange @ 0x1409D770C (VfRemLockDeleteMemoryRange.c)
 *     VfDeadlockDeleteMemoryRange @ 0x1409DEE30 (VfDeadlockDeleteMemoryRange.c)
 *     ViPoolLogStackTrace @ 0x1409E1398 (ViPoolLogStackTrace.c)
 */

char __fastcall VfFreePoolNotification(unsigned __int64 a1, __int64 a2)
{
  int IsVerifierEnabled; // eax

  LOBYTE(IsVerifierEnabled) = VfRuleClasses;
  if ( a2 )
  {
    if ( (VfRuleClasses & 8) != 0 && VfPoolTraces )
      ((void (*)(void))ViPoolLogStackTrace)();
    IsVerifierEnabled = VfIsVerifierEnabled();
    if ( IsVerifierEnabled )
    {
      if ( (VfRuleClasses & 0xFFAFFFFF) != 0
        || (LOBYTE(IsVerifierEnabled) = BYTE4(VfRuleClasses), (VfRuleClasses & 0x200000000LL) != 0)
        || (VfRuleClasses & 0x400000000LL) != 0 )
      {
        VfDeadlockDeleteMemoryRange(a1, a2);
        LOBYTE(IsVerifierEnabled) = VfRemLockDeleteMemoryRange(a1, a2);
      }
    }
  }
  else if ( (VfRuleClasses & 8) != 0 )
  {
    if ( (MmVerifierData & 0x400000) == 0 || (LOBYTE(IsVerifierEnabled) = VfFlightOptions, (VfFlightOptions & 9) != 0) )
    {
      if ( VfPoolTraces )
        LOBYTE(IsVerifierEnabled) = ViPoolLogStackTrace(a1, 16LL);
    }
  }
  return IsVerifierEnabled;
}
