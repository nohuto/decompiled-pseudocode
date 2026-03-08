/*
 * XREFs of MmIsWriteErrorFatal @ 0x140212D9C
 * Callers:
 *     MiWriteComplete @ 0x1402126E0 (MiWriteComplete.c)
 *     CcIsFatalWriteError @ 0x1402EFE78 (CcIsFatalWriteError.c)
 *     MiFlushControlArea @ 0x1406220F4 (MiFlushControlArea.c)
 *     FsRtlLogCcFlushError @ 0x14093A170 (FsRtlLogCcFlushError.c)
 * Callees:
 *     FsRtlIsTotalDeviceFailure @ 0x140212E10 (FsRtlIsTotalDeviceFailure.c)
 */

_BOOL8 __fastcall MmIsWriteErrorFatal(int a1, int a2, NTSTATUS a3)
{
  if ( a3 != -1073741740 && (a1 && a2 || a3 == -1073741672 || a3 == -1073741566 || a3 == -1073741202)
    || a3 == -1073741810 )
  {
    return 1LL;
  }
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
