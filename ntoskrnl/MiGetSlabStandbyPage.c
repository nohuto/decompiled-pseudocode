/*
 * XREFs of MiGetSlabStandbyPage @ 0x14065488C
 * Callers:
 *     MiGetSlabPage @ 0x14025BA50 (MiGetSlabPage.c)
 * Callees:
 *     MiUnlinkPageFromListEx @ 0x140264100 (MiUnlinkPageFromListEx.c)
 *     MiReleasePageListLock @ 0x140288360 (MiReleasePageListLock.c)
 *     MiReInitializeFreeSlabPfn @ 0x1402CE68C (MiReInitializeFreeSlabPfn.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 *     MiDiscardTransitionPteEx @ 0x14064E040 (MiDiscardTransitionPteEx.c)
 *     MiLockPageListAndFirstPage @ 0x14064E5E4 (MiLockPageListAndFirstPage.c)
 */

__int64 __fastcall MiGetSlabStandbyPage(__int64 a1)
{
  unsigned __int8 CurrentIrql; // si
  __int64 v4; // rdi
  _DWORD *SchedulerAssist; // r9
  int v6; // eax
  __int64 Page; // rax
  __int64 v8; // r14
  unsigned __int8 v9; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *v11; // r9
  int v12; // eax
  bool v13; // zf
  ULONG_PTR v14; // rbx
  unsigned __int8 v15; // al
  struct _KPRCB *v16; // r9
  _DWORD *v17; // r8
  int v18; // eax
  _BYTE v19[112]; // [rsp+20h] [rbp-98h] BYREF

  if ( *(_QWORD *)(a1 + 128) == 0x3FFFFFFFFFLL )
    return -1LL;
  memset(v19, 0, 0x68uLL);
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  v4 = -1LL;
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    v6 = 4;
    if ( CurrentIrql != 2 )
      v6 = (-1LL << (CurrentIrql + 1)) & 4;
    SchedulerAssist[5] |= v6;
  }
  Page = MiLockPageListAndFirstPage(a1 + 112, (__int64)v19);
  v8 = Page;
  if ( Page == -1 )
  {
    if ( KiIrqlFlags )
    {
      v9 = KeGetCurrentIrql();
      if ( (KiIrqlFlags & 1) != 0 && v9 <= 0xFu && CurrentIrql <= 0xFu && v9 >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v11 = CurrentPrcb->SchedulerAssist;
        v12 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
        v13 = (v12 & v11[5]) == 0;
        v11[5] &= v12;
        if ( v13 )
          KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
      }
    }
  }
  else
  {
    v14 = 48 * Page - 0x220000000000LL;
    MiUnlinkPageFromListEx(v14, (unsigned int)(v19[0] != 0) + 1);
    MiReleasePageListLock(a1 + 112, (__int64)v19);
    MiDiscardTransitionPteEx(v14, 2048);
    *(_BYTE *)(v14 + 34) = *(_BYTE *)(v14 + 34) & 0xF8 | 1;
    MiReInitializeFreeSlabPfn((_QWORD *)v14, a1);
    _InterlockedAnd64((volatile signed __int64 *)(v14 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( KiIrqlFlags )
    {
      v15 = KeGetCurrentIrql();
      if ( (KiIrqlFlags & 1) != 0 && v15 <= 0xFu && CurrentIrql <= 0xFu && v15 >= 2u )
      {
        v16 = KeGetCurrentPrcb();
        v17 = v16->SchedulerAssist;
        v18 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
        v13 = (v18 & v17[5]) == 0;
        v17[5] &= v18;
        if ( v13 )
          KiRemoveSystemWorkPriorityKick((__int64)v16);
      }
    }
    v4 = v8;
  }
  __writecr8(CurrentIrql);
  return v4;
}
