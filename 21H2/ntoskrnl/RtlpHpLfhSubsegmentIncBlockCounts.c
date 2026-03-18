/*
 * XREFs of RtlpHpLfhSubsegmentIncBlockCounts @ 0x1402314B0
 * Callers:
 *     RtlpHpLfhSlotAllocate @ 0x14034A490 (RtlpHpLfhSlotAllocate.c)
 * Callees:
 *     KiAbThreadRemoveBoostsSlow @ 0x14022B568 (KiAbThreadRemoveBoostsSlow.c)
 *     MmGetSessionIdEx @ 0x140287F30 (MmGetSessionIdEx.c)
 *     KiCheckForKernelApcDelivery @ 0x1402F1D50 (KiCheckForKernelApcDelivery.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14030F700 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     KiAbEntryRemoveFromTree @ 0x14034EE30 (KiAbEntryRemoveFromTree.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     RtlpHpAcquireLockExclusive @ 0x140365AF4 (RtlpHpAcquireLockExclusive.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 */

__int64 __fastcall RtlpHpLfhSubsegmentIncBlockCounts(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        int a4,
        _DWORD *a5,
        int a6,
        char *a7)
{
  int v7; // esi
  char v10; // r10
  char v11; // cl
  __int64 v12; // rax
  __int64 v13; // r12
  signed __int16 *v14; // rbx
  signed __int16 *v15; // rdx
  int v16; // edi
  __int64 SessionId; // r8
  unsigned int v18; // r15d
  unsigned __int64 v19; // r13
  signed __int16 v20; // ax
  __int64 v21; // r9
  ULONG_PTR v22; // r14
  unsigned __int8 v23; // bl
  struct _KTHREAD *CurrentThread; // rdi
  char *p_Process; // rbx
  __int64 v27; // rdx
  unsigned int i; // ecx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v32; // edx
  bool v33; // zf
  int v34; // r8d
  struct _KTHREAD *v35; // rcx
  signed __int16 v36; // tt
  __int64 v37; // [rsp+78h] [rbp+10h]
  char v38; // [rsp+98h] [rbp+30h]

  v7 = a6;
  if ( a6 )
    v10 = *a7;
  else
    v10 = -1;
  v11 = *(_BYTE *)(a2 + 44);
  v12 = a3 >> v11;
  v38 = v10;
  v13 = 2 * v12;
  v14 = (signed __int16 *)(2 * v12 + a2 + *(unsigned __int16 *)(a2 + 46));
  _m_prefetchw(v14);
  v15 = &v14[((a3 + a4 - 1) >> v11) - (unsigned int)v12 + 1];
  v16 = 0;
  LODWORD(v37) = 0;
  SessionId = 0xFFFFFFFFLL;
  v18 = -1;
  if ( v14 >= v15 )
    goto LABEL_16;
  v19 = (unsigned __int64)v15;
  do
  {
    while ( 2 )
    {
      v20 = *v14;
      while ( v20 > 0 )
      {
        v36 = v20;
        v20 = _InterlockedCompareExchange16(v14, v20 + 1, v20);
        if ( v36 == v20 )
        {
          LODWORD(v21) = v37;
          SessionId = 0xFFFFFFFFLL;
          goto LABEL_11;
        }
      }
      if ( !v7 )
      {
        v7 = 1;
        v10 = RtlpHpAcquireLockExclusive(a2 + 24, *(unsigned __int8 *)(a1 + 57));
        v38 = v10;
        continue;
      }
      break;
    }
    SessionId = 0xFFFFFFFFLL;
    if ( v20 )
    {
      ++v16;
      v21 = v13 >> 1;
      v37 = v13 >> 1;
      if ( v18 == -1 )
        v18 = v13 >> 1;
    }
    else
    {
      LODWORD(v21) = v37;
      --v16;
    }
    *v14 = v20 + 1;
LABEL_11:
    ++v14;
    v13 += 2LL;
  }
  while ( (unsigned __int64)v14 < v19 );
  if ( v16 && (RtlpHpLfhPerfFlags & 0x20) != 0 )
    _InterlockedExchangeAdd64(
      (volatile signed __int64 *)(*(__int16 *)(a1 + 58) + a1 + 24),
      (v16 << *(_BYTE *)(a2 + 44)) / 4096);
  if ( v18 == -1 )
  {
LABEL_16:
    if ( v7 )
    {
      v22 = a2 + 24;
      if ( *(_BYTE *)(a1 + 57) )
      {
        ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)v22);
        if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && (CurrentIrql = KeGetCurrentIrql(), CurrentIrql <= 0xFu) )
        {
          v23 = v38;
          if ( (unsigned __int8)v38 <= 0xFu && CurrentIrql >= 2u )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            SchedulerAssist = CurrentPrcb->SchedulerAssist;
            v32 = ~(unsigned __int16)(-1LL << (v38 + 1));
            v33 = (v32 & SchedulerAssist[5]) == 0;
            SchedulerAssist[5] &= v32;
            if ( v33 )
              KiRemoveSystemWorkPriorityKick(CurrentPrcb);
          }
        }
        else
        {
          v23 = v38;
        }
        __writecr8(v23);
      }
      else
      {
        if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v22, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        {
          ExfTryToWakePushLock(v22);
          SessionId = 0xFFFFFFFFLL;
        }
        CurrentThread = KeGetCurrentThread();
        if ( v22 - qword_140C50630 < 0x8000000000LL )
          SessionId = (unsigned int)MmGetSessionIdEx(CurrentThread->ApcState.Process);
        _disable();
        p_Process = (char *)&CurrentThread[1].Process;
        v27 = v22 & 0x7FFFFFFFFFFFFFFCLL;
        for ( i = 0; i < 6; ++i )
        {
          if ( (*(_QWORD *)p_Process & 0x7FFFFFFFFFFFFFFCLL) == v27
            && p_Process[18]
            && (*(_DWORD *)p_Process & 1) == 0
            && *((_DWORD *)p_Process + 2) == (_DWORD)SessionId )
          {
            p_Process[18] = 0;
            if ( *(__int64 *)p_Process < 0 )
            {
              *p_Process |= 2u;
              _enable();
              KiAbEntryRemoveFromTree(p_Process, v27, SessionId);
              _disable();
            }
            v34 = *((_DWORD *)p_Process + 22);
            *((_DWORD *)p_Process + 22) = 0;
            p_Process[17] = 0;
            *(_QWORD *)p_Process = 0LL;
            CurrentThread->AbEntrySummary |= 1 << p_Process[16];
            _enable();
            if ( v34 )
              KiAbThreadRemoveBoostsSlow((ULONG_PTR)CurrentThread, v22, v34);
            goto LABEL_44;
          }
          p_Process += 96;
        }
        if ( (*((_DWORD *)&CurrentThread->0 + 1) & 0x10000) == 0 )
          KeBugCheckEx(0x162u, (ULONG_PTR)CurrentThread, v22, (unsigned int)SessionId, 0LL);
        _enable();
LABEL_44:
        v35 = KeGetCurrentThread();
        v33 = v35->SpecialApcDisable++ == -1;
        if ( v33 && ($CEA84C04E3712D858E5667A507841A2A *)v35->ApcState.ApcListHead[0].Flink != &v35->152 )
          KiCheckForKernelApcDelivery();
      }
    }
  }
  else
  {
    *a7 = v10;
    *a5 = v21 - v18 + 1;
  }
  return v18;
}
