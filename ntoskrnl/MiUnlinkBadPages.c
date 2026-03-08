/*
 * XREFs of MiUnlinkBadPages @ 0x1406288F4
 * Callers:
 *     MmMarkPhysicalMemoryAsGood @ 0x14062A140 (MmMarkPhysicalMemoryAsGood.c)
 * Callees:
 *     MiInsertPageInFreeOrZeroedList @ 0x140277CE0 (MiInsertPageInFreeOrZeroedList.c)
 *     MiReturnCommit @ 0x140287340 (MiReturnCommit.c)
 *     MiIsPageInHugePfn @ 0x14029C30C (MiIsPageInHugePfn.c)
 *     KeShouldYieldProcessor @ 0x1402C9870 (KeShouldYieldProcessor.c)
 *     MiIsPageOnBadList @ 0x14034B1D0 (MiIsPageOnBadList.c)
 *     KeYieldProcessorEx @ 0x1403512B0 (KeYieldProcessorEx.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 *     MiMarkHugePfnGood @ 0x14061F9B8 (MiMarkHugePfnGood.c)
 *     MiMarkFileOnlyPfnGood @ 0x14063BF34 (MiMarkFileOnlyPfnGood.c)
 *     MiSetPfnRemovalRequested @ 0x14064B908 (MiSetPfnRemovalRequested.c)
 *     MiUnlinkPageFromBadList @ 0x14064BA18 (MiUnlinkPageFromBadList.c)
 */

