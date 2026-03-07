__int64 __fastcall DpiFdoWaitConnectionChangeComplete(__int64 a1)
{
  unsigned int v1; // ebx
  __int64 v2; // rdi
  bool v3; // si
  NTSTATUS v4; // eax
  __int64 v5; // rdx
  __int64 v6; // rcx
  PVOID Object[3]; // [rsp+40h] [rbp-18h] BYREF

  v1 = 0;
  if ( !a1 || (v2 = *(_QWORD *)(a1 + 64)) == 0 || *(_DWORD *)(v2 + 16) != 1953656900 || *(_DWORD *)(v2 + 20) != 2 )
  {
    v5 = -1073741811LL;
    v1 = -1073741811;
    v6 = 2LL;
    goto LABEL_13;
  }
  v3 = 1;
  v4 = IoAcquireRemoveLockEx((PIO_REMOVE_LOCK)(v2 + 64), DxgkQueryConnectionChanges, File, 1u, 0x20u);
  if ( v4 < 0 )
  {
    v5 = v4;
    v6 = 3LL;
LABEL_13:
    WdLogSingleEntry1(v6, v5);
    return v1;
  }
  if ( !DxgkIsAdapterCoreSyncAcquired(*(DXGADAPTER **)(v2 + 3912), 1) )
    v3 = ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(v2 + 168)) != 0;
  IoReleaseRemoveLockEx((PIO_REMOVE_LOCK)(v2 + 64), DxgkQueryConnectionChanges, 0x20u);
  if ( v3 )
  {
    v1 = -1073741811;
    WdLogSingleEntry3(0LL, 275LL, 21LL, -1073741811LL);
  }
  else
  {
    Object[0] = (PVOID)(v2 + 3544);
    Object[1] = (PVOID)(v2 + 3712);
    return (unsigned int)KeWaitForMultipleObjects(2u, Object, WaitAll, Executive, 0, 0, 0LL, 0LL);
  }
  return v1;
}
