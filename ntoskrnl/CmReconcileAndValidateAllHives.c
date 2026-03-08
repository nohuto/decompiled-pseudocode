/*
 * XREFs of CmReconcileAndValidateAllHives @ 0x140A105DC
 * Callers:
 *     NtSetSystemInformation @ 0x1407E1F30 (NtSetSystemInformation.c)
 * Callees:
 *     CmpDoFlushAll @ 0x140243DB8 (CmpDoFlushAll.c)
 *     CmCleanupThreadInfo @ 0x140263740 (CmCleanupThreadInfo.c)
 *     CmpInitializeThreadInfo @ 0x140263760 (CmpInitializeThreadInfo.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     CmpAcquireShutdownRundown @ 0x140AF23A0 (CmpAcquireShutdownRundown.c)
 *     CmpReleaseShutdownRundown @ 0x140AF23F0 (CmpReleaseShutdownRundown.c)
 *     CmpAttachToRegistryProcess @ 0x140AF26E0 (CmpAttachToRegistryProcess.c)
 *     CmpDetachFromRegistryProcess @ 0x140AF2710 (CmpDetachFromRegistryProcess.c)
 */

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
