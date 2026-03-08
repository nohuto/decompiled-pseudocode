/*
 * XREFs of FsRtlNotifyInitializeSync @ 0x1407760A0
 * Callers:
 *     FsRtlNotifyFilterReportChangeLiteEx @ 0x140703B40 (FsRtlNotifyFilterReportChangeLiteEx.c)
 *     FsRtlNotifyFilterChangeDirectoryLite @ 0x140775CA0 (FsRtlNotifyFilterChangeDirectoryLite.c)
 * Callees:
 *     KeInitializeEvent @ 0x14030F330 (KeInitializeEvent.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 */

void __stdcall FsRtlNotifyInitializeSync(PNOTIFY_SYNC *NotifySync)
{
  __int64 Pool2; // rbx

  *NotifySync = 0LL;
  Pool2 = ExAllocatePool2(98LL, 72LL, 1316115270LL);
  *(_QWORD *)(Pool2 + 8) = 0LL;
  *(_DWORD *)(Pool2 + 16) = 0;
  *(_DWORD *)Pool2 = 1;
  KeInitializeEvent((PRKEVENT)(Pool2 + 24), SynchronizationEvent, 0);
  *(_QWORD *)(Pool2 + 56) = 0LL;
  *(_DWORD *)(Pool2 + 64) = 0;
  *NotifySync = (PNOTIFY_SYNC)Pool2;
}
