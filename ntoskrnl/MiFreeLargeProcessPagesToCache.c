/*
 * XREFs of MiFreeLargeProcessPagesToCache @ 0x140666064
 * Callers:
 *     MiFreeLargePages @ 0x140665C70 (MiFreeLargePages.c)
 * Callees:
 *     MiFreeLargeZeroPages @ 0x14020FD6C (MiFreeLargeZeroPages.c)
 *     ExAcquireSpinLockExclusive @ 0x14024DA40 (ExAcquireSpinLockExclusive.c)
 *     MiReturnCommit @ 0x140287340 (MiReturnCommit.c)
 *     MiSearchNumaNodeTable @ 0x140319DD0 (MiSearchNumaNodeTable.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140332B10 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiInitializeLargePfnList @ 0x14035059C (MiInitializeLargePfnList.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 *     MiCoalesceActivePagesIntoFree @ 0x14065AF0C (MiCoalesceActivePagesIntoFree.c)
 *     MiAppendTailList @ 0x14066509C (MiAppendTailList.c)
 */

void __fastcall MiFreeLargeProcessPagesToCache(ULONG_PTR *a1, __int64 a2)
{
  ULONG_PTR *v3; // rbx
  ULONG_PTR v4; // rcx
  _KPROCESS *Process; // rdi
  unsigned __int64 v6; // r14
  __int64 v7; // rsi
  __int64 v8; // r13
  __int64 v9; // r8
  __int64 v10; // rcx
  unsigned __int64 v11; // rbx
  __int64 v12; // rdx
  _QWORD *v13; // rsi
  struct _KPRCB *CurrentPrcb; // r8
  __int64 CachedResidentAvailable; // rdx
  bool v16; // zf
  signed __int32 v17; // eax
  volatile LONG *v18; // r14
  unsigned __int64 v19; // rdi
  _QWORD *v20; // rbx
  ULONG_PTR v21; // rdx
  _QWORD *v22; // r10
  _QWORD *v23; // rax
  __int64 CurrentIrql; // rcx
  struct _KPRCB *v25; // r10
  _DWORD *SchedulerAssist; // r9
  int v27; // edx
  unsigned __int8 v28; // al
  struct _KPRCB *v29; // r9
  int v30; // eax
  _DWORD *v31; // r8
  unsigned int v32; // [rsp+20h] [rbp-59h]
  _QWORD v34[12]; // [rsp+30h] [rbp-49h] BYREF

  v3 = a1;
  memset(v34, 0, sizeof(v34));
  v4 = *v3;
  Process = KeGetCurrentThread()->ApcState.Process;
  v6 = Process[1].ActiveProcessors.StaticBitmap[28];
  v7 = *(_QWORD *)(v6 + 328);
  LODWORD(v3) = *(unsigned __int8 *)(48 * *v3 - 0x220000000000LL + 34) >> 6;
  MiSearchNumaNodeTable(v4);
  v8 = *(_QWORD *)(qword_140C67048 + 8LL * Process[1].IdealProcessor[25]);
  MiInitializeLargePfnList(v34);
  v9 = *(unsigned int *)(v8 + 16104);
  v10 = (unsigned int)v3 * (unsigned __int16)KeNumberNodes;
  *(_DWORD *)(v7 + 24) = v9;
  v11 = 16 * a2;
  v13 = (_QWORD *)(v7 + 24 * (v12 + v10) + 32);
  if ( !(16 * a2) )
    goto LABEL_14;
  MiReturnCommit(v8, 16 * a2, v9);
  if ( (unsigned __int16 *)v8 != MiSystemPartition )
    goto LABEL_13;
  CurrentPrcb = KeGetCurrentPrcb();
  CachedResidentAvailable = (int)CurrentPrcb->CachedResidentAvailable;
  if ( (_DWORD)CachedResidentAvailable == -1 )
    goto LABEL_13;
  if ( v11 + CachedResidentAvailable > 0x100 || v11 >= 0x80000 )
  {
LABEL_9:
    if ( (int)CachedResidentAvailable > 192
      && (_DWORD)CachedResidentAvailable == _InterlockedCompareExchange(
                                              (volatile signed __int32 *)&CurrentPrcb->CachedResidentAvailable,
                                              192,
                                              CachedResidentAvailable) )
    {
      v11 += (int)CachedResidentAvailable - 192;
    }
    if ( !v11 )
      goto LABEL_14;
LABEL_13:
    _InterlockedExchangeAdd64((volatile signed __int64 *)(v8 + 17280), v11);
    goto LABEL_14;
  }
  while ( 1 )
  {
    v17 = _InterlockedCompareExchange(
            (volatile signed __int32 *)&CurrentPrcb->CachedResidentAvailable,
            v11 + CachedResidentAvailable,
            CachedResidentAvailable);
    v16 = (_DWORD)CachedResidentAvailable == v17;
    LODWORD(CachedResidentAvailable) = v17;
    if ( v16 )
      break;
    if ( v17 == -1 || v11 + v17 > 0x100 )
      goto LABEL_9;
  }
LABEL_14:
  v18 = (volatile LONG *)(v6 + 336);
  v19 = ExAcquireSpinLockExclusive(v18);
  if ( a2 )
  {
    v32 = v19 + 1;
    v20 = v13 + 2;
    while ( 1 )
    {
      while ( 1 )
      {
        v21 = a1[--a2];
        v22 = (_QWORD *)(48 * v21 - 0x220000000000LL);
        if ( (_QWORD *)*v13 != v13
          && (((0xAAAAAAAAAAAAAAABuLL * ((*v13 + 0x220000000000LL) >> 4)) ^ v21) & 0xFFFFFFFFFFFFFE00uLL) != 0 )
        {
          MiAppendTailList(&v34[6], v13);
          v34[8] += *v20;
          *v20 = 0LL;
        }
        v23 = (_QWORD *)v13[1];
        if ( (_QWORD *)*v23 != v13 )
          __fastfail(3u);
        *v22 = v13;
        v22[1] = v23;
        *v23 = v22;
        v13[1] = v22;
        if ( ++*v20 == 32LL )
        {
          MiAppendTailList(&v34[6], v13);
          v34[8] += *v20;
          *v20 = 0LL;
        }
        if ( v34[8] )
          break;
        if ( !a2 )
          goto LABEL_36;
      }
      ExReleaseSpinLockExclusiveFromDpcLevel(v18);
      if ( KiIrqlFlags )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( (KiIrqlFlags & 1) != 0
          && (unsigned __int8)CurrentIrql <= 0xFu
          && (unsigned __int8)v19 <= 0xFu
          && (unsigned __int8)CurrentIrql >= 2u )
        {
          v25 = KeGetCurrentPrcb();
          CurrentIrql = v32;
          SchedulerAssist = v25->SchedulerAssist;
          v27 = ~(unsigned __int16)(-1LL << v32);
          v16 = (v27 & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= v27;
          if ( v16 )
            KiRemoveSystemWorkPriorityKick((__int64)v25);
        }
      }
      __writecr8(v19);
      if ( v34[8] != 32LL
        || !(unsigned int)MiCoalesceActivePagesIntoFree(
                            CurrentIrql,
                            (0xAAAAAAAAAAAAAAABuLL * ((v34[6] + 0x220000000000LL) >> 4)) & 0xFFFFFFFFFFFFFE00uLL,
                            1) )
      {
        MiFreeLargeZeroPages(v8, (__int64)v34, 1u);
      }
      if ( !a2 )
        break;
      MiInitializeLargePfnList(v34);
      ExAcquireSpinLockExclusive(v18);
    }
  }
  else
  {
LABEL_36:
    ExReleaseSpinLockExclusiveFromDpcLevel(v18);
    if ( KiIrqlFlags )
    {
      v28 = KeGetCurrentIrql();
      if ( (KiIrqlFlags & 1) != 0 && v28 <= 0xFu && (unsigned __int8)v19 <= 0xFu && v28 >= 2u )
      {
        v29 = KeGetCurrentPrcb();
        v30 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v19 + 1));
        v31 = v29->SchedulerAssist;
        v16 = (v30 & v31[5]) == 0;
        v31[5] &= v30;
        if ( v16 )
          KiRemoveSystemWorkPriorityKick((__int64)v29);
      }
    }
    __writecr8(v19);
  }
}
