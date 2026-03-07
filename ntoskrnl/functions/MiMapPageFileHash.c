void __fastcall MiMapPageFileHash(__int64 a1, __int64 a2, __int64 a3, int a4, unsigned int a5)
{
  int v5; // r14d
  __int64 v8; // r12
  char *AnyMultiplexedVm; // rax
  volatile LONG *v10; // rbx
  KIRQL v11; // al
  __int64 v12; // rdi
  unsigned __int64 v13; // rsi
  __int16 v14; // dx
  unsigned int v15; // r13d
  unsigned __int64 v16; // r14
  unsigned __int64 v17; // r14
  __int64 v18; // rcx
  unsigned __int64 v19; // rdx
  char v20; // di
  int v21; // r15d
  __int64 v22; // rbx
  __int64 v23; // r8
  bool v24; // zf
  unsigned __int8 CurrentIrql; // cl
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v28; // eax
  unsigned __int8 v29; // cl
  struct _KPRCB *v30; // r10
  _DWORD *v31; // r9
  int v32; // eax
  signed __int32 v33; // ecx
  __int64 FileHashPage; // rax
  ULONG_PTR v35; // r13
  __int64 v36; // r15
  unsigned __int8 v37; // bl
  unsigned __int64 v38; // rsi
  unsigned __int8 v39; // al
  struct _KPRCB *v40; // r10
  _DWORD *v41; // r9
  int v42; // eax
  __int64 v43; // r8
  unsigned __int8 v44; // al
  struct _KPRCB *v45; // r10
  _DWORD *v46; // r9
  int v47; // eax
  __int64 v48; // rbx
  unsigned __int64 v49; // r8
  struct _KPRCB *v50; // r9
  __int64 CachedResidentAvailable; // rdx
  signed __int32 v52; // eax
  unsigned int v53; // eax
  __int64 v54; // rax
  unsigned __int64 v55; // rdi
  unsigned __int64 v56; // rdi
  __int64 v57; // rdx
  char v58; // di
  int v59; // r15d
  __int64 v60; // rbx
  __int64 v61; // r8
  bool v62; // zf
  unsigned __int8 v63; // cl
  struct _KPRCB *v64; // r10
  _DWORD *v65; // r9
  int v66; // eax
  int v67; // r14d
  __int64 v68; // rax
  char v69; // si
  __int64 v70; // rbx
  __int64 v71; // r8
  int v72; // eax
  char v73; // di
  int v74; // esi
  __int64 v75; // rbx
  __int64 v76; // r8
  bool v77; // zf
  unsigned int v78; // eax
  unsigned __int8 v79; // al
  unsigned __int8 v80; // bl
  struct _KPRCB *v81; // r10
  _DWORD *v82; // r9
  int v83; // eax
  signed __int32 v84[8]; // [rsp+0h] [rbp-60h] BYREF
  unsigned __int8 v85; // [rsp+30h] [rbp-30h]
  int v86; // [rsp+34h] [rbp-2Ch]
  unsigned int v87; // [rsp+38h] [rbp-28h]
  unsigned __int64 updated; // [rsp+40h] [rbp-20h] BYREF
  _QWORD *v89; // [rsp+48h] [rbp-18h]
  __int128 v90; // [rsp+50h] [rbp-10h] BYREF
  int v93; // [rsp+B8h] [rbp+58h]

  v93 = a4;
  v24 = *(_QWORD *)(a1 + 216) == 0LL;
  v90 = 0LL;
  v5 = a4;
  v8 = a1;
  if ( !v24 )
  {
    AnyMultiplexedVm = MiGetAnyMultiplexedVm(3);
    MiInitializePageColorBase((__int64)AnyMultiplexedVm, 0, (__int64)&v90);
    if ( (*(_BYTE *)(a2 + 10) & 5) == 0 )
      MmMapLockedPagesSpecifyCache((PMDL)a2, 0, MmCached, 0LL, 0, 0xC0000010);
    v89 = (_QWORD *)(a2 + 8 * (a3 + 6));
    v10 = (volatile LONG *)(v8 + 232);
    while ( 1 )
    {
      v11 = ExAcquireSpinLockExclusive(v10);
      v12 = *(_QWORD *)(v8 + 216);
      v13 = v11;
      v14 = v12 + dword_140C692CC * v5;
      v15 = a5;
      v16 = (((v12 + (unsigned __int64)(unsigned int)(dword_140C692CC * v5)) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      if ( (4096 - (v14 & 0xFFFu)) / dword_140C692CC <= a5 )
        v15 = (4096 - (v14 & 0xFFFu)) / dword_140C692CC;
      v87 = v15;
      updated = MI_READ_PTE_LOCK_FREE(v16);
      if ( (updated & 1) != 0 )
      {
        v17 = 48 * (((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&updated) >> 12) & 0xFFFFFFFFFFLL)
            - 0x220000000000LL;
        v18 = *(_QWORD *)(v17 + 16);
        v19 = v18;
        if ( qword_140C657C0 && (v18 & 0x10) == 0 )
          v19 = v18 & ~qword_140C657C0;
        updated = MiUpdatePageFileHighInPte(v18, v15 + HIDWORD(v19));
        v20 = updated;
        v21 = 0;
        v22 = updated;
        if ( MiPteInShadowRange(v17 + 16) )
        {
          if ( MiPteHasShadow() )
          {
            v21 = 1;
            if ( !HIBYTE(word_140C6697C) )
            {
              v24 = (v20 & 1) == 0;
LABEL_17:
              if ( !v24 )
                v22 |= 0x8000000000000000uLL;
            }
          }
          else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
          {
            v24 = (v20 & 1) == 0;
            goto LABEL_17;
          }
        }
        *(_QWORD *)(v17 + 16) = v22;
        if ( v21 )
          MiWritePteShadow(v17 + 16, v22, v23);
        ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v8 + 232));
        if ( KiIrqlFlags )
        {
          CurrentIrql = KeGetCurrentIrql();
          if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && (unsigned __int8)v13 <= 0xFu && CurrentIrql >= 2u )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            SchedulerAssist = CurrentPrcb->SchedulerAssist;
            v28 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v13 + 1));
            v24 = (v28 & SchedulerAssist[5]) == 0;
            SchedulerAssist[5] &= v28;
            if ( v24 )
              KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
          }
        }
        __writecr8(v13);
        goto LABEL_129;
      }
      ExReleaseSpinLockExclusiveFromDpcLevel(v10);
      if ( KiIrqlFlags )
      {
        v29 = KeGetCurrentIrql();
        if ( (KiIrqlFlags & 1) != 0 && v29 <= 0xFu && (unsigned __int8)v13 <= 0xFu && v29 >= 2u )
        {
          v30 = KeGetCurrentPrcb();
          v31 = v30->SchedulerAssist;
          v32 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v13 + 1));
          v24 = (v32 & v31[5]) == 0;
          v31[5] &= v32;
          if ( v24 )
            KiRemoveSystemWorkPriorityKick((__int64)v30);
        }
      }
      __writecr8(v13);
      v33 = _InterlockedExchangeAdd((volatile signed __int32 *)v90, 1u);
      FileHashPage = MiGetFileHashPage(v8, DWORD2(v90) & (unsigned int)v33 | HIDWORD(v90));
      v35 = FileHashPage;
      if ( FileHashPage == -1 )
      {
        v36 = 0LL;
        v37 = 17;
      }
      else
      {
        v36 = 48 * FileHashPage - 0x220000000000LL;
        _InterlockedOr(v84, 0);
        MiSetPfnTbFlushStamp(v36, KiTbFlushTimeStamp, 0);
        updated = MI_READ_PTE_LOCK_FREE(((v16 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
        MiInitializePfnForOtherProcess(v35, v16, (updated >> 12) & 0xFFFFFFFFFFLL, 2560);
        v37 = MiLockPageInline(v36);
      }
      v85 = v37;
      v38 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v8 + 232));
      if ( v12 == *(_QWORD *)(v8 + 216) )
      {
        v54 = MI_READ_PTE_LOCK_FREE(v16);
        v55 = v54;
        if ( qword_140C657C0 )
        {
          if ( (v54 & 0x10) != 0 )
            v55 = v54 & 0xFFFFFFFFFFFFFFEFuLL;
          else
            v55 = v54 & ~qword_140C657C0;
        }
        v56 = HIDWORD(v55);
        v57 = (unsigned int)v56 + v87;
        if ( v35 == -1LL )
        {
          updated = MiUpdatePageFileHighInPte(v54, v57);
          v58 = updated;
          v59 = 0;
          v60 = updated;
          if ( MiPteInShadowRange(v16) )
          {
            if ( MiPteHasShadow() )
            {
              v59 = 1;
              if ( !HIBYTE(word_140C6697C) )
              {
                v62 = (v58 & 1) == 0;
LABEL_83:
                if ( !v62 )
                  v60 |= 0x8000000000000000uLL;
              }
            }
            else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
            {
              v62 = (v58 & 1) == 0;
              goto LABEL_83;
            }
          }
          *(_QWORD *)v16 = v60;
          if ( v59 )
            MiWritePteShadow(v16, v60, v61);
          ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v8 + 232));
          if ( KiIrqlFlags )
          {
            v63 = KeGetCurrentIrql();
            if ( (KiIrqlFlags & 1) != 0 && v63 <= 0xFu && (unsigned __int8)v38 <= 0xFu && v63 >= 2u )
            {
              v64 = KeGetCurrentPrcb();
              v65 = v64->SchedulerAssist;
              v66 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v38 + 1));
              v24 = (v66 & v65[5]) == 0;
              v65[5] &= v66;
              if ( v24 )
                KiRemoveSystemWorkPriorityKick((__int64)v64);
            }
          }
          __writecr8(v38);
          v15 = v87;
          v67 = v93;
