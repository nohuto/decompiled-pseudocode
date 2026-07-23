/*
 * XREFs of PpmInstallFeedbackCounters @ 0x1403C16A8
 * Callers:
 *     PpmRegisterPerfStates @ 0x1407BA470 (PpmRegisterPerfStates.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x140212140 (KxReleaseSpinLock.c)
 *     PpmContinueActiveTimeAccumulation @ 0x14026996C (PpmContinueActiveTimeAccumulation.c)
 *     KeRevertToUserGroupAffinityThread @ 0x14029C6E0 (KeRevertToUserGroupAffinityThread.c)
 *     KeSetSystemGroupAffinityThread @ 0x14029C840 (KeSetSystemGroupAffinityThread.c)
 *     KxAcquireSpinLock @ 0x1402CDEB0 (KxAcquireSpinLock.c)
 *     KeQueryPerformanceCounter @ 0x1402D0BC0 (KeQueryPerformanceCounter.c)
 *     PpmPerfFeedbackCounterRead @ 0x1403C182C (PpmPerfFeedbackCounterRead.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 */

void __fastcall PpmInstallFeedbackCounters(__int64 a1, _QWORD *a2)
{
  __int64 v4; // rcx
  unsigned __int8 CurrentIrql; // si
  __int64 v6; // r12
  __int64 v7; // rbx
  LARGE_INTEGER PerformanceCounter; // rax
  __int64 v9; // r8
  __int16 v10; // bp
  bool v11; // bp
  __int64 v12; // rdx
  __int64 v13; // r14
  __int64 v14; // rax
  _DWORD *SchedulerAssist; // r9
  unsigned __int8 v16; // al
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *v18; // r8
  int v19; // eax
  bool v20; // zf
  int v21; // [rsp+20h] [rbp-68h] BYREF
  _GROUP_AFFINITY v22; // [rsp+28h] [rbp-60h] BYREF
  _GROUP_AFFINITY PreviousAffinity; // [rsp+38h] [rbp-50h] BYREF
  int v24; // [rsp+80h] [rbp-8h]

  v21 = 0;
  v4 = *(unsigned int *)(a1 + 36);
  v22 = 0LL;
  *(_DWORD *)v22.Reserved = 0;
  LODWORD(v4) = KiProcessorIndexToNumberMappingTable[v4];
  *(_DWORD *)&v22.Group = (unsigned __int16)((unsigned int)v4 >> 6);
  v22.Reserved[2] = 0;
  v22.Mask = 1LL << (v4 & 0x3F);
  PreviousAffinity = 0LL;
  KeSetSystemGroupAffinityThread(&v22, &PreviousAffinity);
  CurrentIrql = KeGetCurrentIrql();
  v6 = 2LL;
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    SchedulerAssist[5] |= (-1 << (CurrentIrql + 1)) & 4;
  }
  v7 = a1 + 32840;
  PerformanceCounter = KeQueryPerformanceCounter(0LL);
  PpmContinueActiveTimeAccumulation(a1, PerformanceCounter.QuadPart, v9);
  v10 = v24;
  _disable();
  v11 = (v10 & 0x200) != 0;
  KxAcquireSpinLock((PKSPIN_LOCK)v7);
  v13 = v7 - (_QWORD)a2;
  do
  {
    v14 = *a2;
    if ( *a2 )
    {
      if ( *(_BYTE *)(v14 + 34) )
      {
        *(_BYTE *)(v7 + 137) = 1;
        v14 = *a2;
      }
      *(_QWORD *)((char *)a2 + v13 + 24) = v14;
      LOBYTE(v12) = 1;
      *(_QWORD *)((char *)a2 + v13 + 64) = 100LL * *(_QWORD *)(v7 + 48);
      PpmPerfFeedbackCounterRead(*a2, v12, &v21);
    }
    ++a2;
    --v6;
  }
  while ( v6 );
  if ( *(_QWORD *)(v7 + 32) )
  {
    *(_BYTE *)(v7 + 136) = 1;
  }
  else if ( *(_QWORD *)(v7 + 24) )
  {
    *(_BYTE *)(v7 + 136) = 0;
  }
  KxReleaseSpinLock((PKSPIN_LOCK)v7);
  if ( v11 )
    _enable();
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      v16 = KeGetCurrentIrql();
      if ( v16 <= 0xFu && CurrentIrql <= 0xFu && v16 >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v18 = CurrentPrcb->SchedulerAssist;
        v19 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
        v20 = (v19 & v18[5]) == 0;
        v18[5] &= v19;
        if ( v20 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
  }
  __writecr8(CurrentIrql);
  KeRevertToUserGroupAffinityThread(&PreviousAffinity);
}
