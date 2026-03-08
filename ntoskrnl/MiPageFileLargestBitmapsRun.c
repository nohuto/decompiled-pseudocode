/*
 * XREFs of MiPageFileLargestBitmapsRun @ 0x14020A53C
 * Callers:
 *     MiFindFreePageFileSpace @ 0x140209F7C (MiFindFreePageFileSpace.c)
 *     MiFindBestOutswapPagefile @ 0x1402DBE44 (MiFindBestOutswapPagefile.c)
 *     MiGetKernelStackSwapSupport @ 0x1402DBFB8 (MiGetKernelStackSwapSupport.c)
 *     MiGatherPagefilePages @ 0x140637D34 (MiGatherPagefilePages.c)
 *     MiTrimUnusedPageFileRegionsWorker @ 0x1406392E0 (MiTrimUnusedPageFileRegionsWorker.c)
 * Callees:
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x14027F8D0 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     ExAcquireSpinLockShared @ 0x140308060 (ExAcquireSpinLockShared.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MiPageFileLargestBitmapsRun(__int64 a1)
{
  volatile LONG *v1; // rbp
  unsigned int v3; // esi
  unsigned __int64 v4; // rdi
  unsigned __int64 v5; // rcx
  unsigned __int64 v6; // rdx
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // rdx
  __int64 i; // rdx
  unsigned int v10; // ebx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // rax
  _DWORD *SchedulerAssist; // r9
  int v15; // edx
  bool v16; // zf

  v1 = (volatile LONG *)(a1 + 232);
  v3 = 0;
  v4 = ExAcquireSpinLockShared((PEX_SPIN_LOCK)(a1 + 232));
  v5 = *(_QWORD *)(a1 + 144);
  if ( (*(_BYTE *)(a1 + 152) & 1) != 0 && v5 )
    v5 ^= a1 + 144;
  v6 = 0LL;
  while ( v5 )
  {
    if ( *(_DWORD *)(v5 + 52) == -1 )
    {
      if ( !*(_DWORD *)(v5 + 48) )
        goto LABEL_11;
      v7 = *(_QWORD *)v5;
      v6 = v5;
    }
    else
    {
      v7 = *(_QWORD *)(v5 + 8);
    }
    if ( (*(_BYTE *)(a1 + 152) & 1) != 0 && v7 )
      v5 ^= v7;
    else
      v5 = v7;
  }
  v5 = v6;
LABEL_11:
  v8 = *(_QWORD *)v5;
  if ( *(_QWORD *)v5 )
  {
    for ( ; *(_QWORD *)(v8 + 8); v8 = *(_QWORD *)(v8 + 8) )
      ;
  }
  else
  {
    for ( i = *(_QWORD *)(v5 + 16); ; i = *(_QWORD *)(v8 + 16) )
    {
      v8 = i & 0xFFFFFFFFFFFFFFFCuLL;
      if ( !v8 || *(_QWORD *)(v8 + 8) == v5 )
        break;
      v5 = v8;
    }
  }
  if ( v8 )
    v3 = *(_DWORD *)(v8 + 52);
  v10 = *(_DWORD *)(a1 + 140);
  if ( v3 > v10 )
    v10 = v3;
  ExReleaseSpinLockSharedFromDpcLevel(v1);
  if ( KiIrqlFlags )
  {
    CurrentIrql = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && (unsigned __int8)v4 <= 0xFu && CurrentIrql >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      v15 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v4 + 1));
      v16 = (v15 & SchedulerAssist[5]) == 0;
      SchedulerAssist[5] &= v15;
      if ( v16 )
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  __writecr8(v4);
  return v10;
}
