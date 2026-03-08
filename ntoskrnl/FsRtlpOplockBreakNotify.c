/*
 * XREFs of FsRtlpOplockBreakNotify @ 0x14093B518
 * Callers:
 *     FsRtlpOplockFsctrlInternal @ 0x1406B3240 (FsRtlpOplockFsctrlInternal.c)
 * Callees:
 *     FsRtlpWaitOnIrp @ 0x140201018 (FsRtlpWaitOnIrp.c)
 *     ExReleaseFastMutexUnsafe @ 0x14023FBC0 (ExReleaseFastMutexUnsafe.c)
 *     ExAcquireFastMutexUnsafe @ 0x14023FC30 (ExAcquireFastMutexUnsafe.c)
 *     IofCompleteRequest @ 0x14027B290 (IofCompleteRequest.c)
 *     FsRtlpModifyThreadPriorities @ 0x1402ECCB4 (FsRtlpModifyThreadPriorities.c)
 *     FsRtlpOplockSendModernAppTermination @ 0x1402EF888 (FsRtlpOplockSendModernAppTermination.c)
 */

__int64 __fastcall FsRtlpOplockBreakNotify(__int64 a1, __int64 a2, IRP *a3)
{
  char v6; // si
  int v7; // ecx
  unsigned int v8; // edi

  if ( !a1 )
  {
    a3->IoStatus.Status = 0;
    IofCompleteRequest(a3, 1);
    return 0LL;
  }
  ExAcquireFastMutexUnsafe(*(PFAST_MUTEX *)(a1 + 152));
  v6 = 1;
  v7 = *(_DWORD *)(a1 + 144);
  if ( (v7 & 0x1F00F00) != 0 || *(_QWORD *)(a1 + 72) != a1 + 72 || (v7 & 0x20000) != 0 )
  {
    if ( (v7 & 0x80u) == 0 )
    {
      v6 = 0;
      a3->IoStatus.Status = 0;
      FsRtlpModifyThreadPriorities(a1, 0LL, 1);
      FsRtlpOplockSendModernAppTermination(a1, 0LL);
      v8 = FsRtlpWaitOnIrp(
             a1,
             (__int64)a3,
             0LL,
             (__int64)FsRtlpNotifyOplockBreakComplete,
             0LL,
             0LL,
             0,
             0LL,
             0LL,
             0LL,
             0LL);
      goto LABEL_10;
    }
    *(_DWORD *)(a1 + 144) = *(_DWORD *)(a1 + 144) & 0x20 | 1;
    *(_QWORD *)(a1 + 8) = 0LL;
  }
  a3->IoStatus.Status = 0;
  IofCompleteRequest(a3, 1);
  v8 = 0;
LABEL_10:
  if ( v6 )
    ExReleaseFastMutexUnsafe(*(PFAST_MUTEX *)(a1 + 152));
  return v8;
}
