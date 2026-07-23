/*
 * XREFs of MiWaitForCollidedFaultComplete @ 0x1402E2190
 * Callers:
 *     MiFlushSectionInternal @ 0x140219D70 (MiFlushSectionInternal.c)
 *     MiWalkEntireImage @ 0x140239E20 (MiWalkEntireImage.c)
 *     MiHandleCollidedFault @ 0x1402E1E9C (MiHandleCollidedFault.c)
 *     MiTranslatePageForCopy @ 0x14030C534 (MiTranslatePageForCopy.c)
 * Callees:
 *     MiUnlockProtoPoolPage @ 0x140239160 (MiUnlockProtoPoolPage.c)
 *     KeYieldProcessorEx @ 0x14024ABF0 (KeYieldProcessorEx.c)
 *     KeAbPreWait @ 0x140273740 (KeAbPreWait.c)
 *     MiFreeInPageSupportBlock @ 0x14027CF5C (MiFreeInPageSupportBlock.c)
 *     MiLockPageInline @ 0x1402804B0 (MiLockPageInline.c)
 *     MiRelockFaultState @ 0x140285928 (MiRelockFaultState.c)
 *     MiReleaseFaultState @ 0x14028FB74 (MiReleaseFaultState.c)
 *     MiRelockProtoPoolPage @ 0x14029A708 (MiRelockProtoPoolPage.c)
 *     MiAddLockedPageCharge @ 0x14029AA98 (MiAddLockedPageCharge.c)
 *     MiRemoveLockedPageChargeAndDecRef @ 0x1402A9250 (MiRemoveLockedPageChargeAndDecRef.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1402AE550 (MI_READ_PTE_LOCK_FREE.c)
 *     KeWaitForSingleObject @ 0x1402C5E00 (KeWaitForSingleObject.c)
 *     KeAbPreAcquire @ 0x1402CA920 (KeAbPreAcquire.c)
 *     MiIsFaultPteIntact @ 0x1402E3214 (MiIsFaultPteIntact.c)
 *     MiImagePageOk @ 0x1402E3BB0 (MiImagePageOk.c)
 *     KeAbPostReleaseEx @ 0x1402E3DB0 (KeAbPostReleaseEx.c)
 *     MiLockNestedPageAtDpcInline @ 0x140333FA0 (MiLockNestedPageAtDpcInline.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F2D04 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MiWaitForCollidedFaultComplete(_QWORD *a1, __int64 a2, __int64 a3, unsigned __int8 a4, int *a5)
{
  int *v6; // r15
  __int64 v9; // rax
  int v10; // ecx
  ULONG_PTR v11; // rbp
  int v12; // eax
  __int64 v13; // r12
  __int64 v14; // rsi
  __int64 v15; // rdx
  __int64 v16; // r8
  _DWORD *v17; // r9
  __int64 v18; // rdx
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // r8
  __int64 v23; // rax
  unsigned __int8 v24; // si
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v28; // eax
  bool v29; // zf
  unsigned int v30; // ebx
  __int64 v31; // [rsp+70h] [rbp+8h] BYREF
  unsigned __int64 v32; // [rsp+78h] [rbp+10h]
  unsigned __int8 v33; // [rsp+88h] [rbp+20h] BYREF

  v33 = a4;
  v6 = a5;
  v32 = *(_QWORD *)(a2 + 8) | 0x8000000000000000uLL;
  v9 = MI_READ_PTE_LOCK_FREE(v32);
  v10 = *v6;
  v11 = *(_QWORD *)a2 - 32LL;
  v31 = v9;
  if ( !v10 )
  {
    if ( (unsigned int)MiAddLockedPageCharge(a2, 2) )
    {
      v12 = *v6;
    }
    else
    {
      *v6 = 1;
      v12 = 1;
    }
    v10 = v12;
    if ( !v12 && a3 && *(_WORD *)(a3 + 32) >= 0x7FFFu )
    {
      *v6 = 1;
      MiRemoveLockedPageChargeAndDecRef(a2);
      v10 = *v6;
    }
  }
  if ( v10 == 1 && a3 )
  {
    MiLockNestedPageAtDpcInline(a3);
    MiRemoveLockedPageChargeAndDecRef(a3);
    _InterlockedAnd64((volatile signed __int64 *)(a3 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  }
  _InterlockedAdd((volatile signed __int32 *)(v11 + 176), 1u);
  _InterlockedAnd64((volatile signed __int64 *)(a2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( a3 )
  {
    MiUnlockProtoPoolPage(a3, v33);
  }
  else
  {
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && (CurrentIrql = KeGetCurrentIrql(), CurrentIrql <= 0xFu) )
    {
      v24 = v33;
      if ( v33 <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v24 = v33;
        v28 = ~(unsigned __int16)(-1LL << (v33 + 1));
        v29 = (v28 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v28;
        if ( v29 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    else
    {
      v24 = v33;
    }
    __writecr8(v24);
  }
  v13 = 0LL;
  if ( a1[7] )
    v13 = MiReleaseFaultState((__int64)(a1 + 7), 0x11u, 0LL);
  if ( *(_QWORD *)(v11 + 216) )
  {
    v23 = KeAbPreAcquire(v11, 0LL, 0);
    v14 = v23;
    if ( v23 )
      KeAbPreWait(v23);
  }
  else
  {
    v14 = 0LL;
  }
  KeWaitForSingleObject((PVOID)(v11 + 56), WrPageIn, 0, 0, 0LL);
  if ( v14 )
  {
    KeAbPreAcquire(v11, v14, 0);
    KeAbPostReleaseEx(v11);
  }
  MiFreeInPageSupportBlock((PSLIST_ENTRY)v11);
  if ( a1[7] )
    MiRelockFaultState((__int64)(a1 + 7), v13, v16, v17);
  if ( *v6 == 1 )
    return 3221226548LL;
  if ( a3 )
  {
    MiRelockProtoPoolPage(a3, (char *)&v33, v16, v17);
    LODWORD(a5) = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(a2 + 24), 0x3FuLL) )
    {
      do
        KeYieldProcessorEx(&a5, v18, v19, v20);
      while ( *(__int64 *)(a2 + 24) < 0 );
    }
  }
  else
  {
    MiLockPageInline(a2, v15, v16, v17);
  }
  if ( (*(_QWORD *)(a2 + 24) & 0x4000000000000000LL) == 0 )
  {
    if ( (unsigned int)MiIsFaultPteIntact(a1, *a1, v32, &v31) && (unsigned int)MiImagePageOk(*a1, a2, v21, 0LL) )
      return 0LL;
    MiRemoveLockedPageChargeAndDecRef(a2);
    return 3221226548LL;
  }
  v30 = (*(_BYTE *)(a2 + 35) & 0x10) != 0 ? 0xFFFFFBE3 : 0;
  MiRemoveLockedPageChargeAndDecRef(a2);
  return v30 - 1073740748;
}
