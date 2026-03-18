/*
 * XREFs of ZwDeleteKey @ 0x14041D280
 * Callers:
 *     BiZwDeleteKey @ 0x140395610 (BiZwDeleteKey.c)
 *     DifZwDeleteKeyWrapper @ 0x14061F730 (DifZwDeleteKeyWrapper.c)
 *     ExpSetPendingUILanguage @ 0x1407F44F0 (ExpSetPendingUILanguage.c)
 *     VrpDestroyNamespaceNode @ 0x1407F6410 (VrpDestroyNamespaceNode.c)
 *     NtEnableLastKnownGood @ 0x14080B090 (NtEnableLastKnownGood.c)
 *     IoReportDetectedDevice @ 0x14081EB20 (IoReportDetectedDevice.c)
 *     IopCopyBootLogRegistryToFile @ 0x14082848C (IopCopyBootLogRegistryToFile.c)
 *     _RegRtlDeleteKeyTransacted @ 0x140862B44 (_RegRtlDeleteKeyTransacted.c)
 *     CmDeleteKeyRecursive @ 0x14091D7D0 (CmDeleteKeyRecursive.c)
 *     CmpMoveBiosAliasTable @ 0x14091E6AC (CmpMoveBiosAliasTable.c)
 *     CmpDoReDoRecord @ 0x140925BD8 (CmpDoReDoRecord.c)
 *     EtwpRemoveMicroarchitecturalPmcFromPmcGroup @ 0x1409E190C (EtwpRemoveMicroarchitecturalPmcFromPmcGroup.c)
 *     PiLastGoodCopyKeyContents @ 0x140B2AEDC (PiLastGoodCopyKeyContents.c)
 *     MfgInitSystem @ 0x140B30BB0 (MfgInitSystem.c)
 *     PiLastGoodRevertLastKnownDirectory @ 0x140B4FF80 (PiLastGoodRevertLastKnownDirectory.c)
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
