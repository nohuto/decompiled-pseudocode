/*
 * XREFs of PsGetCurrentSilo @ 0x1402640A0
 * Callers:
 *     IoRevokeHandlesForProcess @ 0x140555EE0 (IoRevokeHandlesForProcess.c)
 *     PopGetSettingNotificationName @ 0x14068CCC4 (PopGetSettingNotificationName.c)
 *     ObpInsertOrLocateNamedObject @ 0x140696BDC (ObpInsertOrLocateNamedObject.c)
 *     ObReferenceObjectByName @ 0x140698F90 (ObReferenceObjectByName.c)
 *     CmCreateKey @ 0x1406BBA60 (CmCreateKey.c)
 *     ObOpenObjectByName @ 0x1406C39E0 (ObOpenObjectByName.c)
 *     CmpParseKey @ 0x1406E7480 (CmpParseKey.c)
 *     CmOpenKey @ 0x1406E7B60 (CmOpenKey.c)
 *     NtQueryFullAttributesFile @ 0x14070BD80 (NtQueryFullAttributesFile.c)
 *     NtQueryAttributesFile @ 0x14070C010 (NtQueryAttributesFile.c)
 *     ObReferenceObjectByNameEx @ 0x140710ADC (ObReferenceObjectByNameEx.c)
 *     ObQueryNameStringMode @ 0x14071EE84 (ObQueryNameStringMode.c)
 *     VRegEnabledInJob @ 0x140736F40 (VRegEnabledInJob.c)
 *     NtOpenSymbolicLinkObject @ 0x1407563E0 (NtOpenSymbolicLinkObject.c)
 *     ObpCreateSymbolicLinkName @ 0x1407612D4 (ObpCreateSymbolicLinkName.c)
 *     IoQueryInformationByName @ 0x14076D210 (IoQueryInformationByName.c)
 *     IopCreateFile @ 0x1407CE5A0 (IopCreateFile.c)
 *     PsRegisterSiloMonitor @ 0x14080C7C0 (PsRegisterSiloMonitor.c)
 *     CmLockKeyForWrite @ 0x140845EFC (CmLockKeyForWrite.c)
 *     NtDeleteFile @ 0x140871940 (NtDeleteFile.c)
 *     IopFastQueryNetworkAttributes @ 0x1409449B8 (IopFastQueryNetworkAttributes.c)
 *     PsRootSiloInformation @ 0x1409A97C0 (PsRootSiloInformation.c)
 *     ObGetSiloRootDirectoryPath @ 0x140A711B4 (ObGetSiloRootDirectoryPath.c)
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
        result = result[80].Blink )
  {
    if ( ((__int64)result[96].Flink & 0x40000000) != 0 )
      break;
  }
  return result;
}
