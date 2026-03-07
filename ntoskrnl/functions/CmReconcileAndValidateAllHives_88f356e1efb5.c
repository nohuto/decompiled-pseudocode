__int64 CmReconcileAndValidateAllHives()
{
  __int64 v0; // rdx
  __int64 v1; // rcx
  __int64 v2; // r8
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  __int128 v7; // [rsp+20h] [rbp-58h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+30h] [rbp-48h] BYREF

  v7 = 0LL;
  memset(&ApcState, 0, sizeof(ApcState));
  CmpInitializeThreadInfo((__int64)&v7);
  if ( (unsigned __int8)CmpAcquireShutdownRundown(v1, v0, v2) )
  {
    CmpAttachToRegistryProcess(&ApcState);
    CmpDoFlushAll(0xCu);
    CmpDetachFromRegistryProcess(&ApcState);
    CmpReleaseShutdownRundown(v4, v3, v5);
  }
  CmCleanupThreadInfo((__int64 *)&v7);
  return 0LL;
}
