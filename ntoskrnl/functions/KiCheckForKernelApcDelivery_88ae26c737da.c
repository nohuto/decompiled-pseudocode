char __fastcall KiCheckForKernelApcDelivery()
{
  unsigned int v0; // eax
  struct _KPRCB *CurrentPrcb; // rdx
  _DWORD *SchedulerAssist; // rcx
  bool v3; // zf

  if ( KeGetCurrentIrql() )
  {
    KeGetCurrentThread()->ApcState.KernelApcPending = 1;
    LOBYTE(v0) = HalRequestSoftwareInterrupt(1);
  }
  else
  {
    KeGetCurrentIrql();
    __writecr8(1uLL);
    LOBYTE(v0) = KiDeliverApc(0LL, 0LL, 0LL);
    if ( KiIrqlFlags )
    {
      LOBYTE(v0) = KeGetCurrentIrql();
      if ( (KiIrqlFlags & 1) != 0 )
      {
        LOBYTE(v0) = v0 - 2;
        if ( (unsigned __int8)v0 <= 0xDu )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          v3 = (SchedulerAssist[5] & 0xFFFF0001) == 0;
          v0 = SchedulerAssist[5] & 0xFFFF0001;
          SchedulerAssist[5] = v0;
          if ( v3 )
            LOBYTE(v0) = KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
    }
    __writecr8(0LL);
  }
  return v0;
}
