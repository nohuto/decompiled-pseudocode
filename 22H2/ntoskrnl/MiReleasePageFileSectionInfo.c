/*
 * XREFs of MiReleasePageFileSectionInfo @ 0x140387384
 * Callers:
 *     MiReservePageFileSpace @ 0x14023CB00 (MiReservePageFileSpace.c)
 *     MiBuildReservationCluster @ 0x1403866F0 (MiBuildReservationCluster.c)
 *     MiGetPageFileSectionForReservation @ 0x1403873C0 (MiGetPageFileSectionForReservation.c)
 * Callees:
 *     MiUnlockProtoPoolPage @ 0x140239160 (MiUnlockProtoPoolPage.c)
 *     MiReleaseControlAreaWaiters @ 0x1402D7A34 (MiReleaseControlAreaWaiters.c)
 *     MiDecrementModifiedWriteCount @ 0x1402D7BB8 (MiDecrementModifiedWriteCount.c)
 */

_QWORD *__fastcall MiReleasePageFileSectionInfo(__int64 a1)
{
  __int64 v2; // rcx
  _QWORD *result; // rax

  v2 = *(_QWORD *)(a1 + 8);
  if ( v2 )
    MiUnlockProtoPoolPage(v2, *(_BYTE *)(a1 + 32));
  result = (_QWORD *)MiDecrementModifiedWriteCount(*(_QWORD *)a1, 0);
  if ( result )
    return (_QWORD *)MiReleaseControlAreaWaiters(result);
  return result;
}
