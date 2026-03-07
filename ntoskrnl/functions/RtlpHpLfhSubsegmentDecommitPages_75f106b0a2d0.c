void __fastcall RtlpHpLfhSubsegmentDecommitPages(unsigned __int64 a1, __int64 a2, int a3, __int64 a4, char a5)
{
  unsigned int v5; // r13d
  unsigned int EmptyUnits; // esi
  int v9; // r12d
  int v10; // ebp
  __int64 v11; // rax
  __int64 v12; // r8
  unsigned __int64 v13; // rdx
  unsigned __int64 v14; // rbx
  unsigned __int64 v15; // rdi
  volatile LONG *v16; // r15
  unsigned __int8 v17; // bl
  KIRQL v18; // bl
  char v19; // cl
  unsigned int v20; // edi
  unsigned int v21; // ebx
  struct _KTHREAD *CurrentThread; // rcx
  bool v23; // zf
  unsigned __int8 CurrentIrql; // cl
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v27; // eax
  struct _KTHREAD *v28; // rcx
  unsigned __int8 v29; // cl
  struct _KPRCB *v30; // r9
  int v31; // eax
  _DWORD *v32; // r8
  KIRQL v33; // [rsp+30h] [rbp-38h]
  unsigned int v34[13]; // [rsp+34h] [rbp-34h] BYREF
  char v35; // [rsp+80h] [rbp+18h]

  v33 = -1;
  v34[0] = 0;
  v5 = a4;
  v35 = -1;
  EmptyUnits = a3;
  v9 = 0;
  if ( a3 < 0 )
  {
    EmptyUnits = 1;
    v10 = 1;
  }
  else
  {
    v10 = 0;
  }
  if ( (RtlpHpLfhPerfFlags & 0x20) == 0 )
    goto LABEL_13;
  if ( v10 )
    goto LABEL_13;
  v11 = *(_QWORD *)a1;
  if ( (*(_BYTE *)(*(_QWORD *)a1 + 13LL) & 8) != 0 )
    goto LABEL_13;
  v12 = *(__int16 *)(v11 + 22);
  v13 = *(_QWORD *)(v12 + v11 + 8) >> *(_BYTE *)(v11 + 11);
  if ( v13 <= 8 )
    v13 = 8LL;
  v14 = *(_QWORD *)(v12 + v11 + 8) >> *(_BYTE *)(v11 + 12);
  if ( v14 <= 8 )
    v14 = 8LL;
  if ( (v15 = *(_QWORD *)(v12 + v11 + 16) + *(_QWORD *)(v12 + v11 + 24), v15 > v13)
    && (int)RtlpHpScheduleCompaction(*(_QWORD *)(v11 + 56), v13, v12, a4) < 0
    || v15 > v14 )
  {
LABEL_13:
    if ( EmptyUnits < *(unsigned __int8 *)(a2 + 45) )
    {
      do
      {
        EmptyUnits = RtlpHpLfhSubsegmentFindEmptyUnits(a2, EmptyUnits, v34);
        if ( EmptyUnits == -1 )
          break;
        if ( v34[0] < v5 )
        {
          if ( !v10 )
            break;
          EmptyUnits += v34[0];
        }
        else if ( v9 )
        {
          v19 = *(_BYTE *)(a2 + 44);
          v20 = EmptyUnits << v19;
          v21 = v34[0] << v19;
          ((void (__fastcall *)(_QWORD, __int64, _QWORD))(a1 ^ RtlpHpHeapGlobals ^ *(_QWORD *)(a1 + 32)))(
            *(_QWORD *)a1,
            a2 + (EmptyUnits << v19),
            v34[0] << v19);
          RtlpHpLfhSubsegmentDecBlockCounts(a1, a2, v20, v21);
          if ( !v10 )
            goto LABEL_16;
          EmptyUnits += v34[0];
        }
        else
        {
          if ( (a5 & 1) == 0 )
            v33 = RtlpHpAcquireLockShared((volatile LONG *)(a1 + 72), *(unsigned __int8 *)(a1 + 57));
          v9 = 2;
          v35 = RtlpHpAcquireLockExclusive(a2 + 24, *(unsigned __int8 *)(a1 + 57));
        }
      }
      while ( EmptyUnits < *(unsigned __int8 *)(a2 + 45) );
      if ( !v9 )
        return;
LABEL_16:
      v16 = (volatile LONG *)(a2 + 24);
      if ( *(_BYTE *)(a1 + 57) )
      {
        ExReleaseSpinLockExclusiveFromDpcLevel(v16);
        if ( KiIrqlFlags && (CurrentIrql = KeGetCurrentIrql(), (KiIrqlFlags & 1) != 0) && CurrentIrql <= 0xFu )
        {
          v17 = v35;
          if ( (unsigned __int8)v35 <= 0xFu && CurrentIrql >= 2u )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            SchedulerAssist = CurrentPrcb->SchedulerAssist;
            v27 = ~(unsigned __int16)(-1LL << (v35 + 1));
            v23 = (v27 & SchedulerAssist[5]) == 0;
            SchedulerAssist[5] &= v27;
            if ( v23 )
              KiRemoveSystemWorkPriorityKick(CurrentPrcb);
          }
        }
        else
        {
          v17 = v35;
        }
        __writecr8(v17);
      }
      else
      {
        if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v16, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock((volatile signed __int64 *)v16);
        KeAbPostRelease((ULONG_PTR)v16);
        CurrentThread = KeGetCurrentThread();
        v23 = CurrentThread->SpecialApcDisable++ == -1;
        if ( v23
          && ($C71981A45BEB2B45F82C232A7085991E *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
        {
          KiCheckForKernelApcDelivery();
        }
      }
      if ( (a5 & 1) == 0 )
      {
        if ( *(_BYTE *)(a1 + 57) )
        {
          ExReleaseSpinLockSharedFromDpcLevel((PEX_SPIN_LOCK)(a1 + 72));
          if ( KiIrqlFlags && (v29 = KeGetCurrentIrql(), (KiIrqlFlags & 1) != 0) && v29 <= 0xFu )
          {
            v18 = v33;
            if ( v33 <= 0xFu && v29 >= 2u )
            {
              v30 = KeGetCurrentPrcb();
              v31 = ~(unsigned __int16)(-1LL << (v33 + 1));
              v32 = v30->SchedulerAssist;
              v23 = (v31 & v32[5]) == 0;
              v32[5] &= v31;
              if ( v23 )
                KiRemoveSystemWorkPriorityKick(v30);
            }
          }
          else
          {
            v18 = v33;
          }
          __writecr8(v18);
        }
        else
        {
          if ( _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 72), 0LL, 17LL) != 17 )
            ExfReleasePushLockShared((signed __int64 *)(a1 + 72));
          KeAbPostRelease(a1 + 72);
          v28 = KeGetCurrentThread();
          v23 = v28->SpecialApcDisable++ == -1;
          if ( v23 && ($C71981A45BEB2B45F82C232A7085991E *)v28->ApcState.ApcListHead[0].Flink != &v28->152 )
            KiCheckForKernelApcDelivery();
        }
      }
    }
  }
}
