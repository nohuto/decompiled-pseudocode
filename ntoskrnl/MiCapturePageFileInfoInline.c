/*
 * XREFs of MiCapturePageFileInfoInline @ 0x1402DE2D4
 * Callers:
 *     MiWriteCompletePfn @ 0x140212B10 (MiWriteCompletePfn.c)
 *     MiLockPageTablePage @ 0x14026A4D0 (MiLockPageTablePage.c)
 *     MiCompletePrivateZeroFault @ 0x14026C360 (MiCompletePrivateZeroFault.c)
 *     MiCompleteProtoPteFault @ 0x14026F5F0 (MiCompleteProtoPteFault.c)
 *     MiMigratePfn @ 0x140272370 (MiMigratePfn.c)
 *     MiDeletePteRun @ 0x140279760 (MiDeletePteRun.c)
 *     MiDeleteTransitionPte @ 0x1402833F0 (MiDeleteTransitionPte.c)
 *     MiAbandonPrivatePfn @ 0x14029D7BC (MiAbandonPrivatePfn.c)
 *     MiDemoteCombinedPte @ 0x14029DF88 (MiDemoteCombinedPte.c)
 *     MiReleaseWsSwapReservationPfn @ 0x1402A7DBC (MiReleaseWsSwapReservationPfn.c)
 *     MiActOnPte @ 0x1402CF06C (MiActOnPte.c)
 *     MiZeroCfgSystemWideBitmapWorker @ 0x1402DD950 (MiZeroCfgSystemWideBitmapWorker.c)
 *     MiPurgeImageSection @ 0x1402FECC8 (MiPurgeImageSection.c)
 *     MiRevertValidPte @ 0x140322DC0 (MiRevertValidPte.c)
 *     MiWsleFree @ 0x14032BA30 (MiWsleFree.c)
 *     MiLockCode @ 0x14032C9C0 (MiLockCode.c)
 *     MiCaptureDirtyBitToPfn @ 0x14032D790 (MiCaptureDirtyBitToPfn.c)
 *     MiReservePageFileSpaceForPage @ 0x14032ECD0 (MiReservePageFileSpaceForPage.c)
 *     MiStoreMarkLockedPagesModified @ 0x140465404 (MiStoreMarkLockedPagesModified.c)
 *     MiStoreWriteModifiedPages @ 0x14046554A (MiStoreWriteModifiedPages.c)
 *     MiSetPagesModified @ 0x1406264CC (MiSetPagesModified.c)
 * Callees:
 *     MI_READ_PTE_LOCK_FREE @ 0x14031B450 (MI_READ_PTE_LOCK_FREE.c)
 */

__int64 __fastcall MiCapturePageFileInfoInline(unsigned __int64 *a1, int a2, int a3)
{
  unsigned __int64 v3; // rbx
  __int64 result; // rax

  v3 = *a1;
  if ( (*a1 & 4) != 0 )
  {
    result = MI_READ_PTE_LOCK_FREE(a1);
    if ( a2 )
      *a1 = v3 & 0xFFFFFFFFFFFFFFFBuLL;
    if ( !a3 )
      return result & 0xFFFFFFFFFFFFFFFDuLL;
  }
  else if ( a3 && (v3 & 2) != 0 )
  {
    return MI_READ_PTE_LOCK_FREE(a1);
  }
  else
  {
    return 0LL;
  }
  return result;
}
