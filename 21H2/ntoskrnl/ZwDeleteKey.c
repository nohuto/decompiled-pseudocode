/*
 * XREFs of ZwDeleteKey @ 0x1403FBE20
 * Callers:
 *     BiZwDeleteKey @ 0x14038D048 (BiZwDeleteKey.c)
 *     VrpDestroyNamespaceNode @ 0x1405D3260 (VrpDestroyNamespaceNode.c)
 *     _RegRtlDeleteKeyTransacted @ 0x140766D58 (_RegRtlDeleteKeyTransacted.c)
 *     NtEnableLastKnownGood @ 0x14077C3F0 (NtEnableLastKnownGood.c)
 *     ExpSetPendingUILanguage @ 0x14078C070 (ExpSetPendingUILanguage.c)
 *     IopCopyBootLogRegistryToFile @ 0x140790278 (IopCopyBootLogRegistryToFile.c)
 *     IoReportDetectedDevice @ 0x1407AE910 (IoReportDetectedDevice.c)
 *     CmDeleteKeyRecursive @ 0x140876D90 (CmDeleteKeyRecursive.c)
 *     CmpMoveBiosAliasTable @ 0x140877C18 (CmpMoveBiosAliasTable.c)
 *     CmpDoReDoRecord @ 0x140881FB8 (CmpDoReDoRecord.c)
 *     EtwpRemoveMicroarchitecturalPmcFromPmcGroup @ 0x14093ABA8 (EtwpRemoveMicroarchitecturalPmcFromPmcGroup.c)
 *     PiLastGoodCopyKeyContents @ 0x140A6F008 (PiLastGoodCopyKeyContents.c)
 *     MfgInitSystem @ 0x140A73924 (MfgInitSystem.c)
 *     PiLastGoodRevertLastKnownDirectory @ 0x140A908F0 (PiLastGoodRevertLastKnownDirectory.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwDeleteKey(HANDLE KeyHandle)
{
  __int64 v1; // rdx

  _disable();
  __readeflags();
  return KiServiceInternal(KeyHandle, v1);
}
