/*
 * XREFs of MiEmptyDecayClusterTimers @ 0x140224EE0
 * Callers:
 *     MiWorkingSetManager @ 0x1403616C0 (MiWorkingSetManager.c)
 * Callees:
 *     MiRelinkDecayClusterTimer @ 0x14021456C (MiRelinkDecayClusterTimer.c)
 *     ExpAcquireSpinLockExclusive @ 0x140224E80 (ExpAcquireSpinLockExclusive.c)
 *     ExAcquireSpinLockSharedAtDpcLevel @ 0x140225810 (ExAcquireSpinLockSharedAtDpcLevel.c)
 *     MiRelinkStandbyPage @ 0x140225A14 (MiRelinkStandbyPage.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x14027F8D0 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     MiDecayNodeNowEmpty @ 0x1402D6BC0 (MiDecayNodeNowEmpty.c)
 *     MiUnlinkDecayClusterTimer @ 0x1402D6CAC (MiUnlinkDecayClusterTimer.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140332B10 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x140333520 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     KiQueryUnbiasedInterruptTime @ 0x14034A074 (KiQueryUnbiasedInterruptTime.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x140462ED8 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x140608CDC (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 *     ExpReleaseSpinLockSharedFromDpcLevelInstrumented @ 0x140608D0C (ExpReleaseSpinLockSharedFromDpcLevelInstrumented.c)
 */

