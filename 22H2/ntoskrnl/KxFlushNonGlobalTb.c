/*
 * XREFs of KxFlushNonGlobalTb @ 0x1403097E4
 * Callers:
 *     KeFlushTb @ 0x14022FA90 (KeFlushTb.c)
 * Callees:
 *     KxSetTimeStampBusy @ 0x140249FE8 (KxSetTimeStampBusy.c)
 *     KeCopyAffinityEx @ 0x1402BBAE0 (KeCopyAffinityEx.c)
 *     KeRemoveProcessorAffinityEx @ 0x1402BBB30 (KeRemoveProcessorAffinityEx.c)
 *     KiIpiSendRequestEx @ 0x1402BC030 (KiIpiSendRequestEx.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F2D04 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall KxFlushNonGlobalTb(int a1)
{
  unsigned __int8 CurrentIrql; // bl
  struct _KPRCB *CurrentPrcb; // rdi
  __int64 p_StaticAffinity; // rsi
  int v4; // edx
  __int64 result; // rax
  _DWORD *SchedulerAssist; // r9
  unsigned __int8 v7; // al
  struct _KPRCB *v8; // r9
  _DWORD *v9; // r8
  int v10; // eax
  bool v11; // zf
  signed __int32 v12[8]; // [rsp+0h] [rbp-48h] BYREF

  CurrentIrql = KeGetCurrentIrql();
  __writecr8(0xCuLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    SchedulerAssist[5] |= (-1 << (CurrentIrql + 1)) & 0x1FFC;
  }
  CurrentPrcb = KeGetCurrentPrcb();
  if ( !a1 )
  {
    _InterlockedOr(v12, 0);
    p_StaticAffinity = (__int64)&CurrentPrcb->StaticAffinity;
    KeCopyAffinityEx(
      (__int64)&CurrentPrcb->StaticAffinity,
      &CurrentPrcb->CurrentThread->ApcState.Process->ActiveProcessors.Count);
    KeRemoveProcessorAffinityEx(&CurrentPrcb->StaticAffinity.KeFlushTbAffinity.Count, CurrentPrcb->Number);
    v4 = 0;
    goto LABEL_12;
  }
  p_StaticAffinity = 0LL;
  v4 = 1;
  if ( !KiKvaShadow )
  {
LABEL_12:
    KiIpiSendRequestEx(
      (__int64)CurrentPrcb,
      v4,
      p_StaticAffinity,
      0,
      1LL,
      (__int64 (__fastcall *)(__int64))KiFlushProcessTbWorker,
      0LL);
    goto LABEL_6;
  }
  if ( KxSetTimeStampBusy(&KiTbFlushTimeStamp) )
  {
    KiIpiSendRequestEx(
      (__int64)CurrentPrcb,
      1,
      0LL,
      0,
      1LL,
      (__int64 (__fastcall *)(__int64))KiFlushProcessTbWorker,
      0LL);
    _InterlockedAdd(&KiTbFlushTimeStamp, 1u);
  }
LABEL_6:
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      v7 = KeGetCurrentIrql();
      if ( v7 <= 0xFu && CurrentIrql <= 0xFu && v7 >= 2u )
      {
        v8 = KeGetCurrentPrcb();
        v9 = v8->SchedulerAssist;
        v10 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
        v11 = (v10 & v9[5]) == 0;
        v9[5] &= v10;
        if ( v11 )
          KiRemoveSystemWorkPriorityKick(v8);
      }
    }
  }
  result = CurrentIrql;
  __writecr8(CurrentIrql);
  return result;
}
