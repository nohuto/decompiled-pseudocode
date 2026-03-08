/*
 * XREFs of MiAttemptPageFileReductionApc @ 0x140635960
 * Callers:
 *     <none>
 * Callees:
 *     MiInvalidatePageFileBitmapsCache @ 0x14020A3E4 (MiInvalidatePageFileBitmapsCache.c)
 *     RtlFindLastBackwardRunClear @ 0x14020AE50 (RtlFindLastBackwardRunClear.c)
 *     MiCoalescePageFileBitmapsCache @ 0x14020B47C (MiCoalescePageFileBitmapsCache.c)
 *     ExAcquireSpinLockExclusive @ 0x14024DA40 (ExAcquireSpinLockExclusive.c)
 *     KeSetEvent @ 0x14025C2C0 (KeSetEvent.c)
 *     MiReturnCommit @ 0x140287340 (MiReturnCommit.c)
 *     RtlSetBits @ 0x14028BC50 (RtlSetBits.c)
 *     MiOkToShrinkPageFiles @ 0x1402A5400 (MiOkToShrinkPageFiles.c)
 *     RtlClearBits @ 0x14030DE60 (RtlClearBits.c)
 *     MiChargeCommit @ 0x140320800 (MiChargeCommit.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140332B10 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 *     MiReduceCommitLimits @ 0x140653F84 (MiReduceCommitLimits.c)
 */

