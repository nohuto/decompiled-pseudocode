unsigned __int64 __fastcall ExGetCurrentProcessorCpuUsage(_DWORD *a1)
{
  struct _KPRCB *CurrentPrcb; // rdx
  unsigned __int64 result; // rax

  CurrentPrcb = KeGetCurrentPrcb();
  result = 100
         * (unsigned __int64)CurrentPrcb->IdleThread->SchedulerApc.SpareLong0
         / (CurrentPrcb->KernelTime + (unsigned __int64)CurrentPrcb->UserTime);
  *a1 = 100 - result;
  return result;
}
