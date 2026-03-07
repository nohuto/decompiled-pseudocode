__int64 MiPurgeBadFileOnlyPages()
{
  KIRQL CurrentIrql; // bl
  _DWORD *SchedulerAssist; // r9
  __int64 v2; // rdx
  ULONG_PTR v3; // r12
  __int64 v4; // rdi
  unsigned __int8 v5; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *v7; // r9
  int v8; // eax
  bool v9; // zf
  __int64 v10; // r13
  __int64 v11; // r14
  unsigned __int8 v12; // al
  struct _KPRCB *v13; // r10
  _DWORD *v14; // r9
  int v15; // eax
  __int64 v16; // rsi
  KIRQL v17; // al
  unsigned __int64 v18; // r15
  __int64 *v19; // rax
  volatile LONG *v20; // rcx
  __int64 *v21; // r14
  unsigned __int8 v22; // al
  struct _KPRCB *v23; // r10
  _DWORD *v24; // r9
  int v25; // eax
  unsigned __int64 v26; // rbx
  __int64 v27; // rdx
  __int64 v28; // r8
  __int16 v29; // r14
  unsigned __int8 v30; // al
  struct _KPRCB *v31; // r10
  _DWORD *v32; // r9
  int v33; // eax
  unsigned __int8 v34; // al
  char v35; // cl
  unsigned __int8 v36; // al
  struct _KPRCB *v37; // r9
  int v38; // eax
  _DWORD *v39; // r8
  __int64 result; // rax
  __int64 *v41; // [rsp+60h] [rbp+8h] BYREF
  ULONG_PTR BugCheckParameter2; // [rsp+68h] [rbp+10h] BYREF

  BugCheckParameter2 = 0LL;
  v41 = 0LL;
  do
  {
    while ( 1 )
    {
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
      {
        SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
        if ( CurrentIrql == 2 )
          LODWORD(v2) = 4;
        else
          v2 = (-1LL << (CurrentIrql + 1)) & 4;
        SchedulerAssist[5] |= v2;
      }
      ExAcquireSpinLockExclusiveAtDpcLevel(&dword_140C6CB20);
      v3 = qword_140C65318;
      byte_140C653AA = 0;
      if ( qword_140C65318 == 0x3FFFFFFFFFLL )
      {
        ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140C6CB20);
        if ( !KiIrqlFlags )
          goto LABEL_69;
        v36 = KeGetCurrentIrql();
        if ( (KiIrqlFlags & 1) == 0 || v36 > 0xFu || CurrentIrql > 0xFu || v36 < 2u )
          goto LABEL_69;
        v35 = CurrentIrql + 1;
        goto LABEL_67;
      }
      v4 = 48 * qword_140C65318 - 0x220000000000LL;
      if ( !_interlockedbittestandset64((volatile signed __int32 *)(v4 + 24), 0x3FuLL) )
        break;
      ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140C6CB20);
      if ( KiIrqlFlags )
      {
        v5 = KeGetCurrentIrql();
        if ( (KiIrqlFlags & 1) != 0 && v5 <= 0xFu && CurrentIrql <= 0xFu && v5 >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          v7 = CurrentPrcb->SchedulerAssist;
          v8 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
          v9 = (v8 & v7[5]) == 0;
          v7[5] &= v8;
          if ( v9 )
            KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
        }
      }
      __writecr8(CurrentIrql);
    }
    v10 = qword_140C65308;
    MiUnlinkPageFromBadList(48 * v3 - 0x220000000000LL, 128LL);
    ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140C6CB20);
    MiAddLockedPageCharge(48 * v3 - 0x220000000000LL, 1);
    v41 = 0LL;
    BugCheckParameter2 = 0LL;
    v11 = MiPreventControlAreaDeletion(48 * v3 - 0x220000000000LL, &BugCheckParameter2, &v41);
    _InterlockedAnd64((volatile signed __int64 *)(v4 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( KiIrqlFlags )
    {
      v12 = KeGetCurrentIrql();
      if ( (KiIrqlFlags & 1) != 0 && v12 <= 0xFu && CurrentIrql <= 0xFu && v12 >= 2u )
      {
        v13 = KeGetCurrentPrcb();
        v14 = v13->SchedulerAssist;
        v15 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
        v9 = (v15 & v14[5]) == 0;
        v14[5] &= v15;
        if ( v9 )
          KiRemoveSystemWorkPriorityKick((__int64)v13);
      }
    }
    __writecr8(CurrentIrql);
    LODWORD(v16) = 0;
    if ( v11 )
    {
      if ( v41 )
        MiReleaseControlAreaWaiters(v41);
      MiPurgeFileOnlyPfn(48 * v3 - 0x220000000000LL);
      v16 = (*(_QWORD *)(v4 + 24) >> 62) & 1LL;
      if ( BugCheckParameter2 )
        MiDecrementSubsection((__int64 *)BugCheckParameter2);
      v17 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v11 + 72));
      *(_DWORD *)(v11 + 56) &= ~4u;
      v18 = v17;
      v19 = (__int64 *)MiDecrementModifiedWriteCount(v11, 1);
      v20 = (volatile LONG *)(v11 + 72);
      v41 = v19;
      v21 = v19;
      ExReleaseSpinLockExclusiveFromDpcLevel(v20);
      if ( KiIrqlFlags )
      {
        v22 = KeGetCurrentIrql();
        if ( (KiIrqlFlags & 1) != 0 && v22 <= 0xFu && (unsigned __int8)v18 <= 0xFu && v22 >= 2u )
        {
          v23 = KeGetCurrentPrcb();
          v24 = v23->SchedulerAssist;
          v25 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v18 + 1));
          v9 = (v25 & v24[5]) == 0;
          v24[5] &= v25;
          if ( v9 )
            KiRemoveSystemWorkPriorityKick((__int64)v23);
          v21 = v41;
        }
      }
      __writecr8(v18);
      if ( v21 )
        MiReleaseControlAreaWaiters(v21);
    }
    v26 = (unsigned __int8)MiLockPageInline(48 * v3 - 0x220000000000LL);
    if ( (unsigned int)MiRemoveLockedPageCharge(48 * v3 - 0x220000000000LL, v27, v28) )
    {
      MiSetPfnTbFlushStamp(48 * v3 - 0x220000000000LL, 0, 1);
      MiPfnReferenceCountIsZero(48 * v3 - 0x220000000000LL, v3);
    }
    v29 = *(_WORD *)(v4 + 32);
    _InterlockedAnd64((volatile signed __int64 *)(v4 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( KiIrqlFlags )
    {
      v30 = KeGetCurrentIrql();
      if ( (KiIrqlFlags & 1) != 0 && v30 <= 0xFu && (unsigned __int8)v26 <= 0xFu && v30 >= 2u )
      {
        v31 = KeGetCurrentPrcb();
        v32 = v31->SchedulerAssist;
        v33 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v26 + 1));
        v9 = (v33 & v32[5]) == 0;
        v32[5] &= v33;
        if ( v9 )
          KiRemoveSystemWorkPriorityKick((__int64)v31);
      }
    }
    __writecr8(v26);
  }
  while ( !v29 && (_DWORD)v16 || v10 != 1 );
  CurrentIrql = ExAcquireSpinLockExclusive(&dword_140C6CB20);
  if ( qword_140C65308 )
    byte_140C653AA = 1;
  ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140C6CB20);
  if ( KiIrqlFlags )
  {
    v34 = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0 && v34 <= 0xFu && CurrentIrql <= 0xFu && v34 >= 2u )
    {
      v35 = CurrentIrql + 1;
LABEL_67:
      v37 = KeGetCurrentPrcb();
      v38 = ~(unsigned __int16)(-1LL << v35);
      v39 = v37->SchedulerAssist;
      v9 = (v38 & v39[5]) == 0;
      v39[5] &= v38;
      if ( v9 )
        KiRemoveSystemWorkPriorityKick((__int64)v37);
    }
  }
LABEL_69:
  result = CurrentIrql;
  __writecr8(CurrentIrql);
  return result;
}
