/*
 * XREFs of MiLockProtoPoolPage @ 0x140283CA0
 * Callers:
 *     MiMigratePfn @ 0x140272370 (MiMigratePfn.c)
 *     MiLockProtoPoolPageForce @ 0x14028331C (MiLockProtoPoolPageForce.c)
 *     MiWalkEntireImage @ 0x1402862C0 (MiWalkEntireImage.c)
 *     MiAllocateInPageSupport @ 0x14028A6A0 (MiAllocateInPageSupport.c)
 *     MiDeleteMergedPte @ 0x14029CAD8 (MiDeleteMergedPte.c)
 *     MiCombineWithStandbyExisting @ 0x14029F020 (MiCombineWithStandbyExisting.c)
 *     MiTranslatePageForCopy @ 0x1402A1FD4 (MiTranslatePageForCopy.c)
 *     MiWalkVaRange @ 0x1402CECEC (MiWalkVaRange.c)
 *     MiZeroCfgSystemWideBitmapWorker @ 0x1402DD950 (MiZeroCfgSystemWideBitmapWorker.c)
 *     MiLockCode @ 0x14032C9C0 (MiLockCode.c)
 *     MiResolveProtoCombine @ 0x140345A28 (MiResolveProtoCombine.c)
 *     MiCombineWithExisting @ 0x14034A4C4 (MiCombineWithExisting.c)
 *     MiSoftFaultMappedView @ 0x14034A9A0 (MiSoftFaultMappedView.c)
 *     MiDeleteSubsectionPages @ 0x14034B8E0 (MiDeleteSubsectionPages.c)
 *     MiStealPage @ 0x1403B70BC (MiStealPage.c)
 *     MiReplaceLockedPage @ 0x14063487C (MiReplaceLockedPage.c)
 *     MiGetPageFileSectionForReservation @ 0x140638834 (MiGetPageFileSectionForReservation.c)
 *     MiClearDriverHotPatchPtes @ 0x14063F9FC (MiClearDriverHotPatchPtes.c)
 *     MmMapHotPatchTablePage @ 0x140640C8C (MmMapHotPatchTablePage.c)
 *     MiInsertLargeVadMapping @ 0x140643BA8 (MiInsertLargeVadMapping.c)
 * Callees:
 *     MiAreChargesNeededToLockPage @ 0x140284D60 (MiAreChargesNeededToLockPage.c)
 *     MiLockOwnedProtoPage @ 0x1402871A0 (MiLockOwnedProtoPage.c)
 *     MiChargeForLockedPage @ 0x140287410 (MiChargeForLockedPage.c)
 *     KeYieldProcessorEx @ 0x1403512B0 (KeYieldProcessorEx.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MiLockProtoPoolPage(unsigned __int64 a1, unsigned __int8 *a2)
{
  unsigned __int64 *v3; // r15
  unsigned __int64 v4; // rax
  unsigned __int64 v5; // rdi
  __int64 v6; // rbx
  unsigned __int8 CurrentIrql; // si
  volatile signed __int32 *v8; // r14
  unsigned __int64 v9; // rax
  __int64 v10; // rcx
  _DWORD *SchedulerAssist; // r9
  __int64 v13; // rdx
  unsigned __int8 v14; // cl
  struct _KPRCB *v15; // r10
  _DWORD *v16; // r9
  int v17; // eax
  bool v18; // zf
  unsigned __int8 v19; // cl
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *v21; // r8
  int v22; // eax
  int v23; // [rsp+60h] [rbp+8h] BYREF
  int v24; // [rsp+70h] [rbp+18h] BYREF

  v3 = (unsigned __int64 *)(((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  while ( 1 )
  {
    v4 = *v3;
    if ( (*v3 & 1) == 0 || (v4 & 0x200) != 0 )
      return 0LL;
    do
    {
      do
        v5 = (v4 >> 12) & 0xFFFFFFFFFFLL;
      while ( v5 > qword_140C65820 );
    }
    while ( (*(_QWORD *)(48 * v5 - 0x21FFFFFFFFD8LL) & 0x40000000000000LL) == 0 );
    v6 = 48 * v5 - 0x220000000000LL;
    if ( a2 )
    {
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
      {
        SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
        if ( CurrentIrql == 2 )
          LODWORD(v13) = 4;
        else
          v13 = (-1LL << (CurrentIrql + 1)) & 4;
        SchedulerAssist[5] |= v13;
      }
      v8 = (volatile signed __int32 *)(v6 + 24);
      v23 = 0;
      while ( _interlockedbittestandset64(v8, 0x3FuLL) )
      {
        do
          KeYieldProcessorEx(&v23);
        while ( *(__int64 *)v8 < 0 );
      }
    }
    else
    {
      v8 = (volatile signed __int32 *)(v6 + 24);
      v24 = 0;
      CurrentIrql = 17;
      while ( _interlockedbittestandset64(v8, 0x3FuLL) )
      {
        do
          KeYieldProcessorEx(&v24);
        while ( *(__int64 *)v8 < 0 );
      }
    }
    v9 = *v3;
    if ( (*v3 & 1) == 0 || (v9 & 0x200) != 0 )
    {
      _InterlockedAnd64((volatile signed __int64 *)v8, 0x7FFFFFFFFFFFFFFFuLL);
      if ( CurrentIrql != 17 )
      {
        if ( KiIrqlFlags )
        {
          v19 = KeGetCurrentIrql();
          if ( (KiIrqlFlags & 1) != 0 && v19 <= 0xFu && CurrentIrql <= 0xFu && v19 >= 2u )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            v21 = CurrentPrcb->SchedulerAssist;
            v22 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
            v18 = (v22 & v21[5]) == 0;
            v21[5] &= v22;
            if ( v18 )
              KiRemoveSystemWorkPriorityKick(CurrentPrcb);
          }
        }
        __writecr8(CurrentIrql);
      }
      return 0LL;
    }
    if ( v5 == ((v9 >> 12) & 0xFFFFFFFFFFLL) )
      break;
    _InterlockedAnd64((volatile signed __int64 *)v8, 0x7FFFFFFFFFFFFFFFuLL);
    if ( CurrentIrql != 17 )
    {
      if ( KiIrqlFlags )
      {
        v14 = KeGetCurrentIrql();
        if ( (KiIrqlFlags & 1) != 0 && v14 <= 0xFu && CurrentIrql <= 0xFu && v14 >= 2u )
        {
          v15 = KeGetCurrentPrcb();
          v16 = v15->SchedulerAssist;
          v17 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
          v18 = (v17 & v16[5]) == 0;
          v16[5] &= v17;
          if ( v18 )
            KiRemoveSystemWorkPriorityKick(v15);
        }
      }
      __writecr8(CurrentIrql);
    }
  }
  if ( !(unsigned int)MiAreChargesNeededToLockPage(v6) || (unsigned int)MiChargeForLockedPage(v10, 1LL) )
    ++*(_WORD *)(v6 + 32);
  if ( CurrentIrql == 17 )
    CurrentIrql = 17;
  else
    *a2 = CurrentIrql;
  MiLockOwnedProtoPage(v6, CurrentIrql);
  return 48 * v5 - 0x220000000000LL;
}
