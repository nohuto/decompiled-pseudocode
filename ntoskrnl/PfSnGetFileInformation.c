/*
 * XREFs of PfSnGetFileInformation @ 0x140307D00
 * Callers:
 *     MiCompleteProtoPteFault @ 0x14026F5F0 (MiCompleteProtoPteFault.c)
 *     PfSnLogPageFaultCommon @ 0x140306D88 (PfSnLogPageFaultCommon.c)
 * Callees:
 *     RtlRbInsertNodeEx @ 0x14024D3A0 (RtlRbInsertNodeEx.c)
 *     ExAcquireSpinLockExclusive @ 0x14024DA40 (ExAcquireSpinLockExclusive.c)
 *     ObfDereferenceObject @ 0x1402679B0 (ObfDereferenceObject.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x14027F8D0 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     ExAcquireRundownProtection_0 @ 0x14028D2A0 (ExAcquireRundownProtection_0.c)
 *     ExReleaseRundownProtection_0 @ 0x14028D330 (ExReleaseRundownProtection_0.c)
 *     ExAcquireSpinLockShared @ 0x140308060 (ExAcquireSpinLockShared.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140332B10 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ObfReferenceObjectWithTag @ 0x14033E0E0 (ObfReferenceObjectWithTag.c)
 *     ExQueueWorkItem @ 0x14033F3D0 (ExQueueWorkItem.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PfSnGetFileInformation(__int64 a1, _QWORD *a2)
{
  unsigned int v2; // esi
  unsigned __int64 v3; // rbx
  BOOLEAN v4; // r15
  int v7; // r12d
  _QWORD *v8; // rax
  unsigned __int64 v9; // rcx
  unsigned __int64 *v10; // r13
  __int64 v11; // rcx
  unsigned __int64 v12; // r14
  int v13; // ecx
  unsigned __int64 v14; // rax
  _OWORD *Pool2; // rax
  unsigned __int64 v17; // r14
  KIRQL v18; // al
  __int64 v19; // rdx
  unsigned __int64 v20; // rcx
  unsigned __int64 v21; // rbp
  int v22; // edx
  unsigned __int64 v23; // rax
  __int64 v24; // rax
  unsigned __int64 v25; // rdx
  bool v26; // r8
  int v27; // ecx
  unsigned __int64 v28; // rax
  unsigned __int8 CurrentIrql; // cl
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v32; // eax
  bool v33; // zf
  unsigned __int8 v34; // al
  struct _KPRCB *v35; // r9
  _DWORD *v36; // r8
  int v37; // eax
  unsigned __int8 v38; // cl
  struct _KPRCB *v39; // r10
  _DWORD *v40; // r9
  int v41; // eax
  KIRQL v42; // [rsp+68h] [rbp+10h]

  v2 = 0;
  v3 = a2[3];
  v4 = 0;
  v7 = 0;
  if ( (*(_DWORD *)(a2[1] + 52LL) & 0x10) != 0 )
    return 3221225659LL;
  v8 = (_QWORD *)(a1 + 488);
  v9 = a1 + 520;
  if ( (unsigned __int64)v8 >= v9 )
  {
LABEL_5:
    v10 = (unsigned __int64 *)(a1 + 520);
    v42 = ExAcquireSpinLockShared((PEX_SPIN_LOCK)(a1 + 576));
    v11 = *(_QWORD *)(a1 + 528);
    v12 = *(_QWORD *)(a1 + 520);
    if ( (v11 & 1) != 0 )
    {
      if ( !v12 )
        goto LABEL_16;
      v12 ^= (unsigned __int64)v10;
    }
    v13 = v11 & 1;
    while ( v12 )
    {
      if ( *(_QWORD *)(v12 + 24) <= v3 )
      {
        if ( *(_QWORD *)(v12 + 24) >= v3 )
          break;
        v14 = *(_QWORD *)(v12 + 8);
        if ( v13 && v14 )
        {
LABEL_24:
          v12 ^= v14;
          continue;
        }
      }
      else
      {
        v14 = *(_QWORD *)v12;
        if ( v13 && v14 )
          goto LABEL_24;
      }
      v12 = v14;
    }
LABEL_16:
    ExReleaseSpinLockSharedFromDpcLevel((PEX_SPIN_LOCK)(a1 + 576));
    if ( KiIrqlFlags )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && v42 <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v32 = ~(unsigned __int16)(-1LL << (v42 + 1));
        v33 = (v32 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v32;
        if ( v33 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    __writecr8(v42);
    if ( v12 )
    {
      *(_QWORD *)(a1 + 8LL * (++*(_BYTE *)(a1 + 580) & 3) + 488) = v3;
      return v2;
    }
    Pool2 = (_OWORD *)ExAllocatePool2(64LL, 48LL, 1850762051LL);
    v17 = (unsigned __int64)Pool2;
    if ( !Pool2 )
    {
      if ( (*(_BYTE *)(a1 + 484) & 2) == 0 )
        _InterlockedOr16((volatile signed __int16 *)(a1 + 484), 2u);
      return 3221225626LL;
    }
    *Pool2 = 0LL;
    Pool2[1] = 0LL;
    Pool2[2] = 0LL;
    ObfReferenceObjectWithTag(a2, 0x746C6644u);
    *(_QWORD *)(v17 + 40) = a2;
    *(_QWORD *)(v17 + 24) = v3;
    v18 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 576));
    v19 = *(_QWORD *)(a1 + 528);
    v20 = *v10;
    v21 = v18;
    if ( (v19 & 1) != 0 )
    {
      if ( !v20 )
        goto LABEL_32;
      v20 ^= (unsigned __int64)v10;
    }
    v22 = v19 & 1;
    while ( v20 )
    {
      if ( *(_QWORD *)(v20 + 24) <= v3 )
      {
        if ( *(_QWORD *)(v20 + 24) >= v3 )
          goto LABEL_75;
        v23 = *(_QWORD *)(v20 + 8);
        if ( v22 && v23 )
        {
LABEL_48:
          v20 ^= v23;
          continue;
        }
      }
      else
      {
        v23 = *(_QWORD *)v20;
        if ( v22 && v23 )
          goto LABEL_48;
      }
      v20 = v23;
    }
LABEL_32:
    if ( !*(_QWORD *)(a1 + 568) )
    {
      v4 = ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)(a1 + 360));
      if ( !v4 )
      {
        v2 = -1073741431;
LABEL_75:
        ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(a1 + 576));
        if ( KiIrqlFlags )
        {
          v34 = KeGetCurrentIrql();
          if ( (KiIrqlFlags & 1) != 0 && v34 <= 0xFu && (unsigned __int8)v21 <= 0xFu && v34 >= 2u )
          {
            v35 = KeGetCurrentPrcb();
            v36 = v35->SchedulerAssist;
            v37 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v21 + 1));
            v33 = (v37 & v36[5]) == 0;
            v36[5] &= v37;
            if ( v33 )
              KiRemoveSystemWorkPriorityKick(v35);
          }
        }
        __writecr8(v21);
        ObfDereferenceObject(*(PVOID *)(v17 + 40));
        ExFreePoolWithTag((PVOID)v17, 0);
        return v2;
      }
      *(_QWORD *)(a1 + 568) = a1;
      *(_QWORD *)(a1 + 560) = PfSnNameQueryWorker;
      v7 = 1;
      *(_QWORD *)(a1 + 544) = 0LL;
    }
    *(_QWORD *)(v17 + 32) = *(_QWORD *)(a1 + 536);
    *(_QWORD *)(a1 + 536) = v17 + 32;
    v24 = *(_QWORD *)(a1 + 528);
    v25 = *v10;
    if ( (v24 & 1) != 0 )
    {
      if ( !v25 )
      {
        v26 = 0;
        goto LABEL_55;
      }
      v25 ^= (unsigned __int64)v10;
    }
    v26 = 0;
    v27 = v24 & 1;
    if ( v25 )
    {
      while ( 1 )
      {
        if ( *(_QWORD *)(v25 + 24) <= v3 )
        {
          v28 = *(_QWORD *)(v25 + 8);
          if ( v27 )
          {
            if ( !v28 )
              goto LABEL_53;
            v28 ^= v25;
          }
          if ( !v28 )
          {
LABEL_53:
            v26 = 1;
            break;
          }
        }
        else
        {
          v28 = *(_QWORD *)v25;
          if ( v27 )
          {
            if ( !v28 )
              break;
            v28 ^= v25;
          }
          if ( !v28 )
            break;
        }
        v25 = v28;
      }
    }
LABEL_55:
    RtlRbInsertNodeEx((unsigned __int64 *)(a1 + 520), v25, v26, v17);
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(a1 + 576));
    if ( KiIrqlFlags )
    {
      v38 = KeGetCurrentIrql();
      if ( (KiIrqlFlags & 1) != 0 && v38 <= 0xFu && (unsigned __int8)v21 <= 0xFu && v38 >= 2u )
      {
        v39 = KeGetCurrentPrcb();
        v40 = v39->SchedulerAssist;
        v41 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v21 + 1));
        v33 = (v41 & v40[5]) == 0;
        v40[5] &= v41;
        if ( v33 )
          KiRemoveSystemWorkPriorityKick(v39);
      }
    }
    __writecr8(v21);
    if ( v7 )
    {
      v4 = 0;
      ExQueueWorkItem((PWORK_QUEUE_ITEM)(a1 + 544), DelayedWorkQueue);
    }
    *(_QWORD *)(a1 + 8LL * (++*(_BYTE *)(a1 + 580) & 3) + 488) = v3;
    if ( v4 )
      ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)(a1 + 360));
    return v2;
  }
  while ( *v8 != v3 )
  {
    if ( (unsigned __int64)++v8 >= v9 )
      goto LABEL_5;
  }
  return 0LL;
}
