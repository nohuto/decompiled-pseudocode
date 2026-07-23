/*
 * XREFs of NtCancelTimer @ 0x140248470
 * Callers:
 *     <none>
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x140206F80 (KeLeaveCriticalRegionThread.c)
 *     KxReleaseSpinLock @ 0x1402295E0 (KxReleaseSpinLock.c)
 *     ExpCancelTimer @ 0x140249B00 (ExpCancelTimer.c)
 *     KiCheckForKernelApcDelivery @ 0x14024A050 (KiCheckForKernelApcDelivery.c)
 *     ExfTryToWakePushLock @ 0x140271BF0 (ExfTryToWakePushLock.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x140273310 (ExfAcquirePushLockExclusiveEx.c)
 *     MiGetSystemRegionType @ 0x1402CB040 (MiGetSystemRegionType.c)
 *     KiAbThreadRemoveBoosts @ 0x1402CB3F0 (KiAbThreadRemoveBoosts.c)
 *     MmGetSessionIdEx @ 0x1402CB550 (MmGetSessionIdEx.c)
 *     ObfDereferenceObjectWithTag @ 0x1402CB850 (ObfDereferenceObjectWithTag.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402D89E0 (KeAcquireSpinLockRaiseToDpc.c)
 *     KxWaitForSpinLockAndAcquire @ 0x1402D8A70 (KxWaitForSpinLockAndAcquire.c)
 *     KiAbEntryRemoveFromTree @ 0x1402E5430 (KiAbEntryRemoveFromTree.c)
 *     ObpDeferObjectDeletion @ 0x140315484 (ObpDeferObjectDeletion.c)
 *     ExpSetTimerObject2 @ 0x14034927C (ExpSetTimerObject2.c)
 *     PoDestroyReasonContext @ 0x14034BC54 (PoDestroyReasonContext.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F2D04 (KiRemoveSystemWorkPriorityKick.c)
 *     EtwTraceAutoBoostEntryExhaustion @ 0x1403F889C (EtwTraceAutoBoostEntryExhaustion.c)
 *     KeBugCheckEx @ 0x1403FD570 (KeBugCheckEx.c)
 *     KiAcquireSpinLockInstrumented @ 0x1405167CC (KiAcquireSpinLockInstrumented.c)
 *     KiReleaseSpinLockInstrumented @ 0x1405168D8 (KiReleaseSpinLockInstrumented.c)
 *     ObpPushStackInfo @ 0x140564C68 (ObpPushStackInfo.c)
 *     ObReferenceObjectByHandle @ 0x14063E2E0 (ObReferenceObjectByHandle.c)
 */

