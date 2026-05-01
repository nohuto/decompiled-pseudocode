/*
 * XREFs of ?RmpActivityHostCommitDebtCallback@@YAJPEAU_RM_ACTIVITY_HOST@@PEAXK1@Z @ 0x180033704
 * Callers:
 *     ?AcquireInternalResources@ResourceSet@ExecutionModel@@QEAAJW4Enum@PendType@2@PEA_N@Z @ 0x180016CE0 (-AcquireInternalResources@ResourceSet@ExecutionModel@@QEAAJW4Enum@PendType@2@PEA_N@Z.c)
 *     ?HampHostCheckUpdateEnforcementSettings@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18001A290 (-HampHostCheckUpdateEnforcementSettings@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?RmpActivityHostQueryCommitDebt@@YAJPEAU_RM_ACTIVITY_HOST@@PEA_K@Z @ 0x180021ECC (-RmpActivityHostQueryCommitDebt@@YAJPEAU_RM_ACTIVITY_HOST@@PEA_K@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1800448B0 (__security_check_cookie.c)
 */

__int64 __fastcall RmpActivityHostCommitDebtCallback(struct _RM_ACTIVITY_HOST *a1, void *a2, __int64 a3, _QWORD *a4)
{
  _OWORD ProcessInformation[2]; // [rsp+30h] [rbp-38h] BYREF

  memset(ProcessInformation, 0, sizeof(ProcessInformation));
  LODWORD(ProcessInformation[0]) = 3;
  NtQueryInformationProcess(a2, (PROCESSINFOCLASS)65, ProcessInformation, 0x20u, 0LL);
  *a4 += *((_QWORD *)&ProcessInformation[0] + 1);
  return 0LL;
}
