/*
 * XREFs of MiInitializeImageHeaderPage @ 0x1403590BC
 * Callers:
 *     MiCreateImageFileMap @ 0x140700CC4 (MiCreateImageFileMap.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x14024ABF0 (KeYieldProcessorEx.c)
 *     MiMapPageInHyperSpaceWorker @ 0x1402B2140 (MiMapPageInHyperSpaceWorker.c)
 *     MiUnmapPageInHyperSpaceWorker @ 0x1402C8FA0 (MiUnmapPageInHyperSpaceWorker.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F2D04 (KiRemoveSystemWorkPriorityKick.c)
 *     memset @ 0x140413800 (memset.c)
 */

__int64 __fastcall MiInitializeImageHeaderPage(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned __int64 v6; // rbx
  __int64 v7; // rdx
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  unsigned __int8 v11; // bl
  __int64 result; // rax
  __int64 v13; // rbx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v17; // eax
  bool v18; // zf
  unsigned __int8 v19; // [rsp+38h] [rbp+10h] BYREF
  int v20; // [rsp+40h] [rbp+18h] BYREF

  v19 = 0;
  v6 = MiMapPageInHyperSpaceWorker(a1, &v19, 0x80000000, a4);
  memset((void *)(v6 + a2), 0, 4096 - a2);
  LOBYTE(v7) = 2;
  MiUnmapPageInHyperSpaceWorker(v6, v7, 0x80000000LL);
  if ( (a2 & 0x1FF) != 0 )
  {
    v13 = 48 * a1 - 0x58000000000LL;
    v20 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v13 + 24), 0x3FuLL) )
    {
      do
        KeYieldProcessorEx(&v20, v8, v9, v10);
      while ( *(__int64 *)(v13 + 24) < 0 );
    }
    *(_BYTE *)(v13 + 34) |= 0x10u;
    _InterlockedAnd64((volatile signed __int64 *)(v13 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  }
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && (CurrentIrql = KeGetCurrentIrql(), CurrentIrql <= 0xFu) )
  {
    v11 = v19;
    if ( v19 <= 0xFu && CurrentIrql >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      v11 = v19;
      v17 = ~(unsigned __int16)(-1LL << (v19 + 1));
      v18 = (v17 & SchedulerAssist[5]) == 0;
      SchedulerAssist[5] &= v17;
      if ( v18 )
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  else
  {
    v11 = v19;
  }
  result = v11;
  __writecr8(v11);
  return result;
}
