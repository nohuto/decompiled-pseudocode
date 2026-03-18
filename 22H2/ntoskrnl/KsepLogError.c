/*
 * XREFs of KsepLogError @ 0x14020A5CC
 * Callers:
 *     KseKPSOHookDriverTargeted @ 0x140582580 (KseKPSOHookDriverTargeted.c)
 *     KseAddHardwareId @ 0x140693960 (KseAddHardwareId.c)
 *     KsepGetShimCallbacksForDriver @ 0x140693B60 (KsepGetShimCallbacksForDriver.c)
 *     KsepEngineGetShimsFromRegistry @ 0x1406945C4 (KsepEngineGetShimsFromRegistry.c)
 *     KsepSdbMapToMemory @ 0x140694E7C (KsepSdbMapToMemory.c)
 *     KsepShimDatabaseTime @ 0x14080A84C (KsepShimDatabaseTime.c)
 *     KseRegisterShimEx @ 0x14080ACB0 (KseRegisterShimEx.c)
 *     KsepResolveApplicableShimsForDriver @ 0x14085BCB0 (KsepResolveApplicableShimsForDriver.c)
 *     KsepApplyShimsToDriver @ 0x14085E728 (KsepApplyShimsToDriver.c)
 *     KsepSdbBootInitialize @ 0x140861F18 (KsepSdbBootInitialize.c)
 *     KseUnregisterShim @ 0x140977150 (KseUnregisterShim.c)
 *     KsepDeletePatchSdb @ 0x1409775A4 (KsepDeletePatchSdb.c)
 *     KseVersionLieInitialize @ 0x140B3970C (KseVersionLieInitialize.c)
 *     KseInitialize @ 0x140B4CCCC (KseInitialize.c)
 *     KsepEngineReadFlags @ 0x140B64DDC (KsepEngineReadFlags.c)
 *     KsepMatchInitMachineInfo @ 0x140B64EEC (KsepMatchInitMachineInfo.c)
 *     KseShimDatabaseBootInitialize @ 0x140B74000 (KseShimDatabaseBootInitialize.c)
 * Callees:
 *     KsepLogEtwMessage @ 0x14020A5FC (KsepLogEtwMessage.c)
 */

__int64 KsepLogError(__int64 a1, __int64 a2, ...)
{
  va_list va; // [rsp+50h] [rbp+18h] BYREF

  va_start(va, a2);
  return KsepLogEtwMessage(a1, 0LL, a2, (__int64 *)va);
}
