/*
 * XREFs of MiCopyPage @ 0x14032DC70
 * Callers:
 *     MiTradeActivePage @ 0x140211BC0 (MiTradeActivePage.c)
 *     MiMigratePfn @ 0x140272370 (MiMigratePfn.c)
 *     MiPrivateFixup @ 0x1402A180C (MiPrivateFixup.c)
 *     MiReplaceTransitionPage @ 0x1402C6784 (MiReplaceTransitionPage.c)
 *     MiCopyOnWrite @ 0x140319F00 (MiCopyOnWrite.c)
 *     MiWaitForInPageComplete @ 0x140342A90 (MiWaitForInPageComplete.c)
 *     MiCopyHeaderIfResident @ 0x140368D84 (MiCopyHeaderIfResident.c)
 *     MiSwapStackPageNoDpc @ 0x1403963DC (MiSwapStackPageNoDpc.c)
 *     MiStealPage @ 0x1403B70BC (MiStealPage.c)
 *     MiCopyFileOnlyGlobalSubsectionPage @ 0x140639EB8 (MiCopyFileOnlyGlobalSubsectionPage.c)
 *     MiSplitDirectMapPage @ 0x14063CE6C (MiSplitDirectMapPage.c)
 *     MiSwapNumaStandbyPage @ 0x14064F7E0 (MiSwapNumaStandbyPage.c)
 *     MiDuplicateCloneLeaf @ 0x140661AA8 (MiDuplicateCloneLeaf.c)
 *     MiIdealClusterPage @ 0x140667EB0 (MiIdealClusterPage.c)
 *     MiFillPerSessionProtos @ 0x140A4734C (MiFillPerSessionProtos.c)
 *     MiTradeBootImagePage @ 0x140B3BE4C (MiTradeBootImagePage.c)
 * Callees:
 *     MiMarkPfnVerified @ 0x1402093BC (MiMarkPfnVerified.c)
 *     MiAbortCombineScan @ 0x14021467C (MiAbortCombineScan.c)
 *     MiLockPageInline @ 0x1402A33B0 (MiLockPageInline.c)
 *     MiWritePteShadow @ 0x1402EB2BC (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x1402EB31C (MiPteHasShadow.c)
 *     MiPteInShadowRange @ 0x14031B4C0 (MiPteInShadowRange.c)
 *     MiGetPagePrivilege @ 0x14032D3F0 (MiGetPagePrivilege.c)
 *     MiGetPteFromCopyList @ 0x14032DE90 (MiGetPteFromCopyList.c)
 *     MiReturnPteMappingSet @ 0x14032DFE8 (MiReturnPteMappingSet.c)
 *     MiGetPteMappingSet @ 0x14032E050 (MiGetPteMappingSet.c)
 *     MiClearPfnImageVerified @ 0x14036ABC0 (MiClearPfnImageVerified.c)
 *     MiChangePageAttribute @ 0x14036CE40 (MiChangePageAttribute.c)
 *     MiFlushEntireTbDueToAttributeChange @ 0x14036D020 (MiFlushEntireTbDueToAttributeChange.c)
 *     KeSetPagePrivilege @ 0x1403CF124 (KeSetPagePrivilege.c)
 *     KeBugCheckEx @ 0x140416000 (KeBugCheckEx.c)
 *     KeCopyPage @ 0x14041BC90 (KeCopyPage.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 *     KeCopyPrivilegedPage @ 0x14056C654 (KeCopyPrivilegedPage.c)
 */