LONG __fastcall MiAttemptPageFileReductionApc(struct _KEVENT *a1)
{
  unsigned int Flink; // r13d
  unsigned __int64 v2; // rbx
  unsigned __int64 v3; // r15
  unsigned __int64 Flink_high; // rdx
  unsigned int v5; // eax
  int v6; // r8d
  int v7; // eax
  __int64 v8; // rcx
  unsigned __int64 v9; // r9
  __int64 v10; // r15
  __int64 v11; // rsi
  __int64 v12; // rsi
  __int16 v13; // ax
  KIRQL v14; // al
  __int64 v15; // rcx
  int v16; // r10d
  unsigned __int64 v17; // r12
  __int64 v18; // r11
  RTL_BITMAP *v19; // r9
  unsigned __int64 v20; // r8
  char v21; // cl
  unsigned int *Buffer; // r9
  unsigned __int64 v23; // rdi
  unsigned __int64 v24; // rcx
  unsigned int v25; // r10d
  ULONG v26; // ebx
  ULONG LastBackwardRunClear; // eax
  unsigned __int64 v28; // r14
  __int64 v29; // rcx
  __int64 v30; // rax
  unsigned __int64 v31; // rdi
  __int64 v32; // r8
  unsigned __int64 v33; // rax
  unsigned __int8 v34; // al
  struct _KPRCB *v35; // r10
  _DWORD *v36; // r9
  int v37; // eax
  bool v38; // zf
  RTL_BITMAP *v39; // rcx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v43; // eax
  __int64 v44; // r12
  __int64 v45; // r8
  unsigned __int8 v46; // al
  struct _KPRCB *v47; // r10
  _DWORD *v48; // r9
  int v49; // eax
  KIRQL v50; // al
  __int64 v51; // rdx
  unsigned __int64 v52; // r15
  RTL_BITMAP *v53; // rbx
  unsigned __int8 v54; // al
  struct _KPRCB *v55; // r9
  _DWORD *v56; // r8
  int v57; // eax
  unsigned __int64 v59; // [rsp+30h] [rbp-49h]
  unsigned int v60; // [rsp+38h] [rbp-41h]
  unsigned __int64 v61; // [rsp+40h] [rbp-39h]
  ULONG StartingRunIndex; // [rsp+48h] [rbp-31h] BYREF
  ULONG v63; // [rsp+4Ch] [rbp-2Dh] BYREF
  _DWORD *v64; // [rsp+50h] [rbp-29h]
  __int64 v65; // [rsp+58h] [rbp-21h]
  PEX_SPIN_LOCK SpinLock; // [rsp+60h] [rbp-19h]
  __int64 v67; // [rsp+68h] [rbp-11h]
  RTL_BITMAP BitMapHeader; // [rsp+70h] [rbp-9h] BYREF
  RTL_BITMAP v69; // [rsp+80h] [rbp+7h] BYREF
  PRTL_BITMAP v70; // [rsp+90h] [rbp+17h]
  PRTL_BITMAP v71; // [rsp+98h] [rbp+1Fh]
  struct _KEVENT *Event; // [rsp+E0h] [rbp+67h]
  int v73; // [rsp+F8h] [rbp+7Fh]

  Event = a1;
  StartingRunIndex = 0;
  v63 = 0;
  Flink = (unsigned int)a1[1].Header.WaitListHead.Flink;
  v2 = *(_QWORD *)&a1[1].Header.Lock;
  *(_QWORD *)&BitMapHeader.SizeOfBitMap = 0LL;
  LODWORD(BitMapHeader.Buffer) = 0;
  *(_QWORD *)&v69.SizeOfBitMap = 0LL;
  LODWORD(v69.Buffer) = 0;
  if ( Flink >= 0x10 )
  {
    LOBYTE(v7) = MiOkToShrinkPageFiles(*(_QWORD *)(v2 + 17576), *(_QWORD *)(v2 + 17816));
    if ( !v7 )
      return KeSetEvent(Event, 0, 0);
    v5 = *(_DWORD *)(v2 + 17048);
    v6 = 1;
    v65 = 0x8000LL;
    Flink_high = 0x4000LL;
    v10 = (((v9 * (unsigned __int128)0xCCCCCCCCCCCCCCCDuLL) >> 64) & 0xFFFFFFFFFFFFFFF8uLL) - v8;
    a1 = Event;
    v3 = v10 - 0x8000;
    Flink = 0;
  }
  else
  {
    v65 = 0LL;
    v3 = 0x7FFFFFFFFFFFFFFFLL;
    Flink_high = HIDWORD(a1[1].Header.WaitListHead.Flink);
    v5 = Flink + 1;
    v6 = 0;
  }
  v60 = v5;
  v73 = v6;
  v59 = Flink_high;
  if ( Flink < v5 )
  {
    v11 = 8LL * Flink + 17056;
    v67 = v11;
    v64 = (_DWORD *)&a1[1].Header.WaitListHead.Blink + Flink;
    while ( 1 )
    {
      if ( Flink_high > v3 )
        return KeSetEvent(Event, 0, 0);
      v12 = *(_QWORD *)(v11 + v2);
      v13 = *(_WORD *)(v12 + 204);
      if ( ((v13 & 0x10) == 0 || !v6)
        && (v13 & 0x40) == 0
        && *(_QWORD *)v12 != *(_QWORD *)(v12 + 16)
        && *(_QWORD *)(v12 + 24) >= Flink_high )
      {
        break;
      }
LABEL_61:
      ++Flink;
      ++v64;
      v11 = v67 + 8;
      v67 += 8LL;
      if ( Flink >= v60 )
        return KeSetEvent(Event, 0, 0);
      v6 = v73;
    }
    v2 = *(_QWORD *)(v12 + 248);
    v61 = v2;
    SpinLock = (PEX_SPIN_LOCK)(v12 + 232);
    v14 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v12 + 232));
    v15 = *(_QWORD *)(v12 + 112);
    v16 = *(_DWORD *)v12;
    v17 = v14;
    v18 = *(_QWORD *)(v15 + 16);
    v19 = (RTL_BITMAP *)(v15 + 24);
    v20 = (unsigned __int64)(unsigned int)(*(_DWORD *)v12 - 1) >> 3;
    v70 = (PRTL_BITMAP)(v15 + 8);
    v21 = (v16 - 1) & 7;
    v71 = v19;
    if ( ((*(char *)(v18 + v20) >> v21) & 1) == 0 )
    {
      Buffer = v19->Buffer;
      if ( ((*((char *)Buffer + v20) >> v21) & 1) == 0 )
      {
        v23 = v3;
        if ( v3 > *(_QWORD *)v12 - *(_QWORD *)(v12 + 16) )
          v23 = *(_QWORD *)v12 - *(_QWORD *)(v12 + 16);
        v24 = (*(_QWORD *)v12 - v23) & 0xFFFFFFFFFFFFFFE0uLL;
        v25 = v16 - v24;
        v24 >>= 5;
        BitMapHeader.SizeOfBitMap = v25;
        v69.SizeOfBitMap = v25;
        BitMapHeader.Buffer = (unsigned int *)(v18 + 4 * v24);
        v26 = v25 - 1;
        v69.Buffer = &Buffer[v24];
        LastBackwardRunClear = RtlFindLastBackwardRunClear(&BitMapHeader, v25 - 1, &StartingRunIndex);
        if ( LastBackwardRunClear <= v23 )
          v23 = LastBackwardRunClear;
        v28 = RtlFindLastBackwardRunClear(&v69, v26, &v63);
        if ( v23 <= v28 )
          v28 = v23;
        if ( !v73 )
          v28 &= ~(v59 - 1);
        if ( v28 )
        {
          v29 = *(_QWORD *)v12;
          v30 = *(_QWORD *)(v12 + 240);
          v31 = *(_QWORD *)v12 - v28;
          if ( !v30 )
            goto LABEL_40;
          do
          {
            v32 = v30;
            v30 = *(_QWORD *)(v30 + 8);
          }
          while ( v30 );
          v33 = *(_QWORD *)(v32 - 8);
          if ( !v33 || v31 > v33 )
            goto LABEL_40;
          v31 = v33 + 1;
          if ( v33 + 1 >= v33 )
          {
            v28 = v29 - v31;
            if ( !v73 )
            {
              v28 &= ~(v59 - 1);
              v31 = v29 - v28;
            }
            if ( v28 )
            {
LABEL_40:
              v39 = v70;
              *(_QWORD *)(v12 + 24) -= v28;
              *(_QWORD *)(v12 + 48) -= v28;
              *(_QWORD *)v12 = v31;
              RtlSetBits(v39, v31, v28);
              RtlSetBits(v71, v31, v28);
              MiInvalidatePageFileBitmapsCache(v12, v31, v28, 0LL);
              ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v12 + 232));
              if ( KiIrqlFlags )
              {
                CurrentIrql = KeGetCurrentIrql();
                if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && (unsigned __int8)v17 <= 0xFu && CurrentIrql >= 2u )
                {
                  CurrentPrcb = KeGetCurrentPrcb();
                  SchedulerAssist = CurrentPrcb->SchedulerAssist;
                  v43 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v17 + 1));
                  v38 = (v43 & SchedulerAssist[5]) == 0;
                  SchedulerAssist[5] &= v43;
                  if ( v38 )
                    KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
                }
              }
              __writecr8(v17);
              v2 = v61;
              v3 -= v28;
              if ( (*(_BYTE *)(v12 + 204) & 0x10) == 0 )
              {
                v44 = v28 + v65;
                if ( !(unsigned int)MiChargeCommit(v61, v28 + v65, 2uLL) )
                {
                  v50 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v12 + 232));
                  v51 = *(_QWORD *)(v12 + 112);
                  *(_QWORD *)(v12 + 24) += v28;
                  *(_QWORD *)(v12 + 48) += v28;
                  *(_QWORD *)v12 = v28 + v31;
                  v52 = v50;
                  v53 = (RTL_BITMAP *)(v51 + 24);
                  RtlClearBits((PRTL_BITMAP)(v51 + 8), v31, v28);
                  RtlClearBits(v53, v31, v28);
                  if ( v31 < *(unsigned int *)(v12 + 120) )
                    *(_DWORD *)(v12 + 120) = v31;
                  MiCoalescePageFileBitmapsCache(v12, 0, v31);
                  ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v12 + 232));
                  if ( KiIrqlFlags )
                  {
                    v54 = KeGetCurrentIrql();
                    if ( (KiIrqlFlags & 1) != 0 && v54 <= 0xFu && (unsigned __int8)v52 <= 0xFu && v54 >= 2u )
                    {
                      v55 = KeGetCurrentPrcb();
                      v56 = v55->SchedulerAssist;
                      v57 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v52 + 1));
                      v38 = (v57 & v56[5]) == 0;
                      v56[5] &= v57;
                      if ( v38 )
                        KiRemoveSystemWorkPriorityKick((__int64)v55);
                    }
                  }
                  __writecr8(v52);
                  return KeSetEvent(Event, 0, 0);
                }
                MiReduceCommitLimits(v61, v28, 0LL);
                MiReturnCommit(v61, v44, v45);
              }
              *v64 = v31;
              goto LABEL_60;
            }
          }
          ExReleaseSpinLockExclusiveFromDpcLevel(SpinLock);
          if ( KiIrqlFlags )
          {
            v34 = KeGetCurrentIrql();
            if ( (KiIrqlFlags & 1) != 0 && v34 <= 0xFu && (unsigned __int8)v17 <= 0xFu && v34 >= 2u )
            {
              v35 = KeGetCurrentPrcb();
              v36 = v35->SchedulerAssist;
              v37 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v17 + 1));
              v38 = (v37 & v36[5]) == 0;
              v36[5] &= v37;
              if ( v38 )
                KiRemoveSystemWorkPriorityKick((__int64)v35);
            }
          }
          v2 = v61;
LABEL_59:
          __writecr8(v17);
LABEL_60:
          Flink_high = v59;
          goto LABEL_61;
        }
        v2 = v61;
      }
    }
    ExReleaseSpinLockExclusiveFromDpcLevel(SpinLock);
    if ( KiIrqlFlags )
    {
      v46 = KeGetCurrentIrql();
      if ( (KiIrqlFlags & 1) != 0 && v46 <= 0xFu && (unsigned __int8)v17 <= 0xFu && v46 >= 2u )
      {
        v47 = KeGetCurrentPrcb();
        v48 = v47->SchedulerAssist;
        v49 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v17 + 1));
        v38 = (v49 & v48[5]) == 0;
        v48[5] &= v49;
        if ( v38 )
          KiRemoveSystemWorkPriorityKick((__int64)v47);
      }
    }
    goto LABEL_59;
  }
  return KeSetEvent(Event, 0, 0);
}
