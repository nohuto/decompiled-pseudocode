/*
 * XREFs of ExInitializeLookasideListExInternal @ 0x1402A8000
 * Callers:
 *     ExInitializeLookasideListEx @ 0x1402A7FB0 (ExInitializeLookasideListEx.c)
 *     VmInitSystem @ 0x140B43DDC (VmInitSystem.c)
 *     CmInitSystem1 @ 0x140B51500 (CmInitSystem1.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x14024EEB0 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14024F730 (KeAcquireSpinLockRaiseToDpc.c)
 *     InitializeSListHead @ 0x1402A8B90 (InitializeSListHead.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall ExInitializeLookasideListExInternal(
        PSLIST_HEADER SListHead,
        __int64 (__fastcall *a2)(),
        void (__stdcall *a3)(PPRIVILEGE_SET Privileges),
        int a4,
        int a5,
        unsigned __int64 a6,
        int a7,
        __int16 a8,
        int a9)
{
  __int16 v11; // cx
  __int16 v13; // r14
  int v14; // r13d
  int v15; // esi
  __int64 *v16; // rdi
  KSPIN_LOCK *v17; // r15
  void (__stdcall *v18)(PPRIVILEGE_SET); // rax
  unsigned __int64 v19; // rsi
  PSLIST_HEADER *v20; // rax
  PSLIST_HEADER v21; // rbx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v26; // eax
  bool v27; // zf

  v11 = a8;
  if ( a8 )
  {
    if ( (unsigned __int16)(a8 - 256) > 0x300u )
      return 3221225718LL;
  }
  else
  {
    v11 = 256;
  }
  v13 = 0;
  if ( !a9 )
    v13 = v11;
  v14 = 8;
  if ( a6 > 8 )
    v14 = a6;
  if ( ((a5 - 1) & a5) != 0 || (a5 & 0xFFFFFFFC) != 0 )
    return 3221225715LL;
  if ( (a5 & 1) != 0 )
  {
    v15 = 16;
  }
  else
  {
    v15 = 0;
    if ( a5 )
      v15 = 8;
  }
  if ( (a4 & 0xFFFFFC18) != 0 || (a4 & 3) == 3 )
    return 3221225714LL;
  v16 = &ExNPagedLookasideListHead;
  if ( (a4 & 1) != 0 )
    v16 = &ExPagedLookasideListHead;
  v17 = &ExNPagedLookasideLock;
  if ( (a4 & 1) != 0 )
    v17 = &ExPagedLookasideLock;
  InitializeSListHead(SListHead);
  LOWORD(SListHead[1].Alignment) = ExMinimumLookasideDepth;
  *((_DWORD *)&SListHead[2].HeaderX64 + 2) = a7;
  *((_WORD *)&SListHead[1].HeaderX64 + 1) = v13;
  *(_QWORD *)((char *)&SListHead[1].HeaderX64 + 4) = 0LL;
  *(_QWORD *)((char *)&SListHead[1].HeaderX64 + 12) = 0LL;
  *((_DWORD *)&SListHead[2].HeaderX64 + 1) = a4 | v15;
  *((_DWORD *)&SListHead[2].HeaderX64 + 3) = v14;
  if ( !a2 )
    a2 = ExAllocatePoolZero;
  SListHead[3].Alignment = (unsigned __int64)a2;
  v18 = CmSiFreeMemory;
  if ( a3 )
    v18 = a3;
  SListHead[3].Region = (unsigned __int64)v18;
  SListHead[5].Alignment = 0LL;
  v19 = KeAcquireSpinLockRaiseToDpc(v17);
  if ( a9 )
  {
    LOWORD(SListHead[1].Alignment) = v13;
    *((_WORD *)&SListHead[1].HeaderX64 + 1) = -1;
  }
  else if ( !ExMinimumLookasideDepth )
  {
    LODWORD(SListHead[1].Alignment) = -65536;
  }
  v20 = (PSLIST_HEADER *)v16[1];
  v21 = SListHead + 4;
  if ( *v20 != (PSLIST_HEADER)v16 )
    __fastfail(3u);
  v21->Alignment = (unsigned __int64)v16;
  v21->Region = (unsigned __int64)v20;
  *v20 = v21;
  v16[1] = (__int64)v21;
  KxReleaseSpinLock((volatile signed __int64 *)v17);
  if ( KiIrqlFlags )
  {
    CurrentIrql = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && (unsigned __int8)v19 <= 0xFu && CurrentIrql >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      v26 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v19 + 1));
      v27 = (v26 & SchedulerAssist[5]) == 0;
      SchedulerAssist[5] &= v26;
      if ( v27 )
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  __writecr8(v19);
  return 0LL;
}
