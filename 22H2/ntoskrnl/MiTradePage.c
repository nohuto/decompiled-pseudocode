/*
 * XREFs of MiTradePage @ 0x140281260
 * Callers:
 *     MiClaimPhysicalRun @ 0x1402810AC (MiClaimPhysicalRun.c)
 * Callees:
 *     MiIsPfnFileOnly @ 0x140218D20 (MiIsPfnFileOnly.c)
 *     MiUnlinkFreeOrZeroedPage @ 0x140235D30 (MiUnlinkFreeOrZeroedPage.c)
 *     MiPfnZeroingNeeded @ 0x1402384D0 (MiPfnZeroingNeeded.c)
 *     MiInvalidPteConforms @ 0x14023AEB0 (MiInvalidPteConforms.c)
 *     MiSetPfnTbFlushStamp @ 0x14023FAD0 (MiSetPfnTbFlushStamp.c)
 *     KeYieldProcessorEx @ 0x14024ABF0 (KeYieldProcessorEx.c)
 *     MiTrimSharedPage @ 0x14026F088 (MiTrimSharedPage.c)
 *     MiAddMdlPageToTradeBlock @ 0x14027FB08 (MiAddMdlPageToTradeBlock.c)
 *     MiLockPageInline @ 0x1402804B0 (MiLockPageInline.c)
 *     MiPfnLargeBitSet @ 0x140282D20 (MiPfnLargeBitSet.c)
 *     MiActivePageClaimCandidate @ 0x140282D80 (MiActivePageClaimCandidate.c)
 *     MiIsPfnFromSlabAllocation @ 0x140283570 (MiIsPfnFromSlabAllocation.c)
 *     MiReturnFreeZeroPage @ 0x1402836D0 (MiReturnFreeZeroPage.c)
 *     MiIsPageOnBadList @ 0x140283BEC (MiIsPageOnBadList.c)
 *     MiGetPfnChannel @ 0x140284844 (MiGetPfnChannel.c)
 *     MiSetOriginalPtePfnFromFreeList @ 0x1402AA5C0 (MiSetOriginalPtePfnFromFreeList.c)
 *     MiSearchNumaNodeTable @ 0x1402ABE20 (MiSearchNumaNodeTable.c)
 *     MiLargeFreePageToMdl @ 0x1402EEF1C (MiLargeFreePageToMdl.c)
 *     MiDemoteLargeFreePage @ 0x1402EF04C (MiDemoteLargeFreePage.c)
 *     MiDrainZeroLookasides @ 0x140310AE0 (MiDrainZeroLookasides.c)
 *     MiSwapStackPage @ 0x14031F4BC (MiSwapStackPage.c)
 *     MiTradeTransitionPage @ 0x1403346F8 (MiTradeTransitionPage.c)
 *     MiStealPage @ 0x140334CB4 (MiStealPage.c)
 *     MiLockAndInsertPageInFreeList @ 0x1403B6EAC (MiLockAndInsertPageInFreeList.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F2D04 (KiRemoveSystemWorkPriorityKick.c)
 *     MI_PFN_IS_PROTO @ 0x1403F3F48 (MI_PFN_IS_PROTO.c)
 *     MiGetBaseResidentPage @ 0x1403F5DB4 (MiGetBaseResidentPage.c)
 *     MiGetPfnPageSizeIndex @ 0x1403F6158 (MiGetPfnPageSizeIndex.c)
 *     MiReuseStandbyPage @ 0x1405512A0 (MiReuseStandbyPage.c)
 *     MiLargePageMovesInProgress @ 0x140556A84 (MiLargePageMovesInProgress.c)
 */

