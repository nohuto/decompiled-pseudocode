/*
 * XREFs of MiInitializeImageHeaderPage @ 0x1402F8ED0
 * Callers:
 *     MiCreateImageFileMap @ 0x1407F1C28 (MiCreateImageFileMap.c)
 * Callees:
 *     MiMapPageInHyperSpaceWorker @ 0x140214870 (MiMapPageInHyperSpaceWorker.c)
 *     MiUnmapPageInHyperSpaceWorker @ 0x140214A54 (MiUnmapPageInHyperSpaceWorker.c)
 *     KeYieldProcessorEx @ 0x1403512B0 (KeYieldProcessorEx.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MiInitializeImageHeaderPage(__int64 a1, __int64 a2)
{
  unsigned __int64 v4; // rbx
  unsigned __int8 v5; // bl
  __int64 result; // rax
  __int64 v7; // rbx
  unsigned __int8 CurrentIrql; // cl
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v11; // eax
  bool v12; // zf
  unsigned __int8 v13; // [rsp+38h] [rbp+10h] BYREF
  int v14; // [rsp+40h] [rbp+18h] BYREF

  v13 = 0;
  v4 = MiMapPageInHyperSpaceWorker(a1, &v13, 0x80000000);
  memset((void *)(v4 + a2), 0, 4096 - a2);
  MiUnmapPageInHyperSpaceWorker(v4, 2u);
  if ( (a2 & 0x1FF) != 0 )
  {
    v7 = 48 * a1 - 0x220000000000LL;
    v14 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v7 + 24), 0x3FuLL) )
    {
      do
        KeYieldProcessorEx(&v14);
      while ( *(__int64 *)(v7 + 24) < 0 );
    }
    *(_BYTE *)(v7 + 34) |= 0x10u;
    _InterlockedAnd64((volatile signed __int64 *)(v7 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  }
  if ( KiIrqlFlags && (CurrentIrql = KeGetCurrentIrql(), (KiIrqlFlags & 1) != 0) && CurrentIrql <= 0xFu )
  {
    v5 = v13;
    if ( v13 <= 0xFu && CurrentIrql >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      v5 = v13;
      v11 = ~(unsigned __int16)(-1LL << (v13 + 1));
      v12 = (v11 & SchedulerAssist[5]) == 0;
      SchedulerAssist[5] &= v11;
      if ( v12 )
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  else
  {
    v5 = v13;
  }
  result = v5;
  __writecr8(v5);
  return result;
}
