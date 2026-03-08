/*
 * XREFs of MiWaitForCollidedFaultComplete @ 0x1402A2D3C
 * Callers:
 *     MiWalkEntireImage @ 0x1402862C0 (MiWalkEntireImage.c)
 *     MiTranslatePageForCopy @ 0x1402A1FD4 (MiTranslatePageForCopy.c)
 *     MiHandleCollidedFault @ 0x1402A2AC4 (MiHandleCollidedFault.c)
 *     MiFlushWaitForReadInProgress @ 0x140633B18 (MiFlushWaitForReadInProgress.c)
 * Callees:
 *     MiRelockFaultState @ 0x14022853C (MiRelockFaultState.c)
 *     KeAbPreWait @ 0x140241620 (KeAbPreWait.c)
 *     KeAbPostReleaseEx @ 0x140248520 (KeAbPostReleaseEx.c)
 *     KeAbPreAcquire @ 0x1402627F0 (KeAbPreAcquire.c)
 *     MiUnlockProtoPoolPage @ 0x1402861D0 (MiUnlockProtoPoolPage.c)
 *     MiRemoveLockedPageChargeAndDecRef @ 0x140286264 (MiRemoveLockedPageChargeAndDecRef.c)
 *     MiFreeInPageSupportBlock @ 0x140287B5C (MiFreeInPageSupportBlock.c)
 *     MiRelockProtoPoolPage @ 0x1402A2F78 (MiRelockProtoPoolPage.c)
 *     MiReleaseFaultState @ 0x1402A2FD4 (MiReleaseFaultState.c)
 *     MiAddLockedPageCharge @ 0x1402A309C (MiAddLockedPageCharge.c)
 *     MiIsFaultPteIntact @ 0x1402A30FC (MiIsFaultPteIntact.c)
 *     MiLockPageInline @ 0x1402A33B0 (MiLockPageInline.c)
 *     MiLockNestedPageAtDpcInline @ 0x1402DDE90 (MiLockNestedPageAtDpcInline.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14031B450 (MI_READ_PTE_LOCK_FREE.c)
 *     KeWaitForSingleObject @ 0x14033FF20 (KeWaitForSingleObject.c)
 *     MiImagePageOk @ 0x14034B09C (MiImagePageOk.c)
 *     KeYieldProcessorEx @ 0x1403512B0 (KeYieldProcessorEx.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MiWaitForCollidedFaultComplete(_QWORD *a1, __int64 a2, __int64 a3, unsigned __int8 a4, _DWORD *a5)
{
  __int64 v8; // rax
  __int64 v9; // rdx
  _DWORD *v10; // r15
  __int64 v11; // r14
  __int64 v12; // r12
  __int64 v13; // rcx
  ULONG_PTR v14; // rsi
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // r8
  __int64 *v19; // rax
  unsigned __int8 CurrentIrql; // cl
  unsigned __int8 v21; // si
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v24; // eax
  bool v25; // zf
  unsigned int v26; // ebx
  __int64 v27; // [rsp+70h] [rbp+8h] BYREF
  unsigned __int64 v28; // [rsp+78h] [rbp+10h]
  unsigned __int8 v29; // [rsp+88h] [rbp+20h] BYREF

  v29 = a4;
  v28 = *(_QWORD *)(a2 + 8) | 0x8000000000000000uLL;
  v8 = MI_READ_PTE_LOCK_FREE(v28);
  v10 = a5;
  v11 = *(_QWORD *)a2;
  v27 = v8;
  if ( *a5 )
    goto LABEL_33;
  if ( !(unsigned int)MiAddLockedPageCharge(a2, 2LL) )
    *v10 = 1;
  if ( *v10 )
    goto LABEL_33;
  if ( a3 && *(_WORD *)(a3 + 32) >= 0x7FFFu )
  {
    *v10 = 1;
    MiRemoveLockedPageChargeAndDecRef(a2);
  }
  if ( *v10 )
  {
LABEL_33:
    if ( a3 )
    {
      MiLockNestedPageAtDpcInline(a3);
      MiRemoveLockedPageChargeAndDecRef(a3);
      _InterlockedAnd64((volatile signed __int64 *)(a3 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    }
  }
  _InterlockedAdd((volatile signed __int32 *)(v11 + 144), 1u);
  _InterlockedAnd64((volatile signed __int64 *)(a2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( a3 )
  {
    MiUnlockProtoPoolPage(a3, v29);
  }
  else
  {
    if ( KiIrqlFlags && (CurrentIrql = KeGetCurrentIrql(), (KiIrqlFlags & 1) != 0) && CurrentIrql <= 0xFu )
    {
      v21 = v29;
      if ( v29 <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v21 = v29;
        v9 = -1LL << (v29 + 1);
        v24 = ~(unsigned __int16)v9;
        v25 = (v24 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v24;
        if ( v25 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    else
    {
      v21 = v29;
    }
    __writecr8(v21);
  }
  v12 = 0LL;
  if ( a1[7] )
  {
    LOBYTE(v9) = 17;
    v12 = MiReleaseFaultState(a1 + 7, v9, 0LL);
  }
  v13 = *(_QWORD *)(v11 + 184);
  if ( v13 )
  {
    v19 = (__int64 *)KeAbPreAcquire(v13, 0LL);
    v14 = (ULONG_PTR)v19;
    if ( v19 )
      KeAbPreWait(v19);
  }
  else
  {
    v14 = 0LL;
  }
  KeWaitForSingleObject((PVOID)(v11 + 24), WrPageIn, 0, 0, 0LL);
  if ( v14 )
  {
    KeAbPreAcquire(*(_QWORD *)(v11 + 184), v14);
    KeAbPostReleaseEx(*(_QWORD *)(v11 + 184), v14);
  }
  MiFreeInPageSupportBlock((PSLIST_ENTRY)(v11 - 32));
  if ( a1[7] )
    MiRelockFaultState(a1 + 7, v12, v15, v16);
  if ( *v10 )
    return 3221226548LL;
  if ( a3 )
  {
    MiRelockProtoPoolPage(a3, &v29);
    LODWORD(a5) = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(a2 + 24), 0x3FuLL) )
    {
      do
        KeYieldProcessorEx(&a5);
      while ( *(__int64 *)(a2 + 24) < 0 );
    }
  }
  else
  {
    MiLockPageInline(a2);
  }
  if ( (*(_QWORD *)(a2 + 24) & 0x4000000000000000LL) == 0 )
  {
    if ( (unsigned int)MiIsFaultPteIntact(a1, *a1, v28, &v27) && (unsigned int)MiImagePageOk(*a1, a2, v17, 0LL) )
      return 0LL;
    MiRemoveLockedPageChargeAndDecRef(a2);
    return 3221226548LL;
  }
  v26 = (*(_BYTE *)(a2 + 35) & 0x10) != 0 ? 0xFFFFFBE3 : 0;
  MiRemoveLockedPageChargeAndDecRef(a2);
  return v26 - 1073740748;
}
