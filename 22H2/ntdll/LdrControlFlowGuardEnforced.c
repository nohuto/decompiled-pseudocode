/*
 * XREFs of LdrControlFlowGuardEnforced @ 0x180033520
 * Callers:
 *     LdrEnsureMrdataHeapExists @ 0x18000787C (LdrEnsureMrdataHeapExists.c)
 *     LdrProtectMrdataHeap @ 0x18000EED4 (LdrProtectMrdataHeap.c)
 *     LdrpCfgProcessLoadConfig @ 0x18000FDB4 (LdrpCfgProcessLoadConfig.c)
 *     LdrpResolveProcedureAddress @ 0x1800303F4 (LdrpResolveProcedureAddress.c)
 *     LdrpResolveForwarder @ 0x1800332E8 (LdrpResolveForwarder.c)
 *     LdrControlFlowGuardEnforcedWithExportSuppression @ 0x1800334E8 (LdrControlFlowGuardEnforcedWithExportSuppression.c)
 *     RtlGuardGrantSuppressedCallAccess @ 0x180053EB8 (RtlGuardGrantSuppressedCallAccess.c)
 *     RtlDeleteFunctionTable @ 0x180068EB0 (RtlDeleteFunctionTable.c)
 *     RtlAddFunctionTable @ 0x180069090 (RtlAddFunctionTable.c)
 *     RtlDeleteGrowableFunctionTable @ 0x180069380 (RtlDeleteGrowableFunctionTable.c)
 *     RtlInstallFunctionTableCallback @ 0x1800698D0 (RtlInstallFunctionTableCallback.c)
 *     RtlAddGrowableFunctionTable @ 0x180069BE0 (RtlAddGrowableFunctionTable.c)
 *     RtlGuardRestoreContext @ 0x18006EDB0 (RtlGuardRestoreContext.c)
 *     RtlGuardCheckLongJumpTarget @ 0x18006EEC0 (RtlGuardCheckLongJumpTarget.c)
 *     RtlGuardCheckExceptionHandler @ 0x18006EFF0 (RtlGuardCheckExceptionHandler.c)
 *     RtlGuardCheckImageBase @ 0x180075B68 (RtlGuardCheckImageBase.c)
 *     RtlpCallVectoredHandlers @ 0x180079A44 (RtlpCallVectoredHandlers.c)
 *     RtlSetProtectedPolicy @ 0x180081520 (RtlSetProtectedPolicy.c)
 *     RtlpAddVectoredHandler @ 0x180082080 (RtlpAddVectoredHandler.c)
 *     RtlpRemoveVectoredHandler @ 0x180082870 (RtlpRemoveVectoredHandler.c)
 *     LdrpInitializeExecutionOptions @ 0x1800D0F1C (LdrpInitializeExecutionOptions.c)
 *     RtlGrowFunctionTable @ 0x1800E0A60 (RtlGrowFunctionTable.c)
 *     RtlRemoteCall @ 0x1800FEF80 (RtlRemoteCall.c)
 *     RtlpFreeReadOnlyHeap @ 0x18010B120 (RtlpFreeReadOnlyHeap.c)
 * Callees:
 *     <none>
 */

BOOLEAN LdrControlFlowGuardEnforced(void)
{
  BOOLEAN result; // al

  if ( !LdrSystemDllInitBlock.CfgBitMap )
    return 0;
  result = 1;
  if ( (LdrSystemDllInitBlock.Flags & 1) != 0 )
    return 0;
  return result;
}
