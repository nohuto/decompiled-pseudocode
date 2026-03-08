/*
 * XREFs of HalpInterruptResetAllProcessors @ 0x140502DCC
 * Callers:
 *     HalReturnToFirmware @ 0x140504990 (HalReturnToFirmware.c)
 * Callees:
 *     HalRequestIpiSpecifyVector @ 0x140230C90 (HalRequestIpiSpecifyVector.c)
 *     HalpPowerWriteResetCommand @ 0x140504AEC (HalpPowerWriteResetCommand.c)
 *     HalpNmiReboot @ 0x1405198E0 (HalpNmiReboot.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 */

void __noreturn HalpInterruptResetAllProcessors()
{
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // rcx
  _DWORD *SchedulerAssist; // rdx
  bool v3; // zf

  if ( HalpInterruptController && HalpInterruptProcessorsStarted != 1 && !dword_140C6A5A8 )
  {
    HalpNmiReboot();
    HalpRebootNow = (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))HalpInterruptResetThisProcessor;
    HalRequestIpiSpecifyVector(2, 0LL, 0xD7u);
    if ( KiIrqlFlags )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( (KiIrqlFlags & 1) != 0 && (unsigned __int8)(CurrentIrql - 2) <= 0xDu )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v3 = (SchedulerAssist[5] & 0xFFFF0001) == 0;
        SchedulerAssist[5] &= 0xFFFF0001;
        if ( v3 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    __writecr8(0LL);
    _enable();
    while ( 1 )
      ;
  }
  HalpPowerWriteResetCommand(0LL, 0LL);
  JUMPOUT(0x140502E60LL);
}