NTSTATUS __cdecl NtCancelTimer(HANDLE TimerHandle, PBOOLEAN CurrentState)
{
  KPROCESSOR_MODE PreviousMode; // r13
  int v5; // r14d
  struct _KTIMER *v6; // rbx
  char *v7; // r15
  struct _OBJECT_TYPE *v8; // rax
  volatile signed __int32 *v9; // rdi
  unsigned __int8 CurrentIrql; // cl
  struct _KPRCB *CurrentPrcb; // rbx
  _DWORD *v12; // rcx
  void *v13; // rsi
  int v14; // ebx
  struct _KPRCB *v15; // rcx
  _DWORD *v16; // rdx
  int v17; // edi
  signed __int64 v18; // rax
  _DWORD *v20; // rcx
  struct _KTHREAD *v21; // r10
  __int64 v22; // rcx
  char v23; // dl
  __int64 v24; // rdx
  int SessionId; // ecx
  struct _KTHREAD *v26; // rcx
  bool v27; // zf
  _QWORD *v29; // rax
  __int64 v30; // rdx
  _QWORD *v31; // rcx
  char v32; // r10
  unsigned int v33; // edx
  ULONG_PTR v34; // r10
  __int64 v35; // r9
  unsigned int v36; // r11d
  __int64 v37; // rcx
  __int64 v38; // rcx
  unsigned __int8 v39; // al
  __int64 v40; // rcx
  _DWORD *SchedulerAssist; // r9
  int v42; // eax
  int v43; // eax
  unsigned __int8 v44; // al
  struct _KPRCB *v45; // r10
  _DWORD *v46; // r9
  int v47; // eax
  __int64 AbOrphanedEntrySummary; // rax
  int v49; // eax
  unsigned __int8 v50; // al
  struct _KPRCB *v51; // r11
  _DWORD *v52; // r9
  int v53; // eax
  KIRQL BugCheckParameter1; // [rsp+30h] [rbp-78h]
  struct _KTHREAD *BugCheckParameter1a; // [rsp+30h] [rbp-78h]
  PVOID Object; // [rsp+38h] [rbp-70h] BYREF
  struct _KTHREAD *v57; // [rsp+40h] [rbp-68h]
  int v58; // [rsp+48h] [rbp-60h]
  int v59; // [rsp+4Ch] [rbp-5Ch]
  int v60; // [rsp+50h] [rbp-58h]
  struct _KTHREAD *CurrentThread; // [rsp+58h] [rbp-50h]
  void *v62; // [rsp+60h] [rbp-48h]
  unsigned __int64 v63; // [rsp+68h] [rbp-40h]
  void *retaddr; // [rsp+A8h] [rbp+0h]
  char v65; // [rsp+B8h] [rbp+10h]
  __int64 v66; // [rsp+B8h] [rbp+10h]
  unsigned __int8 v67; // [rsp+B8h] [rbp+10h]

  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( CurrentState && PreviousMode )
  {
    v40 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)CurrentState < 0x7FFFFFFF0000LL )
      v40 = (__int64)CurrentState;
    *(_BYTE *)v40 = *(_BYTE *)v40;
  }
  Object = 0LL;
  v5 = ObReferenceObjectByHandle(TimerHandle, 2u, 0LL, PreviousMode, &Object, 0LL);
  v60 = v5;
  if ( v5 < 0 )
    return v5;
  v6 = (struct _KTIMER *)Object;
  v7 = (char *)Object - 48;
  v8 = (struct _OBJECT_TYPE *)ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ (unsigned __int8)*((char *)Object - 24) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)((_WORD)Object - 48) >> 8)];
  if ( v8 == ExpIRTimerObjectType )
  {
    if ( CurrentState )
    {
      ObfDereferenceObjectWithTag(Object, 0x746C6644u);
      return -1073741811;
    }
    else
    {
      return ExpSetTimerObject2(Object);
    }
  }
  else
  {
    if ( v8 == ExTimerObjectType )
    {
      CurrentThread = 0LL;
      v65 = 0;
      v9 = (volatile signed __int32 *)((char *)Object + 64);
      CurrentIrql = KeGetCurrentIrql();
      BugCheckParameter1 = CurrentIrql;
      __writecr8(2uLL);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
      {
        SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
        SchedulerAssist[5] |= (-1 << (CurrentIrql + 1)) & 4;
        v6 = (struct _KTIMER *)Object;
      }
      if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
      {
        KiAcquireSpinLockInstrumented(v9);
      }
      else
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v12 = CurrentPrcb->SchedulerAssist;
        if ( v12 )
        {
          if ( CurrentPrcb->NestingLevel <= 1u )
          {
            v42 = v12[6];
            v12[6] = v42 + 1;
            if ( v42 == -1 )
              KiRemoveSystemWorkPriorityKick(CurrentPrcb);
          }
        }
        if ( _interlockedbittestandset64(v9, 0LL) )
        {
          v20 = CurrentPrcb->SchedulerAssist;
          if ( v20 )
          {
            if ( CurrentPrcb->NestingLevel <= 1u )
            {
              v43 = v20[6] - 1;
              v20[6] = v43;
              if ( !v43 )
                KiRemoveSystemWorkPriorityKick(CurrentPrcb);
            }
          }
          KxWaitForSpinLockAndAcquire(v9);
        }
        v6 = (struct _KTIMER *)Object;
      }
      v13 = *(void **)&v6[4].Header.Lock;
      v62 = v13;
      if ( !v13 )
        goto LABEL_11;
      KxReleaseSpinLock((PKSPIN_LOCK)v9);
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          v44 = KeGetCurrentIrql();
          if ( v44 <= 0xFu && BugCheckParameter1 <= 0xFu && v44 >= 2u )
          {
            v45 = KeGetCurrentPrcb();
            v46 = v45->SchedulerAssist;
            v47 = ~(unsigned __int16)(-1LL << (BugCheckParameter1 + 1));
            v27 = (v47 & v46[5]) == 0;
            v46[5] &= v47;
            if ( v27 )
              KiRemoveSystemWorkPriorityKick(v45);
          }
        }
      }
      __writecr8(BugCheckParameter1);
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->KernelApcDisable;
      v59 = 0;
      v21 = KeGetCurrentThread();
      v57 = v21;
      --v21->SpecialApcDisable;
      if ( ++v21->AbAllocationRegionCount != 1 )
        KeBugCheckEx(0x192u, (ULONG_PTR)v21, (ULONG_PTR)&ExpWakeTimerLock, KeGetCurrentIrql(), 0LL);
      v58 = 0;
      LOBYTE(v22) = v21->AbEntrySummary;
      if ( !(_BYTE)v22 )
      {
        if ( !v21->AbOrphanedEntrySummary )
        {
          v24 = 0LL;
          v66 = 0LL;
          if ( (WORD2(PerfGlobalGroupMask) & 0x200) != 0 )
          {
            EtwTraceAutoBoostEntryExhaustion(v21, &ExpWakeTimerLock);
            v21 = v57;
            v24 = 0LL;
          }
          goto LABEL_30;
        }
        AbOrphanedEntrySummary = v21->AbOrphanedEntrySummary;
        v21->AbOrphanedEntrySummary = 0;
        LOBYTE(v22) = AbOrphanedEntrySummary | v21->AbEntrySummary;
      }
      v23 = v22;
      _BitScanForward((unsigned int *)&v22, (unsigned __int8)v22);
      v58 = v22;
      v21->AbEntrySummary = v23 & ~(1 << v22);
      v24 = (__int64)&v21->LockEntries[v22];
      v66 = v24;
