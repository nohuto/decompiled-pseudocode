/*
 * XREFs of MiBadShareCount @ 0x14064B0E0
 * Callers:
 *     MiMakePageAvoidRead @ 0x140272670 (MiMakePageAvoidRead.c)
 *     MiDeletePteList @ 0x140276AC0 (MiDeletePteList.c)
 *     MiDeletePteRun @ 0x140279760 (MiDeletePteRun.c)
 *     MiDeleteBatch @ 0x14027A5E0 (MiDeleteBatch.c)
 *     MiDeleteClusterPage @ 0x14027A890 (MiDeleteClusterPage.c)
 *     MiDeleteTransitionPte @ 0x1402833F0 (MiDeleteTransitionPte.c)
 *     MiReduceShareCount @ 0x1402EADCC (MiReduceShareCount.c)
 *     MiDecrementShareCount @ 0x14032AE40 (MiDecrementShareCount.c)
 *     MiDeleteValidSystemPage @ 0x14032AEA0 (MiDeleteValidSystemPage.c)
 *     MiWsleFree @ 0x14032BA30 (MiWsleFree.c)
 *     MiDeleteClusterSection @ 0x14034B3A4 (MiDeleteClusterSection.c)
 * Callees:
 *     KeBugCheckEx @ 0x140416000 (KeBugCheckEx.c)
 */

void __fastcall __noreturn MiBadShareCount(__int64 a1)
{
  KeBugCheckEx(
    0x4Eu,
    0x99uLL,
    0xAAAAAAAAAAAAAAABuLL * ((a1 + 0x220000000000LL) >> 4),
    *(_BYTE *)(a1 + 34) & 7,
    *(_QWORD *)(a1 + 24) & 0x3FFFFFFFFFFFFFFFLL);
}
