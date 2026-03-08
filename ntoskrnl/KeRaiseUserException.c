/*
 * XREFs of KeRaiseUserException @ 0x14056E8C0
 * Callers:
 *     ExHandleLogBadReference @ 0x140604648 (ExHandleLogBadReference.c)
 *     PspInsertThread @ 0x1406B0F50 (PspInsertThread.c)
 *     ObpCloseHandle @ 0x1407C2500 (ObpCloseHandle.c)
 *     ObCloseHandleTableEntry @ 0x1407D8274 (ObCloseHandleTableEntry.c)
 * Callees:
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 *     KiSetupForInstrumentationReturn @ 0x14056E9C0 (KiSetupForInstrumentationReturn.c)
 */

__int64 __fastcall KeRaiseUserException(unsigned int a1)
{
  struct _KTHREAD *CurrentThread; // rdx
  unsigned __int8 CurrentIrql; // bl
  unsigned __int8 v4; // r10
  _KTRAP_FRAME *TrapFrame; // rcx
  unsigned __int8 v6; // al
  struct _KPRCB *CurrentPrcb; // r11
  _DWORD *SchedulerAssist; // r9
  int v9; // eax
  bool v10; // zf

  CurrentThread = KeGetCurrentThread();
  CurrentIrql = KeGetCurrentIrql();
  v4 = 1;
  if ( !CurrentIrql )
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(1uLL);
  }
  TrapFrame = CurrentThread->TrapFrame;
  if ( TrapFrame )
  {
    if ( (TrapFrame->SegCs & 1) != 0 )
    {
      *((_DWORD *)CurrentThread->Teb + 176) = a1;
      TrapFrame->SegCs = 51;
      TrapFrame->Rip = qword_140D1F360;
      if ( TrapFrame->ExceptionActive != 2 )
        KiSetupForInstrumentationReturn(TrapFrame);
    }
  }
  if ( CurrentIrql < v4 )
  {
    if ( KiIrqlFlags )
    {
      v6 = KeGetCurrentIrql();
      if ( ((unsigned __int8)KiIrqlFlags & v4) != 0 && (unsigned __int8)(v6 - 2) <= 0xDu )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v9 = ~(unsigned __int16)(-1LL << (v4 + CurrentIrql));
        v10 = (v9 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v9;
        if ( v10 )
          KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
      }
    }
    __writecr8(CurrentIrql);
  }
  return a1;
}
