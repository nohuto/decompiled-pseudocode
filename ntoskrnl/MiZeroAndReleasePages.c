/*
 * XREFs of MiZeroAndReleasePages @ 0x1402776A0
 * Callers:
 *     MiFreePagesFromMdl @ 0x1402C0DD0 (MiFreePagesFromMdl.c)
 * Callees:
 *     MiChangePageAttributeContiguous @ 0x140214270 (MiChangePageAttributeContiguous.c)
 *     MiZeroLargePage @ 0x1402441E4 (MiZeroLargePage.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x140277CE0 (MiInsertPageInFreeOrZeroedList.c)
 *     MiCreatePageChains @ 0x1402B4A2C (MiCreatePageChains.c)
 *     MiProcessPageGroupInfo @ 0x1402B4BE0 (MiProcessPageGroupInfo.c)
 *     MiZeroPhysicalPage @ 0x1402CE78C (MiZeroPhysicalPage.c)
 *     MiPfnBestZeroAttribute @ 0x1402CEAFC (MiPfnBestZeroAttribute.c)
 *     MiSearchNumaNodeTable @ 0x140319DD0 (MiSearchNumaNodeTable.c)
 *     KxReleaseQueuedSpinLock @ 0x14033A950 (KxReleaseQueuedSpinLock.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14033B450 (KeAcquireInStackQueuedSpinLock.c)
 *     MiInitializeLargePfnList @ 0x14035059C (MiInitializeLargePfnList.c)
 *     MiFreeLargePageMemory @ 0x1403505C0 (MiFreeLargePageMemory.c)
 *     KeYieldProcessorEx @ 0x1403512B0 (KeYieldProcessorEx.c)
 *     MiSyncCommitSignals @ 0x1403929E0 (MiSyncCommitSignals.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 *     MiRestockOverCommit @ 0x140654060 (MiRestockOverCommit.c)
 */

