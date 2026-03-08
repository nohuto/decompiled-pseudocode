/*
 * XREFs of ViIovPluginUnload @ 0x1405CFAC0
 * Callers:
 *     <none>
 * Callees:
 *     IopUpdateFunctionPointers @ 0x140553FEC (IopUpdateFunctionPointers.c)
 *     IovUtilUninitialize @ 0x140ACFE00 (IovUtilUninitialize.c)
 *     VfMajorInit @ 0x140ACFFB4 (VfMajorInit.c)
 *     VfIrpDatabaseUninitialize @ 0x140ADEA84 (VfIrpDatabaseUninitialize.c)
 */

__int64 ViIovPluginUnload()
{
  __int64 result; // rax

  LODWORD(VfRuleClasses) = VfRuleClasses | 0xFFFFFFEF;
  IopUpdateFunctionPointers(1, 0, 0);
  _InterlockedExchange(&IovpDisabledWithoutReboot, 1);
  IovUtilUninitialize();
  result = VfMajorInit();
  if ( !ViPacketCount )
    result = VfIrpDatabaseUninitialize();
  _InterlockedAnd(&ExpPoolFlags, 0xFFFFFFEF);
  return result;
}
