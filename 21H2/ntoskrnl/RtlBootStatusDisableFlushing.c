/*
 * XREFs of RtlBootStatusDisableFlushing @ 0x1403B6BDC
 * Callers:
 *     PopKsrCallback @ 0x1405D6E40 (PopKsrCallback.c)
 *     PopRecordLongPowerButtonPressDetected @ 0x14082876C (PopRecordLongPowerButtonPressDetected.c)
 *     PopTransitionSystemPowerStateEx @ 0x140A494E8 (PopTransitionSystemPowerStateEx.c)
 *     PopUnlockAfterSleepWorker @ 0x140A4E3A0 (PopUnlockAfterSleepWorker.c)
 * Callees:
 *     ZwFlushBuffersFile @ 0x14041C0C0 (ZwFlushBuffersFile.c)
 */

NTSTATUS __fastcall RtlBootStatusDisableFlushing(char a1)
{
  NTSTATUS result; // eax
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+20h] [rbp-18h] BYREF

  IoStatusBlock = 0LL;
  if ( BootStatDisableFlush != a1 )
  {
    BootStatDisableFlush = a1;
    if ( !a1 )
    {
      if ( BootStatFileHandleAcquired )
      {
        if ( BootStatFileHandle )
          return ZwFlushBuffersFile(BootStatFileHandle, &IoStatusBlock);
      }
    }
  }
  return result;
}
