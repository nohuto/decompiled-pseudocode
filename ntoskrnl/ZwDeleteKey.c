/*
 * XREFs of ZwDeleteKey @ 0x140413E50
 * Callers:
 *     BiZwDeleteKey @ 0x1403902DC (BiZwDeleteKey.c)
 *     DifZwDeleteKeyWrapper @ 0x1405ED240 (DifZwDeleteKeyWrapper.c)
 *     VrpDestroyNamespaceNode @ 0x140737134 (VrpDestroyNamespaceNode.c)
 *     ExpSetPendingUILanguage @ 0x140749238 (ExpSetPendingUILanguage.c)
 *     IoReportDetectedDevice @ 0x140802A80 (IoReportDetectedDevice.c)
 *     IopCopyBootLogRegistryToFile @ 0x140818E28 (IopCopyBootLogRegistryToFile.c)
 *     _RegRtlDeleteKeyTransacted @ 0x14085F0A8 (_RegRtlDeleteKeyTransacted.c)
 *     NtEnableLastKnownGood @ 0x14087F5A0 (NtEnableLastKnownGood.c)
 *     EtwpRemoveMicroarchitecturalPmcFromPmcGroup @ 0x1409E1C34 (EtwpRemoveMicroarchitecturalPmcFromPmcGroup.c)
 *     CmDeleteKeyRecursive @ 0x140A0D158 (CmDeleteKeyRecursive.c)
 *     CmpMoveBiosAliasTable @ 0x140A0E038 (CmpMoveBiosAliasTable.c)
 *     CmpDoReDoRecord @ 0x140A27C2C (CmpDoReDoRecord.c)
 *     PiLastGoodCopyKeyContents @ 0x140B6AE50 (PiLastGoodCopyKeyContents.c)
 *     MfgInitSystem @ 0x140B71EB4 (MfgInitSystem.c)
 *     PiLastGoodRevertLastKnownDirectory @ 0x140B91710 (PiLastGoodRevertLastKnownDirectory.c)
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
