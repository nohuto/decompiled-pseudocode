unsigned __int64 __fastcall MiTradePage(__int64 a1, unsigned __int64 a2, __int64 a3)
{
  unsigned int v3; // r13d
  __int64 v4; // r15
  __int64 v7; // rbx
  unsigned __int8 v8; // al
  unsigned __int8 i; // di
  unsigned __int64 v10; // rdx
  __int64 PfnPageSizeIndex; // r15
  unsigned int v12; // ebp
  int v13; // eax
  __int64 v14; // r8
  int v15; // r11d
  char v16; // dl
  __int64 active; // rax
  unsigned __int64 v18; // rbp
  unsigned __int64 result; // rax
  unsigned __int64 v20; // rcx
  int v21; // ebp
  unsigned int v22; // ebp
  int v23; // eax
  int v24; // ebp
  __int64 v25; // r8
  int v26; // eax
  __int64 v27; // r14
  unsigned __int64 v28; // rdx
  __int64 BaseResidentPage; // r14
  unsigned int v30; // r8d
  unsigned __int8 v31; // al
  struct _KPRCB *v32; // r11
  _DWORD *v33; // r10
  int v34; // eax
  bool v35; // zf
  unsigned __int8 v36; // cl
  struct _KPRCB *v37; // r10
  _DWORD *v38; // r9
  int v39; // eax
  int v40; // eax
  unsigned __int8 v41; // al
  struct _KPRCB *v42; // r10
  _DWORD *v43; // r9
  int v44; // eax
  unsigned __int8 v45; // al
  struct _KPRCB *v46; // r10
  _DWORD *v47; // r9
  int v48; // eax
  __int64 v49; // rax
  __int64 v50; // rbp
  unsigned __int8 CurrentIrql; // cl
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *SchedulerAssist; // r8
  int v54; // eax
  unsigned __int8 v55; // al
  struct _KPRCB *v56; // r10
  _DWORD *v57; // r9
  int v58; // edx
  signed __int32 v59[8]; // [rsp+0h] [rbp-A8h] BYREF
  int v60; // [rsp+30h] [rbp-78h] BYREF
  unsigned __int64 v61; // [rsp+38h] [rbp-70h]
  __int64 v62; // [rsp+40h] [rbp-68h]
  __int64 v63; // [rsp+48h] [rbp-60h] BYREF
  __int64 v64; // [rsp+50h] [rbp-58h]
  __int64 v65; // [rsp+58h] [rbp-50h]
  int v66; // [rsp+B0h] [rbp+8h]
  int v67; // [rsp+B8h] [rbp+10h] BYREF
  __int64 v68; // [rsp+C0h] [rbp+18h]
  int v69; // [rsp+C8h] [rbp+20h]

  v68 = a3;
  v3 = *(_DWORD *)(a1 + 24);
  v4 = *(_QWORD *)a1;
  v60 = 0;
  v67 = 0;
  *(_QWORD *)(a1 + 48) = 0LL;
  v66 = v3 & 0x400000;
  v62 = v4;
  if ( (v3 & 0x400000) != 0 )
    v69 = *(_DWORD *)(a1 + 28);
  else
    v69 = -1;
  v61 = 0LL;
  v65 = 48 * a2;
  v63 = -1LL;
  v64 = 0LL;
  v7 = 48 * a2 - 0x220000000000LL;
  v8 = MiLockPageInline(v7);
LABEL_4:
  for ( i = v8; ; i = MiLockPageInline(v7) )
  {
    while ( 1 )
    {
      if ( !(unsigned int)MiIsPfn(a2) )
      {
LABEL_169:
        LOBYTE(v15) = 1;
        ++dword_140C13618;
        goto LABEL_20;
      }
      v10 = *(_QWORD *)(v7 + 40);
      if ( *(_QWORD *)(qword_140C67048 + 8 * ((v10 >> 43) & 0x3FF)) != v4 )
      {
        v50 = (unsigned int)MiPfnLargeBitSet(&MiSystemPartition, a2);
        _InterlockedAnd64((volatile signed __int64 *)(v7 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        if ( KiIrqlFlags )
        {
          CurrentIrql = KeGetCurrentIrql();
          if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && i <= 0xFu && CurrentIrql >= 2u )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            SchedulerAssist = CurrentPrcb->SchedulerAssist;
            v54 = ~(unsigned __int16)(-1LL << (i + 1));
            v35 = (v54 & SchedulerAssist[5]) == 0;
            SchedulerAssist[5] &= v54;
            if ( v35 )
              KiRemoveSystemWorkPriorityKick(CurrentPrcb);
          }
        }
        __writecr8(i);
        if ( (_DWORD)v50 != -1 )
          *(_QWORD *)(a1 + 48) = MiLargePageSizes[v50];
        ++dword_140C1361C;
        goto LABEL_87;
      }
      PfnPageSizeIndex = 0xFFFFFFFFLL;
      v12 = *(_BYTE *)(v7 + 34) & 7;
      if ( (v10 & 0x10000000000LL) != 0 )
      {
        BaseResidentPage = MiGetBaseResidentPage(v7);
        v12 = *(_BYTE *)(BaseResidentPage + 34) & 7;
        PfnPageSizeIndex = (unsigned int)MiGetPfnPageSizeIndex(BaseResidentPage);
        if ( BaseResidentPage != v7 )
          _InterlockedAnd64((volatile signed __int64 *)(BaseResidentPage + 24), 0x7FFFFFFFFFFFFFFFuLL);
        if ( v12 == 6 )
        {
          LOBYTE(v15) = 1;
          v49 = MiLargePageSizes[PfnPageSizeIndex];
          ++dword_140C13624;
          *(_QWORD *)(a1 + 48) = v49;
          goto LABEL_20;
        }
      }
      if ( v12 != 5 )
        break;
      if ( MiIsPageOnBadList(v7) )
      {
        LOBYTE(v15) = 1;
        ++dword_140C1362C;
        goto LABEL_20;
      }
      if ( *(_QWORD *)(v7 + 8) == -8LL )
      {
        LOBYTE(v15) = 1;
        ++dword_140C13630;
        goto LABEL_20;
      }
      if ( (_DWORD)PfnPageSizeIndex != -1 )
      {
        v12 = 1;
        break;
      }
      if ( !MiInvalidPteConforms(*(_QWORD *)(v7 + 16)) )
        goto LABEL_83;
      if ( qword_140C657C0 )
      {
        if ( (v20 & 0x10) != 0 )
          v20 &= ~0x10uLL;
        else
          v20 &= ~qword_140C657C0;
      }
      if ( HIDWORD(v20) != 4294967294 )
      {
LABEL_83:
        LOBYTE(v15) = 1;
        ++dword_140C13634;
        goto LABEL_20;
      }
      if ( v64 == v7 )
      {
        LOBYTE(v15) = 1;
        ++dword_140C13638;
        goto LABEL_20;
      }
      v21 = *((_DWORD *)MiSearchNumaNodeTable(0xAAAAAAAAAAAAAAABuLL * (v65 >> 4)) + 2);
      v22 = ((unsigned int)MiGetPfnChannel(v7) << byte_140C6570E) | dword_140C65778 & a2 | (v21 << byte_140C6570D);
      _InterlockedAnd64((volatile signed __int64 *)(v7 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( KiIrqlFlags )
      {
        v31 = KeGetCurrentIrql();
        if ( (KiIrqlFlags & 1) != 0 && v31 <= 0xFu && i <= 0xFu && v31 >= 2u )
        {
          v32 = KeGetCurrentPrcb();
          v33 = v32->SchedulerAssist;
          v34 = ~(unsigned __int16)(-1LL << (i + 1));
          v35 = (v34 & v33[5]) == 0;
          v33[5] &= v34;
          if ( v35 )
            KiRemoveSystemWorkPriorityKick(v32);
        }
      }
      __writecr8(i);
      ++dword_140C135FC;
      v4 = v62;
      MiDrainZeroLookasides(v62, v7, *(_QWORD *)(a1 + 16), v22);
      v64 = v7;
      MiLockPageInline(v7);
    }
    if ( _bittest64((const signed __int64 *)(v7 + 40), 0x35u) )
      goto LABEL_169;
    v13 = MiCheckSlabPfnBitmap(v7, 1LL, 0);
    v14 = 0LL;
    if ( v13 )
      goto LABEL_169;
    v15 = 1;
    if ( v12 <= 1 )
    {
      if ( (_DWORD)PfnPageSizeIndex == -1 )
      {
        if ( v66 || (unsigned int)MiUnlinkFreeOrZeroedPage(a2, 0LL, 0) )
        {
          ++dword_140C135F8;
          goto LABEL_29;
        }
        ++dword_140C13640;
        MiReturnFreeZeroPage(v7);
        LOBYTE(v15) = 1;
        goto LABEL_20;
      }
      v27 = (unsigned int)PfnPageSizeIndex;
      v18 = MiLargePageSizes[PfnPageSizeIndex];
      if ( (v3 & 0x2000000) != 0 && v18 >= 0x200 || (v3 & 0x1000000) != 0 && v18 == 16 )
        goto LABEL_20;
      _InterlockedAnd64((volatile signed __int64 *)(v7 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( KiIrqlFlags )
      {
        v36 = KeGetCurrentIrql();
        if ( (KiIrqlFlags & 1) != 0 && v36 <= 0xFu && i <= 0xFu && v36 >= 2u )
        {
          v37 = KeGetCurrentPrcb();
          v38 = v37->SchedulerAssist;
          v39 = ~(unsigned __int16)(-1LL << (i + 1));
          v35 = (v39 & v38[5]) == 0;
          v38[5] &= v39;
          if ( v35 )
            KiRemoveSystemWorkPriorityKick(v37);
        }
      }
      __writecr8(i);
      if ( (a2 & ~(v18 - 1)) == a2 && (v3 & 0x400000) == 0 && *(_QWORD *)(a1 + 16) >= v18 )
      {
        v28 = v18 + a2 - 1;
        if ( v28 <= *(_QWORD *)(a1 + 56) )
        {
          if ( (unsigned int)MiLargeFreePageToMdl(v62, v28, PfnPageSizeIndex, *(_QWORD *)(a1 + 64), v3) )
          {
            dword_140C135F8 += v18;
            goto LABEL_24;
          }
        }
      }
      v30 = PfnPageSizeIndex;
      v4 = v62;
      if ( !(unsigned int)MiDemoteLargeFreePage(v62, a2, v30, v3, (__int64)&v67) && !v67 )
      {
        v40 = MiLargePageMovesInProgress(v7);
        v18 = v61;
        if ( v40 )
        {
          ++dword_140C13628;
        }
        else
        {
          ++dword_140C13620;
          *(_QWORD *)(a1 + 48) = MiLargePageSizes[v27];
        }
        goto LABEL_24;
      }
      v8 = MiLockPageInline(v7);
      goto LABEL_4;
    }
    if ( (v3 & 0x10000000) != 0 || (v16 = *(_BYTE *)(v7 + 35), v16 < 0) )
    {
      if ( v12 == 2 )
      {
        if ( *(_WORD *)(v7 + 32) )
        {
          ++dword_140C13644;
          goto LABEL_20;
        }
        if ( !(unsigned int)MiReuseStandbyPage(v7) )
        {
          MiReturnFreeZeroPage(v7);
          LOBYTE(v15) = 1;
          ++dword_140C13640;
          goto LABEL_20;
        }
LABEL_29:
        v18 = 1LL;
        MiAddMdlPageToTradeBlock(a1, a2, v14);
        goto LABEL_21;
      }
      if ( v12 != 6
        || (*(_BYTE *)(v7 + 34) & 0x10) != 0
        || *(_WORD *)(v7 + 32) != 1
        || ((*(_QWORD *)(v7 + 40) >> 60) & 7) == 2
        || (*(_BYTE *)v7 & 1) == 0
        || (v16 = *(_BYTE *)(v7 + 35), (v16 & 8) != 0) )
      {
        ++dword_140C13650;
        goto LABEL_20;
      }
    }
    else
    {
      if ( v12 <= 4 )
      {
        if ( !_bittest64((const signed __int64 *)(v7 + 40), 0x28u) && (v3 & 0x4000000) == 0 && *(__int64 *)(v7 + 8) > 0 )
        {
          ++dword_140C13654;
          goto LABEL_20;
        }
        if ( (v3 & 0x200000) != 0 && ((v16 & 0x40) != 0 || MiIsPageOnBadList(v7)) )
        {
LABEL_112:
          dword_140C13658 += v15;
          goto LABEL_20;
        }
        v26 = MiTradeTransitionPage(v7, (__int64)&v63);
        if ( v26 == 3 )
        {
          if ( *(_QWORD *)(qword_140C67048 + 8 * ((*(_QWORD *)(v7 + 40) >> 43) & 0x3FFLL)) == v62 )
          {
            if ( v66 )
              MiLockAndInsertPageInFreeList(v7);
            v18 = 1LL;
            goto LABEL_52;
          }
          ++dword_140C1361C;
LABEL_148:
          MiLockAndInsertPageInFreeList(v7);
LABEL_87:
          v18 = v61;
          goto LABEL_24;
        }
        if ( v26 != 2 )
          goto LABEL_87;
        v8 = MiLockPageInline(v7);
        v4 = v62;
        goto LABEL_4;
      }
      if ( v12 != 6 )
      {
        ++dword_140C13660;
        goto LABEL_20;
      }
    }
    if ( (v3 & 0x200000) != 0 && ((v16 & 0x40) != 0 || MiIsPageOnBadList(v7)) )
      goto LABEL_112;
    if ( ((*(_QWORD *)(v7 + 40) >> 60) & 7) == 2 )
    {
      if ( (v3 & 8) != 0 )
        goto LABEL_151;
      _InterlockedAnd64((volatile signed __int64 *)(v7 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( KiIrqlFlags )
      {
        v41 = KeGetCurrentIrql();
        if ( ((unsigned __int8)KiIrqlFlags & (unsigned __int8)v15) != 0 && v41 <= 0xFu && i <= 0xFu && v41 >= 2u )
        {
          v42 = KeGetCurrentPrcb();
          v43 = v42->SchedulerAssist;
          v44 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v15 + i));
          v35 = (v44 & v43[5]) == 0;
          v43[5] &= v44;
          if ( v35 )
            KiRemoveSystemWorkPriorityKick(v42);
        }
      }
      __writecr8(i);
      v4 = v62;
      if ( (unsigned int)MiSwapStackPage(v62, v7, *(_DWORD *)(a1 + 28), v3, &v63, &v60) )
      {
        if ( v60 )
          ++dword_140C13604;
        else
          ++dword_140C13610;
        goto LABEL_49;
      }
      if ( ((*(_QWORD *)(v7 + 40) >> 60) & 7) == 2 )
      {
        ++dword_140C13664;
        goto LABEL_87;
      }
      v8 = MiLockPageInline(v7);
      ++dword_140C13614;
      goto LABEL_4;
    }
    v4 = v62;
    active = MiActivePageClaimCandidate(v62, v7, v15, v15, v68);
    if ( active )
    {
      LOBYTE(v15) = 1;
      *(_QWORD *)(a1 + 48) = active;
      ++dword_140C136E8;
      goto LABEL_20;
    }
    if ( (v3 & 8) != 0 )
      break;
    if ( *(__int64 *)(v7 + 40) >= 0 )
      v23 = MiStealPage(v7, *(_DWORD *)(a1 + 28), (__int64)&v63);
    else
      v23 = MiTrimSharedPage(v7, i, v3);
    v24 = v23;
    _InterlockedAnd64((volatile signed __int64 *)(v7 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( KiIrqlFlags )
    {
      v45 = KeGetCurrentIrql();
      if ( (KiIrqlFlags & 1) != 0 && v45 <= 0xFu && i <= 0xFu && v45 >= 2u )
      {
        v46 = KeGetCurrentPrcb();
        v47 = v46->SchedulerAssist;
        v48 = ~(unsigned __int16)(-1LL << (i + 1));
        v35 = (v48 & v47[5]) == 0;
        v47[5] &= v48;
        if ( v35 )
          KiRemoveSystemWorkPriorityKick(v46);
      }
    }
    __writecr8(i);
    if ( !v24 )
    {
      ++dword_140C1366C;
      goto LABEL_87;
    }
    if ( v24 != 2 )
    {
      if ( *(_QWORD *)(qword_140C67048 + 8 * ((*(_QWORD *)(v7 + 40) >> 43) & 0x3FFLL)) != v4 )
      {
        ++dword_140C1361C;
        goto LABEL_148;
      }
      ++dword_140C13608;
LABEL_49:
      *(_QWORD *)(v7 + 16) = ZeroPte;
      MiSetOriginalPtePfnFromFreeList((unsigned __int64 *)(v7 + 16));
      if ( v66 )
      {
        MiLockAndInsertPageInFreeList(v7);
      }
      else
      {
        _InterlockedOr(v59, 0);
        MiSetPfnTbFlushStamp(v7, KiTbFlushTimeStamp, 0);
      }
      v18 = 1LL;
LABEL_52:
      MiAddMdlPageToTradeBlock(a1, a2, v25);
      goto LABEL_24;
    }
  }
  v15 = 1;
LABEL_151:
  dword_140C1365C += v15;
LABEL_20:
  v18 = v61;
LABEL_21:
  if ( i != 17 )
  {
    _InterlockedAnd64((volatile signed __int64 *)(v7 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( KiIrqlFlags )
    {
      v55 = KeGetCurrentIrql();
      if ( ((unsigned __int8)KiIrqlFlags & (unsigned __int8)v15) != 0 && v55 <= 0xFu && i <= 0xFu && v55 >= 2u )
      {
        v56 = KeGetCurrentPrcb();
        v57 = v56->SchedulerAssist;
        v58 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v15 + i));
        v35 = (v58 & v57[5]) == 0;
        v57[5] &= v58;
        if ( v35 )
          KiRemoveSystemWorkPriorityKick(v56);
      }
    }
    __writecr8(i);
  }
LABEL_24:
  result = v18;
  *(_QWORD *)(a1 + 40) = v63;
  return result;
}