__int64 __fastcall MiTradePage(__int64 a1, __int64 a2, __int64 a3, _DWORD *SchedulerAssist)
{
  unsigned int v4; // r15d
  ULONG_PTR v5; // r13
  __int64 v6; // r14
  __int64 v8; // r11
  __int64 v9; // rbx
  __int64 CurrentIrql; // r10
  unsigned __int8 v11; // di
  unsigned __int64 v12; // rdx
  __int64 v13; // r8
  unsigned int v14; // ebp
  __int64 BaseResidentPage; // rax
  unsigned int PfnPageSizeIndex; // eax
  __int64 v17; // r9
  unsigned __int64 v18; // rcx
  int v19; // esi
  __int64 v20; // rdx
  __int64 v21; // r8
  unsigned int v22; // esi
  unsigned __int8 v23; // al
  struct _KPRCB *v24; // r11
  _DWORD *v25; // r10
  int v26; // eax
  __int64 v27; // rdx
  __int64 v28; // r8
  _DWORD *v29; // r9
  unsigned int v30; // r8d
  unsigned __int64 v31; // r9
  char v32; // r10
  __int64 v33; // r11
  __int64 v34; // r14
  unsigned __int64 v35; // rsi
  unsigned __int8 v36; // al
  struct _KPRCB *v37; // r10
  _DWORD *v38; // r9
  int v39; // eax
  int v40; // edi
  unsigned __int64 v41; // rdx
  __int64 v42; // rbp
  __int64 v43; // r8
  __int64 v44; // rdx
  __int64 v45; // r8
  _DWORD *v46; // r9
  unsigned __int8 v47; // al
  int v48; // ebp
  char v49; // cl
  int v50; // eax
  __int64 v51; // rdx
  __int64 v52; // r8
  _DWORD *v53; // r9
  bool v54; // zf
  unsigned __int8 v55; // al
  struct _KPRCB *v56; // r10
  _DWORD *v57; // r9
  int v58; // eax
  __int64 active; // rax
  __int64 v60; // rcx
  int v61; // eax
  __int64 v62; // rdx
  __int64 v63; // r8
  _DWORD *v64; // r9
  int v65; // esi
  unsigned __int8 v66; // al
  struct _KPRCB *v67; // r10
  int v68; // eax
  int v69; // r8d
  __int64 result; // rax
  __int64 v71; // rcx
  __int64 v72; // rsi
  unsigned __int8 v73; // cl
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *v75; // r8
  int v76; // eax
  unsigned __int8 v77; // al
  struct _KPRCB *v78; // r10
  _DWORD *v79; // r9
  int v80; // edx
  signed __int32 v81[8]; // [rsp+0h] [rbp-C8h] BYREF
  int v82; // [rsp+40h] [rbp-88h] BYREF
  int v83; // [rsp+44h] [rbp-84h]
  __int64 v84; // [rsp+48h] [rbp-80h]
  __int64 v85; // [rsp+50h] [rbp-78h]
  __int64 v86; // [rsp+58h] [rbp-70h]
  __int64 v87; // [rsp+60h] [rbp-68h] BYREF
  __int64 v88; // [rsp+68h] [rbp-60h]
  __int64 v89; // [rsp+70h] [rbp-58h]
  int v90; // [rsp+D0h] [rbp+8h]
  int v91; // [rsp+D8h] [rbp+10h] BYREF
  int v92; // [rsp+E0h] [rbp+18h]
  int v93; // [rsp+E8h] [rbp+20h] BYREF

  v4 = *(_DWORD *)(a1 + 24);
  v5 = a2;
  v6 = *(_QWORD *)a1;
  v89 = *(_QWORD *)(a1 + 8);
  v83 = *(_DWORD *)(a1 + 32);
  v82 = 0;
  v90 = v4 & 0x400000;
  v91 = 0;
  *(_QWORD *)(a1 + 48) = 0LL;
  v85 = v6;
  if ( (v4 & 0x400000) != 0 )
    v92 = *(_DWORD *)(a1 + 28);
  else
    v92 = -1;
  v88 = 0LL;
  v8 = 48 * a2;
  v86 = 48 * a2;
  v87 = -1LL;
  v9 = 48 * a2 - 0x58000000000LL;
  CurrentIrql = KeGetCurrentIrql();
  v84 = CurrentIrql;
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && (unsigned __int8)CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    a2 = (-1LL << ((unsigned __int8)CurrentIrql + 1)) & 4;
    a3 = (unsigned int)a2 | SchedulerAssist[5];
    SchedulerAssist[5] = a3;
  }
  v93 = 0;
  if ( _interlockedbittestandset64((volatile signed __int32 *)(v9 + 24), 0x3FuLL) )
  {
    do
    {
      do
        KeYieldProcessorEx(&v93, a2, a3, (__int64)SchedulerAssist);
      while ( *(__int64 *)(v9 + 24) < 0 );
    }
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v9 + 24), 0x3FuLL) );
    LOBYTE(CurrentIrql) = v84;
    v8 = v86;
  }
  v11 = CurrentIrql;
  while ( 1 )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        if ( v5 > 0xFFFFFFFFFLL || (*(_QWORD *)(v8 - 0x57FFFFFFFD8LL) & 0x4000000000000LL) == 0 )
          goto LABEL_152;
        v12 = *(_QWORD *)(v9 + 40);
        if ( *(_QWORD *)(qword_140C4E648 + 8 * ((v12 >> 39) & 0x3FF)) != v6 )
        {
          v72 = (unsigned int)MiPfnLargeBitSet(&MiSystemPartition, v5, 0x4000000000000LL, 0x7FFFFFFFFFFFFFFFLL);
          _InterlockedAnd64((volatile signed __int64 *)(v9 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          if ( KiIrqlFlags )
          {
            if ( (KiIrqlFlags & 1) != 0 )
            {
              v73 = KeGetCurrentIrql();
              if ( v73 <= 0xFu && v11 <= 0xFu && v73 >= 2u )
              {
                CurrentPrcb = KeGetCurrentPrcb();
                v75 = CurrentPrcb->SchedulerAssist;
                v76 = ~(unsigned __int16)(-1LL << (v11 + 1));
                v54 = (v76 & v75[5]) == 0;
                v75[5] &= v76;
                if ( v54 )
                  KiRemoveSystemWorkPriorityKick(CurrentPrcb);
              }
            }
          }
          __writecr8(v11);
          v42 = 0LL;
          if ( (_DWORD)v72 != -1 )
            *(_QWORD *)(a1 + 48) = MiLargePageSizes[v72];
          goto LABEL_131;
        }
        v13 = *(_BYTE *)(v9 + 34) & 7;
        v14 = -1;
        if ( (v12 & 0x1000000000LL) != 0 )
        {
          BaseResidentPage = MiGetBaseResidentPage(v9, v12, v13);
          PfnPageSizeIndex = MiGetPfnPageSizeIndex(BaseResidentPage);
          v14 = PfnPageSizeIndex;
          if ( v17 != v9 )
            _InterlockedAnd64((volatile signed __int64 *)(v17 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          if ( (_DWORD)v13 == 6 )
          {
            *(_QWORD *)(a1 + 48) = MiLargePageSizes[PfnPageSizeIndex];
LABEL_152:
            v42 = 0LL;
LABEL_153:
            if ( v11 != 17 )
            {
              _InterlockedAnd64((volatile signed __int64 *)(v9 + 24), 0x7FFFFFFFFFFFFFFFuLL);
              if ( KiIrqlFlags )
              {
                if ( (KiIrqlFlags & 1) != 0 )
                {
                  v77 = KeGetCurrentIrql();
                  if ( v77 <= 0xFu && v11 <= 0xFu && v77 >= 2u )
                  {
                    v78 = KeGetCurrentPrcb();
                    v79 = v78->SchedulerAssist;
                    v80 = ~(unsigned __int16)(-1LL << (v11 + 1));
                    v54 = (v80 & v79[5]) == 0;
                    v79[5] &= v80;
                    if ( v54 )
                      KiRemoveSystemWorkPriorityKick(v78);
                  }
                }
              }
              __writecr8(v11);
            }
            goto LABEL_131;
          }
        }
        if ( (_DWORD)v13 != 5 )
          break;
        if ( (unsigned int)MiIsPageOnBadList(v9) )
          goto LABEL_152;
        if ( v14 != -1 )
          break;
        if ( !MiInvalidPteConforms(*(_QWORD *)(v9 + 16)) )
          goto LABEL_152;
        if ( qword_140C4DF40 )
        {
          if ( (v18 & 0x10) != 0 )
            v18 &= ~0x10uLL;
          else
            v18 &= ~qword_140C4DF40;
        }
        if ( HIDWORD(v18) != 4294967294 || v88 == v9 )
          goto LABEL_152;
        v19 = *(_DWORD *)(MiSearchNumaNodeTable((v9 + 0x58000000000LL) / 48) + 8);
        v22 = ((unsigned int)MiGetPfnChannel(v9, v20, v21) << byte_140C4DE8D) | dword_140C4DEF8 & v5 | (v19 << byte_140C4DE8C);
        _InterlockedAnd64((volatile signed __int64 *)(v9 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        if ( KiIrqlFlags )
        {
          if ( (KiIrqlFlags & 1) != 0 )
          {
            v23 = KeGetCurrentIrql();
            if ( v23 <= 0xFu && v11 <= 0xFu && v23 >= 2u )
            {
              v24 = KeGetCurrentPrcb();
              v25 = v24->SchedulerAssist;
              v26 = ~(unsigned __int16)(-1LL << (v11 + 1));
              v54 = (v26 & v25[5]) == 0;
              v25[5] &= v26;
              if ( v54 )
                KiRemoveSystemWorkPriorityKick(v24);
            }
          }
        }
        __writecr8(v11);
        MiDrainZeroLookasides(v6, v9, *(_QWORD *)(a1 + 16), v22);
        v88 = v9;
        MiLockPageInline(v9, v27, v28, v29);
        v8 = v86;
      }
      if ( MiIsPfnFileOnly(v9) || (unsigned int)MiIsPfnFromSlabAllocation(v9) )
        goto LABEL_152;
      if ( v30 > 1 )
        break;
      if ( v14 == -1 )
      {
        if ( !v90 && !(unsigned int)MiUnlinkFreeOrZeroedPage(v5, 0LL, 0) )
        {
LABEL_125:
          MiReturnFreeZeroPage(v9, 0LL);
          goto LABEL_152;
        }
        v42 = 1LL;
        v69 = 0;
LABEL_127:
        MiAddMdlPageToTradeBlock(a1, v5, v69);
        goto LABEL_153;
      }
      v34 = v14;
      v35 = MiLargePageSizes[v14];
      if ( (v4 & 0x2000000) != 0 && v35 >= 0x200 || (v4 & 0x1000000) != 0 && v35 == 16 )
        goto LABEL_152;
      _InterlockedAnd64((volatile signed __int64 *)(v9 + 24), v31);
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          v36 = KeGetCurrentIrql();
          if ( v36 <= 0xFu && v11 <= 0xFu && v36 >= 2u )
          {
            v37 = KeGetCurrentPrcb();
            v38 = v37->SchedulerAssist;
            v39 = ~(unsigned __int16)(-1LL << (v11 + 1));
            v54 = (v39 & v38[5]) == 0;
            v38[5] &= v39;
            if ( v54 )
              KiRemoveSystemWorkPriorityKick(v37);
          }
        }
      }
      __writecr8(v11);
      if ( v90 || v5 != (v5 & ~(v35 - 1)) || *(_QWORD *)(a1 + 16) < v35 )
      {
        v40 = v85;
      }
      else
      {
        v40 = v85;
        v41 = v35 + v5 - 1;
        if ( v41 <= *(_QWORD *)(a1 + 56)
          && (unsigned int)MiLargeFreePageToMdl(v85, v41, v14, *(_QWORD *)(a1 + 64), v4) == 1 )
        {
          v42 = v35;
          if ( *(_QWORD *)(a1 + 64) && MiPfnZeroingNeeded(v9, v83) )
            *(_QWORD *)(v43 + 24) = 1LL;
          goto LABEL_131;
        }
      }
      if ( !(unsigned int)MiDemoteLargeFreePage(v40, v5, v14, v4, (__int64)&v91) && !v91 )
      {
        v42 = 0LL;
        if ( !(unsigned int)MiLargePageMovesInProgress(v9) )
          *(_QWORD *)(a1 + 48) = MiLargePageSizes[v34];
        goto LABEL_131;
      }
      v47 = MiLockPageInline(v9, v44, v45, v46);
      v6 = v85;
LABEL_119:
      v11 = v47;
      v8 = v86;
    }
    v48 = v89;
    if ( !*(_QWORD *)(v89 + 16) )
      break;
    v49 = *(_BYTE *)(v9 + 35);
    if ( v49 < 0 )
      break;
    if ( v30 > 4 )
    {
      v54 = v30 == 6;
      goto LABEL_86;
    }
    if ( (v4 & 0x4000000) == 0 && (v33 & *(_QWORD *)(v9 + 40)) == 0 && *(__int64 *)(v9 + 8) > 0
      || (v4 & 0x200000) != 0 && ((v49 & 0x40) != 0 || (unsigned int)MiIsPageOnBadList(v9)) )
    {
      goto LABEL_152;
    }
    v50 = MiTradeTransitionPage(v9, v4, (__int64)&v87);
    if ( v50 == 3 )
    {
      if ( *(_QWORD *)(qword_140C4E648 + 8 * ((*(_QWORD *)(v9 + 40) >> 39) & 0x3FFLL)) != v6 )
        goto LABEL_129;
      if ( !v90 )
        goto LABEL_138;
      v71 = v9;
      goto LABEL_134;
    }
    if ( v50 != 2 )
      goto LABEL_130;
LABEL_77:
    v11 = MiLockPageInline(v9, v51, v52, v53);
    v8 = v86;
  }
  if ( v30 == 2 )
  {
    if ( *(_WORD *)(v9 + 32) )
      goto LABEL_152;
    if ( !(unsigned int)MiReuseStandbyPage(v9) )
      goto LABEL_125;
    v42 = 1LL;
    v69 = 1;
    goto LABEL_127;
  }
  if ( v30 != 6
    || (*(_BYTE *)(v9 + 34) & 0x10) != 0
    || *(_WORD *)(v9 + 32) != 1
    || ((*(_QWORD *)(v9 + 40) >> 60) & 7) == 2
    || (*(_BYTE *)v9 & 1) == 0 )
  {
    goto LABEL_152;
  }
  v49 = *(_BYTE *)(v9 + 35);
  v54 = (v49 & 8) == 0;
LABEL_86:
  if ( !v54 || (v4 & 0x200000) != 0 && ((v49 & 0x40) != 0 || (unsigned int)MiIsPageOnBadList(v9)) )
    goto LABEL_152;
  if ( ((*(_QWORD *)(v9 + 40) >> 60) & 7) == 2 )
  {
    if ( v32 == 2 || (v4 & 8) != 0 )
      goto LABEL_152;
    _InterlockedAnd64((volatile signed __int64 *)(v9 + 24), v31);
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v55 = KeGetCurrentIrql();
        if ( v55 <= 0xFu && v11 <= 0xFu && v55 >= 2u )
        {
          v56 = KeGetCurrentPrcb();
          v57 = v56->SchedulerAssist;
          v58 = ~(unsigned __int16)(-1LL << (v11 + 1));
          v54 = (v58 & v57[5]) == 0;
          v57[5] &= v58;
          if ( v54 )
            KiRemoveSystemWorkPriorityKick(v56);
        }
      }
    }
    __writecr8(v11);
    if ( (unsigned int)MiSwapStackPage(v6, v9, v48, *(_DWORD *)(a1 + 28), v4, (__int64)&v87, (__int64)&v82) )
      goto LABEL_136;
    if ( ((*(_QWORD *)(v9 + 40) >> 60) & 7) == 2 )
      goto LABEL_130;
    goto LABEL_77;
  }
  active = MiActivePageClaimCandidate(v6, v9, 1LL);
  if ( active )
  {
    *(_QWORD *)(a1 + 48) = active;
    goto LABEL_152;
  }
  if ( (_BYTE)v84 == 2 || (v4 & 8) != 0 )
    goto LABEL_152;
  if ( (unsigned int)MI_PFN_IS_PROTO(v9) )
    v61 = MiTrimSharedPage(v60, v11, v4);
  else
    v61 = MiStealPage(v60, v11, v4, v48, *(_DWORD *)(a1 + 28), (__int64)&v87);
  v65 = v61;
  _InterlockedAnd64((volatile signed __int64 *)(v9 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      v66 = KeGetCurrentIrql();
      if ( v66 <= 0xFu && v11 <= 0xFu && v66 >= 2u )
      {
        v67 = KeGetCurrentPrcb();
        v62 = -1LL << (v11 + 1);
        v64 = v67->SchedulerAssist;
        v68 = ~(unsigned __int16)v62;
        v54 = (v68 & v64[5]) == 0;
        v63 = (unsigned int)v68 & v64[5];
        v64[5] = v63;
        if ( v54 )
          KiRemoveSystemWorkPriorityKick(v67);
      }
    }
  }
  __writecr8(v11);
  if ( !v65 )
    goto LABEL_130;
  if ( v65 == 2 )
  {
    v47 = MiLockPageInline(v9, v62, v63, v64);
    goto LABEL_119;
  }
  if ( *(_QWORD *)(qword_140C4E648 + 8 * ((*(_QWORD *)(v9 + 40) >> 39) & 0x3FFLL)) != v6 )
  {
LABEL_129:
    MiLockAndInsertPageInFreeList(v9);
LABEL_130:
    v42 = 0LL;
    goto LABEL_131;
  }
LABEL_136:
  *(_QWORD *)(v9 + 16) = ZeroPte;
  MiSetOriginalPtePfnFromFreeList(v9 + 16);
  v71 = v9;
  if ( v90 )
  {
LABEL_134:
    MiLockAndInsertPageInFreeList(v71);
    goto LABEL_138;
  }
  _InterlockedOr(v81, 0);
  MiSetPfnTbFlushStamp(v9, KiTbFlushTimeStamp, 0);
LABEL_138:
  v42 = 1LL;
  MiAddMdlPageToTradeBlock(a1, v5, 1);
LABEL_131:
  result = v42;
  *(_QWORD *)(a1 + 40) = v87;
  return result;
}
