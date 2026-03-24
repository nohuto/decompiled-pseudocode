/*
 * XREFs of MiCopyPage @ 0x14023FB90
 * Callers:
 *     MiMigratePfn @ 0x1402185B0 (MiMigratePfn.c)
 *     MiCopyOnWrite @ 0x14023EC70 (MiCopyOnWrite.c)
 *     MiWaitForInPageComplete @ 0x14029B880 (MiWaitForInPageComplete.c)
 *     MiPrivateFixup @ 0x1402E29C8 (MiPrivateFixup.c)
 *     MiTradeActivePage @ 0x14030DD40 (MiTradeActivePage.c)
 *     MiSwapStackPageNoDpc @ 0x14031FC90 (MiSwapStackPageNoDpc.c)
 *     MiStealPage @ 0x140334CB4 (MiStealPage.c)
 *     MiReplaceTransitionPage @ 0x140336380 (MiReplaceTransitionPage.c)
 *     MiCopyHeaderIfResident @ 0x14035A290 (MiCopyHeaderIfResident.c)
 *     MiCopyFileOnlyGlobalSubsectionPage @ 0x14053FCB8 (MiCopyFileOnlyGlobalSubsectionPage.c)
 *     MiSplitDirectMapPage @ 0x14054207C (MiSplitDirectMapPage.c)
 *     MiSwapNumaStandbyPage @ 0x140551310 (MiSwapNumaStandbyPage.c)
 *     MiIdealClusterPage @ 0x140555D54 (MiIdealClusterPage.c)
 *     MiDuplicateCloneLeaf @ 0x14055A174 (MiDuplicateCloneLeaf.c)
 *     MiFillPerSessionProtos @ 0x1408D8030 (MiFillPerSessionProtos.c)
 *     MiTradeBootImagePage @ 0x140A4FE60 (MiTradeBootImagePage.c)
 * Callees:
 *     MiAllocateHyperSpace @ 0x14023CA7C (MiAllocateHyperSpace.c)
 *     MiGetPteFromCopyList @ 0x1402402F0 (MiGetPteFromCopyList.c)
 *     MiCreatePteCopyList @ 0x1402404A8 (MiCreatePteCopyList.c)
 *     MiReleasePtes @ 0x140245170 (MiReleasePtes.c)
 *     MiLockPageInline @ 0x1402804B0 (MiLockPageInline.c)
 *     MiAbortCombineScan @ 0x140283DF0 (MiAbortCombineScan.c)
 *     MiChangePageAttribute @ 0x140284864 (MiChangePageAttribute.c)
 *     MiFlushEntireTbDueToAttributeChange @ 0x140284A0C (MiFlushEntireTbDueToAttributeChange.c)
 *     MiGetPagePrivilege @ 0x1402A8D80 (MiGetPagePrivilege.c)
 *     MiClearPfnImageVerified @ 0x1402FBA64 (MiClearPfnImageVerified.c)
 *     MiWritePteShadow @ 0x14030E10C (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x14030E16C (MiPteHasShadow.c)
 *     MiMarkPfnVerified @ 0x140310124 (MiMarkPfnVerified.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F2D04 (KiRemoveSystemWorkPriorityKick.c)
 *     MI_PFN_IS_PROTO @ 0x1403F3F48 (MI_PFN_IS_PROTO.c)
 *     KeBugCheckEx @ 0x1403FD570 (KeBugCheckEx.c)
 *     KeCopyPage @ 0x1404024D0 (KeCopyPage.c)
 *     KeCopyPrivilegedPage @ 0x140512D10 (KeCopyPrivilegedPage.c)
 *     KeSetPagePrivilege @ 0x140512DB8 (KeSetPagePrivilege.c)
 */

