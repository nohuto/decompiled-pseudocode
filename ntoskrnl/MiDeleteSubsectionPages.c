/*
 * XREFs of MiDeleteSubsectionPages @ 0x14034B8E0
 * Callers:
 *     MiDeleteSegmentPages @ 0x14034BEB8 (MiDeleteSegmentPages.c)
 *     MiExtendSection @ 0x140726AAC (MiExtendSection.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14024DA40 (ExAcquireSpinLockExclusive.c)
 *     MmAccessFault @ 0x140267D40 (MmAccessFault.c)
 *     MiDeleteTransitionPte @ 0x1402833F0 (MiDeleteTransitionPte.c)
 *     MiLockProtoPoolPage @ 0x140283CA0 (MiLockProtoPoolPage.c)
 *     MiUnlockProtoPoolPage @ 0x1402861D0 (MiUnlockProtoPoolPage.c)
 *     MiInvalidPteConforms @ 0x140287530 (MiInvalidPteConforms.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14031B450 (MI_READ_PTE_LOCK_FREE.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140332B10 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiDecrementSubsectionViewCount @ 0x140334C10 (MiDecrementSubsectionViewCount.c)
 *     MiDeleteClusterSection @ 0x14034B3A4 (MiDeleteClusterSection.c)
 *     MiReleasePageFileSpace @ 0x14034BE0C (MiReleasePageFileSpace.c)
 *     KeYieldProcessorEx @ 0x1403512B0 (KeYieldProcessorEx.c)
 *     MiUpdateSystemProtoPtesTree @ 0x140368AE0 (MiUpdateSystemProtoPtesTree.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 *     MiDeleteSubsectionLargePages @ 0x14064C7F8 (MiDeleteSubsectionLargePages.c)
 *     MiLockSpecialPurposeMemoryCachedPage @ 0x14065E278 (MiLockSpecialPurposeMemoryCachedPage.c)
 *     MiReturnCrossPartitionSectionCharges @ 0x140668DD4 (MiReturnCrossPartitionSectionCharges.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiDeleteSubsectionPages(_QWORD *BugCheckParameter2, _QWORD *a2)
{
  __int64 v2; // r13
  ULONG_PTR v3; // r12
  unsigned __int8 v4; // dl
  int v5; // edi
  __int64 v6; // rax
  ULONG_PTR v7; // rbx
  char *v8; // rcx
  __int64 v9; // r8
  __int64 v10; // rbp
  unsigned __int64 v11; // rsi
  char *v12; // r15
  unsigned __int64 v13; // rdi
  __int64 v14; // r12
  unsigned __int64 v15; // r10
  __int64 v16; // r11
  unsigned __int64 v17; // r9
  __int64 v18; // r8
  __int64 v19; // rbx
  unsigned __int64 v20; // rax
  ULONG_PTR v21; // r14
  __int64 v22; // rdx
  unsigned __int64 v23; // rax
  __int64 v24; // rax
  __int64 v25; // rax
  __int64 v26; // rsi
  KIRQL v27; // al
  unsigned __int64 v28; // rbx
  KIRQL v29; // r14
  PVOID v30; // r15
  char v32; // al
  struct _LIST_ENTRY *Flink; // r8
  __int64 v34; // rax
  __int64 v35; // rax
  ULONG_PTR v36; // rcx
  __int64 v37; // rax
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v41; // edx
  bool v42; // zf
  unsigned __int8 v43; // cl
  struct _KPRCB *v44; // r9
  int v45; // eax
  _DWORD *v46; // r8
  char v47; // [rsp+20h] [rbp-88h]
  BOOL v48; // [rsp+24h] [rbp-84h]
  __int64 v49; // [rsp+28h] [rbp-80h]
  ULONG_PTR v50; // [rsp+30h] [rbp-78h]
  __int64 v51; // [rsp+38h] [rbp-70h] BYREF
  __int64 v52; // [rsp+40h] [rbp-68h]
  __int64 v53; // [rsp+48h] [rbp-60h]
  PVOID P; // [rsp+50h] [rbp-58h]
  _QWORD *v55; // [rsp+B0h] [rbp+8h] BYREF
  _QWORD *v56; // [rsp+B8h] [rbp+10h]
  unsigned __int8 v57; // [rsp+C0h] [rbp+18h] BYREF
  unsigned __int64 v58; // [rsp+C8h] [rbp+20h] BYREF

  v56 = a2;
  v55 = BugCheckParameter2;
  v2 = *BugCheckParameter2;
  v3 = (ULONG_PTR)BugCheckParameter2;
  v4 = 17;
  v51 = 0LL;
  v57 = 17;
  v5 = *(_DWORD *)(v2 + 56);
  v47 = v5;
  v53 = *(_QWORD *)(qword_140C67048 + 8LL * (*(_WORD *)(v2 + 60) & 0x3FF));
  v6 = *(_QWORD *)(v2 + 64);
  v7 = 0LL;
  v48 = v6 != 0;
  v8 = (char *)BugCheckParameter2[1];
  v9 = 0LL;
  v10 = 0LL;
  v50 = 0LL;
  v58 = v6 & 0xFFFFFFFFFFFFFFF0uLL;
  v49 = 0LL;
  v52 = 0LL;
  P = v8;
  if ( !v8 )
    goto LABEL_49;
  v11 = (unsigned __int64)v8;
  v12 = &v8[8 * *(unsigned int *)(v3 + 44)];
  if ( v8 >= v12 )
    goto LABEL_49;
  v13 = v58;
  v14 = 0LL;
  while ( 2 )
  {
    v15 = 0xFFFFDE0000000000uLL;
    v16 = 0x40000000000000LL;
    v17 = 0xFFFFDE0000000028uLL;
    v18 = 0xFFFFFFFFFFLL;
    if ( (v11 & 0xFFF) != 0 )
    {
      if ( v10 )
        goto LABEL_6;
    }
    else if ( v10 )
    {
      MiUnlockProtoPoolPage(v10, v4);
      v10 = 0LL;
    }
    while ( 1 )
    {
      if ( (*(_DWORD *)(v2 + 56) & 0x20) == 0 )
      {
        v24 = MI_READ_PTE_LOCK_FREE(((v11 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
        v51 = v24;
        if ( (v24 & 1) == 0 && (v24 & 0x400) != 0 && (v24 & 2) != 0 )
        {
          v11 = (v11 & 0xFFFFFFFFFFFFF000uLL) + 4096;
          goto LABEL_14;
        }
      }
      v10 = MiLockProtoPoolPage(v11, &v57);
      if ( v10 )
        break;
      MmAccessFault(2uLL, v11, 0, 0LL);
    }
    v16 = 0x40000000000000LL;
    v15 = 0xFFFFDE0000000000uLL;
    v17 = 0xFFFFDE0000000028uLL;
    v18 = 0xFFFFFFFFFFLL;
    while ( 1 )
    {
      while ( 1 )
      {
LABEL_6:
        v19 = *(_QWORD *)v11;
        v20 = *(_QWORD *)v11;
        if ( (*(_QWORD *)v11 & 1) != 0 )
          goto LABEL_20;
        if ( (*(_QWORD *)v11 & 0xC00LL) != 0x800 )
        {
          v21 = 0LL;
          goto LABEL_9;
        }
        if ( MiInvalidPteConforms(*(_QWORD *)v11) )
        {
          v20 = v19;
          if ( qword_140C657C0 && (v19 & 0x10) == 0 )
            v20 = v19 & ~qword_140C657C0;
LABEL_20:
          v23 = v18 & (v20 >> 12);
          if ( v23 <= qword_140C65820 && (v16 & *(_QWORD *)(v17 + 48 * v23)) != 0 )
            break;
        }
      }
      v21 = v15 + 48 * v23;
      LODWORD(v58) = 0;
      if ( _interlockedbittestandset64((volatile signed __int32 *)(v21 + 24), 0x3FuLL) )
      {
        do
        {
          do
            KeYieldProcessorEx(&v58);
          while ( *(__int64 *)(v21 + 24) < 0 );
        }
        while ( _interlockedbittestandset64((volatile signed __int32 *)(v21 + 24), 0x3FuLL) );
        v18 = 0xFFFFFFFFFFLL;
        v17 = 0xFFFFDE0000000028uLL;
        v15 = 0xFFFFDE0000000000uLL;
        v16 = 0x40000000000000LL;
      }
      if ( *(_QWORD *)v11 == v19 )
        break;
      _InterlockedAnd64((volatile signed __int64 *)(v21 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    }
    if ( (*(_DWORD *)(*(_QWORD *)(qword_140C67048 + 8 * ((*(_QWORD *)(v21 + 40) >> 43) & 0x3FFLL)) + 4LL) & 0x80u) != 0 )
      v21 = MiLockSpecialPurposeMemoryCachedPage(v21, 0LL);
LABEL_9:
    v22 = *(_QWORD *)v11;
    if ( v11 >= 0xFFFFF6FB7DBED000uLL
      && v11 <= 0xFFFFF6FB7DBED7F8uLL
      && (MiFlags & 0x600000) != 0
      && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
      && (v22 & 1) != 0
      && ((v22 & 0x20) == 0 || (v22 & 0x42) == 0) )
    {
      Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
      if ( Flink )
      {
        v34 = *((_QWORD *)&Flink->Flink + ((v11 >> 3) & 0x1FF));
        if ( (v34 & 0x20) != 0 )
          v22 |= 0x20uLL;
        if ( (v34 & 0x42) != 0 )
          v22 |= 0x42uLL;
      }
    }
    v51 = v22;
    if ( (v22 & 1) != 0 )
    {
      v35 = MI_READ_PTE_LOCK_FREE((unsigned __int64)&v51);
      if ( *(_WORD *)(v21 + 32) > 2u )
        ++v52;
      if ( (v35 & 0x1FF000) == 0 )
      {
        v36 = *(_QWORD *)v21 ^ (v50 >> 3);
        v50 = v21;
        *(_QWORD *)v21 ^= v36 & 0xFFFFFFFFFFELL;
      }
      _InterlockedAnd64((volatile signed __int64 *)(v21 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      goto LABEL_12;
    }
    if ( (v22 & 0x400) != 0 )
      goto LABEL_12;
    if ( (v22 & 0x800) == 0 )
    {
      MiReleasePageFileSpace(v53, v22, 1LL);
      goto LABEL_12;
    }
    if ( qword_140C657C0 && (v22 & 0x10) == 0 )
      LOWORD(v22) = ~(_WORD)qword_140C657C0 & v22;
    if ( (_bittest64((const signed __int64 *)(v21 + 16), 0xAu) & ((*(_DWORD *)(v2 + 56) & 0x20) == 0)) != 0 )
    {
      v32 = *(_BYTE *)(v21 + 34);
      if ( (v32 & 0x10) != 0 || (v32 & 8) != 0 )
        ++v14;
    }
    if ( v13
      || (v22 & 0xF000) != 0
      || (__int64)((unsigned __int64)&v12[-v11] & 0xFFFFFFFFFFFFFFF8uLL) < 128
      || ((4096 - (v11 & 0xFFF)) & 0xFFFFFFF8) < 0x80
      || !(unsigned int)MiDeleteClusterSection(v21, v11) )
    {
      if ( (unsigned int)MiDeleteTransitionPte(v11, v21, 0x11u, 1) == 3 )
        ++*v56;
LABEL_12:
      v11 += 8LL;
      goto LABEL_13;
    }
    v11 += 128LL;
LABEL_13:
    v7 = v50;
LABEL_14:
    if ( v11 < (unsigned __int64)v12 )
    {
      v4 = v57;
      continue;
    }
    break;
  }
  LOBYTE(v5) = v47;
  v49 = v14;
  v3 = (ULONG_PTR)v55;
  if ( v10 )
    MiUnlockProtoPoolPage(v10, v57);
  if ( v7 )
  {
    v37 = MiDeleteSubsectionLargePages(v3, v7, v52, v17);
    *v56 += v37;
  }
  v9 = v49;
LABEL_49:
  if ( (v5 & 0xA0) != 0x80 )
    return v9;
  v25 = MiDecrementSubsectionViewCount((_QWORD *)v3, 0LL, v9);
  LODWORD(v55) = 0;
  v26 = v25;
  v27 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v2 + 72));
  v28 = v27;
  v29 = v27;
  while ( *(_DWORD *)(v3 + 104) )
  {
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v2 + 72));
    if ( KiIrqlFlags )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && (unsigned __int8)v28 <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v41 = ~(unsigned __int16)(-1LL << (v29 + 1));
        v42 = (v41 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v41;
        if ( v42 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    __writecr8(v28);
    KeYieldProcessorEx(&v55);
    ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v2 + 72));
  }
  v30 = P;
  if ( P )
  {
    MiUpdateSystemProtoPtesTree(v3 + 120, 0LL);
    *(_QWORD *)(v3 + 8) = 0LL;
  }
  ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v2 + 72));
  if ( KiIrqlFlags )
  {
    v43 = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0 && v43 <= 0xFu && (unsigned __int8)v28 <= 0xFu && v43 >= 2u )
    {
      v44 = KeGetCurrentPrcb();
      v45 = ~(unsigned __int16)(-1LL << (v29 + 1));
      v46 = v44->SchedulerAssist;
      v42 = (v45 & v46[5]) == 0;
      v46[5] &= v45;
      if ( v42 )
        KiRemoveSystemWorkPriorityKick(v44);
    }
  }
  __writecr8(v28);
  if ( v30 )
    ExFreePoolWithTag(v30, 0);
  if ( v26 )
    MiReturnCrossPartitionSectionCharges(v53, v48, v26);
  return v49;
}
