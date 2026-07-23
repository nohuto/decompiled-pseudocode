/*
 * XREFs of NtThawRegistry @ 0x140869A30
 * Callers:
 *     <none>
 * Callees:
 *     KiUnstackDetachProcess @ 0x140206FC0 (KiUnstackDetachProcess.c)
 *     __security_check_cookie @ 0x1403CFD60 (__security_check_cookie.c)
 *     CmpAttachToRegistryProcess @ 0x1405F6390 (CmpAttachToRegistryProcess.c)
 *     SeSinglePrivilegeCheck @ 0x140627A60 (SeSinglePrivilegeCheck.c)
 *     CmThawRegistry @ 0x140872380 (CmThawRegistry.c)
 */

NTSTATUS NtThawRegistry(void)
{
  __int64 v0; // rdx
  __int64 v1; // r8
  _DWORD *v2; // r9
  NTSTATUS v3; // ebx
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  _OWORD v9[3]; // [rsp+20h] [rbp-48h] BYREF

  memset(v9, 0, sizeof(v9));
  if ( !SeSinglePrivilegeCheck(SeBackupPrivilege, KeGetCurrentThread()->PreviousMode) )
    return -1073741727;
  CmpAttachToRegistryProcess((__int64)v9, v0, v1, v2);
  v3 = CmThawRegistry(v5, v4, v6, v7, *(_QWORD *)&v9[0], *((_QWORD *)&v9[0] + 1));
  KiUnstackDetachProcess((__int64)v9, 0);
  return v3;
}
