/*
 * XREFs of PsGetCurrentSilo @ 0x14027C930
 * Callers:
 *     IoRevokeHandlesForProcess @ 0x1405071D0 (IoRevokeHandlesForProcess.c)
 *     VRegEnabledInJob @ 0x1405D5B40 (VRegEnabledInJob.c)
 *     IoQueryInformationByName @ 0x1405D8B10 (IoQueryInformationByName.c)
 *     ObReferenceObjectByNameEx @ 0x1405DE69C (ObReferenceObjectByNameEx.c)
 *     IopCreateFile @ 0x14060B4C0 (IopCreateFile.c)
 *     NtQueryFullAttributesFile @ 0x14060C400 (NtQueryFullAttributesFile.c)
 *     NtQueryAttributesFile @ 0x14060C690 (NtQueryAttributesFile.c)
 *     ObOpenObjectByName @ 0x140655C50 (ObOpenObjectByName.c)
 *     ObReferenceObjectByName @ 0x140661100 (ObReferenceObjectByName.c)
 *     ObpInsertOrLocateNamedObject @ 0x140662900 (ObpInsertOrLocateNamedObject.c)
 *     NtOpenSymbolicLinkObject @ 0x140686360 (NtOpenSymbolicLinkObject.c)
 *     ObpCreateSymbolicLinkName @ 0x1406B8F14 (ObpCreateSymbolicLinkName.c)
 *     CmpParseKey @ 0x1406F8C10 (CmpParseKey.c)
 *     ObQueryNameStringMode @ 0x140718E10 (ObQueryNameStringMode.c)
 *     NtDeleteFile @ 0x14077CC50 (NtDeleteFile.c)
 *     PsRegisterSiloMonitor @ 0x140795740 (PsRegisterSiloMonitor.c)
 *     CmLockKeyForWrite @ 0x1407C2FF0 (CmLockKeyForWrite.c)
 *     IopFastQueryNetworkAttributes @ 0x140894148 (IopFastQueryNetworkAttributes.c)
 *     PsRootSiloInformation @ 0x140905BF4 (PsRootSiloInformation.c)
 *     ObGetSiloRootDirectoryPath @ 0x14098080C (ObGetSiloRootDirectoryPath.c)
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
