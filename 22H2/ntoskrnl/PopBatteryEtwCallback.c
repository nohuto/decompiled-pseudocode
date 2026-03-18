/*
 * XREFs of PopBatteryEtwCallback @ 0x140995380
 * Callers:
 *     <none>
 * Callees:
 *     ExAcquirePushLockSharedEx @ 0x140230D90 (ExAcquirePushLockSharedEx.c)
 *     PopReleaseRwLock @ 0x14032C2A0 (PopReleaseRwLock.c)
 *     PopBatteryTraceSystemBatteryStatus @ 0x1403C3D2C (PopBatteryTraceSystemBatteryStatus.c)
 */

void __fastcall PopBatteryEtwCallback(LPCGUID SourceId, ULONG ControlCode, UCHAR Level, ULONGLONG MatchAnyKeyword)
{
  struct _KTHREAD *CurrentThread; // rax

  if ( ControlCode == 2 )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    ExAcquirePushLockSharedEx((ULONG_PTR)&xmmword_140C3D2B8, 0LL);
    PopBatteryTraceSystemBatteryStatus(1);
    PopReleaseRwLock((__int64 *)&xmmword_140C3D2B8);
  }
}