char __fastcall MiCopyPage(ULONG_PTR BugCheckParameter3, ULONG_PTR BugCheckParameter2, __int16 a3)
{
  char v6; // bl
  ULONG_PTR v7; // rbp
  ULONG_PTR v8; // r15
  int v9; // edi
  int PagePrivilege; // eax
  __int64 v11; // rdx
  __int64 v12; // r9
  int v13; // esi
  char result; // al
  __int64 v15; // rdx
  __int64 PteFromCopyList; // rdi
  unsigned __int64 v17; // rbx
  unsigned __int64 v18; // rbx
  bool v19; // di
  __int64 v20; // rcx
  __int64 v21; // rdi
  _QWORD *v22; // rdx
  unsigned __int8 CurrentIrql; // cl
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v26; // eax
  bool v27; // zf
  unsigned __int8 v28; // al
  int v29; // eax
  unsigned __int8 v30; // al
  struct _KPRCB *v31; // r10
  _DWORD *v32; // r8
  int v33; // eax
  __int64 v34; // r8
  __int64 v35; // r8
  _QWORD *v36; // [rsp+30h] [rbp-98h]
  __int128 v37; // [rsp+40h] [rbp-88h] BYREF
  __int128 v38; // [rsp+50h] [rbp-78h] BYREF
  __int128 v39; // [rsp+60h] [rbp-68h] BYREF
  __int64 v40; // [rsp+70h] [rbp-58h]
  char v41; // [rsp+D0h] [rbp+8h]
  int v42; // [rsp+D8h] [rbp+10h]
  unsigned __int8 v43; // [rsp+E0h] [rbp+18h]
  unsigned __int8 v44; // [rsp+E0h] [rbp+18h]

  v40 = 0LL;
  *(_QWORD *)&v37 = 0LL;
  v39 = 0LL;
  v6 = 0;
  v38 = 0LL;
  v7 = 48 * BugCheckParameter2 - 0x220000000000LL;
  v8 = 48 * BugCheckParameter3 - 0x220000000000LL;
  v42 = a3 & 4;
  v9 = -1073741823;
  PagePrivilege = MiGetPagePrivilege(v7, v42, (unsigned __int64 *)&v38);
  if ( PagePrivilege )
  {
    if ( (a3 & 0x12) != 0 )
    {
      v6 = 2;
    }
    else if ( (MiFlags & 0x8000) != 0 && (a3 & 8) == 0 && (PagePrivilege & 1) != 0 && *(__int64 *)(v7 + 40) >= 0 )
    {
      v6 = 2;
    }
    else if ( (MiFlags & 0x20000) == 0 || (v6 = 2, (PagePrivilege & 2) == 0 || (a3 & 8) != 0) )
    {
      v6 = 4;
    }
    v13 = a3 & 2;
  }
  else
  {
    v13 = a3 & 2;
    if ( (a3 & 2) == 0 )
    {
      v6 = 4;
      goto LABEL_10;
    }
  }
  if ( (v6 & 2) != 0 )
  {
    v43 = 17;
    *((_QWORD *)&v37 + 1) = 0LL;
    v19 = v13 != 0;
    v20 = v13 != 0;
    v41 = v13 != 0;
    if ( (MiFlags & 0x20000) != 0 )
    {
      MiFlushEntireTbDueToAttributeChange(v20, v11, 0xFFFFF68000000000uLL);
      LOBYTE(v20) = v13 != 0;
      v41 = v13 != 0;
      if ( (a3 & 0x100) != 0 )
      {
        LOBYTE(v20) = v19 | 0x80;
        v41 = v19 | 0x80;
      }
    }
    v21 = 0LL;
    if ( (MiFlags & 0x4000) != 0 )
    {
      v22 = (_QWORD *)(v8 + 8);
      v36 = (_QWORD *)(v8 + 8);
      if ( v13 )
      {
        v37 = v38;
      }
      else
      {
        *(_QWORD *)&v37 = (__int64)(*v22 << 25) >> 16;
        if ( (unsigned __int64)v37 < 0xFFFF800000000000uLL )
        {
          v6 |= 8u;
          *((_QWORD *)&v37 + 1) = KeGetCurrentThread()->ApcState.Process->SecureState.SecureHandle;
          if ( v42 )
          {
            MiMarkPfnVerified(v8, 4);
            MiAbortCombineScan(v8);
          }
          else
          {
            v44 = MiLockPageInline(v8);
            MiMarkPfnVerified(v8, 4);
            MiAbortCombineScan(v8);
            _InterlockedAnd64((volatile signed __int64 *)(v8 + 24), 0x7FFFFFFFFFFFFFFFuLL);
            if ( KiIrqlFlags )
            {
              CurrentIrql = KeGetCurrentIrql();
              if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && v44 <= 0xFu && CurrentIrql >= 2u )
              {
                CurrentPrcb = KeGetCurrentPrcb();
                SchedulerAssist = CurrentPrcb->SchedulerAssist;
                v26 = ~(unsigned __int16)(-1LL << (v44 + 1));
                v27 = (v26 & SchedulerAssist[5]) == 0;
                SchedulerAssist[5] &= v26;
                if ( v27 )
                  KiRemoveSystemWorkPriorityKick(CurrentPrcb);
              }
            }
            __writecr8(v44);
          }
          v22 = (_QWORD *)(v8 + 8);
          v43 = 17;
          v36 = (_QWORD *)(v8 + 8);
        }
        LOBYTE(v20) = v41;
      }
      if ( (a3 & 0x20) != 0 )
      {
        if ( !v42 )
        {
          v28 = MiLockPageInline(v8);
          v22 = v36;
          LOBYTE(v20) = v41;
          v43 = v28;
        }
        v21 = (((*(_QWORD *)(v8 + 40) & 0xFFFFFFFFFFLL) << 12) + (*(_DWORD *)v22 & 0xFFF)) | 1;
      }
    }
    v29 = KeCopyPrivilegedPage(BugCheckParameter3, (unsigned int)&v37, BugCheckParameter2, (unsigned int)&v38, v21, v20);
    v9 = v29;
    if ( v29 < 0 )
      KeBugCheckEx(0x1Au, 0x5150AuLL, BugCheckParameter2, BugCheckParameter3, v29);
    v12 = v43;
    if ( v43 != 17 )
    {
      _InterlockedAnd64((volatile signed __int64 *)(v8 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( KiIrqlFlags )
      {
        v30 = KeGetCurrentIrql();
        if ( (KiIrqlFlags & 1) != 0 && v30 <= 0xFu && v43 <= 0xFu && v30 >= 2u )
        {
          v31 = KeGetCurrentPrcb();
          v32 = v31->SchedulerAssist;
          v33 = ~(unsigned __int16)(-1LL << (v43 + 1));
          v27 = (v33 & v32[5]) == 0;
          v32[5] &= v33;
          if ( v27 )
          {
            KiRemoveSystemWorkPriorityKick(v31);
            v12 = v43;
          }
        }
      }
      __writecr8((unsigned __int8)v12);
    }
    if ( (_bittest((const signed __int32 *)&MiFlags, 0x11u) & ((a3 & 2) == 0)) != 0
      && (*(_QWORD *)(v8 + 8) | 0x8000000000000000uLL) < 0xFFFFF6C000000000uLL )
    {
      v9 = KeSetPagePrivilege(BugCheckParameter3, &v37, 4LL);
      if ( v9 < 0 )
        KeBugCheckEx(0x1Au, 0x5150DuLL, BugCheckParameter2, BugCheckParameter3, 0LL);
    }
  }
LABEL_10:
  result = (*(_QWORD *)(v7 + 40) >> 60) & 7;
  if ( result == 3 )
  {
    if ( v13 )
      result = MiClearPfnImageVerified(v7);
    if ( (v6 & 4) == 0 )
    {
      result = (*(_QWORD *)(v8 + 40) >> 60) & 7;
      if ( result != 3 )
        result = MiMarkPfnVerified(v8, v42 != 0 ? 4 : 0);
    }
  }
  if ( v9 < 0 )
  {
    v15 = *(unsigned __int8 *)(v7 + 34) >> 6;
    if ( *(unsigned __int8 *)(v8 + 34) >> 6 != (_DWORD)v15 )
      MiChangePageAttribute(v8, v15, 0LL, v12);
    if ( (a3 & 1) != 0 )
      v6 = 1;
    MiGetPteMappingSet(v6 & 1, 2LL, &v39);
    PteFromCopyList = MiGetPteFromCopyList(&v39, BugCheckParameter3, BugCheckParameter2);
    KeCopyPage(PteFromCopyList << 25 >> 16, (PteFromCopyList << 25 >> 16) + 4096);
    v17 = ZeroPte;
    if ( MiPteInShadowRange(PteFromCopyList) )
    {
      if ( MiPteHasShadow() )
      {
        if ( !HIBYTE(word_140C6697C) && (ZeroPte & 1) != 0 )
          v17 = ZeroPte | 0x8000000000000000uLL;
        *(_QWORD *)PteFromCopyList = v17;
        MiWritePteShadow(PteFromCopyList, v17, v34);
LABEL_18:
        v18 = ZeroPte;
        if ( MiPteInShadowRange(PteFromCopyList + 8) )
        {
          if ( MiPteHasShadow() )
          {
            if ( !HIBYTE(word_140C6697C) && (ZeroPte & 1) != 0 )
              v18 = ZeroPte | 0x8000000000000000uLL;
            *(_QWORD *)(PteFromCopyList + 8) = v18;
            MiWritePteShadow(PteFromCopyList + 8, v18, v35);
            return MiReturnPteMappingSet(&v39);
          }
          if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
            && (ZeroPte & 1) != 0 )
          {
            v18 = ZeroPte | 0x8000000000000000uLL;
          }
        }
        *(_QWORD *)(PteFromCopyList + 8) = v18;
        return MiReturnPteMappingSet(&v39);
      }
      if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
        && (ZeroPte & 1) != 0 )
      {
        v17 = ZeroPte | 0x8000000000000000uLL;
      }
    }
    *(_QWORD *)PteFromCopyList = v17;
    goto LABEL_18;
  }
  return result;
}
