char __fastcall MmPurgeSection(SECTION_OBJECT_POINTERS *a1, __int64 *a2, int a3, char a4, _BYTE *a5)
{
  int v5; // r13d
  __int64 *v8; // rbx
  __int64 CanFileBeTruncatedInternal; // rax
  unsigned __int8 v10; // di
  __int64 v11; // r14
  ULONG_PTR v13; // r8
  volatile LONG *v14; // rcx
  ULONG_PTR v15; // r12
  unsigned __int8 v16; // di
  ULONG_PTR v17; // rsi
  char v18; // bl
  KIRQL v19; // al
  unsigned __int64 v20; // r12
  ULONG_PTR v21; // rcx
  __int64 v22; // rcx
  unsigned int v23; // eax
  unsigned __int64 v24; // rbx
  unsigned __int64 v25; // rax
  unsigned __int64 v26; // rax
  ULONG_PTR v27; // rdi
  ULONG_PTR BugCheckParameter4; // rbx
  unsigned __int8 v29; // dl
  ULONG_PTR v30; // r8
  volatile LONG *v31; // rsi
  __int64 v32; // rax
  __int64 v33; // r15
  __int64 v34; // rax
  __int64 v35; // r15
  __int64 inserted; // rax
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *SchedulerAssist; // r8
  int v40; // eax
  bool v41; // zf
  unsigned __int8 v42; // cl
  struct _KPRCB *v43; // r10
  _DWORD *v44; // r9
  int v45; // eax
  struct _LIST_ENTRY *Flink; // rdx
  __int64 v47; // rax
  _BYTE *v48; // rcx
  __int64 v49; // rbx
  int v50; // [rsp+30h] [rbp-91h]
  __int64 v51; // [rsp+38h] [rbp-89h]
  ULONG_PTR v52; // [rsp+40h] [rbp-81h]
  volatile LONG *SpinLock; // [rsp+48h] [rbp-79h]
  int v54; // [rsp+50h] [rbp-71h] BYREF
  ULONG_PTR v55; // [rsp+58h] [rbp-69h]
  __int64 v56; // [rsp+60h] [rbp-61h]
  __int64 v57; // [rsp+68h] [rbp-59h] BYREF
  volatile LONG *v58; // [rsp+70h] [rbp-51h]
  ULONG_PTR v59; // [rsp+78h] [rbp-49h]
  ULONG_PTR BugCheckParameter2[2]; // [rsp+80h] [rbp-41h] BYREF
  ULONG_PTR v61[2]; // [rsp+90h] [rbp-31h]
  __int128 v62; // [rsp+A0h] [rbp-21h]
  _OWORD v63[2]; // [rsp+B0h] [rbp-11h] BYREF
  __int64 v64; // [rsp+D0h] [rbp+Fh]
  __int64 v65; // [rsp+120h] [rbp+5Fh] BYREF
  char v66; // [rsp+128h] [rbp+67h]
  unsigned __int8 v67; // [rsp+138h] [rbp+77h]

  LOBYTE(v65) = 0;
  v5 = 0;
  v64 = 0LL;
  v67 = 0;
  v57 = 0LL;
  LODWORD(v8) = (_DWORD)a2;
  *a5 = 0;
  *(_OWORD *)BugCheckParameter2 = 0LL;
  *(_OWORD *)v61 = 0LL;
  v62 = 0LL;
  memset(v63, 0, sizeof(v63));
  if ( a2 )
  {
    v8 = &v57;
    v57 = *a2;
  }
  v56 = 0LL;
  CanFileBeTruncatedInternal = MiCanFileBeTruncatedInternal(a1, (__int64)&v65);
  v10 = v65;
  v11 = CanFileBeTruncatedInternal;
  if ( (_BYTE)v65 == 17 )
    return 0;
  if ( !CanFileBeTruncatedInternal )
    return 1;
  if ( (a4 & 1) == 0 && *(_DWORD *)(CanFileBeTruncatedInternal + 88) || !*(_QWORD *)(CanFileBeTruncatedInternal + 64) )
  {
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(CanFileBeTruncatedInternal + 72));
    if ( KiIrqlFlags )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && v10 <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v10 = v65;
        v40 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v65 + 1));
        v41 = (v40 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v40;
        if ( v41 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    __writecr8(v10);
    return 0;
  }
  *(_DWORD *)(CanFileBeTruncatedInternal + 56) |= 0x8000u;
  if ( !(unsigned int)MiComputeDataFlushRange(
                        CanFileBeTruncatedInternal,
                        v10,
                        (_DWORD)v8,
                        a3,
                        1,
                        (__int64)BugCheckParameter2) )
    return 1;
  v13 = v61[1];
  v14 = (volatile LONG *)(v11 + 72);
  v15 = v62;
  v16 = 17;
  v17 = BugCheckParameter2[1];
  v18 = 1;
  LOBYTE(v65) = 17;
  v59 = v61[1];
  v55 = v62;
  v66 = 1;
  SpinLock = (volatile LONG *)(v11 + 72);
  while ( 1 )
  {
LABEL_11:
    v52 = v13;
    if ( v16 == 17 )
    {
      v19 = ExAcquireSpinLockExclusive(v14);
      v13 = v52;
      v16 = v19;
      LOBYTE(v65) = v19;
    }
    if ( v15 == v13 )
      v20 = v61[0] + 8;
    else
      v20 = *(_QWORD *)(v13 + 8) + 8LL * (*(_DWORD *)(v13 + 44) - (*(_DWORD *)(v13 + 52) & 0x3FFFFFFFu));
    if ( (*(_BYTE *)(v11 + 62) & 0xC) != 0 )
      v5 = 1;
    if ( *(_QWORD *)(v13 + 8) )
      break;
    v15 = v55;
    if ( v13 == v55 )
      goto LABEL_52;
    v13 = *(_QWORD *)(v13 + 16);
    v14 = (volatile LONG *)(v11 + 72);
    SpinLock = (volatile LONG *)(v11 + 72);
    v5 = 0;
    v17 = *(_QWORD *)(v13 + 8);
  }
  if ( !*(_DWORD *)(v13 + 108) )
  {
    MiIncrementSubsectionViewCount(v13);
    v21 = v52;
    if ( (*(_BYTE *)(v52 + 34) & 8) != 0 )
    {
      MiRemoveUnusedSubsection(v52);
      v21 = v52;
    }
    *(_WORD *)(v21 + 32) |= 1u;
    v58 = SpinLock;
    ExReleaseSpinLockExclusiveFromDpcLevel(SpinLock);
    if ( KiIrqlFlags )
    {
      v42 = KeGetCurrentIrql();
      if ( (KiIrqlFlags & 1) != 0 && v42 <= 0xFu && v16 <= 0xFu && v42 >= 2u )
      {
        v43 = KeGetCurrentPrcb();
        v44 = v43->SchedulerAssist;
        v16 = v65;
        v45 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v65 + 1));
        v41 = (v45 & v44[5]) == 0;
        v44[5] &= v45;
        if ( v41 )
          KiRemoveSystemWorkPriorityKick(v43);
      }
    }
    __writecr8(v16);
    v22 = 0LL;
    v67 = 17;
    v51 = 0LL;
    if ( v5 )
    {
      MiChangingSubsectionProtos(v52);
      v22 = 0LL;
    }
    v23 = 0;
    v50 = 0;
    if ( v17 >= v20 )
      goto LABEL_48;
