/*
 * XREFs of ExpTimeZoneInitSiloState @ 0x1409F8168
 * Callers:
 *     PspInitializeServerSiloDeferred @ 0x1409AD150 (PspInitializeServerSiloDeferred.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140231460 (KeLeaveCriticalRegion.c)
 *     ExReleaseResourceLite @ 0x14023D3F0 (ExReleaseResourceLite.c)
 *     PsGetServerSiloGlobals @ 0x140297574 (PsGetServerSiloGlobals.c)
 *     PsDetachSiloFromCurrentThread @ 0x14031CAB0 (PsDetachSiloFromCurrentThread.c)
 *     PsAttachSiloToCurrentThread @ 0x14031CAD0 (PsAttachSiloToCurrentThread.c)
 *     ZwSetSystemTime @ 0x14041DE00 (ZwSetSystemTime.c)
 *     memset @ 0x140435400 (memset.c)
 *     ExAcquireTimeRefreshLock @ 0x14075FE64 (ExAcquireTimeRefreshLock.c)
 *     ExpRefreshTimeZoneInformation @ 0x140840928 (ExpRefreshTimeZoneInformation.c)
 *     ExpReadTimeZoneInformation @ 0x1409F8038 (ExpReadTimeZoneInformation.c)
 *     ExAllocatePool2 @ 0x140AAF6B0 (ExAllocatePool2.c)
 */

__int64 __fastcall ExpTimeZoneInitSiloState(__int64 a1)
{
  unsigned int v1; // ebx
  _QWORD *ServerSiloGlobals; // rsi
  struct _LIST_ENTRY *v3; // rcx
  struct _LIST_ENTRY *v4; // rdi
  void *Pool2; // rax

  v1 = 0;
  ServerSiloGlobals = PsGetServerSiloGlobals(a1);
  v4 = PsAttachSiloToCurrentThread(v3);
  Pool2 = (void *)ExAllocatePool2(64LL, 1008LL, 1515485253LL);
  ServerSiloGlobals[157] = Pool2;
  if ( Pool2 )
  {
    memset(Pool2, 0, 0x3F0uLL);
    *(_DWORD *)(ServerSiloGlobals[157] + 432LL) = -1;
    ExpReadTimeZoneInformation((__int64)L"ActiveTimeBias", -1, ServerSiloGlobals[157] + 436LL);
    ExAcquireTimeRefreshLock(1u);
    ExpRefreshTimeZoneInformation(1);
    ExReleaseResourceLite(&ExpTimeRefreshLock);
    KeLeaveCriticalRegion();
    ZwSetSystemTime(0LL, 0LL);
  }
  else
  {
    v1 = -1073741670;
  }
  PsDetachSiloFromCurrentThread(v4);
  return v1;
}
