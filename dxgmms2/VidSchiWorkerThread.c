/*
 * XREFs of VidSchiWorkerThread @ 0x1C00B9FA0
 * Callers:
 *     <none>
 * Callees:
 *     VidSchiSetSchedulerStatus @ 0x1C00BA074 (VidSchiSetSchedulerStatus.c)
 *     VidSchiRun_PriorityTable @ 0x1C00BA0C0 (VidSchiRun_PriorityTable.c)
 */

void __fastcall __noreturn VidSchiWorkerThread(_QWORD *StartContext)
{
  int ThreadInformation; // [rsp+48h] [rbp+10h] BYREF

  StartContext[21] = KeGetCurrentThread();
  KeSetActualBasePriorityThread(KeGetCurrentThread(), 16LL);
  *((_DWORD *)StartContext + 55) = 16;
  ThreadInformation = 1;
  ZwSetInformationThread((HANDLE)0xFFFFFFFFFFFFFFFELL, ThreadBreakOnTermination|0x20, &ThreadInformation, 4u);
  DpiSetSchedulerCallbackState(*(_QWORD *)(StartContext[2] + 216LL), 3LL);
  StartContext[159] = MEMORY[0xFFFFF78000000320];
  KeWaitForSingleObject(StartContext + 156, Executive, 0, 0, 0LL);
  VidSchiSetSchedulerStatus(StartContext, 1LL, 1LL);
  while ( 1 )
    VidSchiRun_PriorityTable((struct _VIDSCH_GLOBAL *)StartContext);
}
