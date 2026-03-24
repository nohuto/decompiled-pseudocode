/*
 * XREFs of MiMapPageFileHash @ 0x140327238
 * Callers:
 *     MiGatherPagefilePages @ 0x1403318B4 (MiGatherPagefilePages.c)
 *     MiStoreUpdatePagefileHash @ 0x140337490 (MiStoreUpdatePagefileHash.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14021D020 (ExAcquireSpinLockExclusive.c)
 *     MmMapLockedPagesSpecifyCache @ 0x140226C80 (MmMapLockedPagesSpecifyCache.c)
 *     MiUpdatePageFileHighInPte @ 0x14023D6F0 (MiUpdatePageFileHighInPte.c)
 *     MiInitializePageColorBase @ 0x14023EBF0 (MiInitializePageColorBase.c)
 *     MiSetPfnTbFlushStamp @ 0x14023FAD0 (MiSetPfnTbFlushStamp.c)
 *     MiGetAnyMultiplexedVm @ 0x14027D77C (MiGetAnyMultiplexedVm.c)
 *     MiLockPageInline @ 0x1402804B0 (MiLockPageInline.c)
 *     MiReturnCommit @ 0x140298920 (MiReturnCommit.c)
 *     MmUnmapLockedPages @ 0x14029D0C0 (MmUnmapLockedPages.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1402AE550 (MI_READ_PTE_LOCK_FREE.c)
 *     MiMakeValidPte @ 0x1402AEDC0 (MiMakeValidPte.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402BC410 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiPteInShadowRange @ 0x1402C9180 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x14030E10C (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x14030E16C (MiPteHasShadow.c)
 *     MiInitializePfnForOtherProcess @ 0x140356D68 (MiInitializePfnForOtherProcess.c)
 *     MiWritePageFileHash @ 0x1403898C4 (MiWritePageFileHash.c)
 *     MiGetFileHashPage @ 0x14038C960 (MiGetFileHashPage.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F2D04 (KiRemoveSystemWorkPriorityKick.c)
 *     MiFreePageFileHashPfn @ 0x14055D4BC (MiFreePageFileHashPfn.c)
 */

