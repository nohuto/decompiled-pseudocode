/*
 * XREFs of KsepLogError @ 0x140303450
 * Callers:
 *     KseKPSOHookDriverTargeted @ 0x140580050 (KseKPSOHookDriverTargeted.c)
 *     KseAddHardwareId @ 0x14079CB80 (KseAddHardwareId.c)
 *     KsepSdbMapToMemory @ 0x14079D24C (KsepSdbMapToMemory.c)
 *     KsepGetShimCallbacksForDriver @ 0x14079D47C (KsepGetShimCallbacksForDriver.c)
 *     KsepEngineGetShimsFromRegistry @ 0x14079E958 (KsepEngineGetShimsFromRegistry.c)
 *     KsepResolveApplicableShimsForDriver @ 0x140800708 (KsepResolveApplicableShimsForDriver.c)
 *     KsepApplyShimsToDriver @ 0x140800924 (KsepApplyShimsToDriver.c)
 *     KseRegisterShimEx @ 0x140800EE0 (KseRegisterShimEx.c)
 *     KsepShimDatabaseTime @ 0x1408019BC (KsepShimDatabaseTime.c)
 *     KsepSdbBootInitialize @ 0x14085E0A8 (KsepSdbBootInitialize.c)
 *     KseUnregisterShim @ 0x1409740B0 (KseUnregisterShim.c)
 *     KsepDeletePatchSdb @ 0x140974504 (KsepDeletePatchSdb.c)
 *     KsepEngineReadFlags @ 0x140B34F48 (KsepEngineReadFlags.c)
 *     KsepMatchInitMachineInfo @ 0x140B35058 (KsepMatchInitMachineInfo.c)
 *     KseVersionLieInitialize @ 0x140B35488 (KseVersionLieInitialize.c)
 *     KseInitialize @ 0x140B3E688 (KseInitialize.c)
 *     KseShimDatabaseBootInitialize @ 0x140B6FF30 (KseShimDatabaseBootInitialize.c)
 * Callees:
 *     KsepLogEtwMessage @ 0x140303480 (KsepLogEtwMessage.c)
 */

__int64 KsepLogError(__int64 a1, __int64 a2, ...)
{
  va_list va; // [rsp+50h] [rbp+18h] BYREF

  va_start(va, a2);
  return KsepLogEtwMessage(a1, 0LL, a2, (__int64 *)va);
}
