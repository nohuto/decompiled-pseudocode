void __stdcall FsRtlDeleteKeyFromTunnelCache(TUNNEL *Cache, ULONGLONG DirectoryKey)
{
  RTL_SPLAY_LINKS *v2; // rbx
  PRTL_SPLAY_LINKS v5; // rax
  PRTL_SPLAY_LINKS v6; // rbp
  _QWORD *v7[3]; // [rsp+20h] [rbp-18h] BYREF
  char v8; // [rsp+50h] [rbp+18h] BYREF

  v2 = 0LL;
  v8 = 1;
  if ( !*(_DWORD *)((char *)&NlsMbCodePageTag + 2) )
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
        goto LABEL_13;
      v5 = v5->RightChild;
    }
  }
  if ( !v2 )
    goto LABEL_11;
  do
  {
LABEL_13:
    v6 = RtlRealSuccessor(v2);
    if ( v2[2].Parent != (_RTL_SPLAY_LINKS *)DirectoryKey )
      break;
    FsRtlRemoveNodeFromTunnel((__int64)Cache, v2, (__int64)v7, &v8);
    v2 = v6;
  }
  while ( v6 );
LABEL_11:
  ExReleaseFastMutex(&Cache->Mutex);
  FsRtlEmptyFreePoolList(v7);
}
