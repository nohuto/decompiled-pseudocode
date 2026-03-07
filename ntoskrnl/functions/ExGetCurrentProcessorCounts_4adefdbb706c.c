__int64 __fastcall ExGetCurrentProcessorCounts(ULONG *a1, _DWORD *a2, _DWORD *a3)
{
  struct _KPRCB *CurrentPrcb; // r10
  __int64 result; // rax

  CurrentPrcb = KeGetCurrentPrcb();
  *a1 = CurrentPrcb->IdleThread->SchedulerApc.SpareLong0;
  *a2 = CurrentPrcb->KernelTime + CurrentPrcb->UserTime;
  result = CurrentPrcb->Number;
  *a3 = result;
  return result;
}
