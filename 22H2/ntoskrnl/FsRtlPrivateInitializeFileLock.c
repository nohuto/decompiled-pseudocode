/*
 * XREFs of FsRtlPrivateInitializeFileLock @ 0x140328B78
 * Callers:
 *     FsRtlPrivateLock @ 0x1402D8B40 (FsRtlPrivateLock.c)
 * Callees:
 *     ExAllocateFromNPagedLookasideList @ 0x140202C74 (ExAllocateFromNPagedLookasideList.c)
 *     KeReleaseGuardedMutex @ 0x1402C9310 (KeReleaseGuardedMutex.c)
 *     ExAcquireFastMutex @ 0x1402CA770 (ExAcquireFastMutex.c)
 *     RtlRaiseStatus @ 0x1402F1CB0 (RtlRaiseStatus.c)
 */

char __fastcall FsRtlPrivateInitializeFileLock(_QWORD *a1, char a2)
{
  char v4; // bl
  _QWORD *v5; // rax

  ExAcquireFastMutex(&FsRtlCreateLockInfo);
  v4 = 0;
  if ( a1[3] )
    goto LABEL_4;
  v5 = ExAllocateFromNPagedLookasideList(&FsRtlLockInfoLookasideList);
  if ( v5 )
  {
    *v5 = -1LL;
    v5[3] = 0LL;
    v5[4] = 0LL;
    v5[5] = 0LL;
    v5[6] = 0LL;
    v5[7] = 0LL;
    v5[1] = *a1;
    v5[2] = a1[1];
    a1[7] = 0LL;
    a1[10] = 0LL;
    a1[3] = v5;
LABEL_4:
    v4 = 1;
    goto LABEL_7;
  }
  if ( !a2 )
    RtlRaiseStatus(-1073741670);
LABEL_7:
  KeReleaseGuardedMutex(&FsRtlCreateLockInfo);
  return v4;
}
