/*
 * XREFs of MiReplenishUltraPageTables @ 0x14065F59C
 * Callers:
 *     MiCreateUltraThreadContextHelper @ 0x1402445C4 (MiCreateUltraThreadContextHelper.c)
 *     MiReassessZeroThreads @ 0x1402E477C (MiReassessZeroThreads.c)
 * Callees:
 *     MiGetUltraPage @ 0x1402446C8 (MiGetUltraPage.c)
 *     ExAcquireSpinLockExclusive @ 0x14024DA40 (ExAcquireSpinLockExclusive.c)
 *     MiReturnCommit @ 0x140287340 (MiReturnCommit.c)
 *     MiInitializePageColorBase @ 0x14028B040 (MiInitializePageColorBase.c)
 *     MiSearchNumaNodeTable @ 0x140319DD0 (MiSearchNumaNodeTable.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140332B10 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiAcquireNonPagedResources @ 0x140348D54 (MiAcquireNonPagedResources.c)
 *     MiReleaseFreshPage @ 0x14034E570 (MiReleaseFreshPage.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 */

void __fastcall MiReplenishUltraPageTables(unsigned int a1)
{
  __int64 v1; // rbx
  __int64 v2; // r13
  __int64 v3; // rsi
  volatile LONG *v4; // r13
  unsigned __int64 v5; // rbp
  unsigned __int64 v6; // rdi
  char v7; // r14
  unsigned __int8 v8; // cl
  struct _KPRCB *v9; // r10
  _DWORD *v10; // r9
  int v11; // edx
  bool v12; // zf
  __int64 UltraPage; // rax
  __int64 v14; // r8
  _QWORD *v15; // r14
  _QWORD *v16; // rax
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r9
  int v19; // eax
  _DWORD *SchedulerAssist; // r8
  __int64 v21; // r8
  struct _KPRCB *v22; // r9
  __int64 CachedResidentAvailable; // rdx
  signed __int32 v24; // eax
  signed __int32 v25; // eax
  _OWORD v26[3]; // [rsp+20h] [rbp-38h] BYREF

  v1 = a1;
  v26[0] = 0LL;
  MiInitializePageColorBase(0LL, a1 + 1, (__int64)v26);
  v2 = *(_QWORD *)(qword_140C65720 + 376 * v1 + 368);
  v3 = v2 + 520;
  if ( *(_QWORD *)(v2 + 536) >= 0x100uLL )
    return;
  v4 = (volatile LONG *)(v2 + 552);
  v5 = ExAcquireSpinLockExclusive(v4);
  v6 = 1LL;
  if ( *(_QWORD *)(v3 + 16) >= 0x100uLL )
  {
LABEL_16:
    ExReleaseSpinLockExclusiveFromDpcLevel(v4);
    if ( KiIrqlFlags )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && (unsigned __int8)v5 <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v19 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v5 + 1));
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v12 = (v19 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v19;
        if ( v12 )
          KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
      }
    }
    __writecr8(v5);
    return;
  }
  v7 = v5 + 1;
  while ( 1 )
  {
    ExReleaseSpinLockExclusiveFromDpcLevel(v4);
    if ( KiIrqlFlags )
    {
      v8 = KeGetCurrentIrql();
      if ( (KiIrqlFlags & 1) != 0 && v8 <= 0xFu && (unsigned __int8)v5 <= 0xFu && v8 >= 2u )
      {
        v9 = KeGetCurrentPrcb();
        v10 = v9->SchedulerAssist;
        v11 = ~(unsigned __int16)(-1LL << v7);
        v12 = (v11 & v10[5]) == 0;
        v10[5] &= v11;
        if ( v12 )
          KiRemoveSystemWorkPriorityKick((__int64)v9);
      }
    }
    __writecr8(v5);
    if ( (int)MiAcquireNonPagedResources((unsigned __int64)MiSystemPartition, 1uLL, 0LL, 0) < 0 )
      return;
    UltraPage = MiGetUltraPage((__int64)v26, 1);
    if ( UltraPage == -1 )
      break;
    v15 = (_QWORD *)(48 * UltraPage - 0x220000000000LL);
    if ( *((_DWORD *)MiSearchNumaNodeTable(0xAAAAAAAAAAAAAAABuLL * ((48 * UltraPage) >> 4)) + 2) != (_DWORD)v1 )
    {
      MiReleaseFreshPage((__int64)v15);
      MiReturnCommit((__int64)MiSystemPartition, 1LL, v21);
      v22 = KeGetCurrentPrcb();
      CachedResidentAvailable = (int)v22->CachedResidentAvailable;
      if ( (_DWORD)CachedResidentAvailable != -1 )
      {
        if ( (unsigned __int64)(CachedResidentAvailable + 1) <= 0x100 )
        {
          do
          {
            v24 = _InterlockedCompareExchange(
                    (volatile signed __int32 *)&v22->CachedResidentAvailable,
                    CachedResidentAvailable + 1,
                    CachedResidentAvailable);
            v12 = (_DWORD)CachedResidentAvailable == v24;
            LODWORD(CachedResidentAvailable) = v24;
            if ( v12 )
              return;
          }
          while ( v24 != -1 && (unsigned __int64)(v24 + 1LL) <= 0x100 );
        }
LABEL_37:
        if ( (int)CachedResidentAvailable > 192
          && (_DWORD)CachedResidentAvailable == _InterlockedCompareExchange(
                                                  (volatile signed __int32 *)&v22->CachedResidentAvailable,
                                                  192,
                                                  CachedResidentAvailable) )
        {
          v6 = (int)CachedResidentAvailable - 192 + 1LL;
        }
        if ( !v6 )
          return;
      }
LABEL_41:
      _InterlockedExchangeAdd64(&qword_140C6F440, v6);
      return;
    }
    ExAcquireSpinLockExclusive(v4);
    v16 = *(_QWORD **)(v3 + 8);
    if ( *v16 != v3 )
      __fastfail(3u);
    *v15 = v3;
    v15[1] = v16;
    *v16 = v15;
    *(_QWORD *)(v3 + 8) = v15;
    ++*(_QWORD *)(v3 + 16);
    v7 = v5 + 1;
    if ( *(_QWORD *)(v3 + 16) >= 0x100uLL )
      goto LABEL_16;
  }
  MiReturnCommit((__int64)MiSystemPartition, 1LL, v14);
  v22 = KeGetCurrentPrcb();
  CachedResidentAvailable = (int)v22->CachedResidentAvailable;
  if ( (_DWORD)CachedResidentAvailable == -1 )
    goto LABEL_41;
  if ( (unsigned __int64)(CachedResidentAvailable + 1) > 0x100 )
    goto LABEL_37;
  while ( 1 )
  {
    v25 = _InterlockedCompareExchange(
            (volatile signed __int32 *)&v22->CachedResidentAvailable,
            CachedResidentAvailable + 1,
            CachedResidentAvailable);
    v12 = (_DWORD)CachedResidentAvailable == v25;
    LODWORD(CachedResidentAvailable) = v25;
    if ( v12 )
      break;
    if ( v25 == -1 || (unsigned __int64)(v25 + 1LL) > 0x100 )
      goto LABEL_37;
  }
}
