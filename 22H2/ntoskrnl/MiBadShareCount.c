/*
 * XREFs of MiBadShareCount @ 0x1403F3FB4
 * Callers:
 *     MiDeletePteList @ 0x140231190 (MiDeletePteList.c)
 *     MiDeletePteRun @ 0x1402365D0 (MiDeletePteRun.c)
 *     MiDeleteBatch @ 0x140237DC0 (MiDeleteBatch.c)
 *     MiDeleteClusterSection @ 0x140280A60 (MiDeleteClusterSection.c)
 *     MiMakePageAvoidRead @ 0x1402A4700 (MiMakePageAvoidRead.c)
 *     MiWsleFree @ 0x1402A8560 (MiWsleFree.c)
 *     MiDeleteValidSystemPage @ 0x1402A94B0 (MiDeleteValidSystemPage.c)
 *     MiDeleteClusterPage @ 0x1402ABEC0 (MiDeleteClusterPage.c)
 * Callees:
 *     KeBugCheckEx @ 0x1403FD570 (KeBugCheckEx.c)
 */

void __fastcall __noreturn MiBadShareCount(__int64 a1)
{
  KeBugCheckEx(
    0x4Eu,
    0x99uLL,
    (a1 + 0x58000000000LL) / 48,
    *(_BYTE *)(a1 + 34) & 7,
    *(_QWORD *)(a1 + 24) & 0x3FFFFFFFFFFFFFFFLL);
}
