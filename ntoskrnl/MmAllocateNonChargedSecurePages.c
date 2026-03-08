/*
 * XREFs of MmAllocateNonChargedSecurePages @ 0x140654ECC
 * Callers:
 *     PspIumAllocatePartitionState @ 0x1405A34F0 (PspIumAllocatePartitionState.c)
 *     PspIumReplenishPartitionPages @ 0x1405A3DE0 (PspIumReplenishPartitionPages.c)
 * Callees:
 *     MiPartitionObjectToPartition @ 0x140236884 (MiPartitionObjectToPartition.c)
 *     MiGetSlabPage @ 0x14025BA50 (MiGetSlabPage.c)
 *     MiGetPage @ 0x14026ED40 (MiGetPage.c)
 *     MiReturnCommit @ 0x140287340 (MiReturnCommit.c)
 *     MiInitializePageColorBase @ 0x14028B040 (MiInitializePageColorBase.c)
 *     PsDereferencePartition @ 0x140295BF8 (PsDereferencePartition.c)
 *     MiLockPageInline @ 0x1402A33B0 (MiLockPageInline.c)
 *     MiCheckSlabPfnBitmap @ 0x1402B7400 (MiCheckSlabPfnBitmap.c)
 *     MiUpdatePageFileHighInPte @ 0x14032F49C (MiUpdatePageFileHighInPte.c)
 *     MiAcquireNonPagedResources @ 0x140348D54 (MiAcquireNonPagedResources.c)
 *     MiInitializeMdlPfn @ 0x1403870D0 (MiInitializeMdlPfn.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 */

void __fastcall MmAllocateNonChargedSecurePages(void **a1, int a2, unsigned int *a3, __int64 *a4)
{
  void ***v6; // rax
  __int64 v7; // rdi
  unsigned int v8; // ebp
  __int64 v9; // r8
  unsigned int v10; // r13d
  signed __int32 v11; // ecx
  unsigned int v12; // ebx
  __int64 SlabPage; // rax
  __int64 Page; // r14
  __int64 v15; // rbx
  __int64 v16; // rax
  unsigned __int64 v17; // r15
  unsigned __int8 CurrentIrql; // cl
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v21; // eax
  bool v22; // zf
  __int64 updated; // rax
  __int64 *v24; // r15
  unsigned __int64 v25; // rbx
  struct _KPRCB *v26; // r8
  __int64 CachedResidentAvailable; // rdx
  signed __int32 v28; // eax
  __int128 v29; // [rsp+30h] [rbp-48h] BYREF
  char v30; // [rsp+88h] [rbp+10h] BYREF
  __int64 *v31; // [rsp+98h] [rbp+20h]

  v31 = a4;
  v29 = 0LL;
  v30 = 0;
  v6 = MiPartitionObjectToPartition(a1, 1, &v30);
  v7 = (__int64)v6;
  if ( a2 && (int)MiAcquireNonPagedResources((unsigned __int64)v6, *a3, 0LL, 2u) < 0 )
    *a3 = 0;
  v8 = 0;
  MiInitializePageColorBase(0LL, 0, (__int64)&v29);
  if ( *a3 )
  {
    do
    {
      v10 = 9;
      v11 = _InterlockedExchangeAdd((volatile signed __int32 *)v29, 1u);
      v12 = DWORD2(v29) & v11 | HIDWORD(v29);
      if ( (*(_DWORD *)(v7 + 4) & 8) == 0
        || (SlabPage = MiGetSlabPage(v7, 2u, v12, 10LL, (__int64 *)0xFFFFFFFFFFFFFFFFLL), Page = SlabPage,
                                                                                          SlabPage == -1) )
      {
        Page = MiGetPage(v7, v12, 0x200u);
        if ( Page == -1 )
          break;
      }
      else
      {
        v10 = 11;
        if ( (unsigned int)MiCheckSlabPfnBitmap(48 * SlabPage - 0x220000000000LL, 1LL, 1) )
          v10 = 15;
      }
      v15 = 48 * Page - 0x220000000000LL;
      *(_QWORD *)(v15 + 16) = ZeroPte;
      v16 = *(_QWORD *)(v15 + 40) & 0x7FFFFF0000000000LL;
      *(_QWORD *)v15 = 0LL;
      *(_QWORD *)(v15 + 40) = v16 | 0x3FFFFFFFFELL;
      if ( !a2 )
        _InterlockedIncrement64((volatile signed __int64 *)(v7 + 456));
      v17 = (unsigned __int8)MiLockPageInline(48 * Page - 0x220000000000LL);
      MiInitializeMdlPfn(48 * Page - 0x220000000000LL, 131584);
      _InterlockedAnd64((volatile signed __int64 *)(v15 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( KiIrqlFlags )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && (unsigned __int8)v17 <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          v21 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v17 + 1));
          v22 = (v21 & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= v21;
          if ( v22 )
            KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
        }
      }
      __writecr8(v17);
      updated = MiUpdatePageFileHighInPte(*(_QWORD *)(v15 + 16), v10);
      v24 = v31;
      ++v8;
      *(_QWORD *)(v15 + 16) = updated;
      *v24 = Page;
      v31 = v24 + 1;
    }
    while ( v8 < *a3 );
  }
  if ( a2 && v8 < *a3 )
  {
    v25 = *a3 - v8;
    MiReturnCommit(v7, v25, v9);
    if ( (unsigned __int16 *)v7 == MiSystemPartition )
    {
      v26 = KeGetCurrentPrcb();
      CachedResidentAvailable = (int)v26->CachedResidentAvailable;
      if ( (_DWORD)CachedResidentAvailable != -1 )
      {
        if ( v25 + CachedResidentAvailable <= 0x100 && v25 < 0x80000 )
        {
          do
          {
            v28 = _InterlockedCompareExchange(
                    (volatile signed __int32 *)&v26->CachedResidentAvailable,
                    v25 + CachedResidentAvailable,
                    CachedResidentAvailable);
            v22 = (_DWORD)CachedResidentAvailable == v28;
            LODWORD(CachedResidentAvailable) = v28;
            if ( v22 )
              goto LABEL_34;
          }
          while ( v28 != -1 && v25 + v28 <= 0x100 );
        }
        if ( (int)CachedResidentAvailable > 192
          && (_DWORD)CachedResidentAvailable == _InterlockedCompareExchange(
                                                  (volatile signed __int32 *)&v26->CachedResidentAvailable,
                                                  192,
                                                  CachedResidentAvailable) )
        {
          v25 += (int)CachedResidentAvailable - 192;
        }
      }
    }
    if ( v25 )
      _InterlockedExchangeAdd64((volatile signed __int64 *)(v7 + 17280), v25);
  }
LABEL_34:
  *a3 = v8;
  if ( v30 )
    PsDereferencePartition(*(_QWORD *)(v7 + 200));
}