void __fastcall MiMapPageFileHash(__int64 a1, __int64 a2, __int64 a3, unsigned int a4, unsigned int a5)
{
  unsigned int v5; // r14d
  __int64 v7; // r13
  __int64 v8; // r12
  char *AnyMultiplexedVm; // rax
  __int64 v10; // rax
  volatile LONG *v11; // rsi
  KIRQL v12; // al
  __int64 v13; // rdi
  unsigned __int64 v14; // r15
  __int16 v15; // dx
  unsigned __int64 v16; // r14
  unsigned int v17; // ecx
  unsigned __int64 v18; // rbx
  signed __int32 v19; // ecx
  __int64 FileHashPage; // rax
  __int64 v21; // rbx
  __int64 v22; // r13
  __int64 v23; // rdx
  __int64 v24; // r8
  _DWORD *v25; // r9
  unsigned __int8 v26; // si
  unsigned __int64 v27; // r12
  __int64 v28; // rax
  unsigned __int64 v29; // rdi
  unsigned __int64 v30; // rdi
  __int64 v31; // rdx
  __int64 v32; // rax
  char v33; // si
  __int64 v34; // rbx
  __int64 v35; // r8
  __int64 v36; // r9
  int v37; // eax
  char v38; // di
  int v39; // esi
  __int64 v40; // rbx
  __int64 v41; // r8
  unsigned int v42; // eax
  unsigned __int8 v43; // bl
  __int64 v44; // rsi
  __int64 v45; // rbx
  unsigned int v46; // r14d
  unsigned int v47; // edi
  unsigned int v48; // eax
  struct _LIST_ENTRY *Flink; // r8
  __int64 v50; // rax
  __int64 v51; // rsi
  __int64 v52; // rcx
  unsigned __int64 v53; // rdx
  char v54; // di
  int v55; // r14d
  __int64 v56; // rbx
  __int64 v57; // r8
  bool v58; // zf
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v62; // eax
  unsigned __int8 v63; // al
  struct _KPRCB *v64; // r10
  _DWORD *v65; // r9
  int v66; // eax
  unsigned __int8 v67; // cl
  struct _KPRCB *v68; // r10
  _DWORD *v69; // r9
  int v70; // eax
  unsigned __int8 v71; // al
  struct _KPRCB *v72; // r10
  _DWORD *v73; // r9
  int v74; // eax
  __int64 v75; // rbx
  unsigned __int64 v76; // r8
  struct _KPRCB *v77; // r9
  __int64 CachedResidentAvailable; // rdx
  signed __int32 v79; // eax
  char v80; // di
  int v81; // esi
  __int64 v82; // rbx
  __int64 v83; // r8
  bool v84; // zf
  unsigned __int8 v85; // al
  struct _KPRCB *v86; // r10
  _DWORD *v87; // r9
  int v88; // eax
  bool v89; // zf
  unsigned __int8 v90; // al
  struct _KPRCB *v91; // r10
  _DWORD *v92; // r9
  int v93; // eax
  unsigned __int8 v94; // al
  struct _KPRCB *v95; // r10
  _DWORD *v96; // r9
  int v97; // eax
  signed __int32 v98[8]; // [rsp+0h] [rbp-70h] BYREF
  unsigned __int8 v99; // [rsp+30h] [rbp-40h]
  unsigned int v100; // [rsp+34h] [rbp-3Ch]
  int v101; // [rsp+38h] [rbp-38h]
  unsigned __int64 updated; // [rsp+40h] [rbp-30h] BYREF
  __int64 v103; // [rsp+48h] [rbp-28h]
  __int64 v104; // [rsp+50h] [rbp-20h]
  __int128 v105; // [rsp+58h] [rbp-18h] BYREF
  unsigned int v108; // [rsp+C8h] [rbp+58h]

  v108 = a4;
  v58 = *(_QWORD *)(a1 + 216) == 0LL;
  v105 = 0LL;
  v5 = a4;
  v7 = a2;
  v8 = a1;
  if ( v58 )
    return;
  AnyMultiplexedVm = MiGetAnyMultiplexedVm(3);
  MiInitializePageColorBase((__int64)AnyMultiplexedVm, 0, (__int64)&v105);
  if ( v7 )
  {
    if ( (*(_BYTE *)(v7 + 10) & 5) == 0 )
      MmMapLockedPagesSpecifyCache((PMDL)v7, 0, MmCached, 0LL, 0, 0xC0000010);
    v10 = v7 + 8 * a3 + 48;
  }
  else
  {
    v10 = 0LL;
  }
  v103 = v10;
  v11 = (volatile LONG *)(v8 + 232);
  while ( 1 )
  {
    v12 = ExAcquireSpinLockExclusive(v11);
    v13 = *(_QWORD *)(v8 + 216);
    v14 = v12;
    v15 = v13 + 4 * v5;
    v16 = (((v13 + 4 * (unsigned __int64)v5) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v17 = a5;
    if ( (4096 - (v15 & 0xFFFu)) >> 2 <= a5 )
      v17 = (4096 - (v15 & 0xFFFu)) >> 2;
    v100 = v17;
    updated = MI_READ_PTE_LOCK_FREE(v16);
    v18 = updated;
    if ( (updated & 1) != 0 )
    {
      if ( MiPteInShadowRange((unsigned __int64)&updated)
        && (MiFlags & 0xC00000) != 0
        && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
        && ((v18 & 0x20) == 0 || (v18 & 0x42) == 0) )
      {
        Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
        if ( Flink )
        {
          v50 = *((_QWORD *)&Flink->Flink + (((unsigned __int64)&updated >> 3) & 0x1FF));
          if ( (v50 & 0x20) != 0 )
            v18 |= 0x20uLL;
          if ( (v50 & 0x42) != 0 )
            v18 |= 0x42uLL;
        }
        else
        {
          v18 = updated;
        }
      }
      v51 = 48 * ((v18 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL;
      v52 = *(_QWORD *)(v51 + 16);
      v53 = v52;
      if ( qword_140C4DF40 && (v52 & 0x10) == 0 )
        v53 = v52 & ~qword_140C4DF40;
      updated = MiUpdatePageFileHighInPte(v52, v100 + HIDWORD(v53));
      v54 = updated;
      v55 = 0;
      v56 = updated;
      if ( !MiPteInShadowRange(v51 + 16) )
        goto LABEL_66;
      if ( (unsigned int)MiPteHasShadow() )
      {
        v55 = 1;
        if ( !HIBYTE(word_140C4E008) )
        {
          v58 = (v54 & 1) == 0;
          goto LABEL_64;
        }
      }
      else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
      {
        v58 = (v54 & 1) == 0;
LABEL_64:
        if ( !v58 )
          v56 |= 0x8000000000000000uLL;
      }
LABEL_66:
      *(_QWORD *)(v51 + 16) = v56;
      if ( v55 )
        MiWritePteShadow(v51 + 16, v56, v57);
      ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v8 + 232));
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          CurrentIrql = KeGetCurrentIrql();
          if ( CurrentIrql <= 0xFu && (unsigned __int8)v14 <= 0xFu && CurrentIrql >= 2u )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            SchedulerAssist = CurrentPrcb->SchedulerAssist;
            v62 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v14 + 1));
            v58 = (v62 & SchedulerAssist[5]) == 0;
            SchedulerAssist[5] &= v62;
            if ( v58 )
              KiRemoveSystemWorkPriorityKick(CurrentPrcb);
          }
        }
      }
      __writecr8(v14);
      v44 = v103;
      v46 = v108;
      v47 = v100;
      MiWritePageFileHash(v8, v7, v103, v108, v100);
      v45 = a2;
      goto LABEL_35;
    }
    ExReleaseSpinLockExclusiveFromDpcLevel(v11);
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v63 = KeGetCurrentIrql();
        if ( v63 <= 0xFu && (unsigned __int8)v14 <= 0xFu && v63 >= 2u )
        {
          v64 = KeGetCurrentPrcb();
          v65 = v64->SchedulerAssist;
          v66 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v14 + 1));
          v58 = (v66 & v65[5]) == 0;
          v65[5] &= v66;
          if ( v58 )
            KiRemoveSystemWorkPriorityKick(v64);
        }
      }
    }
    __writecr8(v14);
    v19 = _InterlockedExchangeAdd((volatile signed __int32 *)v105, 1u);
    FileHashPage = MiGetFileHashPage(a1, DWORD2(v105) & (unsigned int)v19 | HIDWORD(v105));
    v104 = FileHashPage;
    v21 = FileHashPage;
    if ( FileHashPage == -1 )
    {
      v22 = 0LL;
      v26 = 17;
    }
    else
    {
      v22 = 48 * FileHashPage - 0x58000000000LL;
      _InterlockedOr(v98, 0);
      MiSetPfnTbFlushStamp(v22, KiTbFlushTimeStamp, 0);
      updated = MI_READ_PTE_LOCK_FREE(((v16 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
      MiInitializePfnForOtherProcess(v21, v16, (updated >> 12) & 0xFFFFFFFFFLL, 2560LL);
      v26 = MiLockPageInline(v22, v23, v24, v25);
    }
    v99 = v26;
    v27 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 232));
    if ( v13 != *(_QWORD *)(a1 + 216) )
    {
      ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(a1 + 232));
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          v67 = KeGetCurrentIrql();
          if ( v67 <= 0xFu && (unsigned __int8)v27 <= 0xFu && v67 >= 2u )
          {
            v68 = KeGetCurrentPrcb();
            v69 = v68->SchedulerAssist;
            v70 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v27 + 1));
            v58 = (v70 & v69[5]) == 0;
            v69[5] &= v70;
            if ( v58 )
              KiRemoveSystemWorkPriorityKick(v68);
          }
        }
      }
      __writecr8(v27);
      if ( v21 == -1 )
        goto LABEL_110;
      MiFreePageFileHashPfn(v21);
      _InterlockedAnd64((volatile signed __int64 *)(v22 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          v71 = KeGetCurrentIrql();
          if ( v71 <= 0xFu && v26 <= 0xFu && v71 >= 2u )
          {
            v72 = KeGetCurrentPrcb();
            v73 = v72->SchedulerAssist;
            v74 = ~(unsigned __int16)(-1LL << (v26 + 1));
            v58 = (v74 & v73[5]) == 0;
            v73[5] &= v74;
            if ( v58 )
              KiRemoveSystemWorkPriorityKick(v72);
          }
        }
      }
      __writecr8(v26);
      v75 = *(_QWORD *)(a1 + 248);
      MiReturnCommit(v75, 1LL);
      v76 = 1LL;
      if ( (ULONG_PTR *)v75 != &MiSystemPartition )
        goto LABEL_108;
      v77 = KeGetCurrentPrcb();
      CachedResidentAvailable = (int)v77->CachedResidentAvailable;
      if ( (_DWORD)CachedResidentAvailable == -1 )
        goto LABEL_108;
      if ( (unsigned __int64)(CachedResidentAvailable + 1) <= 0x100 )
      {
        do
        {
          v79 = _InterlockedCompareExchange(
                  (volatile signed __int32 *)&v77->CachedResidentAvailable,
                  CachedResidentAvailable + 1,
                  CachedResidentAvailable);
          v58 = (_DWORD)CachedResidentAvailable == v79;
          LODWORD(CachedResidentAvailable) = v79;
          if ( v58 )
            goto LABEL_109;
        }
        while ( v79 != -1 && (unsigned __int64)(v79 + 1LL) <= 0x100 );
      }
      if ( (int)CachedResidentAvailable > 192
        && (_DWORD)CachedResidentAvailable == _InterlockedCompareExchange(
                                                (volatile signed __int32 *)&v77->CachedResidentAvailable,
                                                192,
                                                CachedResidentAvailable) )
      {
        v76 = (int)CachedResidentAvailable - 192 + 1LL;
      }
      if ( v76 )