LABEL_130:
          v5 = v15 + v67;
          v93 = v5;
          v53 = a5 - v15;
          v89 += v15;
          a5 -= v15;
          goto LABEL_68;
        }
        updated = *(_QWORD *)(v36 + 16);
        v68 = MiUpdatePageFileHighInPte(updated, v57);
        v86 = 0;
        v69 = v68;
        v70 = v68;
        if ( MiPteInShadowRange(v36 + 16) )
        {
          if ( MiPteHasShadow() )
          {
            v72 = 1;
            if ( !HIBYTE(word_140C6697C) && (v69 & 1) != 0 )
              v70 |= 0x8000000000000000uLL;
LABEL_104:
            *(_QWORD *)(v36 + 16) = v70;
            if ( v72 )
              MiWritePteShadow(v36 + 16, v70, v71);
            if ( (_DWORD)v56 )
              *(_BYTE *)(v36 + 34) &= ~0x10u;
            updated = MiMakeValidPte(v16, v35, -1610612732);
            v73 = updated;
            v74 = 0;
            v75 = updated;
            if ( MiPteInShadowRange(v16) )
            {
              if ( MiPteHasShadow() )
              {
                v74 = 1;
                if ( !HIBYTE(word_140C6697C) )
                {
                  v77 = (v73 & 1) == 0;
LABEL_114:
                  if ( !v77 )
                    v75 |= 0x8000000000000000uLL;
                }
              }
              else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
              {
                v77 = (v73 & 1) == 0;
                goto LABEL_114;
              }
            }
            *(_QWORD *)v16 = v75;
            if ( v74 )
              MiWritePteShadow(v16, v75, v76);
            v8 = a1;
            v78 = ++*(_DWORD *)(a1 + 208);
            if ( v78 > *(_DWORD *)(a1 + 212) )
              *(_DWORD *)(a1 + 212) = v78;
            ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(a1 + 232));
            _InterlockedAnd64((volatile signed __int64 *)(v36 + 24), 0x7FFFFFFFFFFFFFFFuLL);
            if ( KiIrqlFlags && (v79 = KeGetCurrentIrql(), (KiIrqlFlags & 1) != 0) && v79 <= 0xFu )
            {
              v80 = v85;
              if ( v85 <= 0xFu && v79 >= 2u )
              {
                v81 = KeGetCurrentPrcb();
                v82 = v81->SchedulerAssist;
                v83 = ~(unsigned __int16)(-1LL << (v85 + 1));
                v24 = (v83 & v82[5]) == 0;
                v82[5] &= v83;
                if ( v24 )
                  KiRemoveSystemWorkPriorityKick((__int64)v81);
              }
            }
            else
            {
              v80 = v85;
            }
            __writecr8(v80);
            v15 = v87;
LABEL_129:
            v67 = v93;
            MiWritePageFileHash(v8, v89, v93, v15);
            goto LABEL_130;
          }
          if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
            && (v69 & 1) != 0 )
          {
            v70 |= 0x8000000000000000uLL;
          }
        }
        v72 = v86;
        goto LABEL_104;
      }
      ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v8 + 232));
      if ( KiIrqlFlags )
      {
        v39 = KeGetCurrentIrql();
        if ( (KiIrqlFlags & 1) != 0 && v39 <= 0xFu && (unsigned __int8)v38 <= 0xFu && v39 >= 2u )
        {
          v40 = KeGetCurrentPrcb();
          v41 = v40->SchedulerAssist;
          v42 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v38 + 1));
          v24 = (v42 & v41[5]) == 0;
          v41[5] &= v42;
          if ( v24 )
            KiRemoveSystemWorkPriorityKick((__int64)v40);
        }
      }
      __writecr8(v38);
      if ( v35 != -1LL )
        break;
