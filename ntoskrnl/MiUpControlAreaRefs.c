/*
 * XREFs of MiUpControlAreaRefs @ 0x140623ABC
 * Callers:
 *     MiAllocateSplitVads @ 0x14076003C (MiAllocateSplitVads.c)
 *     MiDeleteNewlyCreatedPartialVads @ 0x140A44E38 (MiDeleteNewlyCreatedPartialVads.c)
 *     MiInsertChildVads @ 0x140A4642C (MiInsertChildVads.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x140238F40 (ExfTryToWakePushLock.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1402411C0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExAcquireSpinLockExclusive @ 0x14024DA40 (ExAcquireSpinLockExclusive.c)
 *     KeAbPostRelease @ 0x140262B70 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1402B7850 (KiCheckForKernelApcDelivery.c)
 *     MiGetProtoPteAddress @ 0x14031C780 (MiGetProtoPteAddress.c)
 *     MiReferenceActiveSubsection @ 0x1403323F0 (MiReferenceActiveSubsection.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140332B10 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiDecrementSubsections @ 0x140334B70 (MiDecrementSubsections.c)
 *     MiDecrementSubsectionViewCount @ 0x140334C10 (MiDecrementSubsectionViewCount.c)
 *     MmGetSessionIdEx @ 0x140343570 (MmGetSessionIdEx.c)
 *     MiControlAreaRequiresCharge @ 0x14034C4DC (MiControlAreaRequiresCharge.c)
 *     KiAbTryReclaimOrphanedEntries @ 0x1403585E8 (KiAbTryReclaimOrphanedEntries.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 *     MiReturnCrossPartitionSectionCharges @ 0x140668DD4 (MiReturnCrossPartitionSectionCharges.c)
 *     MiLockNestedVad @ 0x140A44F48 (MiLockNestedVad.c)
 *     MiUnlockNestedVad @ 0x140A44F98 (MiUnlockNestedVad.c)
 */

