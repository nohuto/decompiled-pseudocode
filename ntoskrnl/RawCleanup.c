/*
 * XREFs of RawCleanup @ 0x1406F3368
 * Callers:
 *     RawDispatch @ 0x1406F2E80 (RawDispatch.c)
 * Callees:
 *     ExReleaseFastMutex @ 0x140262170 (ExReleaseFastMutex.c)
 *     ExAcquireFastMutex @ 0x140262DC0 (ExAcquireFastMutex.c)
 *     IofCompleteRequest @ 0x14027B290 (IofCompleteRequest.c)
 *     RawInitiateDeleteVolume @ 0x14028DD58 (RawInitiateDeleteVolume.c)
 *     IoRemoveLinkShareAccessEx @ 0x1406F3450 (IoRemoveLinkShareAccessEx.c)
 *     FsRtlNotifyVolumeEvent @ 0x1408722A0 (FsRtlNotifyVolumeEvent.c)
 */

__int64 __fastcall RawCleanup(PFSRTL_ADVANCED_FCB_HEADER AdvancedHeader, PIRP Irp, __int64 a3)
{
  struct _FAST_MUTEX *p_Resource; // r14
  char v7; // bp

  p_Resource = (struct _FAST_MUTEX *)&AdvancedHeader[2].Resource;
  v7 = 0;
  ExAcquireFastMutex((PFAST_MUTEX)&AdvancedHeader[2].Resource);
  IoRemoveLinkShareAccessEx(*(_QWORD *)(a3 + 48), (char *)&AdvancedHeader[1].Resource + 4, 0LL, 0LL);
  if ( *(_QWORD *)(a3 + 48) == *(_QWORD *)&AdvancedHeader[1].BypassIoOpenCount )
  {
    *(_DWORD *)&AdvancedHeader[1].NodeTypeCode &= ~1u;
    v7 = 1;
    *(_QWORD *)&AdvancedHeader[1].BypassIoOpenCount = 0LL;
  }
  if ( *(void **)(a3 + 48) == AdvancedHeader[1].AePushLock )
  {
    AdvancedHeader[1].AePushLock = 0LL;
    RawInitiateDeleteVolume(AdvancedHeader, 1, 0);
  }
  ExReleaseFastMutex(p_Resource);
  if ( v7 )
    FsRtlNotifyVolumeEvent(*(PFILE_OBJECT *)(a3 + 48), 5u);
  Irp->IoStatus.Status = 0;
  IofCompleteRequest(Irp, 1);
  return 0LL;
}