LABEL_108:
        _InterlockedExchangeAdd64((volatile signed __int64 *)(v75 + 7168), v76);
LABEL_109:
      _InterlockedDecrement64(&qword_140C4F828);
LABEL_110:
      v48 = a5;
      v5 = v108;
      v8 = a1;
      v45 = a2;
      goto LABEL_38;
    }
    v28 = MI_READ_PTE_LOCK_FREE(v16);
    v29 = v28;
    if ( qword_140C4DF40 )
    {
      if ( (v28 & 0x10) != 0 )
        v29 = v28 & 0xFFFFFFFFFFFFFFEFuLL;
      else
        v29 = v28 & ~qword_140C4DF40;
    }
    v30 = HIDWORD(v29);
    v31 = (unsigned int)v30 + v100;
    if ( v21 == -1 )
    {
      updated = MiUpdatePageFileHighInPte(v28, v31);
      v80 = updated;
      v81 = 0;
      v82 = updated;
      if ( MiPteInShadowRange(v16) )
      {
        if ( (unsigned int)MiPteHasShadow() )
        {
          v81 = 1;
          if ( !HIBYTE(word_140C4E008) )
          {
            v84 = (v80 & 1) == 0;
            goto LABEL_118;
          }
        }
        else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
        {
          v84 = (v80 & 1) == 0;
LABEL_118:
          if ( !v84 )
            v82 |= 0x8000000000000000uLL;
        }
      }
      *(_QWORD *)v16 = v82;
      if ( v81 )
        MiWritePteShadow(v16, v82, v83);
      ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(a1 + 232));
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          v85 = KeGetCurrentIrql();
          if ( v85 <= 0xFu && (unsigned __int8)v27 <= 0xFu && v85 >= 2u )
          {
            v86 = KeGetCurrentPrcb();
            v87 = v86->SchedulerAssist;
            v88 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v27 + 1));
            v58 = (v88 & v87[5]) == 0;
            v87[5] &= v88;
            if ( v58 )
              KiRemoveSystemWorkPriorityKick(v86);
          }
        }
      }
      __writecr8(v27);
      v45 = a2;
      v47 = v100;
      v44 = v103;
      v46 = v108;
      goto LABEL_34;
    }
    v32 = MiUpdatePageFileHighInPte(*(_QWORD *)(v22 + 16), v31);
    v101 = 0;
    v33 = v32;
    updated = v32;
    v34 = v32;
    if ( !MiPteInShadowRange(v22 + 16) )
      goto LABEL_20;
    if ( !(unsigned int)MiPteHasShadow() )
    {
      if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
        && (v33 & 1) != 0 )
      {
        v34 |= 0x8000000000000000uLL;
      }
