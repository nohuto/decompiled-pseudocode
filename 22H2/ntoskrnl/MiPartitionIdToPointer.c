/*
 * XREFs of MiPartitionIdToPointer @ 0x14020B9E4
 * Callers:
 *     MiDereferenceSessionFinal @ 0x140681B80 (MiDereferenceSessionFinal.c)
 *     MiUnloadSystemImage @ 0x1406962FC (MiUnloadSystemImage.c)
 *     MiReleaseProcessReferenceToSessionDataPage @ 0x140706D8C (MiReleaseProcessReferenceToSessionDataPage.c)
 *     MiFreeReadListPages @ 0x140721450 (MiFreeReadListPages.c)
 *     MiFreeReadListPageList @ 0x1407214EC (MiFreeReadListPageList.c)
 *     MiInitializeDynamicBitmap @ 0x14081ED24 (MiInitializeDynamicBitmap.c)
 *     MiMarkBootGuardPage @ 0x14081FBC8 (MiMarkBootGuardPage.c)
 *     MiRemovePhysicalMemory @ 0x140A2CCBC (MiRemovePhysicalMemory.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiPartitionIdToPointer(unsigned __int16 a1)
{
  return *(_QWORD *)(qword_140C674C8 + 8LL * a1);
}
