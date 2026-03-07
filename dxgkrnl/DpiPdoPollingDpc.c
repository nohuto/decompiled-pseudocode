void __fastcall DpiPdoPollingDpc(
        struct _KDPC *Dpc,
        PVOID DeferredContext,
        PVOID SystemArgument1,
        PVOID SystemArgument2)
{
  if ( !_InterlockedExchange(&dword_1C013B720, 1) )
    IoQueueWorkItem(qword_1C013B718, DpiPdoPollingWorkItem, DelayedWorkQueue, 0LL);
}
