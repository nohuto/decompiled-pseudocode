/*
 * XREFs of PsGetCurrentSilo @ 0x14026A8D0
 * Callers:
 *     IoRevokeHandlesForProcess @ 0x140507150 (IoRevokeHandlesForProcess.c)
 *     VRegEnabledInJob @ 0x1405D5B40 (VRegEnabledInJob.c)
 *     IoQueryInformationByName @ 0x1405D8B10 (IoQueryInformationByName.c)
 *     NtOpenSymbolicLinkObject @ 0x1405E54C0 (NtOpenSymbolicLinkObject.c)
 *     ObpCreateSymbolicLinkName @ 0x140618538 (ObpCreateSymbolicLinkName.c)
 *     ObOpenObjectByName @ 0x14064AA70 (ObOpenObjectByName.c)
 *     ObReferenceObjectByName @ 0x140655F20 (ObReferenceObjectByName.c)
 *     ObpInsertOrLocateNamedObject @ 0x140657720 (ObpInsertOrLocateNamedObject.c)
 *     IopCreateFile @ 0x14069AF70 (IopCreateFile.c)
 *     NtQueryFullAttributesFile @ 0x14069BEB0 (NtQueryFullAttributesFile.c)
 *     NtQueryAttributesFile @ 0x14069C140 (NtQueryAttributesFile.c)
 *     ObQueryNameStringMode @ 0x1406C7460 (ObQueryNameStringMode.c)
 *     ObReferenceObjectByNameEx @ 0x1406CDDFC (ObReferenceObjectByNameEx.c)
 *     CmpParseKey @ 0x14070FFF0 (CmpParseKey.c)
 *     NtDeleteFile @ 0x14077CE10 (NtDeleteFile.c)
 *     PsRegisterSiloMonitor @ 0x140795940 (PsRegisterSiloMonitor.c)
 *     CmLockKeyForWrite @ 0x1407C3510 (CmLockKeyForWrite.c)
 *     IopFastQueryNetworkAttributes @ 0x1408942A8 (IopFastQueryNetworkAttributes.c)
 *     PsRootSiloInformation @ 0x140905D54 (PsRootSiloInformation.c)
 *     ObGetSiloRootDirectoryPath @ 0x1409809EC (ObGetSiloRootDirectoryPath.c)
 * Callees:
 *     <none>
 */

struct _LIST_ENTRY *PsGetCurrentSilo()
{
  struct _KTHREAD *CurrentThread; // rcx
  struct _LIST_ENTRY *result; // rax

  CurrentThread = KeGetCurrentThread();
  result = CurrentThread[1].WaitBlock[3].WaitListEntry.Blink;
  if ( result == (struct _LIST_ENTRY *)-3LL )
  {
    for ( result = (struct _LIST_ENTRY *)CurrentThread->Process[1].Affinity.Bitmap[16]; result; result = result[67].Flink )
    {
      if ( ((__int64)result[82].Blink & 0x40000000) != 0 )
        break;
    }
  }
  return result;
}