__int64 __fastcall MiUpControlAreaRefs(__int64 a1, int a2)
{
  int v2; // r14d
  __int64 v4; // rbx
  int v5; // esi
  __int64 v7; // rdx
  int v8; // ecx
  bool v9; // zf
  __int64 *v10; // rdi
  unsigned __int64 v11; // rdi
  struct _KTHREAD *CurrentThread; // r12
  __int64 v13; // rdi
  __int64 v14; // rax
  struct _KTHREAD *v15; // r14
  __int64 v16; // rsi
  unsigned int AbEntrySummary; // eax
  unsigned int v18; // ecx
  struct _KPRCB *CurrentPrcb; // rcx
  signed __int32 *SchedulerAssist; // r8
  signed __int32 v21; // eax
  signed __int32 v22; // ett
  int SessionId; // eax
  KIRQL v24; // al
  unsigned __int64 v25; // r15
  int v26; // ecx
  __int64 v27; // r14
  __int64 *v28; // rsi
  int active; // eax
  __int64 v30; // rdi
  int v31; // eax
  int v32; // esi
  __int64 v33; // rax
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *v35; // r10
  _DWORD *v36; // r9
  int v37; // eax
  __int64 v38; // rdi
  int v39; // [rsp+20h] [rbp-48h]
  int v40; // [rsp+24h] [rbp-44h]
  BOOL v41; // [rsp+28h] [rbp-40h]
  __int64 v42; // [rsp+30h] [rbp-38h]
  ULONG_PTR BugCheckParameter2; // [rsp+38h] [rbp-30h] BYREF
  __int64 *v44; // [rsp+40h] [rbp-28h] BYREF
  __int64 v45; // [rsp+48h] [rbp-20h]
  int v46; // [rsp+B0h] [rbp+48h]
  unsigned int v48; // [rsp+C0h] [rbp+58h]
  int v49; // [rsp+C8h] [rbp+60h]

  v2 = a2;
  v40 = 0;
  v4 = **(_QWORD **)(a1 + 72);
  v49 = MiControlAreaRequiresCharge(v4, 0LL);
  v5 = v49;
  if ( !v49 )
    return 3221227019LL;
  v7 = *(_QWORD *)(v4 + 64);
  v8 = *(_DWORD *)(a1 + 48);
  v41 = v7 != 0;
  if ( ((v8 & 0xF80) == 0x200 || (v8 & 0xF80) == 0x300) && v7 && (*(_DWORD *)(v4 + 56) & 0x20) == 0 )
  {
    if ( v2 )
      _InterlockedAdd((volatile signed __int32 *)(v4 + 92), 1u);
    else
      _InterlockedAdd((volatile signed __int32 *)(v4 + 92), 0xFFFFFFFF);
    v40 = 1;
  }
  v9 = (*(_DWORD *)(v4 + 56) & 0x400) == 0;
  v10 = 0LL;
  v46 = 0;
  v39 = 0;
  v42 = 0LL;
  BugCheckParameter2 = 0LL;
  v44 = 0LL;
  if ( v9 )
  {
    v11 = *(unsigned int *)(a1 + 24) | ((unsigned __int64)*(unsigned __int8 *)(a1 + 32) << 32);
    MiLockNestedVad(a1);
    if ( !*(_QWORD *)(v4 + 64) || (*(_DWORD *)(v4 + 56) & 0x20) != 0 )
    {
      v10 = (__int64 *)(v4 + 128);
      BugCheckParameter2 = v4 + 128;
    }
    else
    {
      MiGetProtoPteAddress(a1, v11, 0, &BugCheckParameter2);
      v10 = (__int64 *)BugCheckParameter2;
    }
    if ( v10 )
      v39 = 1;
    else
      MiUnlockNestedVad(a1);
  }
  if ( *(_QWORD *)(v4 + 64) )
  {
    CurrentThread = 0LL;
    v45 = 0LL;
  }
  else
  {
    CurrentThread = KeGetCurrentThread();
    v13 = 0LL;
    v45 = *(_QWORD *)v4;
    v14 = v45;
    --CurrentThread->SpecialApcDisable;
    v15 = KeGetCurrentThread();
    v16 = v14 + 40;
    _disable();
    AbEntrySummary = v15->AbEntrySummary;
    if ( v15->AbEntrySummary || (AbEntrySummary = KiAbTryReclaimOrphanedEntries(v16, (__int64)v15)) != 0 )
    {
      _BitScanForward(&v18, AbEntrySummary);
      v48 = v18;
      v15->AbEntrySummary = AbEntrySummary & ~(1 << v18);
      CurrentPrcb = KeGetCurrentPrcb();
      SchedulerAssist = (signed __int32 *)CurrentPrcb->SchedulerAssist;
      if ( SchedulerAssist )
      {
        _m_prefetchw(SchedulerAssist);
        v21 = *SchedulerAssist;
        do
        {
          v22 = v21;
          v21 = _InterlockedCompareExchange(SchedulerAssist, v21 & 0xFFDFFFFF, v21);
        }
        while ( v22 != v21 );
        if ( (v21 & 0x200000) != 0 )
          KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
      }
      _enable();
      v13 = (__int64)(&v15[1].Process + 12 * v48);
      if ( (unsigned __int64)(v16 - qword_140C65668) >= 0x8000000000LL )
        SessionId = -1;
      else
        SessionId = MmGetSessionIdEx((__int64)v15->ApcState.Process);
      *(_DWORD *)(v13 + 8) = SessionId;
      *(_QWORD *)v13 = v16 & 0x7FFFFFFFFFFFFFFCLL;
    }
    if ( _interlockedbittestandset64((volatile signed __int32 *)v16, 0LL) )
      ExfAcquirePushLockExclusiveEx((unsigned __int64 *)v16, v13, v16);
    v5 = v49;
    v2 = a2;
    if ( v13 )
      *(_BYTE *)(v13 + 18) = 1;
    v10 = (__int64 *)BugCheckParameter2;
  }
  v24 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v4 + 72));
  v25 = v24;
  ++*(_QWORD *)(v4 + 40);
  ++*(_QWORD *)(v4 + 48);
  if ( !v10 )
    goto LABEL_58;
  v26 = *(_DWORD *)(v4 + 56);
  if ( (v26 & 0x20) == 0 && *(_QWORD *)(v4 + 64) )
  {
    MiGetProtoPteAddress(
      a1,
      *(unsigned int *)(a1 + 28) | ((unsigned __int64)*(unsigned __int8 *)(a1 + 33) << 32),
      1,
      &v44);
    v27 = 0LL;
    v28 = v10;
    while ( 1 )
    {
      if ( a2 )
      {
        active = MiReferenceActiveSubsection(v28, 8, v25);
        v46 = active;
        if ( active < 0 )
        {
          if ( v27 )
          {
            v30 = MiDecrementSubsections((ULONG_PTR)v10, v27, 8) + v42;
            goto LABEL_55;
          }
          v30 = v42;
          v32 = active;
          goto LABEL_59;
        }
      }
      else
      {
        v42 += MiDecrementSubsections((ULONG_PTR)v28, (__int64)v28, 8);
      }
      v27 = (__int64)v28;
      if ( v28 != v44 )
      {
        v28 = (__int64 *)v28[2];
        if ( v28 )
          continue;
      }
      v30 = v42;
      goto LABEL_55;
    }
  }
  if ( v2 )
  {
    v31 = MiReferenceActiveSubsection(v10, 8, v24);
    v30 = 0LL;
    v32 = v31;
    goto LABEL_59;
  }
  if ( (v26 & 0x20) == 0 )
  {
    v33 = MiDecrementSubsections((ULONG_PTR)v10, (__int64)v10, 8);
    goto LABEL_54;
  }
  if ( v5 != 2 )
  {
LABEL_58:
    v30 = 0LL;
    v32 = 0;
    goto LABEL_59;
  }
  v33 = MiDecrementSubsectionViewCount(v10, 24LL, 1LL);
LABEL_54:
  v30 = v33;
LABEL_55:
  v32 = v46;
LABEL_59:
  ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v4 + 72));
  if ( KiIrqlFlags )
  {
    CurrentIrql = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && (unsigned __int8)v25 <= 0xFu && CurrentIrql >= 2u )
    {
      v35 = KeGetCurrentPrcb();
      v36 = v35->SchedulerAssist;
      v37 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v25 + 1));
      v9 = (v37 & v36[5]) == 0;
      v36[5] &= v37;
      if ( v9 )
        KiRemoveSystemWorkPriorityKick((__int64)v35);
    }
  }
  __writecr8(v25);
  if ( v30 )
    MiReturnCrossPartitionSectionCharges(*(_QWORD *)(qword_140C67048 + 8LL * (*(_WORD *)(v4 + 60) & 0x3FF)), v41, v30);
  if ( !*(_QWORD *)(v4 + 64) )
  {
    v38 = v45;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v45 + 40), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)(v38 + 40));
    KeAbPostRelease(v38 + 40);
    v9 = CurrentThread->SpecialApcDisable++ == -1;
    if ( v9 && ($C71981A45BEB2B45F82C232A7085991E *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
      KiCheckForKernelApcDelivery();
  }
  if ( v39 )
    MiUnlockNestedVad(a1);
  if ( v32 < 0 )
  {
    if ( v40 )
      _InterlockedDecrement((volatile signed __int32 *)(v4 + 92));
  }
  return (unsigned int)v32;
}
