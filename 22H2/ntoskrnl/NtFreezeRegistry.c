/*
 * XREFs of NtFreezeRegistry @ 0x140868510
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1403CFD60 (__security_check_cookie.c)
 *     CmpDetachFromRegistryProcess @ 0x1405F613C (CmpDetachFromRegistryProcess.c)
 *     CmpAttachToRegistryProcess @ 0x1405F6390 (CmpAttachToRegistryProcess.c)
 *     SeSinglePrivilegeCheck @ 0x140627A60 (SeSinglePrivilegeCheck.c)
 *     CmFreezeRegistry @ 0x140872140 (CmFreezeRegistry.c)
 */

NTSTATUS __cdecl NtFreezeRegistry(ULONG TimeOutInSeconds)
{
  NTSTATUS v2; // ebx
  __int64 v3; // rdx
  __int64 v4; // r8
  _DWORD *v5; // r9
  _OWORD v7[3]; // [rsp+20h] [rbp-48h] BYREF

  memset(v7, 0, sizeof(v7));
  if ( TimeOutInSeconds > 0x384 )
    return -1073741811;
  if ( !SeSinglePrivilegeCheck(SeBackupPrivilege, KeGetCurrentThread()->PreviousMode) )
    return -1073741727;
  CmpAttachToRegistryProcess((__int64)v7, v3, v4, v5);
  v2 = CmFreezeRegistry(TimeOutInSeconds);
  CmpDetachFromRegistryProcess((__int64)v7);
  return v2;
}
