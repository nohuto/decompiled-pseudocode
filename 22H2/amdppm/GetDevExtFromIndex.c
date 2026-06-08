/*
 * XREFs of GetDevExtFromIndex @ 0x1C0001B10
 * Callers:
 *     InitCoreProcessorSetAffinity @ 0x1C001F9AC (InitCoreProcessorSetAffinity.c)
 *     InitEnergyCountersOnCurrentProcessor @ 0x1C001FA50 (InitEnergyCountersOnCurrentProcessor.c)
 *     UnInitEnergyCountersOnCurrentProcessor @ 0x1C001FC30 (UnInitEnergyCountersOnCurrentProcessor.c)
 *     GetLpIndex @ 0x1C00225D0 (GetLpIndex.c)
 *     ValidateCoordinatedLpiDependenciesProcessor @ 0x1C002B78C (ValidateCoordinatedLpiDependenciesProcessor.c)
 *     DeregisterKernelIdleDomains @ 0x1C002CCEC (DeregisterKernelIdleDomains.c)
 *     RegisterKernelIdleDomains @ 0x1C002FB7C (RegisterKernelIdleDomains.c)
 *     PepNotifyCoordinatedLpiStates @ 0x1C003284C (PepNotifyCoordinatedLpiStates.c)
 *     LpiEnumerateDependencies @ 0x1C00361F8 (LpiEnumerateDependencies.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GetDevExtFromIndex(unsigned int a1)
{
  return *((_QWORD *)&WPP_MAIN_CB.Queue.ListEntry.Blink->Flink + a1);
}
