/*
 * XREFs of NtThawRegistry @ 0x140A0C4A0
 * Callers:
 *     <none>
 * Callees:
 *     CmCleanupThreadInfo @ 0x140263740 (CmCleanupThreadInfo.c)
 *     CmpInitializeThreadInfo @ 0x140263760 (CmpInitializeThreadInfo.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     SeSinglePrivilegeCheck @ 0x1407C9A00 (SeSinglePrivilegeCheck.c)
 *     CmThawRegistry @ 0x140A10894 (CmThawRegistry.c)
 *     CmpAttachToRegistryProcess @ 0x140AF26E0 (CmpAttachToRegistryProcess.c)
 *     CmpDetachFromRegistryProcess @ 0x140AF2710 (CmpDetachFromRegistryProcess.c)
 */

__int64 NtThawRegistry()
{
  unsigned int v0; // ebx
  __int128 v2; // [rsp+20h] [rbp-58h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+30h] [rbp-48h] BYREF

  v2 = 0LL;
  memset(&ApcState, 0, sizeof(ApcState));
  CmpInitializeThreadInfo((__int64)&v2);
  if ( SeSinglePrivilegeCheck(SeBackupPrivilege, KeGetCurrentThread()->PreviousMode) )
  {
    CmpAttachToRegistryProcess(&ApcState);
    v0 = CmThawRegistry();
    CmpDetachFromRegistryProcess(&ApcState);
  }
  else
  {
    v0 = -1073741727;
  }
  CmCleanupThreadInfo((__int64 *)&v2);
  return v0;
}