__int64 __fastcall MiUnlinkBadPages(unsigned __int64 a1, unsigned __int64 a2)
{
  __int64 v2; // rbx
  unsigned __int64 v4; // r14
  __int64 v5; // rbp
  unsigned __int8 CurrentIrql; // di
  __int64 v7; // r11
  _DWORD *SchedulerAssist; // r10
  __int64 v9; // rdx
  volatile signed __int32 *v10; // rbx
  __int64 v11; // r8
  const signed __int64 *v12; // rax
  __int64 v13; // rsi
  int v14; // eax
  __int64 v15; // r8
  unsigned __int8 v16; // cl
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *v18; // r9
  int v19; // eax
  bool v20; // zf
  int v21; // r10d
  _DWORD *v22; // r9
  __int64 v23; // rdx
  const signed __int64 *v24; // rax
  __int64 v25; // rsi
  __int64 v26; // r8
  unsigned __int8 v27; // cf
  unsigned __int64 v28; // r8
  struct _KPRCB *v29; // r9
  __int64 CachedResidentAvailable; // rdx
  signed __int32 v31; // eax
  char v32; // dl
  __int64 v33; // r8
  unsigned __int64 v34; // r8
  struct _KPRCB *v35; // r9
  __int64 v36; // rdx
  signed __int32 v37; // eax
  unsigned __int8 v38; // al
  struct _KPRCB *v39; // r10
  _DWORD *v40; // r9
  int v41; // eax
  unsigned __int8 v42; // cl
  _DWORD *v43; // r9
  __int64 v44; // rdx
  unsigned __int8 v45; // al
  struct _KPRCB *v46; // r10
  _DWORD *v47; // r9
  int v48; // edx
  __int64 v50; // [rsp+20h] [rbp-58h]
  __int64 v51; // [rsp+28h] [rbp-50h]
  int v52; // [rsp+80h] [rbp+8h] BYREF
  unsigned __int64 v53; // [rsp+88h] [rbp+10h]
  const signed __int64 *v54; // [rsp+90h] [rbp+18h]
  const signed __int64 *v55; // [rsp+98h] [rbp+20h]

  v53 = a2;
  v2 = 0LL;
  v50 = 0LL;
  v51 = 0LL;
  v4 = a1;
  v5 = 48 * a1 - 0x220000000000LL;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  v7 = -1LL;
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    if ( CurrentIrql == 2 )
      LODWORD(v9) = 4;
    else
      v9 = (-1LL << (CurrentIrql + 1)) & 4;
    SchedulerAssist[5] |= v9;
  }
  if ( a1 < a2 )
  {
    v10 = (volatile signed __int32 *)(v5 + 24);
    v11 = 0LL;
    v55 = (const signed __int64 *)(48 * a1 - 0x21FFFFFFFFD8LL);
    v12 = v55;
    while ( 1 )
    {
      v54 = v12;
      v13 = v11;
      LOBYTE(v14) = MiIsPageInHugePfn(v4);
      if ( v14 )
      {
        if ( KiIrqlFlags )
        {
          v16 = KeGetCurrentIrql();
          if ( (KiIrqlFlags & 1) != 0 && v16 <= 0xFu && CurrentIrql <= 0xFu && v16 >= 2u )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            v18 = CurrentPrcb->SchedulerAssist;
            v19 = ~(unsigned __int16)(v7 << (CurrentIrql + 1));
            v20 = (v19 & v18[5]) == 0;
            v18[5] &= v19;
            if ( v20 )
              KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
          }
        }
        __writecr8(CurrentIrql);
        v21 = MiMarkHugePfnGood(v4);
        CurrentIrql = KeGetCurrentIrql();
        __writecr8(2uLL);
        if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
        {
          v22 = KeGetCurrentPrcb()->SchedulerAssist;
          if ( CurrentIrql == 2 )
            LODWORD(v23) = 4;
          else
            v23 = (-1LL << (CurrentIrql + 1)) & 4;
          v22[5] |= v23;
        }
        if ( v21 >= 0 )
        {
          v24 = v54;
          v15 = v13;
          if ( v21 == 274 )
          {
            ++v51;
            v50 = v13;
            goto LABEL_82;
          }
        }
        else
        {
          --v4;
          v24 = v55 - 6;
          v5 -= 48LL;
          v10 -= 12;
          v15 = v50 - 1;
        }
        goto LABEL_83;
      }
      v24 = v55;
      if ( v4 > qword_140C65820 || !_bittest64(v55, 0x36u) )
        goto LABEL_84;
      v52 = 0;
      while ( _interlockedbittestandset64(v10, 0x3FuLL) )
      {
        do
          KeYieldProcessorEx(&v52);
        while ( *(__int64 *)v10 < 0 );
      }
      v25 = *(_QWORD *)(qword_140C67048 + 8 * ((*(_QWORD *)(v5 + 40) >> 43) & 0x3FFLL));
      if ( (*(_BYTE *)(v5 + 35) & 0x40) == 0 )
        break;
      MiSetPfnRemovalRequested(v5, 0LL, 1LL);
      ++v51;
      v27 = _bittest64((const signed __int64 *)(v5 + 40), 0x35u);
      *(_BYTE *)(v5 + 35) &= ~0x80u;
      if ( v27 )
      {
        MiMarkFileOnlyPfnGood(v5);
        goto LABEL_61;
      }
      MiReturnCommit(v25, 1LL, v26);
      v28 = 1LL;
      if ( (unsigned __int16 *)v25 != MiSystemPartition
        || (v29 = KeGetCurrentPrcb(),
            CachedResidentAvailable = (int)v29->CachedResidentAvailable,
            (_DWORD)CachedResidentAvailable == -1) )
      {
LABEL_47:
        _InterlockedExchangeAdd64((volatile signed __int64 *)(v25 + 17280), v28);
        goto LABEL_61;
      }
      if ( (unsigned __int64)(CachedResidentAvailable + 1) > 0x100 )
      {
LABEL_43:
        if ( (int)CachedResidentAvailable > 192
          && (_DWORD)CachedResidentAvailable == _InterlockedCompareExchange(
                                                  (volatile signed __int32 *)&v29->CachedResidentAvailable,
                                                  192,
                                                  CachedResidentAvailable) )
        {
          v28 = (int)CachedResidentAvailable - 192 + 1LL;
        }
        if ( v28 )
          goto LABEL_47;
      }
      else
      {
        while ( 1 )
        {
          v31 = _InterlockedCompareExchange(
                  (volatile signed __int32 *)&v29->CachedResidentAvailable,
                  CachedResidentAvailable + 1,
                  CachedResidentAvailable);
          v20 = (_DWORD)CachedResidentAvailable == v31;
          LODWORD(CachedResidentAvailable) = v31;
          if ( v20 )
            break;
          if ( v31 == -1 || (unsigned __int64)(v31 + 1LL) > 0x100 )
            goto LABEL_43;
        }
      }
LABEL_61:
      _InterlockedAnd64((volatile signed __int64 *)v10, 0x7FFFFFFFFFFFFFFFuLL);
      if ( CurrentIrql >= 2u )
        goto LABEL_81;
      if ( (v50 & 0xF) != 0 )
      {
        v7 = -1LL;
LABEL_80:
        v15 = v50;
        v24 = v55;
        goto LABEL_84;
      }
      if ( !KeShouldYieldProcessor() )
      {
LABEL_81:
        v24 = v55;
LABEL_82:
        v15 = v50;
LABEL_83:
        v7 = -1LL;
        goto LABEL_84;
      }
      if ( !KiIrqlFlags )
        goto LABEL_69;
      v38 = KeGetCurrentIrql();
      if ( (KiIrqlFlags & 1) == 0 )
        goto LABEL_69;
      v7 = -1LL;
      if ( (unsigned __int8)(v38 - 2) <= 0xDu )
      {
        v39 = KeGetCurrentPrcb();
        v40 = v39->SchedulerAssist;
        v41 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
        v20 = (v41 & v40[5]) == 0;
        v40[5] &= v41;
        if ( v20 )
        {
          KiRemoveSystemWorkPriorityKick((__int64)v39);
LABEL_69:
          v7 = -1LL;
        }
      }
      __writecr8(CurrentIrql);
      v42 = KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 )
      {
        if ( v42 > 0xFu )
          goto LABEL_80;
        v43 = KeGetCurrentPrcb()->SchedulerAssist;
        if ( v42 == 2 )
          LODWORD(v44) = 4;
        else
          v44 = (-1LL << (v42 + 1)) & 4;
        v43[5] |= v44;
      }
      v24 = v55;
      v15 = v50;
