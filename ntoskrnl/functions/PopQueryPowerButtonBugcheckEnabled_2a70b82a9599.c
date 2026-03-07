__int64 PopQueryPowerButtonBugcheckEnabled()
{
  struct _KTHREAD *CurrentThread; // rax
  int v1; // esi
  unsigned int v2; // edi
  unsigned int v3; // ebx
  unsigned int v4; // eax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockSharedEx((ULONG_PTR)&PopPowerButtonBugcheckLock, 0LL);
  v1 = PopPowerButtonBugcheckConfig;
  v2 = 0;
  v3 = PopPowerButtonLiveDumpConfig;
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&PopPowerButtonBugcheckLock, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)&PopPowerButtonBugcheckLock);
  KeAbPostRelease((ULONG_PTR)&PopPowerButtonBugcheckLock);
  KeLeaveCriticalRegion();
  if ( v1 == 2 )
    v2 = 1;
  LOBYTE(word_140C39C98) = v2;
  if ( (v3 & 1) != 0 )
  {
    v4 = v3 & 0xF0;
    if ( v4 > 0x60 || v4 < 0x20 )
    {
      v3 = v3 & 0xFFFFFF0F | 0x50;
      DbgPrintEx(
        0x92u,
        2u,
        "PopQueryPowerButtonBugcheckEnabled: PowerButtonLiveDump Timeout value is invalid or not specified. Set it to default.\n");
    }
  }
  HIDWORD(qword_140C39CA4) = v3;
  DbgPrintEx(
    0x92u,
    2u,
    "PopQueryPowerButtonBugcheckEnabled completed with BugcheckEnabled: %d, BugcheckConfig: %08x, LiveDumpConfig: %08x\n",
    v2,
    v1,
    v3);
  return v2;
}
