/*
 * XREFs of PsGetCurrentSilo @ 0x140347D50
 * Callers:
 *     IoRevokeHandlesForProcess @ 0x140558960 (IoRevokeHandlesForProcess.c)
 *     ObReferenceObjectByNameEx @ 0x1406686C8 (ObReferenceObjectByNameEx.c)
 *     ObpInsertOrLocateNamedObject @ 0x14066915C (ObpInsertOrLocateNamedObject.c)
 *     NtQueryFullAttributesFile @ 0x14066E950 (NtQueryFullAttributesFile.c)
 *     NtQueryAttributesFile @ 0x14066EBE0 (NtQueryAttributesFile.c)
 *     ObOpenObjectByName @ 0x14067C970 (ObOpenObjectByName.c)
 *     CmCreateKey @ 0x14067F8D0 (CmCreateKey.c)
 *     VRegEnabledInJob @ 0x1406928FC (VRegEnabledInJob.c)
 *     NtOpenSymbolicLinkObject @ 0x1406A0F30 (NtOpenSymbolicLinkObject.c)
 *     NtOpenDirectoryObject @ 0x1406A7AB0 (NtOpenDirectoryObject.c)
 *     ObpCreateSymbolicLinkName @ 0x1406A97F0 (ObpCreateSymbolicLinkName.c)
 *     ObQueryNameStringMode @ 0x1407103B0 (ObQueryNameStringMode.c)
 *     ObReferenceObjectByName @ 0x14071EEC0 (ObReferenceObjectByName.c)
 *     CmpParseKey @ 0x1407349A0 (CmpParseKey.c)
 *     PopGetSettingNotificationName @ 0x140751120 (PopGetSettingNotificationName.c)
 *     IopCreateFile @ 0x1407ADB90 (IopCreateFile.c)
 *     CmOpenKey @ 0x1407CABA0 (CmOpenKey.c)
 *     IoQueryInformationByName @ 0x1407F69E0 (IoQueryInformationByName.c)
 *     CmLockKeyForWrite @ 0x14080F9EC (CmLockKeyForWrite.c)
 *     NtDeleteFile @ 0x1408115E0 (NtDeleteFile.c)
 *     PsRegisterSiloMonitor @ 0x1408257B0 (PsRegisterSiloMonitor.c)
 *     IopFastQueryNetworkAttributes @ 0x140936A54 (IopFastQueryNetworkAttributes.c)
 *     PsRootSiloInformation @ 0x1409AB8A0 (PsRootSiloInformation.c)
 *     ObGetSiloRootDirectoryPath @ 0x140A34854 (ObGetSiloRootDirectoryPath.c)
 * Callees:
 *     <none>
 */

struct _LIST_ENTRY *PsGetCurrentSilo()
{
  struct _KTHREAD *CurrentThread; // rax
  struct _LIST_ENTRY *result; // rax

  CurrentThread = KeGetCurrentThread();
  if ( CurrentThread[1].WaitBlock[3].WaitListEntry.Blink != (struct _LIST_ENTRY *)-3LL )
    return CurrentThread[1].WaitBlock[3].WaitListEntry.Blink;
  for ( result = (struct _LIST_ENTRY *)CurrentThread->Process[1].Affinity.StaticBitmap[16];
        result;
        result = result[79].Flink )
  {
    if ( ((__int64)result[94].Blink & 0x40000000) != 0 )
      break;
  }
  return result;
}
