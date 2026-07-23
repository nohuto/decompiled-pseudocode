/*
 * XREFs of ZwDeleteKey @ 0x1403FB4A0
 * Callers:
 *     BiZwDeleteKey @ 0x14038C948 (BiZwDeleteKey.c)
 *     VrpDestroyNamespaceNode @ 0x1405D3260 (VrpDestroyNamespaceNode.c)
 *     _RegRtlDeleteKeyTransacted @ 0x140766378 (_RegRtlDeleteKeyTransacted.c)
 *     NtEnableLastKnownGood @ 0x14077C2F0 (NtEnableLastKnownGood.c)
 *     ExpSetPendingUILanguage @ 0x14078BF70 (ExpSetPendingUILanguage.c)
 *     IopCopyBootLogRegistryToFile @ 0x14079A4DC (IopCopyBootLogRegistryToFile.c)
 *     IoReportDetectedDevice @ 0x1407AED50 (IoReportDetectedDevice.c)
 *     CmDeleteKeyRecursive @ 0x140876DE0 (CmDeleteKeyRecursive.c)
 *     CmpMoveBiosAliasTable @ 0x140877C68 (CmpMoveBiosAliasTable.c)
 *     CmpDoReDoRecord @ 0x140882008 (CmpDoReDoRecord.c)
 *     EtwpRemoveMicroarchitecturalPmcFromPmcGroup @ 0x14093ABF8 (EtwpRemoveMicroarchitecturalPmcFromPmcGroup.c)
 *     PiLastGoodCopyKeyContents @ 0x140A6F008 (PiLastGoodCopyKeyContents.c)
 *     MfgInitSystem @ 0x140A73924 (MfgInitSystem.c)
 *     PiLastGoodRevertLastKnownDirectory @ 0x140A908F0 (PiLastGoodRevertLastKnownDirectory.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwDeleteKey(HANDLE KeyHandle)
{
  _disable();
  __readeflags();
  return KiServiceInternal(KeyHandle);
}
