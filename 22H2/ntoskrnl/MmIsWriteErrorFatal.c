/*
 * XREFs of MmIsWriteErrorFatal @ 0x140255188
 * Callers:
 *     MiWriteComplete @ 0x1402549D0 (MiWriteComplete.c)
 *     CcIsFatalWriteError @ 0x14031B100 (CcIsFatalWriteError.c)
 *     MiFlushControlArea @ 0x1405296D4 (MiFlushControlArea.c)
 *     FsRtlLogCcFlushError @ 0x14088AE40 (FsRtlLogCcFlushError.c)
 * Callees:
 *     FsRtlIsTotalDeviceFailure @ 0x140255200 (FsRtlIsTotalDeviceFailure.c)
 */

_BOOL8 __fastcall MmIsWriteErrorFatal(int a1, int a2, NTSTATUS a3)
{
  if ( a3 != -1073741740 && a1 && a2 || a3 == -1073741672 || a3 == -1073741566 || a3 == -1073741202 || a3 == -1073741810 )
    return 1LL;
  if ( a3 == -1073741667 )
  {
    if ( !a1 || !a2 )
      return 1LL;
  }
  else if ( a3 == -1073741662 && a1 )
  {
    return 1LL;
  }
  return !FsRtlIsTotalDeviceFailure(a3);
}
