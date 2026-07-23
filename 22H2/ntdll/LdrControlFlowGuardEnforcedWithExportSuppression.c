/*
 * XREFs of LdrControlFlowGuardEnforcedWithExportSuppression @ 0x1800334E8
 * Callers:
 *     LdrpCfgProcessLoadConfig @ 0x18000FDB4 (LdrpCfgProcessLoadConfig.c)
 *     LdrResolveDelayLoadedAPI @ 0x180010380 (LdrResolveDelayLoadedAPI.c)
 *     LdrGetProcedureAddressForCaller @ 0x18002FDC0 (LdrGetProcedureAddressForCaller.c)
 *     LdrpWriteBackProtectedDelayLoad @ 0x18005411C (LdrpWriteBackProtectedDelayLoad.c)
 *     RtlValidateUserCallTarget @ 0x180054404 (RtlValidateUserCallTarget.c)
 *     LdrpDoPostSnapWork @ 0x1800544DC (LdrpDoPostSnapWork.c)
 *     RtlGuardRestoreContext @ 0x18006EDB0 (RtlGuardRestoreContext.c)
 *     LdrpInitializeProcess @ 0x1800D1D50 (LdrpInitializeProcess.c)
 *     AvrfMiniLoadDll @ 0x1800DB560 (AvrfMiniLoadDll.c)
 *     RtlpHandleInvalidUserCallTarget @ 0x1800FD7D0 (RtlpHandleInvalidUserCallTarget.c)
 * Callees:
 *     LdrControlFlowGuardEnforced @ 0x180033520 (LdrControlFlowGuardEnforced.c)
 */

_BOOL8 LdrControlFlowGuardEnforcedWithExportSuppression()
{
  int v0; // eax

  LOBYTE(v0) = LdrControlFlowGuardEnforced();
  return v0 && (BYTE5(LdrSystemDllInitBlock.MitigationOptionsMap.Map[0]) & 3) == 3;
}
