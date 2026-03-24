/*
 * XREFs of PsGetCurrentSilo @ 0x140345940
 * Callers:
 *     IoRevokeHandlesForProcess @ 0x140506E50 (IoRevokeHandlesForProcess.c)
 *     VRegEnabledInJob @ 0x1405D5B40 (VRegEnabledInJob.c)
 *     IoQueryInformationByName @ 0x1405D8B10 (IoQueryInformationByName.c)
 *     ObReferenceObjectByNameEx @ 0x1405DE69C (ObReferenceObjectByNameEx.c)
 *     IopCreateFile @ 0x14060B920 (IopCreateFile.c)
 *     NtQueryFullAttributesFile @ 0x14060C860 (NtQueryFullAttributesFile.c)
 *     NtQueryAttributesFile @ 0x14060CAF0 (NtQueryAttributesFile.c)
 *     CmpParseKey @ 0x140646330 (CmpParseKey.c)
 *     NtOpenSymbolicLinkObject @ 0x140666020 (NtOpenSymbolicLinkObject.c)
 *     ObOpenObjectByName @ 0x1406CEA10 (ObOpenObjectByName.c)
 *     ObReferenceObjectByName @ 0x1406D9EC0 (ObReferenceObjectByName.c)
 *     ObpInsertOrLocateNamedObject @ 0x1406DB6F0 (ObpInsertOrLocateNamedObject.c)
 *     ObpCreateSymbolicLinkName @ 0x14070CE9C (ObpCreateSymbolicLinkName.c)
 *     ObQueryNameStringMode @ 0x14070FFB0 (ObQueryNameStringMode.c)
 *     NtDeleteFile @ 0x14077CB50 (NtDeleteFile.c)
 *     PsRegisterSiloMonitor @ 0x1407905D0 (PsRegisterSiloMonitor.c)
 *     CmLockKeyForWrite @ 0x1407C37B0 (CmLockKeyForWrite.c)
 *     IopFastQueryNetworkAttributes @ 0x140894198 (IopFastQueryNetworkAttributes.c)
 *     PsRootSiloInformation @ 0x140905C44 (PsRootSiloInformation.c)
 *     ObGetSiloRootDirectoryPath @ 0x14098085C (ObGetSiloRootDirectoryPath.c)
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
