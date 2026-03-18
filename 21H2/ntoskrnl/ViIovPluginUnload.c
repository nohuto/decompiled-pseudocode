/*
 * XREFs of ViIovPluginUnload @ 0x140601C50
 * Callers:
 *     <none>
 * Callees:
 *     IopUpdateFunctionPointers @ 0x14055712C (IopUpdateFunctionPointers.c)
 *     IovUtilUninitialize @ 0x140A92410 (IovUtilUninitialize.c)
 *     VfMajorInit @ 0x140A925C4 (VfMajorInit.c)
 *     VfIrpDatabaseUninitialize @ 0x140AA5D64 (VfIrpDatabaseUninitialize.c)
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
