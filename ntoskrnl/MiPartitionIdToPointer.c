/*
 * XREFs of MiPartitionIdToPointer @ 0x14036CC64
 * Callers:
 *     MiDereferenceSessionFinal @ 0x14067E7A0 (MiDereferenceSessionFinal.c)
 *     MiFreeReadListPages @ 0x1406A4F10 (MiFreeReadListPages.c)
 *     MiFreeReadListPageList @ 0x1406A4FAC (MiFreeReadListPageList.c)
 *     MiReleaseProcessReferenceToSessionDataPage @ 0x14072665C (MiReleaseProcessReferenceToSessionDataPage.c)
 *     MiUnloadSystemImage @ 0x1407F627C (MiUnloadSystemImage.c)
 *     MiInitializeDynamicBitmap @ 0x14080A0E4 (MiInitializeDynamicBitmap.c)
 *     MiMarkBootGuardPage @ 0x14080B0BC (MiMarkBootGuardPage.c)
 *     MiRemovePhysicalMemory @ 0x140A29F5C (MiRemovePhysicalMemory.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiPartitionIdToPointer(unsigned __int16 a1)
{
  return *(_QWORD *)(qword_140C67048 + 8LL * a1);
}
