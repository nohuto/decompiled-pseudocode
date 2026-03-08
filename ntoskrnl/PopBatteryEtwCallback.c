/*
 * XREFs of PopBatteryEtwCallback @ 0x1409922D0
 * Callers:
 *     <none>
 * Callees:
 *     PopReleaseRwLock @ 0x140236C40 (PopReleaseRwLock.c)
 *     ExAcquirePushLockSharedEx @ 0x1402626A0 (ExAcquirePushLockSharedEx.c)
 *     PopBatteryTraceSystemBatteryStatus @ 0x1403BE46C (PopBatteryTraceSystemBatteryStatus.c)
 */

void __fastcall PopBatteryEtwCallback(LPCGUID SourceId, ULONG ControlCode, UCHAR Level, ULONGLONG MatchAnyKeyword)
{
  struct _KTHREAD *CurrentThread; // rax

  if ( ControlCode == 2 )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    ExAcquirePushLockSharedEx((ULONG_PTR)&xmmword_140C3CD18, 0LL);
    PopBatteryTraceSystemBatteryStatus(1);
    PopReleaseRwLock((ULONG_PTR)&xmmword_140C3CD18);
  }
}
