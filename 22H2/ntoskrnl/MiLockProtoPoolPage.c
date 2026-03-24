/*
 * XREFs of MiLockProtoPoolPage @ 0x14029A790
 * Callers:
 *     MiMigratePfn @ 0x1402185B0 (MiMigratePfn.c)
 *     MiDeleteSubsectionPages @ 0x140238AE0 (MiDeleteSubsectionPages.c)
 *     MiWalkEntireImage @ 0x140239E20 (MiWalkEntireImage.c)
 *     MiWalkVaRange @ 0x14023BA60 (MiWalkVaRange.c)
 *     MiPfPutPagesInTransition @ 0x14027BCA0 (MiPfPutPagesInTransition.c)
 *     MiAllocateInPageSupport @ 0x14029A230 (MiAllocateInPageSupport.c)
 *     MmCheckCachedPageStates @ 0x1402A1C20 (MmCheckCachedPageStates.c)
 *     MiLockCode @ 0x1402A3C40 (MiLockCode.c)
 *     MmCopyToCachedPage @ 0x1402B1B90 (MmCopyToCachedPage.c)
 *     MiSoftFaultMappedView @ 0x1402E3540 (MiSoftFaultMappedView.c)
 *     MiTranslatePageForCopy @ 0x14030C534 (MiTranslatePageForCopy.c)
 *     MiDeletePerSessionProtos @ 0x1403285B0 (MiDeletePerSessionProtos.c)
 *     MiMakeImageReadOnly @ 0x140332500 (MiMakeImageReadOnly.c)
 *     MiZeroCfgSystemWideBitmapWorker @ 0x1403326D0 (MiZeroCfgSystemWideBitmapWorker.c)
 *     MiStealPage @ 0x140334CB4 (MiStealPage.c)
 *     MiInitializeImageProtos @ 0x140336F8C (MiInitializeImageProtos.c)
 *     MiSectionCreated @ 0x140359E2C (MiSectionCreated.c)
 *     MiDeleteMergedPte @ 0x140366798 (MiDeleteMergedPte.c)
 *     MiConvertStandbyToProto @ 0x1403668C8 (MiConvertStandbyToProto.c)
 *     MiConvertPrivateToProto @ 0x1403699A0 (MiConvertPrivateToProto.c)
 *     MiResolveProtoCombine @ 0x14036A484 (MiResolveProtoCombine.c)
 *     MiGetPageFileSectionForReservation @ 0x1403873C0 (MiGetPageFileSectionForReservation.c)
 *     MiPurgeImageSection @ 0x1403A4CC4 (MiPurgeImageSection.c)
 *     MiInitializeDynamicPfns @ 0x14052E4E0 (MiInitializeDynamicPfns.c)
 *     MiReplaceLockedPage @ 0x14053D6AC (MiReplaceLockedPage.c)
 *     MiEliminateStaleExtents @ 0x140540808 (MiEliminateStaleExtents.c)
 *     MiEnableLargeSubsection @ 0x1405408EC (MiEnableLargeSubsection.c)
 *     MiInsertLargeVadMapping @ 0x1405486E0 (MiInsertLargeVadMapping.c)
 *     MiInitializeProtoPfn @ 0x140554ED0 (MiInitializeProtoPfn.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x14024ABF0 (KeYieldProcessorEx.c)
 *     MiLockOwnedProtoPage @ 0x14029A9B0 (MiLockOwnedProtoPage.c)
 *     MiAreChargesNeededToLockPage @ 0x1402A3AC0 (MiAreChargesNeededToLockPage.c)
 *     MiChargeForLockedPage @ 0x1402A9130 (MiChargeForLockedPage.c)
 *     MiPteInShadowRange @ 0x1402C9180 (MiPteInShadowRange.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F2D04 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MiLockProtoPoolPage(unsigned __int64 a1, __int64 a2)
{
  _BYTE *v2; // r15
  unsigned __int64 *v3; // r14
  __int64 v4; // rbx
  unsigned __int64 v5; // rdi
  int v6; // ebp
  __int64 v7; // r8
  _DWORD *SchedulerAssist; // r9
  __int64 v9; // rdi
  __int64 v10; // rbx
  unsigned __int8 CurrentIrql; // si
  unsigned __int64 v12; // rax
  struct _LIST_ENTRY *Flink; // rdx
  __int64 v15; // rax
  struct _LIST_ENTRY *v16; // r8
  __int64 v17; // rcx
  unsigned __int8 v18; // al
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *v20; // r8
  int v21; // eax
  bool v22; // zf
  int v23; // [rsp+60h] [rbp+8h] BYREF
  int v24; // [rsp+70h] [rbp+18h] BYREF
  unsigned __int64 v25; // [rsp+78h] [rbp+20h] BYREF

  v2 = (_BYTE *)a2;
  v3 = (unsigned __int64 *)(((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  v25 = *v3;
  v4 = v25 & 1;
  do
  {
    if ( !v4 )
      return 0LL;
    v5 = v25;
    if ( (v25 & 0x200) != 0 )
      return 0LL;
    v6 = MiPteInShadowRange(&v25, a2);
    if ( v6
      && (MiFlags & 0xC00000) != 0
      && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
      && ((v5 & 0x20) == 0 || (v5 & 0x42) == 0) )
    {
      Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
      if ( Flink )
      {
        v15 = *((_QWORD *)&Flink->Flink + (((unsigned __int64)&v25 >> 3) & 0x1FF));
        if ( (v15 & 0x20) != 0 )
          v5 |= 0x20uLL;
        if ( (v15 & 0x42) != 0 )
          v5 |= 0x42uLL;
      }
      else
      {
        v5 = v25;
      }
    }
    v9 = (v5 >> 12) & 0xFFFFFFFFFLL;
    a2 = 6 * v9;
  }
  while ( (*(_QWORD *)(48 * v9 - 0x57FFFFFFFD8LL) & 0x4000000000000LL) == 0 );
  v10 = 48 * v9 - 0x58000000000LL;
  if ( v2 )
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
    {
      SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
      a2 = (-1LL << (CurrentIrql + 1)) & 4;
      v7 = (unsigned int)a2 | SchedulerAssist[5];
      SchedulerAssist[5] = v7;
    }
    v23 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v10 + 24), 0x3FuLL) )
    {
      do
        KeYieldProcessorEx(&v23, a2, v7, (__int64)SchedulerAssist);
      while ( *(__int64 *)(v10 + 24) < 0 );
    }
  }
  else
  {
    v24 = 0;
    CurrentIrql = 17;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v10 + 24), 0x3FuLL) )
    {
      do
        KeYieldProcessorEx(&v24, a2, v7, (__int64)SchedulerAssist);
      while ( *(__int64 *)(v10 + 24) < 0 );
    }
  }
  v12 = *v3;
  v25 = v12;
  if ( (v12 & 1) == 0 || (v12 & 0x200) != 0 )
    goto LABEL_24;
  if ( v6
    && (MiFlags & 0xC00000) != 0
    && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
    && ((v12 & 0x20) == 0 || (v12 & 0x42) == 0) )
  {
    v16 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
    if ( v16 )
    {
      v17 = *((_QWORD *)&v16->Flink + (((unsigned __int64)&v25 >> 3) & 0x1FF));
      if ( (v17 & 0x20) != 0 )
        v12 |= 0x20uLL;
      if ( (v17 & 0x42) != 0 )
        v12 |= 0x42uLL;
    }
    else
    {
      v12 = v25;
    }
  }
  if ( v9 != ((v12 >> 12) & 0xFFFFFFFFFLL) )
  {
LABEL_24:
    _InterlockedAnd64((volatile signed __int64 *)(v10 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( CurrentIrql != 17 )
    {
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          v18 = KeGetCurrentIrql();
          if ( v18 <= 0xFu && CurrentIrql <= 0xFu && v18 >= 2u )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            v20 = CurrentPrcb->SchedulerAssist;
            v21 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
            v22 = (v21 & v20[5]) == 0;
            v20[5] &= v21;
            if ( v22 )
              KiRemoveSystemWorkPriorityKick(CurrentPrcb);
          }
        }
      }
      __writecr8(CurrentIrql);
    }
    return 0LL;
  }
  if ( !(unsigned int)MiAreChargesNeededToLockPage(v10) || (unsigned int)MiChargeForLockedPage(v10, 1LL) )
    ++*(_WORD *)(v10 + 32);
  if ( CurrentIrql != 17 )
    *v2 = CurrentIrql;
  MiLockOwnedProtoPage(v10, CurrentIrql);
  return 48 * v9 - 0x58000000000LL;
}