LABEL_67:
      v53 = a5;
      v5 = v93;
LABEL_68:
      v10 = (volatile LONG *)(v8 + 232);
      if ( !v53 )
      {
        if ( (*(_BYTE *)(a2 + 10) & 1) != 0 )
          MmUnmapLockedPages(*(PVOID *)(a2 + 24), (PMDL)a2);
        return;
      }
    }
    MiFreePageFileHashPfn(v35);
    _InterlockedAnd64((volatile signed __int64 *)(v36 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( KiIrqlFlags )
    {
      v44 = KeGetCurrentIrql();
      if ( (KiIrqlFlags & 1) != 0 && v44 <= 0xFu && v37 <= 0xFu && v44 >= 2u )
      {
        v45 = KeGetCurrentPrcb();
        v46 = v45->SchedulerAssist;
        v47 = ~(unsigned __int16)(-1LL << (v37 + 1));
        v24 = (v47 & v46[5]) == 0;
        v43 = (unsigned int)v47 & v46[5];
        v46[5] = v43;
        if ( v24 )
          KiRemoveSystemWorkPriorityKick((__int64)v45);
      }
    }
    __writecr8(v37);
    v48 = *(_QWORD *)(v8 + 248);
    MiReturnCommit(v48, 1LL, v43);
    v49 = 1LL;
    if ( (unsigned __int16 *)v48 != MiSystemPartition )
      goto LABEL_65;
    v50 = KeGetCurrentPrcb();
    CachedResidentAvailable = (int)v50->CachedResidentAvailable;
    if ( (_DWORD)CachedResidentAvailable == -1 )
      goto LABEL_65;
    if ( (unsigned __int64)(CachedResidentAvailable + 1) <= 0x100 )
    {
      do
      {
        v52 = _InterlockedCompareExchange(
                (volatile signed __int32 *)&v50->CachedResidentAvailable,
                CachedResidentAvailable + 1,
                CachedResidentAvailable);
        v24 = (_DWORD)CachedResidentAvailable == v52;
        LODWORD(CachedResidentAvailable) = v52;
        if ( v24 )
          goto LABEL_66;
      }
      while ( v52 != -1 && (unsigned __int64)(v52 + 1LL) <= 0x100 );
    }
    if ( (int)CachedResidentAvailable > 192
      && (_DWORD)CachedResidentAvailable == _InterlockedCompareExchange(
                                              (volatile signed __int32 *)&v50->CachedResidentAvailable,
                                              192,
                                              CachedResidentAvailable) )
    {
      v49 = (int)CachedResidentAvailable - 192 + 1LL;
    }
    if ( v49 )
LABEL_65:
      _InterlockedExchangeAdd64((volatile signed __int64 *)(v48 + 17280), v49);
LABEL_66:
    _InterlockedDecrement64(&qword_140C69EA8);
    goto LABEL_67;
  }
}
