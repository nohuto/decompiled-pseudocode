/*
 * XREFs of MiPartitionIdToPointer @ 0x1403253D8
 * Callers:
 *     MiFreeReadListPages @ 0x1406362C4 (MiFreeReadListPages.c)
 *     MiFreeReadListPageList @ 0x14063634C (MiFreeReadListPageList.c)
 *     MiReleaseProcessReferenceToSessionDataPage @ 0x140660414 (MiReleaseProcessReferenceToSessionDataPage.c)
 *     MiUnloadSystemImage @ 0x1406FEA98 (MiUnloadSystemImage.c)
 *     MiDereferenceSessionFinal @ 0x140778220 (MiDereferenceSessionFinal.c)
 *     MiInitializeDynamicBitmap @ 0x1407867DC (MiInitializeDynamicBitmap.c)
 *     MiMapNewSession @ 0x140786F8C (MiMapNewSession.c)
 *     MiMarkBootGuardPage @ 0x14079FDEC (MiMarkBootGuardPage.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiPartitionIdToPointer(unsigned __int16 a1)
{
  return *(_QWORD *)(qword_140C4E648 + 8LL * a1);
}
