/*
 * XREFs of MiUnlockStoreLockedPages @ 0x14065A830
 * Callers:
 *     SmKmUnlockMdl @ 0x1405C9ACC (SmKmUnlockMdl.c)
 *     MmStoreProbeAndLockPages @ 0x14065ACBC (MmStoreProbeAndLockPages.c)
 * Callees:
 *     MiReleasePageFileInfo @ 0x14020B300 (MiReleasePageFileInfo.c)
 *     MiWriteCompletePfn @ 0x140212B10 (MiWriteCompletePfn.c)
 *     MiLockPageInline @ 0x1402A33B0 (MiLockPageInline.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 */

void __fastcall MiUnlockStoreLockedPages(__int64 a1)
{
  _QWORD *v1; // r14
  unsigned int v3; // ebx
  unsigned __int64 v4; // r13
  __int64 v5; // rbp
  unsigned __int64 v6; // r15
  unsigned int v7; // ecx
  unsigned __int64 v8; // rdi
  __int64 v9; // r12
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v13; // eax
  bool v14; // zf

  v1 = (_QWORD *)(a1 + 48);
  v3 = 0;
  v4 = a1
     + 48
     + 8
     * ((*(unsigned int *)(a1 + 40) + 4095LL + (unsigned __int64)((*(_DWORD *)(a1 + 32) + *(_DWORD *)(a1 + 44)) & 0xFFF)) >> 12);
  do
  {
    if ( *v1 == -1LL )
      break;
    v5 = 48LL * *v1 - 0x220000000000LL;
    v6 = (unsigned __int8)MiLockPageInline(v5);
    v7 = v3 & 0xFFFFFFFD;
    v3 |= 2u;
    if ( (*(_BYTE *)(v5 + 34) & 0x10) == 0 )
      v3 = v7;
    v8 = MiWriteCompletePfn(v5, v3);
    if ( v8 )
      v9 = *(_QWORD *)(qword_140C67048 + 8 * ((*(_QWORD *)(v5 + 40) >> 43) & 0x3FFLL));
    else
      v9 = 0LL;
    _InterlockedAnd64((volatile signed __int64 *)(v5 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( KiIrqlFlags )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && (unsigned __int8)v6 <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v13 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v6 + 1));
        v14 = (v13 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v13;
        if ( v14 )
          KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
      }
    }
    __writecr8(v6);
    if ( v8 )
      MiReleasePageFileInfo(v9, v8, 0);
    ++v1;
  }
  while ( (unsigned __int64)v1 < v4 );
  *(_WORD *)(a1 + 10) &= ~2u;
}
