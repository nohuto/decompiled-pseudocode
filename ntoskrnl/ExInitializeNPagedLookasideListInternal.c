/*
 * XREFs of ExInitializeNPagedLookasideListInternal @ 0x1403BD3B0
 * Callers:
 *     ExInitializeNPagedLookasideList @ 0x1403BD370 (ExInitializeNPagedLookasideList.c)
 *     VfObjectContextInit @ 0x140AC0F94 (VfObjectContextInit.c)
 *     VfDeadlockInitialize @ 0x140AD447C (VfDeadlockInitialize.c)
 *     ViIovInitialization @ 0x140AD9358 (ViIovInitialization.c)
 *     ViDmaInit @ 0x140ADA508 (ViDmaInit.c)
 *     VfWdInit @ 0x140ADB0B8 (VfWdInit.c)
 *     MiInitNucleus @ 0x140B36878 (MiInitNucleus.c)
 *     CcInitializeCacheManager @ 0x140B3EB44 (CcInitializeCacheManager.c)
 *     ObInitSystem @ 0x140B403CC (ObInitSystem.c)
 *     Phase1InitializationDiscard @ 0x140B450A0 (Phase1InitializationDiscard.c)
 *     PoInitSystem @ 0x140B45CAC (PoInitSystem.c)
 *     VfInitBootDriversLoaded @ 0x140B4EE44 (VfInitBootDriversLoaded.c)
 *     WmipInitializeRegistration @ 0x140B544A8 (WmipInitializeRegistration.c)
 *     PopInitializeIrpWorkers @ 0x140B6E534 (PopInitializeIrpWorkers.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x14024EEB0 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14024F730 (KeAcquireSpinLockRaiseToDpc.c)
 *     InitializeSListHead @ 0x1402A8B90 (InitializeSListHead.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall ExInitializeNPagedLookasideListInternal(
        __int64 a1,
        PVOID (__fastcall *a2)(int a1, SIZE_T a2, ULONG a3),
        void (__stdcall *a3)(PVOID P),
        int a4,
        int a5,
        int a6,
        __int16 a7,
        int a8)
{
  void (__stdcall *v12)(PVOID); // rax
  unsigned __int64 v13; // rbx
  _QWORD *v14; // rax
  _QWORD *v15; // rdi
  __int64 result; // rax
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  bool v19; // zf

  InitializeSListHead((PSLIST_HEADER)a1);
  *(_WORD *)(a1 + 16) = ExMinimumLookasideDepth;
  *(_WORD *)(a1 + 18) = 256;
  *(_DWORD *)(a1 + 40) = a6;
  *(_DWORD *)(a1 + 44) = a5;
  *(_QWORD *)(a1 + 20) = 0LL;
  *(_QWORD *)(a1 + 28) = 0LL;
  *(_DWORD *)(a1 + 36) = a4;
  if ( !a2 )
    a2 = ExAllocatePoolZero;
  *(_QWORD *)(a1 + 48) = a2;
  v12 = ExFreePool;
  if ( a3 )
    v12 = a3;
  *(_QWORD *)(a1 + 56) = v12;
  *(_QWORD *)(a1 + 80) = 0LL;
  v13 = KeAcquireSpinLockRaiseToDpc(&ExNPagedLookasideLock);
  if ( a8 )
  {
    *(_WORD *)(a1 + 18) = -1;
    *(_WORD *)(a1 + 16) = a7;
  }
  else if ( !ExMinimumLookasideDepth )
  {
    *(_DWORD *)(a1 + 16) = -65536;
  }
  v14 = (_QWORD *)qword_140C2D208;
  v15 = (_QWORD *)(a1 + 64);
  if ( *(__int64 **)qword_140C2D208 != &ExNPagedLookasideListHead )
    __fastfail(3u);
  *v15 = &ExNPagedLookasideListHead;
  v15[1] = v14;
  *v14 = v15;
  qword_140C2D208 = (__int64)v15;
  result = KxReleaseSpinLock((volatile signed __int64 *)&ExNPagedLookasideLock);
  if ( KiIrqlFlags )
  {
    result = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0
      && (unsigned __int8)result <= 0xFu
      && (unsigned __int8)v13 <= 0xFu
      && (unsigned __int8)result >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      result = ~(unsigned __int16)(-1LL << ((unsigned __int8)v13 + 1));
      v19 = ((unsigned int)result & SchedulerAssist[5]) == 0;
      SchedulerAssist[5] &= result;
      if ( v19 )
        result = KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  __writecr8(v13);
  return result;
}
