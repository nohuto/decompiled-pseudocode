/*
 * XREFs of FsRtlDeleteKeyFromTunnelCache @ 0x1406687A0
 * Callers:
 *     <none>
 * Callees:
 *     KeReleaseGuardedMutex @ 0x1402C9310 (KeReleaseGuardedMutex.c)
 *     ExAcquireFastMutex @ 0x1402CA770 (ExAcquireFastMutex.c)
 *     RtlRealSuccessor @ 0x1402F80C0 (RtlRealSuccessor.c)
 *     FsRtlRemoveNodeFromTunnel @ 0x1402F815C (FsRtlRemoveNodeFromTunnel.c)
 *     FsRtlEmptyFreePoolList @ 0x1402F8264 (FsRtlEmptyFreePoolList.c)
 */

void __stdcall FsRtlDeleteKeyFromTunnelCache(TUNNEL *Cache, ULONGLONG DirectoryKey)
{
  _RTL_SPLAY_LINKS *v2; // rbx
  PRTL_SPLAY_LINKS v5; // rax
  PRTL_SPLAY_LINKS v6; // rbp
  _QWORD *v7[3]; // [rsp+20h] [rbp-18h] BYREF
  char v8; // [rsp+50h] [rbp+18h] BYREF

  v2 = 0LL;
  v8 = 1;
  if ( !TunnelMaxEntries )
    return;
  v7[1] = v7;
  v7[0] = v7;
  ExAcquireFastMutex(&Cache->Mutex);
  v5 = Cache->Cache;
  while ( v5 )
  {
    if ( v5[2].Parent > (_RTL_SPLAY_LINKS *)DirectoryKey )
    {
LABEL_4:
      v5 = v5->LeftChild;
    }
    else
    {
      if ( v5[2].Parent >= (_RTL_SPLAY_LINKS *)DirectoryKey )
      {
        v2 = v5;
        goto LABEL_4;
      }
      if ( v2 )
        goto LABEL_11;
      v5 = v5->RightChild;
    }
  }
  if ( !v2 )
    goto LABEL_13;
  do
  {
LABEL_11:
    v6 = RtlRealSuccessor(v2);
    if ( v2[2].Parent != (_RTL_SPLAY_LINKS *)DirectoryKey )
      break;
    FsRtlRemoveNodeFromTunnel((__int64)Cache, v2, (__int64)v7, &v8);
    v2 = v6;
  }
  while ( v6 );
LABEL_13:
  KeReleaseGuardedMutex(&Cache->Mutex);
  FsRtlEmptyFreePoolList(v7);
}