LABEL_20:
      v37 = v101;
      goto LABEL_21;
    }
    v37 = 1;
    if ( !HIBYTE(word_140C4E008) && (v33 & 1) != 0 )
      v34 |= 0x8000000000000000uLL;
LABEL_21:
    *(_QWORD *)(v22 + 16) = v34;
    if ( v37 )
      MiWritePteShadow(v22 + 16, v34, v35);
    if ( (_DWORD)v30 )
      *(_BYTE *)(v22 + 34) &= ~0x10u;
    updated = MiMakeValidPte(v16, v104, 2684354564LL, v36);
    v38 = updated;
    v39 = 0;
    v40 = updated;
    if ( !MiPteInShadowRange(v16) )
      goto LABEL_26;
    if ( (unsigned int)MiPteHasShadow() )
    {
      v39 = 1;
      if ( !HIBYTE(word_140C4E008) )
      {
        v89 = (v38 & 1) == 0;
        goto LABEL_142;
      }
    }
    else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
    {
      v89 = (v38 & 1) == 0;
LABEL_142:
      if ( !v89 )
        v40 |= 0x8000000000000000uLL;
    }
LABEL_26:
    *(_QWORD *)v16 = v40;
    if ( v39 )
      MiWritePteShadow(v16, v40, v41);
    v42 = ++*(_DWORD *)(a1 + 208);
    if ( v42 > *(_DWORD *)(a1 + 212) )
      *(_DWORD *)(a1 + 212) = v42;
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(a1 + 232));
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v90 = KeGetCurrentIrql();
        if ( v90 <= 0xFu && (unsigned __int8)v27 <= 0xFu && v90 >= 2u )
        {
          v91 = KeGetCurrentPrcb();
          v92 = v91->SchedulerAssist;
          v93 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v27 + 1));
          v58 = (v93 & v92[5]) == 0;
          v92[5] &= v93;
          if ( v58 )
            KiRemoveSystemWorkPriorityKick(v91);
        }
      }
    }
    __writecr8(v27);
    _InterlockedAnd64((volatile signed __int64 *)(v22 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && (v94 = KeGetCurrentIrql(), v94 <= 0xFu) )
    {
      v43 = v99;
      if ( v99 <= 0xFu && v94 >= 2u )
      {
        v95 = KeGetCurrentPrcb();
        v96 = v95->SchedulerAssist;
        v97 = ~(unsigned __int16)(-1LL << (v99 + 1));
        v58 = (v97 & v96[5]) == 0;
        v96[5] &= v97;
        if ( v58 )
          KiRemoveSystemWorkPriorityKick(v95);
      }
    }
    else
    {
      v43 = v99;
    }
    __writecr8(v43);
    v44 = v103;
    v45 = a2;
    v46 = v108;
    v47 = v100;
    MiWritePageFileHash(a1, a2, v103, v108, v100);
LABEL_34:
    v8 = a1;
LABEL_35:
    if ( v44 )
      v103 = v44 + 8LL * v47;
    v5 = v47 + v46;
    v48 = a5 - v47;
    v108 = v5;
    a5 -= v47;
LABEL_38:
    v11 = (volatile LONG *)(v8 + 232);
    if ( !v48 )
      break;
    v7 = a2;
  }
  if ( v45 )
  {
    if ( (*(_BYTE *)(v45 + 10) & 1) != 0 )
      MmUnmapLockedPages(*(PVOID *)(v45 + 24), (PMDL)v45);
  }
}