LABEL_30:
      if ( v24 )
      {
        if ( (unsigned __int64)&ExpWakeTimerLock >= 0xFFFF800000000000uLL
          && byte_140C4F9C8[(((unsigned __int64)&ExpWakeTimerLock >> 39) & 0x1FF) - 256] == 1 )
        {
          SessionId = MmGetSessionIdEx(v21->ApcState.Process);
          v21 = v57;
          v24 = v66;
        }
        else
        {
          SessionId = -1;
        }
        *(_DWORD *)(v24 + 40) = SessionId;
        *(_QWORD *)(v24 + 32) = (unsigned __int64)&ExpWakeTimerLock & 0x7FFFFFFFFFFFFFFCLL;
      }
      else
      {
        _interlockedbittestandset((volatile signed __int32 *)&v21->116 + 1, 0x10u);
      }
      --v21->AbAllocationRegionCount;
      KiAbThreadRemoveBoosts((ULONG_PTR)v21);
      v26 = v57;
      v27 = v57->SpecialApcDisable++ == -1;
      if ( v27 && ($C459BD0D405E8E46662177FB3D0A143F *)v26->ApcState.ApcListHead[0].Flink != &v26->152 )
        KiCheckForKernelApcDelivery();
      if ( _interlockedbittestandset64((volatile signed __int32 *)&ExpWakeTimerLock, 0LL) )
        ExfAcquirePushLockExclusiveEx(&ExpWakeTimerLock, v66, &ExpWakeTimerLock);
      if ( v66 )
        *(_BYTE *)(v66 + 26) |= 1u;
      v65 = 1;
      BugCheckParameter1 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)v9);
      v13 = *(void **)&v6[4].Header.Lock;
      v62 = v13;
      *(_QWORD *)&v6[4].Header.Lock = 0LL;
      v6 = (struct _KTIMER *)Object;
