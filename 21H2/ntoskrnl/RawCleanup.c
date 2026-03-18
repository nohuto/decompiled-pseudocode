/*
 * XREFs of RawCleanup @ 0x14074BE9C
 * Callers:
 *     RawDispatch @ 0x14074B9B0 (RawDispatch.c)
 * Callees:
 *     ExAcquireFastMutex @ 0x14028A160 (ExAcquireFastMutex.c)
 *     KeReleaseGuardedMutex @ 0x1402AF9B0 (KeReleaseGuardedMutex.c)
 *     IofCompleteRequest @ 0x1402B59A0 (IofCompleteRequest.c)
 *     RawInitiateDeleteVolume @ 0x1402D2BD8 (RawInitiateDeleteVolume.c)
 *     IoRemoveLinkShareAccessEx @ 0x14074BF60 (IoRemoveLinkShareAccessEx.c)
 *     FsRtlNotifyVolumeEvent @ 0x1407FC020 (FsRtlNotifyVolumeEvent.c)
 */

__int64 __fastcall RawCleanup(PFSRTL_ADVANCED_FCB_HEADER AdvancedHeader, PIRP Irp, __int64 a3)
{
  struct _FAST_MUTEX *p_Resource; // r14
  char v7; // bp
  void *v8; // rax

  p_Resource = (struct _FAST_MUTEX *)&AdvancedHeader[2].Resource;
  v7 = 0;
  ExAcquireFastMutex((PFAST_MUTEX)&AdvancedHeader[2].Resource);
  IoRemoveLinkShareAccessEx(*(_QWORD *)(a3 + 48), (char *)&AdvancedHeader[1].Resource + 4, 0LL, 0LL);
  v8 = *(void **)(a3 + 48);
  if ( v8 == *(void **)&AdvancedHeader[1].BypassIoOpenCount )
  {
    *(_DWORD *)&AdvancedHeader[1].NodeTypeCode &= ~1u;
    v7 = 1;
    *(_QWORD *)&AdvancedHeader[1].BypassIoOpenCount = 0LL;
    v8 = *(void **)(a3 + 48);
  }
  if ( v8 == AdvancedHeader[1].AePushLock )
  {
    AdvancedHeader[1].AePushLock = 0LL;
    RawInitiateDeleteVolume(AdvancedHeader, 1, 0);
  }
  KeReleaseGuardedMutex(p_Resource);
  if ( v7 )
    FsRtlNotifyVolumeEvent(*(PFILE_OBJECT *)(a3 + 48), 5u);
  Irp->IoStatus.Status = 0;
  IofCompleteRequest(Irp, 1);
  return 0LL;
}
