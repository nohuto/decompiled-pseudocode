/*
 * XREFs of RtlpHpLfhBucketUpdateAffinityMapping @ 0x1402DF844
 * Callers:
 *     RtlpHpLfhSlotAllocate @ 0x140310BA0 (RtlpHpLfhSlotAllocate.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x140238F40 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x140262B70 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1402B7850 (KiCheckForKernelApcDelivery.c)
 *     KeGetCurrentProcessorNumberEx @ 0x1402C1200 (KeGetCurrentProcessorNumberEx.c)
 *     RtlpHpAcquireLockExclusive @ 0x14030ABA4 (RtlpHpAcquireLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140332B10 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     RtlpHpLfhBucketAllocateSlot @ 0x1403CF094 (RtlpHpLfhBucketAllocateSlot.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 */

void __fastcall RtlpHpLfhBucketUpdateAffinityMapping(__int64 a1, __int64 a2)
{
  char CurrentProcessorNumber; // al
  unsigned int v5; // edx
  unsigned int v6; // ecx
  struct _KTHREAD *CurrentThread; // rdx
  __int64 v8; // r13
  __int64 v9; // rbx
  volatile signed __int64 *v10; // rdi
  unsigned __int8 v11; // al
  unsigned __int8 *v12; // rdx
  unsigned __int64 v13; // r14
  unsigned __int8 *v14; // r10
  unsigned int v15; // ecx
  __int64 v16; // r8
  __int64 v17; // rax
  __int64 v18; // rbx
  unsigned int v19; // edx
  _BYTE *v20; // r8
  unsigned __int8 v21; // al
  struct _KTHREAD *v22; // rcx
  bool v23; // zf
  __int64 v24; // r8
  __int64 Slot; // rax
  struct _KTHREAD *v26; // rcx
  unsigned __int8 v27; // al
  struct _KPRCB *v28; // r9
  _DWORD *v29; // r8
  int v30; // ecx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v34; // edx
  signed __int32 v35[8]; // [rsp+0h] [rbp-B8h] BYREF
  __int64 v36; // [rsp+20h] [rbp-98h]
  _BYTE v37[64]; // [rsp+30h] [rbp-88h] BYREF

  CurrentProcessorNumber = KeGetCurrentProcessorNumberEx(0LL);
  v5 = *(unsigned __int8 *)(a1 + 56);
  v6 = CurrentProcessorNumber & 0x3F;
  if ( v6 >= v5 )
  {
    if ( v6 == v5 || (_BYTE)v5 == 1 )
      v6 = 0;
    else
      v6 = *(unsigned __int8 *)(*(_QWORD *)(a1 + 48) + -1 - v5 + v6);
  }
  CurrentThread = KeGetCurrentThread();
  v8 = v6;
  v9 = *(unsigned __int8 *)(*(_QWORD *)(a2 + 88) + v6);
  if ( BYTE5(CurrentThread[1].Spare18) != v6 )
  {
    BYTE5(CurrentThread[1].Spare18) = v6;
    return;
  }
  memset(v37, 0, sizeof(v37));
  v10 = (volatile signed __int64 *)(a2 + 80);
  v11 = RtlpHpAcquireLockExclusive(a2 + 80, *(unsigned __int8 *)(a1 + 57));
  v12 = *(unsigned __int8 **)(a2 + 88);
  v13 = v11;
  v14 = &v12[v8];
  if ( (_BYTE)v9 != v12[v8] )
    goto LABEL_16;
  v15 = *(unsigned __int8 *)(a1 + 56);
  if ( (_BYTE)v15 )
  {
    v16 = *(unsigned __int8 *)(a1 + 56);
    do
    {
      v17 = *v12++;
      ++v37[v17];
      --v16;
    }
    while ( v16 );
  }
  if ( v37[v9] == 1 )
    goto LABEL_16;
  v18 = (unsigned int)(v9 + 1);
  v19 = v18;
  if ( (unsigned int)v18 < v15 )
  {
    v20 = &v37[(unsigned int)v18];
    do
    {
      if ( !*v20 )
        break;
      if ( *v20 < v37[v18] )
        v18 = v19;
      ++v19;
      ++v20;
    }
    while ( v19 < v15 );
  }
  if ( v37[v18] )
  {
    *v14 = v18;
LABEL_16:
    if ( *(_BYTE *)(a1 + 57) )
    {
      ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(a2 + 80));
      if ( KiIrqlFlags )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && (unsigned __int8)v13 <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          v34 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v13 + 1));
          v23 = (v34 & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= v34;
          if ( v23 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
      __writecr8(v13);
    }
    else
    {
      if ( (_InterlockedExchangeAdd64(v10, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)(a2 + 80));
      KeAbPostRelease(a2 + 80);
      v22 = KeGetCurrentThread();
      v23 = v22->SpecialApcDisable++ == -1;
      if ( v23 && ($C71981A45BEB2B45F82C232A7085991E *)v22->ApcState.ApcListHead[0].Flink != &v22->152 )
        KiCheckForKernelApcDelivery();
    }
    return;
  }
  v21 = *(_BYTE *)(a2 + 77);
  if ( v21 < 0x1Eu )
  {
    *(_BYTE *)(a2 + 77) = v21 + 1;
    goto LABEL_16;
  }
  if ( *(_BYTE *)(a1 + 57) )
  {
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(a2 + 80));
    if ( KiIrqlFlags )
    {
      v27 = KeGetCurrentIrql();
      if ( (KiIrqlFlags & 1) != 0 && v27 <= 0xFu && (unsigned __int8)v13 <= 0xFu && v27 >= 2u )
      {
        v28 = KeGetCurrentPrcb();
        v29 = v28->SchedulerAssist;
        v30 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v13 + 1));
        v23 = (v30 & v29[5]) == 0;
        v29[5] &= v30;
        if ( v23 )
          KiRemoveSystemWorkPriorityKick(v28);
      }
    }
    __writecr8(v13);
  }
  else
  {
    if ( (_InterlockedExchangeAdd64(v10, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)(a2 + 80));
    KeAbPostRelease(a2 + 80);
    v26 = KeGetCurrentThread();
    v23 = v26->SpecialApcDisable++ == -1;
    if ( v23 && ($C71981A45BEB2B45F82C232A7085991E *)v26->ApcState.ApcListHead[0].Flink != &v26->152 )
      KiCheckForKernelApcDelivery();
  }
  v24 = *(_QWORD *)(a2 + 96);
  v36 = 2LL;
  if ( !_InterlockedCompareExchange64((volatile signed __int64 *)(v24 + 8 * v18), 2LL, 0LL) )
  {
    Slot = RtlpHpLfhBucketAllocateSlot(a1, a2, (unsigned int)v18);
    *(_QWORD *)(*(_QWORD *)(a2 + 96) + 8 * v18) = Slot;
    if ( Slot )
    {
      _InterlockedOr(v35, 0);
      *(_BYTE *)(a2 + 2) = v18 + 1;
      *(_BYTE *)(*(_QWORD *)(a2 + 88) + v8) = v18;
      *(_BYTE *)(a2 + 77) = 0;
    }
  }
}
