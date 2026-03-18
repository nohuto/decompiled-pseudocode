/*
 * XREFs of PsGetCurrentSilo @ 0x14022E220
 * Callers:
 *     IoRevokeHandlesForProcess @ 0x140558380 (IoRevokeHandlesForProcess.c)
 *     ObOpenObjectByName @ 0x14068C9D0 (ObOpenObjectByName.c)
 *     VRegEnabledInJob @ 0x14068EB28 (VRegEnabledInJob.c)
 *     CmCreateKey @ 0x140692410 (CmCreateKey.c)
 *     ObpInsertOrLocateNamedObject @ 0x1406C0B0C (ObpInsertOrLocateNamedObject.c)
 *     ObReferenceObjectByName @ 0x1406C2D00 (ObReferenceObjectByName.c)
 *     CmOpenKey @ 0x1406E2B10 (CmOpenKey.c)
 *     CmpParseKey @ 0x1406E6A30 (CmpParseKey.c)
 *     ObReferenceObjectByNameEx @ 0x1407153CC (ObReferenceObjectByNameEx.c)
 *     IopCreateFile @ 0x14073CBA0 (IopCreateFile.c)
 *     NtQueryAttributesFile @ 0x14073E720 (NtQueryAttributesFile.c)
 *     ObQueryNameStringMode @ 0x14075BD04 (ObQueryNameStringMode.c)
 *     PopGetSettingNotificationName @ 0x140783590 (PopGetSettingNotificationName.c)
 *     NtQueryFullAttributesFile @ 0x1407AAE00 (NtQueryFullAttributesFile.c)
 *     NtOpenSymbolicLinkObject @ 0x1407AB090 (NtOpenSymbolicLinkObject.c)
 *     ObpCreateSymbolicLinkName @ 0x1407B6FA0 (ObpCreateSymbolicLinkName.c)
 *     IoQueryInformationByName @ 0x1407BF420 (IoQueryInformationByName.c)
 *     PsRegisterSiloMonitor @ 0x140821410 (PsRegisterSiloMonitor.c)
 *     CmLockKeyForWrite @ 0x14084905C (CmLockKeyForWrite.c)
 *     NtDeleteFile @ 0x140874800 (NtDeleteFile.c)
 *     IopFastQueryNetworkAttributes @ 0x1409479D8 (IopFastQueryNetworkAttributes.c)
 *     PsRootSiloInformation @ 0x1409AC840 (PsRootSiloInformation.c)
 *     ObGetSiloRootDirectoryPath @ 0x140A73EB4 (ObGetSiloRootDirectoryPath.c)
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
