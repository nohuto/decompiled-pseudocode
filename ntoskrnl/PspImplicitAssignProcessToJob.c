/*
 * XREFs of PspImplicitAssignProcessToJob @ 0x140797010
 * Callers:
 *     PspInsertProcess @ 0x14070E514 (PspInsertProcess.c)
 * Callees:
 *     PsGetEffectiveServerSilo @ 0x140294DF0 (PsGetEffectiveServerSilo.c)
 *     PspUnlockJobChain @ 0x1406F8F60 (PspUnlockJobChain.c)
 *     PspLockJobChain @ 0x1406F9018 (PspLockJobChain.c)
 *     PspApplyWorkingSetLimitsToProcess @ 0x1406FEF9C (PspApplyWorkingSetLimitsToProcess.c)
 *     PspApplyJobChainLimitsToProcess @ 0x1406FF27C (PspApplyJobChainLimitsToProcess.c)
 *     PspValidateJobChainLimits @ 0x1406FFEBC (PspValidateJobChainLimits.c)
 *     MmAssignProcessToJob @ 0x1407000C4 (MmAssignProcessToJob.c)
 *     PspEstablishJobHierarchy @ 0x1407001E0 (PspEstablishJobHierarchy.c)
 *     PspValidateJobAssignmentMemoryPartition @ 0x140700D44 (PspValidateJobAssignmentMemoryPartition.c)
 *     PspIncrementJobChainProcessCounts @ 0x140700E68 (PspIncrementJobChainProcessCounts.c)
 */

__int64 __fastcall PspImplicitAssignProcessToJob(_DWORD *Object, __int64 a2, __int16 a3)
{
  struct _KTHREAD *CurrentThread; // r15
  _DWORD *EffectiveServerSilo; // rbx
  int v8; // eax
  __int64 v9; // rdx
  __int64 v10; // r8
  int v11; // edi
  int v12; // ebx
  volatile signed __int32 *v14; // rax
  __int64 v15; // rcx

  CurrentThread = KeGetCurrentThread();
  PspLockJobChain((__int64)Object, (__int64)CurrentThread, 0);
  if ( (a3 & 0x400) != 0 )
  {
    EffectiveServerSilo = (_DWORD *)PsGetEffectiveServerSilo((__int64)Object);
  }
  else
  {
    EffectiveServerSilo = Object;
    if ( Object )
    {
      while ( 1 )
      {
        v8 = EffectiveServerSilo[64];
        if ( (v8 & 0x1000) == 0 )
        {
          if ( (a3 & 1) == 0 )
            goto LABEL_5;
          if ( (v8 & 0x800) == 0 )
            break;
        }
        EffectiveServerSilo = (_DWORD *)*((_QWORD *)EffectiveServerSilo + 161);
        if ( !EffectiveServerSilo )
          goto LABEL_15;
      }
    }
    else
    {
LABEL_15:
      if ( (a3 & 1) == 0 )
        goto LABEL_5;
    }
    if ( EffectiveServerSilo == Object && (EffectiveServerSilo[384] & 0x40000000) == 0 )
    {
      v11 = -1073741790;
      goto LABEL_18;
    }
  }
LABEL_5:
  if ( !EffectiveServerSilo )
  {
    v11 = 0;
LABEL_18:
    PspUnlockJobChain((__int64)Object, (__int64)CurrentThread, 0);
    return (unsigned int)v11;
  }
  if ( !PspValidateJobAssignmentMemoryPartition((__int64)EffectiveServerSilo, 0LL, a2, 1) )
  {
    v11 = -1073741637;
    goto LABEL_18;
  }
  v11 = PspValidateJobChainLimits((__int64)EffectiveServerSilo, v9, v10, a3);
  if ( v11 < 0 )
    goto LABEL_18;
  v11 = PspEstablishJobHierarchy((char *)EffectiveServerSilo, a2, 0LL, 1u);
  if ( v11 < 0 )
    goto LABEL_18;
  PspIncrementJobChainProcessCounts((__int64)EffectiveServerSilo, 0LL, a2, a3);
  PspApplyJobChainLimitsToProcess((__int64)EffectiveServerSilo, 0LL, a2);
  if ( (EffectiveServerSilo[384] & 0x1000) != 0 )
  {
    v14 = (volatile signed __int32 *)(a2 + 2472);
    v15 = 7LL;
    do
    {
      _interlockedbittestandset(v14++, 0x1Fu);
      --v15;
    }
    while ( v15 );
    _interlockedbittestandset((volatile signed __int32 *)(a2 + 2508), 0x1Fu);
  }
  PspUnlockJobChain((__int64)Object, (__int64)CurrentThread, 0);
  v12 = PspApplyWorkingSetLimitsToProcess(a2);
  if ( v12 >= 0 && !(unsigned int)MmAssignProcessToJob(a2, 0LL, 0) )
    return (unsigned int)-1073741756;
  return (unsigned int)v12;
}