volatile signed __int32 *__fastcall MiZeroAndReleasePages(__int64 a1, int a2)
{
  __int64 v3; // rdi
  int v4; // r13d
  __int64 v5; // r15
  __int64 v6; // r14
  __int64 v7; // rbx
  __int64 *v8; // rax
  __int64 v9; // rcx
  __int64 v10; // rbp
  __int64 v11; // rsi
  unsigned int v12; // edx
  __int64 v13; // rcx
  __int64 *v14; // rdx
  __int64 v15; // rax
  unsigned __int64 v16; // r13
  unsigned int v17; // r9d
  volatile signed __int32 *result; // rax
  __int64 *v19; // rbx
  __int64 v20; // rcx
  __int64 v21; // r15
  unsigned __int8 CurrentIrql; // bp
  volatile signed __int32 *v23; // r14
  char v24; // al
  unsigned __int64 v25; // rsi
  ULONG_PTR v26; // rbx
  __int64 v27; // rdx
  __int64 v28; // rdi
  _QWORD *v29; // rcx
  bool v30; // zf
  __int64 CachedCommit; // r8
  __int64 v32; // rbx
  struct _KPRCB *v33; // rdx
  unsigned __int64 v34; // rcx
  unsigned __int64 v35; // rdx
  unsigned __int64 v36; // rdx
  unsigned __int64 v37; // r9
  struct _KPRCB *v38; // r8
  __int64 CachedResidentAvailable; // rdx
  signed __int32 v40; // eax
  _DWORD *SchedulerAssist; // r8
  __int64 v42; // r9
  __int64 v43; // rcx
  __int64 v44; // rdi
  __int64 v45; // rax
  __int64 PageChains; // rax
  __int64 v47; // r9
  _QWORD *v48; // rax
  __int64 *v49; // rcx
  unsigned int v50; // eax
  unsigned __int64 v51; // r8
  unsigned __int64 v52; // r9
  unsigned __int64 OldIrql; // r12
  unsigned __int8 v54; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *v56; // r9
  int v57; // eax
  unsigned __int8 v58; // cl
  struct _KPRCB *v59; // r10
  _DWORD *v60; // r9
  int v61; // eax
  unsigned int v62; // [rsp+30h] [rbp-C8h]
  int v63; // [rsp+34h] [rbp-C4h] BYREF
  int v64; // [rsp+38h] [rbp-C0h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+40h] [rbp-B8h] BYREF
  _QWORD v66[12]; // [rsp+60h] [rbp-98h] BYREF

  v64 = a2;
  memset(v66, 0, sizeof(v66));
  v3 = 0LL;
  v4 = 1;
  if ( KeGetCurrentIrql() == 2 || (KeGetPcr()->Prcb.DpcRequestSummary & 0x10001) != 0 )
    v4 = 0;
  MiInitializeLargePfnList(v66);
  v5 = 0LL;
  do
  {
    while ( 1 )
    {
      v6 = 3 * v5;
      v7 = *(_QWORD *)(24 * v5 + a1);
      v8 = (__int64 *)(24 * v5 + a1);
      if ( (__int64 *)v7 == v8 )
        break;
      v9 = *(_QWORD *)v7;
      if ( *(__int64 **)(v7 + 8) != v8 || *(_QWORD *)(v9 + 8) != v7 )
        goto LABEL_113;
      *v8 = v9;
      *(_QWORD *)(v9 + 8) = v8;
      --v8[2];
      if ( (_DWORD)v5 == 3 )
        v10 = 1LL;
      else
        v10 = MiLargePageSizes[v5];
      v11 = v7 + 0x220000000000LL;
      if ( (*(_BYTE *)(v7 + 34) & 0xC0) == 0xC0 )
      {
        v50 = MiPfnBestZeroAttribute(v7, 1LL, 0xAAAAAAAAAAAAAAABuLL);
        MiChangePageAttributeContiguous(0xAAAAAAAAAAAAAAABuLL * (v11 >> 4), v10, v50, 2);
      }
      if ( v3 )
      {
LABEL_12:
        v12 = *(_DWORD *)(v3 + 28) % *(_DWORD *)(v3 + 24);
        ++*(_DWORD *)(v3 + 28);
        v13 = 5LL * v12;
        v14 = *(__int64 **)(v3 + 8 * (v13 + 16) + 8);
        v15 = v3 + 8 * (v13 + 16);
        if ( *v14 != v15 )
          goto LABEL_113;
        *(_QWORD *)v7 = v15;
        *(_QWORD *)(v7 + 8) = v14;
        *v14 = v7;
        *(_QWORD *)(v15 + 8) = v7;
        *(_QWORD *)(v3 + 8 * v13 + 120) += v10;
        *(_QWORD *)(v3 + 8 * ((unsigned __int64)*(unsigned __int8 *)(v7 + 34) >> 6) + 32) += v10;
      }
      else
      {
        if ( v4 )
        {
          v44 = *(_QWORD *)(qword_140C67048 + 8 * ((*(_QWORD *)(v7 + 40) >> 43) & 0x3FFLL));
          v45 = MiSearchNumaNodeTable(0xAAAAAAAAAAAAAAABuLL * (v11 >> 4));
          PageChains = MiCreatePageChains(v44, *(unsigned int *)(v45 + 8), 3LL);
          v3 = PageChains;
          if ( PageChains )
          {
            *(_DWORD *)(PageChains + 16) = 9;
            goto LABEL_12;
          }
          v4 = 0;
        }
        v47 = *(unsigned __int8 *)(v7 + 34) >> 6;
        if ( (_DWORD)v5 == 3 )
          MiZeroPhysicalPage(v9, 0xAAAAAAAAAAAAAAABuLL * (v11 >> 4), 0LL, v47);
        else
          MiZeroLargePage(v9, v7, v5, v47);
        v48 = &v66[v6];
        v49 = (__int64 *)v66[v6 + 1];
        if ( (_QWORD *)*v49 != &v66[v6] )
LABEL_113:
          __fastfail(3u);
        *(_QWORD *)v7 = v48;
        *(_QWORD *)(v7 + 8) = v49;
        *v49 = v7;
        v48[1] = v7;
        ++v66[3 * v5 + 2];
      }
    }
    v5 = (unsigned int)(v5 + 1);
  }
  while ( (unsigned int)v5 < 4 );
  if ( v3 )
    MiProcessPageGroupInfo(v3, v66, 0LL);
  v16 = 0LL;
  v17 = 0;
  v62 = 0;
  while ( 2 )
  {
    while ( 2 )
    {
      result = (volatile signed __int32 *)&v66[3 * v17];
      v19 = *(__int64 **)result;
      if ( *(volatile signed __int32 **)result != result )
      {
        v20 = *v19;
        if ( (volatile signed __int32 *)v19[1] != result || *(__int64 **)(v20 + 8) != v19 )
          goto LABEL_113;
        *(_QWORD *)result = v20;
        *(_QWORD *)(v20 + 8) = result;
        --v66[3 * v17 + 2];
        if ( v17 == 3 )
        {
          v21 = 1LL;
          CurrentIrql = KeGetCurrentIrql();
          __writecr8(2uLL);
          if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
          {
            SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
            if ( CurrentIrql == 2 )
              LODWORD(v42) = 4;
            else
              v42 = (-1LL << (CurrentIrql + 1)) & 4;
            SchedulerAssist[5] |= v42;
          }
          v23 = (volatile signed __int32 *)(v19 + 3);
          v63 = 0;
          while ( _interlockedbittestandset64(v23, 0x3FuLL) )
          {
            do
              KeYieldProcessorEx(&v63);
            while ( *(__int64 *)v23 < 0 );
          }
          v24 = *((_BYTE *)v19 + 34);
          v19[5] &= ~0x8000000000000000uLL;
          *((_BYTE *)v19 + 34) = v24 & 0xC7;
          *((_BYTE *)v19 + 35) &= ~0x20u;
          *((_BYTE *)v19 + 34) = *((_BYTE *)v19 + 34) & 0xF8 | 6;
          v25 = 1LL;
          v26 = 0xAAAAAAAAAAAAAAABuLL * ((__int64)(v19 + 0x44000000000LL) >> 4);
          v27 = 48 * v26 - 0x220000000000LL;
          v28 = *(_QWORD *)(qword_140C67048 + 8 * ((*(_QWORD *)(v27 + 40) >> 43) & 0x3FFLL));
          v29 = (_QWORD *)qword_140C69508;
          if ( qword_140C69508 )
          {
            if ( ((*(_QWORD *)(48 * v26 - 0x220000000000LL + 40) >> 60) & 7) == 1 )
            {
              v51 = 0xAAAAAAAAAAAAAAABuLL * ((__int64)(48 * v26) >> 4);
              if ( qword_140C69508 )
              {
                do
                {
                  v52 = v29[3];
                  if ( v51 >= v52 )
                  {
                    if ( v51 - v52 < v29[4] )
                    {
                      v25 = 0LL;
                      break;
                    }
                    v29 = (_QWORD *)v29[1];
                  }
                  else
                  {
                    v29 = (_QWORD *)*v29;
                  }
                }
                while ( v29 );
              }
            }
          }
          *(_QWORD *)(v27 + 24) &= 0xC000000000000000uLL;
          v30 = *(_WORD *)(v27 + 32) == 2;
          *(_WORD *)(v27 + 32) -= 2;
          if ( !v30 )
          {
            *(_BYTE *)(v27 + 34) |= 7u;
            *(_QWORD *)(v27 + 24) |= 0x4000000000000000uLL;
            goto LABEL_36;
          }
          MiInsertPageInFreeOrZeroedList(v26);
          if ( v25 )
          {
            v32 = v25;
            memset(&LockHandle, 0, sizeof(LockHandle));
            if ( !*(_QWORD *)(v28 + 16440) )
              goto LABEL_116;
            KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v28 + 16424), &LockHandle);
            v32 = MiRestockOverCommit(v28, v25);
            KxReleaseQueuedSpinLock(&LockHandle);
            OldIrql = LockHandle.OldIrql;
            if ( KiIrqlFlags )
            {
              v54 = KeGetCurrentIrql();
              if ( (KiIrqlFlags & 1) != 0 && v54 <= 0xFu && LockHandle.OldIrql <= 0xFu && v54 >= 2u )
              {
                CurrentPrcb = KeGetCurrentPrcb();
                v56 = CurrentPrcb->SchedulerAssist;
                v57 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
                v30 = (v57 & v56[5]) == 0;
                CachedCommit = (unsigned int)v57 & v56[5];
                v56[5] = CachedCommit;
                if ( v30 )
                  KiRemoveSystemWorkPriorityKick(CurrentPrcb);
              }
            }
            __writecr8(OldIrql);
            if ( !v32 )
            {
LABEL_32:
              v37 = v25;
              if ( (_UNKNOWN *)v28 == &MiSystemPartition )
                goto LABEL_33;
            }
            else
            {
LABEL_116:
              if ( (_UNKNOWN *)v28 != &MiSystemPartition
                || (v33 = KeGetCurrentPrcb(),
                    _m_prefetchw((const void *)&v33->CachedCommit),
                    CachedCommit = v33->CachedCommit,
                    (unsigned __int64)(v32 + CachedCommit) > 0x100) )
              {
LABEL_30:
                v34 = _InterlockedExchangeAdd64((volatile signed __int64 *)(v28 + 17576), -v32);
                v35 = *(_QWORD *)(v28 + 16416);
                if ( v34 >= v35 && v34 - v32 < v35 || (v36 = *(_QWORD *)(v28 + 16408), v34 >= v36) && v34 - v32 < v36 )
                  MiSyncCommitSignals(v28, 0LL, CachedCommit);
                goto LABEL_32;
              }
              while ( 1 )
              {
                v43 = _InterlockedCompareExchange(
                        (volatile signed __int32 *)&v33->CachedCommit,
                        CachedCommit + v32,
                        CachedCommit);
                if ( v43 == CachedCommit )
                  break;
                CachedCommit = v43;
                if ( (unsigned __int64)(v43 + v32) > 0x100 )
                  goto LABEL_30;
              }
              v37 = v25;
LABEL_33:
              v38 = KeGetCurrentPrcb();
              CachedResidentAvailable = (int)v38->CachedResidentAvailable;
              if ( (_DWORD)CachedResidentAvailable != -1 )
              {
                if ( v25 + CachedResidentAvailable <= 0x100 )
                {
                  do
                  {
                    v40 = _InterlockedCompareExchange(
                            (volatile signed __int32 *)&v38->CachedResidentAvailable,
                            v25 + CachedResidentAvailable,
                            CachedResidentAvailable);
                    v30 = (_DWORD)CachedResidentAvailable == v40;
                    LODWORD(CachedResidentAvailable) = v40;
                    if ( v30 )
                      goto LABEL_36;
                  }
                  while ( v40 != -1 && v25 + v40 <= 0x100 );
                }
                if ( (int)CachedResidentAvailable > 192
                  && (_DWORD)CachedResidentAvailable == _InterlockedCompareExchange(
                                                          (volatile signed __int32 *)&v38->CachedResidentAvailable,
                                                          192,
                                                          CachedResidentAvailable) )
                {
                  v37 = v25 + (int)CachedResidentAvailable - 192;
                }
                v25 = v37;
                if ( !v37 )
                  goto LABEL_36;
              }
            }
            _InterlockedExchangeAdd64((volatile signed __int64 *)(v28 + 17280), v25);
          }
LABEL_36:
          _InterlockedAnd64((volatile signed __int64 *)v23, 0x7FFFFFFFFFFFFFFFuLL);
          if ( KiIrqlFlags )
          {
            v58 = KeGetCurrentIrql();
            if ( (KiIrqlFlags & 1) != 0 && v58 <= 0xFu && CurrentIrql <= 0xFu && v58 >= 2u )
            {
              v59 = KeGetCurrentPrcb();
              v60 = v59->SchedulerAssist;
              v61 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
              v30 = (v61 & v60[5]) == 0;
              v60[5] &= v61;
              if ( v30 )
                KiRemoveSystemWorkPriorityKick(v59);
            }
          }
          __writecr8(CurrentIrql);
        }
        else
        {
          v21 = MiLargePageSizes[v17];
          MiFreeLargePageMemory(0xAAAAAAAAAAAAAAABuLL * ((__int64)(v19 + 0x44000000000LL) >> 4), v17, 5LL);
        }
        v17 = v62;
        v16 += v21;
        continue;
      }
      break;
    }
    v62 = ++v17;
    if ( v17 < 4 )
      continue;
    break;
  }
  if ( v16 && (v64 & 1) == 0 )
  {
    _InterlockedExchangeAdd64(&qword_140C6F078, v16);
    if ( v16 <= 0x40 )
    {
      result = &dword_140C6F080;
      _InterlockedIncrement(&dword_140C6F080);
    }
    else if ( v16 <= 0x80 )
    {
      result = &dword_140C6F084;
      _InterlockedIncrement(&dword_140C6F084);
    }
    else
    {
      result = (volatile signed __int32 *)&unk_140C6F08C;
      if ( v16 <= 0x200 )
        result = (volatile signed __int32 *)&unk_140C6F088;
      _InterlockedIncrement(result);
    }
  }
  return result;
}