LABEL_84:
      v12 = v24 + 6;
      v11 = v15 + 1;
      ++v4;
      v55 = v12;
      v5 += 48LL;
      v50 = v11;
      v10 += 12;
      if ( v4 >= v53 )
      {
        v2 = v51;
        goto LABEL_86;
      }
    }
    if ( !MiIsPageOnBadList(v5) )
      goto LABEL_61;
    *(_BYTE *)(v5 + 35) = v32 & 0x7F;
    MiUnlinkPageFromBadList(v5, 0LL);
    *(_QWORD *)v10 |= 0x4000000000000000uLL;
    MiInsertPageInFreeOrZeroedList(v4, 2);
    MiReturnCommit(v25, 1LL, v33);
    v34 = 1LL;
    if ( (unsigned __int16 *)v25 != MiSystemPartition )
      goto LABEL_59;
    v35 = KeGetCurrentPrcb();
    v36 = (int)v35->CachedResidentAvailable;
    if ( (_DWORD)v36 == -1 )
      goto LABEL_59;
    if ( (unsigned __int64)(v36 + 1) <= 0x100 )
    {
      do
      {
        v37 = _InterlockedCompareExchange((volatile signed __int32 *)&v35->CachedResidentAvailable, v36 + 1, v36);
        v20 = (_DWORD)v36 == v37;
        LODWORD(v36) = v37;
        if ( v20 )
          goto LABEL_60;
      }
      while ( v37 != -1 && (unsigned __int64)(v37 + 1LL) <= 0x100 );
    }
    if ( (int)v36 > 192
      && (_DWORD)v36 == _InterlockedCompareExchange((volatile signed __int32 *)&v35->CachedResidentAvailable, 192, v36) )
    {
      v34 = (int)v36 - 192 + 1LL;
    }
    if ( v34 )
LABEL_59:
      _InterlockedExchangeAdd64((volatile signed __int64 *)(v25 + 17280), v34);
LABEL_60:
    ++v51;
    goto LABEL_61;
  }
LABEL_86:
  if ( KiIrqlFlags )
  {
    v45 = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0 && v45 <= 0xFu && CurrentIrql <= 0xFu && v45 >= 2u )
    {
      v46 = KeGetCurrentPrcb();
      v47 = v46->SchedulerAssist;
      v48 = ~(unsigned __int16)(v7 << (CurrentIrql + 1));
      v20 = (v48 & v47[5]) == 0;
      v47[5] &= v48;
      if ( v20 )
        KiRemoveSystemWorkPriorityKick((__int64)v46);
    }
  }
  __writecr8(CurrentIrql);
  return v2;
}
