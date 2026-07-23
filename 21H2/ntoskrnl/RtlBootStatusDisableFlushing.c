/*
 * XREFs of RtlBootStatusDisableFlushing @ 0x1403A7B50
 * Callers:
 *     PopRecordLongPowerButtonPressDetected @ 0x140791B94 (PopRecordLongPowerButtonPressDetected.c)
 *     PopTransitionSystemPowerStateEx @ 0x1409920F4 (PopTransitionSystemPowerStateEx.c)
 *     PopUnlockAfterSleepWorker @ 0x140995FE0 (PopUnlockAfterSleepWorker.c)
 * Callees:
 *     ZwFlushBuffersFile @ 0x1403FAEE0 (ZwFlushBuffersFile.c)
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