unsigned __int64 __fastcall MiEmptyDecayClusterTimers(__int64 a1)
{
  __int64 v1; // r13
  unsigned __int64 result; // rax
  unsigned __int8 v3; // cl
  __int64 v4; // r12
  int v5; // edi
  unsigned __int8 CurrentIrql; // bl
  _DWORD *SchedulerAssist; // r9
  __int64 v8; // rdx
  volatile LONG *v9; // rsi
  unsigned __int8 v10; // bp
  __int64 v11; // rdx
  __int64 v12; // rax
  ULONG_PTR v13; // r14
  __int64 v14; // rbx
  volatile signed __int64 *v15; // rdi
  unsigned __int64 v16; // rax
  __int64 v17; // rax
  _DWORD *v18; // r8
  __int64 v19; // r9
  unsigned __int8 v20; // cl
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *v22; // r8
  int v23; // eax
  bool v24; // zf
  unsigned __int8 v25; // al
  struct _KPRCB *v26; // r10
  _DWORD *v27; // r9
  int v28; // eax
  unsigned __int8 v29; // al
  struct _KPRCB *v30; // r10
  _DWORD *v31; // r9
  int v32; // eax
  unsigned __int8 v33; // al
  bool v34; // cf
  unsigned __int8 v35; // cl
  _DWORD *v36; // r9
  int v37; // eax
  unsigned __int8 v38; // cl
  struct _KPRCB *v39; // r9
  _DWORD *v40; // r8
  int v41; // eax
  void *retaddr; // [rsp+58h] [rbp+0h]
  __int64 v43; // [rsp+60h] [rbp+8h]
  unsigned int v44; // [rsp+68h] [rbp+10h]

  v43 = a1;
  v1 = a1;
  LOBYTE(a1) = 1;
  result = KiQueryUnbiasedInterruptTime(a1);
  if ( result - *(_QWORD *)(v1 + 15784) < 0x989680 )
    return result;
  *(_QWORD *)(v1 + 15784) = result;
  v4 = v1 + 8LL * (*(_DWORD *)(v1 + 15776) & 3);
  v5 = ((*(_BYTE *)(v1 + 15776) & 3) + 1) & 3;
  v44 = v5;
  if ( *(_QWORD *)(v4 + 15744) >> 33 == 0x7FFFFFFFLL )
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags && ((unsigned __int8)KiIrqlFlags & v3) != 0 && CurrentIrql <= 0xFu )
    {
      SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
      if ( CurrentIrql == 2 )
        LODWORD(v8) = 4;
      else
        v8 = (-1LL << (CurrentIrql + 1)) & 4;
      SchedulerAssist[5] |= v8;
    }
    ExAcquireSpinLockExclusiveAtDpcLevel(&dword_140C67E00);
    if ( *(_QWORD *)(v4 + 15744) >> 33 == 0x7FFFFFFFLL )
    {
      *(_DWORD *)(v1 + 15776) = v5;
      ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140C67E00);
      if ( KiIrqlFlags )
      {
        v20 = KeGetCurrentIrql();
        if ( (KiIrqlFlags & 1) != 0 && v20 <= 0xFu && CurrentIrql <= 0xFu && v20 >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          v22 = CurrentPrcb->SchedulerAssist;
          v23 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
          v24 = (v23 & v22[5]) == 0;
          v22[5] &= v23;
          if ( v24 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
      result = CurrentIrql;
      goto LABEL_7;
    }
    ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140C67E00);
    if ( KiIrqlFlags )
    {
      v25 = KeGetCurrentIrql();
      if ( (KiIrqlFlags & 1) != 0 && v25 <= 0xFu && CurrentIrql <= 0xFu && v25 >= 2u )
      {
        v26 = KeGetCurrentPrcb();
        v27 = v26->SchedulerAssist;
        v28 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
        v24 = (v28 & v27[5]) == 0;
        v27[5] &= v28;
        if ( v24 )
          KiRemoveSystemWorkPriorityKick(v26);
      }
    }
    __writecr8(CurrentIrql);
  }
  v9 = (volatile LONG *)(v1 + 3416);
  while ( 1 )
  {
    v10 = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v10 <= 0xFu )
    {
      v18 = KeGetCurrentPrcb()->SchedulerAssist;
      if ( v10 == 2 )
        LODWORD(v19) = 4;
      else
        v19 = (-1LL << (v10 + 1)) & 4;
      v18[5] |= v19;
    }
    ExAcquireSpinLockSharedAtDpcLevel(v9);
    LOBYTE(v11) = -1;
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
      ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(&dword_140C67E00, v11);
    else
      ExpAcquireSpinLockExclusive(&dword_140C67E00);
    v12 = *(_QWORD *)(v4 + 15744) >> 33;
    if ( v12 == 0x7FFFFFFF )
      break;
    v13 = v12 + qword_140C67DE0;
    v14 = 48 * (v12 + qword_140C67DE0) - 0x220000000000LL;
    v15 = (volatile signed __int64 *)(v14 + 24);
    if ( !_interlockedbittestandset64((volatile signed __int32 *)(v14 + 24), 0x3FuLL) )
    {
      if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
        ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(&dword_140C67E00, retaddr);
      else
        dword_140C67E00 = 0;
      v16 = *(_QWORD *)(v14 + 16);
      if ( qword_140C657C0 && (v16 & 0x10) == 0 )
        v16 &= ~qword_140C657C0;
      v17 = (v16 >> 12) & 0xFFFFFFFFFFLL;
      if ( v17 == v13 )
      {
        if ( (*(_BYTE *)(v14 + 35) & 8) != 0 )
        {
          ExAcquireSpinLockExclusiveAtDpcLevel(&dword_140C67E00);
          MiUnlinkDecayClusterTimer(v14);
          MiRelinkDecayClusterTimer(v14, v44);
          ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140C67E00);
        }
        else
        {
          MiDecayNodeNowEmpty(v13);
        }
        ExReleaseSpinLockSharedFromDpcLevel(v9);
LABEL_29:
        _InterlockedAnd64((volatile signed __int64 *)(v14 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        if ( !KiIrqlFlags )
          goto LABEL_30;
        v35 = KeGetCurrentIrql();
        if ( (KiIrqlFlags & 1) == 0 || v35 > 0xFu || v10 > 0xFu )
          goto LABEL_30;
        v34 = v35 < 2u;
      }
      else
      {
        v14 = 48 * v17 - 0x220000000000LL;
        if ( !_interlockedbittestandset64((volatile signed __int32 *)(v14 + 24), 0x3FuLL) )
        {
          _InterlockedAnd64(v15, 0x7FFFFFFFFFFFFFFFuLL);
          if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
          {
            ExpReleaseSpinLockSharedFromDpcLevelInstrumented(v9, retaddr);
          }
          else
          {
            _InterlockedAnd(v9, 0xBFFFFFFF);
            _InterlockedDecrement(v9);
          }
          MiRelinkStandbyPage(v14);
          goto LABEL_29;
        }
        ExReleaseSpinLockSharedFromDpcLevel(v9);
        _InterlockedAnd64(v15, 0x7FFFFFFFFFFFFFFFuLL);
        if ( !KiIrqlFlags )
          goto LABEL_30;
        v33 = KeGetCurrentIrql();
        if ( (KiIrqlFlags & 1) == 0 || v33 > 0xFu || v10 > 0xFu )
          goto LABEL_30;
        v34 = v33 < 2u;
      }
      if ( !v34 )
      {
        v30 = KeGetCurrentPrcb();
        v36 = v30->SchedulerAssist;
        v37 = ~(unsigned __int16)(-1LL << (v10 + 1));
        v24 = (v37 & v36[5]) == 0;
        v36[5] &= v37;
        if ( v24 )
          goto LABEL_82;
      }
      goto LABEL_30;
    }
    ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140C67E00);
    ExReleaseSpinLockSharedFromDpcLevel(v9);
    if ( KiIrqlFlags )
    {
      v29 = KeGetCurrentIrql();
      if ( (KiIrqlFlags & 1) != 0 && v29 <= 0xFu && v10 <= 0xFu && v29 >= 2u )
      {
        v30 = KeGetCurrentPrcb();
        v31 = v30->SchedulerAssist;
        v32 = ~(unsigned __int16)(-1LL << (v10 + 1));
        v24 = (v32 & v31[5]) == 0;
        v31[5] &= v32;
        if ( v24 )
LABEL_82:
          KiRemoveSystemWorkPriorityKick(v30);
      }
    }
LABEL_30:
    __writecr8(v10);
  }
  *(_DWORD *)(v43 + 15776) = v44;
  ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140C67E00);
  ExReleaseSpinLockSharedFromDpcLevel(v9);
  if ( KiIrqlFlags )
  {
    v38 = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0 && v38 <= 0xFu && v10 <= 0xFu && v38 >= 2u )
    {
      v39 = KeGetCurrentPrcb();
      v40 = v39->SchedulerAssist;
      v41 = ~(unsigned __int16)(-1LL << (v10 + 1));
      v24 = (v41 & v40[5]) == 0;
      v40[5] &= v41;
      if ( v24 )
        KiRemoveSystemWorkPriorityKick(v39);
    }
  }
  result = v10;
LABEL_7:
  __writecr8(result);
  return result;
}