LABEL_25:
    if ( (v17 & 0xFFF) != 0 )
    {
      if ( v67 != 17 )
        goto LABEL_27;
    }
    else if ( v67 != 17 )
    {
      MiUnlockProtoPoolPage(v22, v67);
    }
    v51 = MiCheckProtoPtePageState(v17);
    v22 = v51;
    if ( !v51 )
    {
      v17 = (v17 & 0xFFFFFFFFFFFFF000uLL) + 4096;
      goto LABEL_61;
    }
    while ( 1 )
    {
LABEL_27:
      while ( 1 )
      {
        v24 = *(_QWORD *)v17;
        v25 = *(_QWORD *)v17;
        if ( (*(_QWORD *)v17 & 1) == 0 )
          break;
LABEL_33:
        v26 = (v25 >> 12) & 0xFFFFFFFFFFLL;
        if ( v26 <= qword_140C65820 && _bittest64((const signed __int64 *)(48 * v26 - 0x21FFFFFFFFD8LL), 0x36u) )
        {
          v27 = 48 * v26 - 0x220000000000LL;
          v54 = 0;
          while ( _interlockedbittestandset64((volatile signed __int32 *)(v27 + 24), 0x3FuLL) )
          {
            do
              KeYieldProcessorEx(&v54);
            while ( *(__int64 *)(v27 + 24) < 0 );
          }
          if ( *(_QWORD *)v17 == v24 )
          {
            if ( (*(_DWORD *)(*(_QWORD *)(qword_140C67048 + 8 * ((*(_QWORD *)(v27 + 40) >> 43) & 0x3FFLL)) + 4LL) & 0x80u) != 0 )
              v27 = MiLockSpecialPurposeMemoryCachedPage(v27, 0LL);
            if ( !v27 )
            {
LABEL_55:
              v17 += 8LL;
              goto LABEL_60;
            }
            BugCheckParameter4 = *(_QWORD *)v17;
            if ( !(unsigned int)MiPteInShadowRange(v17)
              || (MiFlags & 0x600000) == 0
              || KeGetCurrentThread()->ApcState.Process->AddressPolicy == 1 )
            {
              goto LABEL_41;
            }
            if ( (BugCheckParameter4 & 1) != 0 )
            {
              if ( (BugCheckParameter4 & 0x20) == 0 || (BugCheckParameter4 & 0x42) == 0 )
              {
                Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
                if ( Flink )
                {
                  v47 = *((_QWORD *)&Flink->Flink + ((v17 >> 3) & 0x1FF));
                  if ( (v47 & 0x20) != 0 )
                    BugCheckParameter4 |= 0x20uLL;
                  if ( (v47 & 0x42) != 0 )
                    BugCheckParameter4 |= 0x42uLL;
                }
              }
LABEL_41:
              if ( (BugCheckParameter4 & 1) != 0 )
                goto LABEL_45;
            }
            if ( (*(_DWORD *)(v27 + 16) & 0x401) != 0x400LL || (*(_QWORD *)(v27 + 8) | 0x8000000000000000uLL) != v17 )
              KeBugCheckEx(0xDEu, 2uLL, v17, *(_QWORD *)(v27 + 8), BugCheckParameter4);
            v29 = *(_BYTE *)(v27 + 34);
            if ( (((a4 & 2) != 0) & (v29 >> 4)) != 0 )
            {
LABEL_45:
              _InterlockedAnd64((volatile signed __int64 *)(v27 + 24), 0x7FFFFFFFFFFFFFFFuLL);
              v23 = v50;
              v18 = 0;
              v66 = 0;
              goto LABEL_46;
            }
            if ( (v29 & 8) != 0 )
            {
              MiWaitForPageWriteCompletion(v27, v11, v51, v67);
              v67 = 17;
              goto LABEL_60;
            }
            if ( v5 )
            {
              v48 = a5;
              if ( *(_WORD *)(v27 + 32) )
                *a5 = 1;
              if ( (*(_BYTE *)(v11 + 62) & 0xC) == 8 )
                *v48 = 1;
            }
            MiDeleteTransitionPte(v17, v27, 0x11u, 1);
            v23 = 1;
            v50 = 1;
            if ( *(_QWORD *)(v11 + 32) )
            {
              v17 += 8LL;
              if ( (v17 & 0x78) == 0 && KeShouldYieldProcessor() )
              {
                MiUnlockProtoPoolPage(v51, v67);
                v67 = 17;
              }
LABEL_60:
              v22 = v51;
LABEL_61:
              if ( v17 >= v20 )
              {
                v23 = v50;
                goto LABEL_63;
              }
              goto LABEL_25;
            }
LABEL_63:
            v18 = v66;
LABEL_46:
            if ( v67 != 17 )
            {
              MiUnlockProtoPoolPage(v51, v67);
              v23 = v50;
            }
LABEL_48:
            if ( v5 )
              MiSubsectionProtosCreated(v52, v63, 0LL, v23);
            v16 = ExAcquireSpinLockExclusive(SpinLock);
            LOBYTE(v65) = v16;
            MiDecrementSubsectionViewCount(v52);
            v30 = v52;
            v31 = v58;
            v14 = v58;
            SpinLock = v58;
            if ( !*(_QWORD *)(v52 + 96) )
            {
              SpinLock = v58;
              if ( (*(_BYTE *)(v52 + 34) & 1) == 0 )
              {
                inserted = MiInsertUnusedSubsection(v52);
                v56 += inserted;
                v14 = v31;
                v30 = v52;
                SpinLock = v31;
              }
            }
            v15 = v55;
            if ( v30 == v55 || !v18 )
              goto LABEL_52;
            v13 = *(_QWORD *)(v30 + 16);
            v5 = 0;
            v17 = *(_QWORD *)(v13 + 8);
            goto LABEL_11;
          }
          _InterlockedAnd64((volatile signed __int64 *)(v27 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        }
      }
      if ( (*(_QWORD *)v17 & 0xC00LL) != 0x800 )
        goto LABEL_55;
      if ( (unsigned int)MiInvalidPteConforms(*(_QWORD *)v17) )
      {
        v25 = v24;
        if ( qword_140C657C0 && (v24 & 0x10) == 0 )
          v25 = v24 & ~qword_140C657C0;
        goto LABEL_33;
      }
    }
  }
  v15 = v55;
  v18 = 0;
  v66 = 0;
LABEL_52:
  v32 = MiDecrementSubsections(v59);
  v33 = v32 + v56;
  v34 = MiDecrementSubsections(v15);
  --*(_QWORD *)(v11 + 40);
  *(_DWORD *)(v11 + 56) &= ~4u;
  v35 = v34 + v33;
  if ( v35 )
  {
    v49 = *(_QWORD *)(qword_140C67048 + 8LL * (*(_WORD *)(v11 + 60) & 0x3FF));
    MiCheckControlArea(v11, v16);
    MiReturnCrossPartitionSectionCharges(v49, 1LL, v35);
    return v66;
  }
  else
  {
    MiCheckControlArea(v11, v16);
  }
  return v18;
}
