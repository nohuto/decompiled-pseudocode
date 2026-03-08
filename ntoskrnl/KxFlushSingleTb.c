/*
 * XREFs of KxFlushSingleTb @ 0x1402120DC
 * Callers:
 *     KeFlushSingleTb @ 0x140211E60 (KeFlushSingleTb.c)
 * Callees:
 *     KiIpiSendRequestEx @ 0x14021238C (KiIpiSendRequestEx.c)
 *     KiCopyAffinityEx @ 0x1402337D0 (KiCopyAffinityEx.c)
 *     KeRemoveProcessorAffinityEx @ 0x140237640 (KeRemoveProcessorAffinityEx.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall KxFlushSingleTb(__int64 a1, int a2, int a3)
{
  __int64 v3; // r15
  unsigned __int8 CurrentIrql; // di
  struct _KPRCB *CurrentPrcb; // r14
  int v6; // esi
  int v7; // edx
  __int64 result; // rax
  _DWORD *SchedulerAssist; // r9
  __int64 v10; // rdx
  _KPROCESS *Process; // rbx
  unsigned __int8 v12; // al
  struct _KPRCB *v13; // r9
  _DWORD *v14; // r8
  int v15; // eax
  bool v16; // zf
  signed __int32 v17[8]; // [rsp+0h] [rbp-68h] BYREF
  __int64 v18; // [rsp+40h] [rbp-28h] BYREF
  int v19; // [rsp+48h] [rbp-20h]
  int v20; // [rsp+4Ch] [rbp-1Ch]

  v20 = 0;
  v3 = 2147483650LL;
  v19 = a2;
  v18 = a1;
  if ( a3 != 1 )
    v3 = 2LL;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(0xCuLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    if ( CurrentIrql == 12 )
      LODWORD(v10) = 4096;
    else
      v10 = (-1LL << (CurrentIrql + 1)) & 0x1FFC;
    SchedulerAssist[5] |= v10;
  }
  CurrentPrcb = KeGetCurrentPrcb();
  if ( a3 )
  {
    v6 = 0;
    v7 = 1;
  }
  else
  {
    _InterlockedOr(v17, 0);
    v6 = (_DWORD)CurrentPrcb + 11704;
    Process = CurrentPrcb->CurrentThread->ApcState.Process;
    CurrentPrcb->StaticAffinity.KeFlushTbAffinity.Reserved = 0;
    *(_DWORD *)&CurrentPrcb->StaticAffinity.KeFlushTbAffinity.Count = 2097153;
    memset(
      &CurrentPrcb->StaticAffinity.KeSyncContextAffinity.8,
      0,
      sizeof(CurrentPrcb->StaticAffinity.KeSyncContextAffinity.8));
    KiCopyAffinityEx(
      &CurrentPrcb->StaticAffinity,
      CurrentPrcb->StaticAffinity.KeFlushTbAffinity.Size,
      &Process->ActiveProcessors);
    KeRemoveProcessorAffinityEx(&CurrentPrcb->StaticAffinity, CurrentPrcb->Number);
    v7 = 0;
  }
  KiIpiSendRequestEx((_DWORD)CurrentPrcb, v7, v6, (unsigned int)&v18, v3, (__int64)KiFlushSingleTbWorker, (__int64)&v18);
  if ( KiIrqlFlags )
  {
    v12 = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0 && v12 <= 0xFu && CurrentIrql <= 0xFu && v12 >= 2u )
    {
      v13 = KeGetCurrentPrcb();
      v14 = v13->SchedulerAssist;
      v15 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
      v16 = (v15 & v14[5]) == 0;
      v14[5] &= v15;
      if ( v16 )
        KiRemoveSystemWorkPriorityKick(v13);
    }
  }
  result = CurrentIrql;
  __writecr8(CurrentIrql);
  return result;
}