LABEL_11:
      v14 = ExpCancelTimer(v6) + 1;
      if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
        KiReleaseSpinLockInstrumented(v9, retaddr);
      else
        _InterlockedAnd64((volatile signed __int64 *)v9, 0LL);
      v15 = KeGetCurrentPrcb();
      v16 = v15->SchedulerAssist;
      if ( v16 )
      {
        if ( v15->NestingLevel <= 1u )
        {
          v49 = v16[6] - 1;
          v16[6] = v49;
          if ( !v49 )
            KiRemoveSystemWorkPriorityKick(v15);
        }
      }
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          v50 = KeGetCurrentIrql();
          if ( v50 <= 0xFu && BugCheckParameter1 <= 0xFu && v50 >= 2u )
          {
            v51 = KeGetCurrentPrcb();
            v52 = v51->SchedulerAssist;
            v53 = ~(unsigned __int16)(-1LL << (BugCheckParameter1 + 1));
            v27 = (v53 & v52[5]) == 0;
            v52[5] &= v53;
            if ( v27 )
              KiRemoveSystemWorkPriorityKick(v51);
          }
        }
      }
      __writecr8(BugCheckParameter1);
      if ( v65 )
      {
        if ( v13 )
        {
          v29 = (char *)Object + 264;
          v30 = *((_QWORD *)Object + 33);
          v31 = (_QWORD *)*((_QWORD *)Object + 34);
          if ( *(PVOID *)(v30 + 8) != (char *)Object + 264 || (_QWORD *)*v31 != v29 )
            __fastfail(3u);
          *v31 = v30;
          *(_QWORD *)(v30 + 8) = v31;
          *v29 = 0LL;
        }
        v32 = _InterlockedExchangeAdd64((volatile signed __int64 *)&ExpWakeTimerLock, 0xFFFFFFFFFFFFFFFFuLL);
        if ( (v32 & 2) != 0 && (v32 & 4) == 0 )
          ExfTryToWakePushLock(&ExpWakeTimerLock);
        BugCheckParameter1a = KeGetCurrentThread();
        if ( (unsigned int)MiGetSystemRegionType(&ExpWakeTimerLock) == 1 )
          v33 = MmGetSessionIdEx(BugCheckParameter1a->ApcState.Process);
        else
          v33 = -1;
        v34 = (ULONG_PTR)BugCheckParameter1a;
        --BugCheckParameter1a->SpecialApcDisable;
        v67 = ++BugCheckParameter1a->AbAllocationRegionCount;
        v35 = 0LL;
        v57 = 0LL;
        v63 = (unsigned __int64)&ExpWakeTimerLock & 0x7FFFFFFFFFFFFFFCLL;
        v36 = ((char)BugCheckParameter1a->AbEntrySummary | (char)BugCheckParameter1a->AbOrphanedEntrySummary) ^ 0x3F;
        v27 = !_BitScanReverse((unsigned int *)&v37, v36);
        if ( !v27 )
        {
          while ( 1 )
          {
            v36 &= ~(1 << v37);
            v38 = (__int64)&BugCheckParameter1a->LockEntries[v37];
            if ( (*(_BYTE *)(v38 + 26) & 1) != 0
              && (*(_DWORD *)(v38 + 32) & 1) == 0
              && (*(_QWORD *)(v38 + 32) & 0x7FFFFFFFFFFFFFFCLL) == v63
              && *(_DWORD *)(v38 + 40) == v33 )
            {
              *(_BYTE *)(v38 + 26) &= ~1u;
              if ( *(_QWORD *)(v38 + 32) )
                break;
            }
            v27 = !_BitScanReverse((unsigned int *)&v37, v36);
            if ( v27 )
              goto LABEL_57;
          }
          v35 = v38;
          v57 = (struct _KTHREAD *)v38;
        }
LABEL_57:
        if ( v35 )
        {
          *(_BYTE *)(v35 + 32) |= 2u;
          if ( *(__int64 *)(v35 + 32) < 0 )
          {
            KiAbEntryRemoveFromTree((PRTL_BALANCED_NODE)v35);
            v34 = (ULONG_PTR)BugCheckParameter1a;
            v35 = (__int64)v57;
          }
          *(_DWORD *)(v35 + 88) &= 0xFFFE0000;
          *(_BYTE *)(v35 + 25) &= ~1u;
          *(_QWORD *)(v35 + 32) = 0LL;
          v39 = 1 << ((v35 - *(_QWORD *)(v34 + 800)) / 96);
          if ( v67 == 1 )
            *(_BYTE *)(v34 + 792) |= v39;
          else
            _InterlockedOr8((volatile signed __int8 *)(v34 + 870), v39);
        }
        else if ( (*((_DWORD *)&BugCheckParameter1a->0 + 1) & 0x10000) == 0 )
        {
          KeBugCheckEx(0x162u, (ULONG_PTR)BugCheckParameter1a, (ULONG_PTR)&ExpWakeTimerLock, v33, 0LL);
        }
        --*(_BYTE *)(v34 + 794);
        KiAbThreadRemoveBoosts(v34);
        v27 = BugCheckParameter1a->SpecialApcDisable++ == -1;
        if ( v27
          && ($C459BD0D405E8E46662177FB3D0A143F *)BugCheckParameter1a->ApcState.ApcListHead[0].Flink != &BugCheckParameter1a->152 )
        {
          KiCheckForKernelApcDelivery();
        }
        KeLeaveCriticalRegionThread((__int64)CurrentThread);
      }
      v17 = *((_DWORD *)Object + 1);
      if ( ObpTraceFlags )
        ObpPushStackInfo((_DWORD)v7);
      v18 = _InterlockedExchangeAdd64((volatile signed __int64 *)v7, -v14) - v14;
      if ( v18 <= 0 )
      {
        if ( *((_QWORD *)v7 + 1) )
          KeBugCheckEx(
            0x18u,
            ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ (unsigned __int8)v7[24] ^ (unsigned __int64)BYTE1(v7)],
            (ULONG_PTR)Object,
            6uLL,
            *((_QWORD *)v7 + 1));
        if ( v18 < 0 )
          KeBugCheckEx(0x18u, 0LL, (ULONG_PTR)Object, 5uLL, v18);
        ObpDeferObjectDeletion(v7);
      }
      if ( CurrentState )
        *CurrentState = v17;
      if ( v13 )
        PoDestroyReasonContext(v13);
      return v5;
    }
    ObfDereferenceObjectWithTag(Object, 0x746C6644u);
    return -1073741788;
  }
}
