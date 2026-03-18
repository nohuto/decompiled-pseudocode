/*
 * XREFs of FsRtlNotifyUninitializeSync @ 0x140873A60
 * Callers:
 *     FsRtlNotifyFilterReportChangeLiteEx @ 0x14068A3A0 (FsRtlNotifyFilterReportChangeLiteEx.c)
 *     FsRtlNotifyFilterChangeDirectoryLite @ 0x1407C5090 (FsRtlNotifyFilterChangeDirectoryLite.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140AAF110 (ExFreePoolWithTag.c)
 */

void __stdcall FsRtlNotifyUninitializeSync(PNOTIFY_SYNC *NotifySync)
{
  PNOTIFY_SYNC v2; // rcx

  v2 = *NotifySync;
  if ( v2 )
  {
    ExFreePoolWithTag(v2, 0);
    *NotifySync = 0LL;
  }
}