char __fastcall MiCopyPage(ULONG_PTR a1, ULONG_PTR a2, __int128 *a3, int a4)
{
  char v6; // bl
  ULONG_PTR v7; // rbp
  __int64 v8; // rsi
  int v9; // edi
  int PagePrivilege; // eax
  __int64 v11; // rcx
  __int64 v12; // r9
  __int64 v13; // r8
  unsigned __int8 v14; // dl
  int v15; // ebp
  __int64 v16; // rdx
  unsigned __int8 v17; // r14
  char v18; // r12
  __int64 v19; // rdi
  int v20; // eax
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v24; // eax
  bool v25; // zf
  int v26; // eax
  unsigned __int8 v27; // al
  struct _KPRCB *v28; // r10
  _DWORD *v29; // r9
  int v30; // eax
  __int128 *v31; // rax
  __int64 v32; // rdx
  unsigned __int8 v33; // r10
  _DWORD *v34; // r9
  unsigned __int64 HyperSpace; // rax
  unsigned __int64 PteFromCopyList; // rbx
  _KPROCESS *Process; // rcx
  __int64 v38; // r8
  __int64 v39; // r9
  __int64 v40; // rdx
  unsigned __int64 v41; // r11
  __int64 v42; // rdx
  __int64 *v43; // rbx
  unsigned __int8 v44; // bl
  _QWORD *MmInternal; // rcx
  unsigned __int8 v46; // al
  struct _KPRCB *v47; // r9
  _DWORD *v48; // r8
  int v49; // eax
  unsigned int v51; // [rsp+30h] [rbp-88h]
  ULONG_PTR v52; // [rsp+38h] [rbp-80h]
  __int128 v53; // [rsp+40h] [rbp-78h] BYREF
  __int128 v54; // [rsp+50h] [rbp-68h] BYREF
  __int128 v55; // [rsp+60h] [rbp-58h] BYREF
  __int64 v56; // [rsp+70h] [rbp-48h]
  int v59; // [rsp+D8h] [rbp+20h]

  v56 = 0LL;
  v6 = 0;
  v55 = 0LL;
  v54 = 0LL;
  v53 = 0LL;
  v7 = 48 * a2 - 0x58000000000LL;
  v52 = v7;
  v8 = 48 * a1 - 0x58000000000LL;
  v9 = -1073741823;
  v59 = a4 & 4;
  v51 = v59 != 0 ? 4 : 0;
  PagePrivilege = MiGetPagePrivilege(v7);
  v13 = 2LL;
  v14 = PagePrivilege;
  if ( PagePrivilege )
  {
    if ( (a4 & 0x12) != 0 )
    {
      v6 = 2;
      v15 = a4 & 2;
    }
    else if ( (MiFlags & 0x10000) == 0 || (a4 & 8) != 0 || (PagePrivilege & 1) == 0 || (unsigned int)MI_PFN_IS_PROTO(v7) )
    {
      if ( (MiFlags & 0x40000) == 0 || (a4 & 8) != 0 || (v6 = v13, (v14 & (unsigned __int8)v13) == 0) )
        v6 = 4;
      v15 = v13 & a4;
    }
    else
    {
      v6 = v13;
      v15 = v13 & a4;
    }
  }
  else
  {
    v15 = a4 & 2;
    if ( (a4 & 2) == 0 )
      v6 = 4;
  }
  v16 = 0xFFFFF68000000000uLL;
  if ( ((unsigned __int8)v6 & (unsigned __int8)v13) != 0 )
  {
    v17 = 17;
    v18 = v15 != 0;
    if ( (MiFlags & 0x40000) != 0 )
    {
      MiFlushEntireTbDueToAttributeChange(v11, 0xFFFFF68000000000uLL, v13, v12);
      v16 = 0xFFFFF68000000000uLL;
      if ( (a4 & 0x100) != 0 )
        v18 |= 0x80u;
    }
    v19 = 0LL;
    if ( (MiFlags & 0x8000) == 0 )
      goto LABEL_40;
    if ( v15 )
    {
      v53 = v54;
    }
    else
    {
      *(_QWORD *)&v53 = (__int64)(*(_QWORD *)(v8 + 8) << 25) >> 16;
      if ( (unsigned __int64)v53 < 0xFFFF800000000000uLL )
      {
        v6 |= 8u;
        *((_QWORD *)&v53 + 1) = KeGetCurrentThread()->ApcState.Process->SecureState.SecureHandle;
        if ( !v59 )
          v17 = MiLockPageInline(v8, 0xFFFFF68000000000uLL, v13);
        MiMarkPfnVerified(v8, 4LL);
        MiAbortCombineScan(v8);
        v20 = v59;
        if ( v59 )
          goto LABEL_36;
        _InterlockedAnd64((volatile signed __int64 *)(v8 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        if ( KiIrqlFlags )
        {
          if ( (KiIrqlFlags & 1) != 0 )
          {
            CurrentIrql = KeGetCurrentIrql();
            if ( CurrentIrql <= 0xFu && v17 <= 0xFu && CurrentIrql >= 2u )
            {
              CurrentPrcb = KeGetCurrentPrcb();
              v16 = -1LL << (v17 + 1);
              SchedulerAssist = CurrentPrcb->SchedulerAssist;
              v24 = ~(unsigned __int16)v16;
              v25 = (v24 & SchedulerAssist[5]) == 0;
              v13 = (unsigned int)v24 & SchedulerAssist[5];
              SchedulerAssist[5] = v13;
              if ( v25 )
                KiRemoveSystemWorkPriorityKick(CurrentPrcb);
            }
          }
        }
        __writecr8(v17);
        v17 = 17;
      }
    }
    v20 = v59;
LABEL_36:
    if ( (a4 & 0x20) != 0 )
    {
      if ( !v20 )
        v17 = MiLockPageInline(v8, v16, v13);
      v19 = (((*(_QWORD *)(v8 + 40) & 0xFFFFFFFFFLL) << 12) + (*(_DWORD *)(v8 + 8) & 0xFFF)) | 1;
    }
LABEL_40:
    v26 = KeCopyPrivilegedPage(a1, (unsigned int)&v53, a2, (unsigned int)&v54, v19, v18);
    v9 = v26;
    if ( v26 < 0 )
      KeBugCheckEx(0x1Au, 0x5150AuLL, a2, a1, v26);
    if ( v17 != 17 )
    {
      _InterlockedAnd64((volatile signed __int64 *)(v8 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          v27 = KeGetCurrentIrql();
          if ( v27 <= 0xFu && v17 <= 0xFu && v27 >= 2u )
          {
            v28 = KeGetCurrentPrcb();
            v29 = v28->SchedulerAssist;
            v30 = ~(unsigned __int16)(-1LL << (v17 + 1));
            v25 = (v30 & v29[5]) == 0;
            v29[5] &= v30;
            if ( v25 )
              KiRemoveSystemWorkPriorityKick(v28);
          }
        }
      }
      __writecr8(v17);
    }
    if ( (MiFlags & 0x40000) != 0 && !v15 && (*(_QWORD *)(v8 + 8) | 0x8000000000000000uLL) < 0xFFFFF6C000000000uLL )
    {
      v9 = KeSetPagePrivilege(a1, &v53, 4LL);
      if ( v9 < 0 )
        KeBugCheckEx(0x1Au, 0x5150DuLL, a2, a1, 0LL);
    }
  }
  LOBYTE(v31) = (*(_QWORD *)(v52 + 40) >> 60) & 7;
  if ( (_BYTE)v31 == 3 )
  {
    if ( v15 )
      LOBYTE(v31) = MiClearPfnImageVerified(v52, v51);
    if ( (v6 & 4) == 0 )
    {
      LOBYTE(v31) = (*(_QWORD *)(v8 + 40) >> 60) & 7;
      if ( (_BYTE)v31 != 3 )
        LOBYTE(v31) = MiMarkPfnVerified(v8, v51);
    }
  }
  if ( v9 < 0 )
  {
    v32 = *(unsigned __int8 *)(v52 + 34) >> 6;
    if ( *(unsigned __int8 *)(v8 + 34) >> 6 != (_DWORD)v32 )
      MiChangePageAttribute(v8, v32, 0LL);
    if ( !a3 )
    {
      a3 = &v55;
      if ( (a4 & 1) == 0 || (MiCreatePteCopyList(2LL, 2LL, &v55), !DWORD1(v55)) )
      {
        v33 = KeGetCurrentIrql();
        __writecr8(2uLL);
        if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v33 <= 0xFu )
        {
          v34 = KeGetCurrentPrcb()->SchedulerAssist;
          v34[5] |= (-1 << (v33 + 1)) & 4;
        }
        BYTE8(v55) = v33;
        HyperSpace = MiAllocateHyperSpace(2uLL);
        *(_QWORD *)&v55 = 0x200000000LL;
        v56 = ((HyperSpace >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
        BYTE9(v55) = 1;
      }
    }
    PteFromCopyList = MiGetPteFromCopyList(a3, a1, a2);
    KeCopyPage((__int64)(PteFromCopyList << 25) >> 16, ((__int64)(PteFromCopyList << 25) >> 16) + 4096);
    v40 = ZeroPte;
    v41 = 0xFFFFF6FB7DBED7F8uLL;
    if ( PteFromCopyList >= 0xFFFFF6FB7DBED000uLL && PteFromCopyList <= 0xFFFFF6FB7DBED7F8uLL )
    {
      if ( (unsigned int)MiPteHasShadow(Process, ZeroPte, v38, v39) )
      {
        if ( !HIBYTE(word_140C4E008) && (v40 & 1) != 0 )
          v40 |= 0x8000000000000000uLL;
        *(_QWORD *)PteFromCopyList = v40;
        MiWritePteShadow(PteFromCopyList, v40);
LABEL_82:
        v42 = ZeroPte;
        v43 = (__int64 *)(PteFromCopyList + 8);
        if ( (unsigned __int64)v43 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)v43 <= v41 )
        {
          if ( (unsigned int)MiPteHasShadow(Process, ZeroPte, v38, v39) )
          {
            if ( !HIBYTE(word_140C4E008) && (v42 & 1) != 0 )
              v42 |= 0x8000000000000000uLL;
            *v43 = v42;
            MiWritePteShadow(v43, v42);
            goto LABEL_93;
          }
          if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
            && (v42 & 1) != 0 )
          {
            v42 |= 0x8000000000000000uLL;
          }
        }
        *v43 = v42;
LABEL_93:
        v31 = &v55;
        if ( a3 == &v55 )
        {
          v44 = *((_BYTE *)a3 + 8);
          if ( v44 == 17 )
          {
            LOBYTE(v31) = MiReleasePtes(&qword_140C4EF40, *((_QWORD *)a3 + 2), 2LL);
          }
          else
          {
            MmInternal = KeGetCurrentPrcb()->MmInternal;
            if ( MmInternal )
            {
              MmInternal[1543] = 0LL;
              v44 = *((_BYTE *)a3 + 8);
            }
            if ( KiIrqlFlags )
            {
              if ( (KiIrqlFlags & 1) != 0 )
              {
                v46 = KeGetCurrentIrql();
                if ( v46 <= 0xFu && v44 <= 0xFu && v46 >= 2u )
                {
                  v47 = KeGetCurrentPrcb();
                  v48 = v47->SchedulerAssist;
                  v49 = ~(unsigned __int16)(-1LL << (v44 + 1));
                  v25 = (v49 & v48[5]) == 0;
                  v48[5] &= v49;
                  if ( v25 )
                    KiRemoveSystemWorkPriorityKick(v47);
                }
              }
            }
            LOBYTE(v31) = v44;
            __writecr8(v44);
          }
        }
        return (char)v31;
      }
      Process = KeGetCurrentThread()->ApcState.Process;
      if ( (HIDWORD(Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 && (v40 & 1) != 0 )
        v40 |= 0x8000000000000000uLL;
    }
    *(_QWORD *)PteFromCopyList = v40;
    goto LABEL_82;
  }
  return (char)v31;
}
