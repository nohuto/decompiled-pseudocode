/*
 * XREFs of PspImplicitAssignProcessToJob @ 0x140605FB0
 * Callers:
 *     PspInsertProcess @ 0x140607B70 (PspInsertProcess.c)
 * Callees:
 *     PsGetEffectiveServerSilo @ 0x140361880 (PsGetEffectiveServerSilo.c)
 *     PspApplyJobChainLimitsToProcess @ 0x14060514C (PspApplyJobChainLimitsToProcess.c)
 *     PspApplyWorkingSetLimitsToProcess @ 0x140605A6C (PspApplyWorkingSetLimitsToProcess.c)
 *     MmAssignProcessToJob @ 0x140605C30 (MmAssignProcessToJob.c)
 *     PspUnlockJobChain @ 0x140616570 (PspUnlockJobChain.c)
 *     PspLockJobChain @ 0x1406166A0 (PspLockJobChain.c)
 *     PspIncrementJobChainProcessCounts @ 0x14071ED18 (PspIncrementJobChainProcessCounts.c)
 *     PspEstablishJobHierarchy @ 0x14071EDDC (PspEstablishJobHierarchy.c)
 *     PspValidateJobChainLimits @ 0x14071F290 (PspValidateJobChainLimits.c)
 *     PspValidateJobAssignmentMemoryPartition @ 0x14071F3A8 (PspValidateJobAssignmentMemoryPartition.c)
 */

__int64 __fastcall PspImplicitAssignProcessToJob(__int64 a1, __int64 a2, unsigned int a3)
{
  struct _KTHREAD *CurrentThread; // r15
  __int64 EffectiveServerSilo; // rbx
  int v8; // edi
  int v10; // eax
  __int64 v11; // rdx
  __int64 v12; // r8
  volatile signed __int32 *v13; // rax
  __int64 v14; // rcx
  __int64 v15; // rdx
  __int64 v16; // r8
  _DWORD *v17; // r9
  int v18; // ebx
  _DWORD *v19; // r9

  CurrentThread = KeGetCurrentThread();
  PspLockJobChain(a1, CurrentThread, 0LL);
  if ( (a3 & 0x400) != 0 )
  {
    EffectiveServerSilo = PsGetEffectiveServerSilo(a1);
  }
  else
  {
    for ( EffectiveServerSilo = a1; EffectiveServerSilo; EffectiveServerSilo = *(_QWORD *)(EffectiveServerSilo + 1072) )
    {
      v10 = *(_DWORD *)(EffectiveServerSilo + 256);
      if ( (v10 & 0x1000) == 0 )
      {
        if ( (a3 & 1) == 0 )
          goto LABEL_3;
        if ( (v10 & 0x800) == 0 )
          break;
      }
    }
    if ( (a3 & 1) != 0 && EffectiveServerSilo == a1 && (*(_DWORD *)(EffectiveServerSilo + 1320) & 0x40000000) == 0 )
    {
      v8 = -1073741790;
      goto LABEL_5;
    }
  }
LABEL_3:
  if ( !EffectiveServerSilo )
  {
    v8 = 0;
LABEL_5:
    PspUnlockJobChain(a1, CurrentThread, 0LL);
    return (unsigned int)v8;
  }
  if ( !(unsigned __int8)PspValidateJobAssignmentMemoryPartition(EffectiveServerSilo, 0LL, a2, 1LL) )
  {
    v8 = -1073741637;
    goto LABEL_5;
  }
  v8 = PspValidateJobChainLimits(EffectiveServerSilo, v11, v12, a3);
  if ( v8 < 0 )
    goto LABEL_5;
  v8 = PspEstablishJobHierarchy((PVOID)EffectiveServerSilo);
  if ( v8 < 0 )
    goto LABEL_5;
  PspIncrementJobChainProcessCounts(EffectiveServerSilo, 0LL, a2, a3);
  PspApplyJobChainLimitsToProcess(EffectiveServerSilo, 0LL, a2);
  if ( (*(_DWORD *)(EffectiveServerSilo + 1320) & 0x1000) != 0 )
  {
    v13 = (volatile signed __int32 *)(a2 + 2472);
    v14 = 7LL;
    do
    {
      _interlockedbittestandset(v13++, 0x1Fu);
      --v14;
    }
    while ( v14 );
    _interlockedbittestandset((volatile signed __int32 *)(a2 + 2508), 0x1Fu);
  }
  PspUnlockJobChain(a1, CurrentThread, 0LL);
  v18 = PspApplyWorkingSetLimitsToProcess(a2, v15, v16, v17);
  if ( v18 >= 0 && !(unsigned int)MmAssignProcessToJob(a2, 0LL, 0, v19) )
    return (unsigned int)-1073741756;
  return (unsigned int)v18;
}
