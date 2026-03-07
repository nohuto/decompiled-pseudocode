void __fastcall HMDestroyUnlockedObjectWorker(struct _HANDLEENTRY *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // [rsp+20h] [rbp-8h]
  int v6; // [rsp+38h] [rbp+10h] BYREF

  if ( gbInDestroyHandleTableObjects || !PsGetCurrentThreadWin32Thread(a1, a2, a3, a4, v5) )
  {
    if ( PsGetCurrentThreadWin32Thread(a1, a2, a3, a4, v5) )
    {
      if ( (gdwHydraHint & 0x80u) == 0 )
      {
        v6 = 0x20000;
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 3610LL);
      }
    }
    HMDestroyUnlockedObjectWorkerAtomic(a1);
  }
  else
  {
    AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)&v6);
    HMDestroyUnlockedObjectWorkerAtomic(a1);
    AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)&v6);
  }
}
