/*
 * XREFs of ZwDeleteKey @ 0x1403FC000
 * Callers:
 *     BiZwDeleteKey @ 0x14038D198 (BiZwDeleteKey.c)
 *     VrpDestroyNamespaceNode @ 0x1405D3260 (VrpDestroyNamespaceNode.c)
 *     _RegRtlDeleteKeyTransacted @ 0x140766F18 (_RegRtlDeleteKeyTransacted.c)
 *     NtEnableLastKnownGood @ 0x14077C5B0 (NtEnableLastKnownGood.c)
 *     ExpSetPendingUILanguage @ 0x14078C230 (ExpSetPendingUILanguage.c)
 *     IopCopyBootLogRegistryToFile @ 0x140791828 (IopCopyBootLogRegistryToFile.c)
 *     IoReportDetectedDevice @ 0x1407AEB10 (IoReportDetectedDevice.c)
 *     CmDeleteKeyRecursive @ 0x140876EF0 (CmDeleteKeyRecursive.c)
 *     CmpMoveBiosAliasTable @ 0x140877D78 (CmpMoveBiosAliasTable.c)
 *     CmpDoReDoRecord @ 0x140882118 (CmpDoReDoRecord.c)
 *     EtwpRemoveMicroarchitecturalPmcFromPmcGroup @ 0x14093AD78 (EtwpRemoveMicroarchitecturalPmcFromPmcGroup.c)
 *     PiLastGoodCopyKeyContents @ 0x140A70008 (PiLastGoodCopyKeyContents.c)
 *     MfgInitSystem @ 0x140A74924 (MfgInitSystem.c)
 *     PiLastGoodRevertLastKnownDirectory @ 0x140A918F0 (PiLastGoodRevertLastKnownDirectory.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwDeleteKey(HANDLE KeyHandle)
{
  _disable();
  __readeflags();
  return KiServiceInternal(KeyHandle);
}
