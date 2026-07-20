/*
 * XREFs of SmpDeallocSavedRegistryEntry @ 0x14000BC20
 * Callers:
 *     SmpFreeSavedRegistryEntry @ 0x140005A10 (SmpFreeSavedRegistryEntry.c)
 *     SmpInitializeKnownDlls @ 0x140008450 (SmpInitializeKnownDlls.c)
 *     SmpProcessFileRenames @ 0x140009054 (SmpProcessFileRenames.c)
 *     SmpCleanupStalePageFiles @ 0x14000AA2C (SmpCleanupStalePageFiles.c)
 *     SmpCreatePagingFiles @ 0x14000ABCC (SmpCreatePagingFiles.c)
 *     SmpRecordNewPageFile @ 0x14000AF08 (SmpRecordNewPageFile.c)
 *     SmpBuildSubSystemLists @ 0x14000B060 (SmpBuildSubSystemLists.c)
 *     SmpSaveRegistryValue_U @ 0x14000B840 (SmpSaveRegistryValue_U.c)
 *     SmpInitializeDosDevices @ 0x14000BA80 (SmpInitializeDosDevices.c)
 *     SmpConfigureSharedSessionData @ 0x14000C490 (SmpConfigureSharedSessionData.c)
 * Callees:
 *     <none>
 */

BOOLEAN __fastcall SmpDeallocSavedRegistryEntry(struct _UNICODE_STRING *BaseAddress)
{
  void *v2; // r8
  BOOLEAN result; // al

  if ( BaseAddress )
  {
    RtlFreeUnicodeString(BaseAddress + 2);
    v2 = *(void **)&BaseAddress[3].Length;
    if ( v2 )
      RtlFreeHeap(*(PVOID *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 48LL), 0, v2);
    return RtlFreeHeap(*(PVOID *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 48LL), 0, BaseAddress);
  }
  return result;
}
