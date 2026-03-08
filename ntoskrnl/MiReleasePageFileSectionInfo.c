/*
 * XREFs of MiReleasePageFileSectionInfo @ 0x140639168
 * Callers:
 *     MiReservePageFileSpace @ 0x14032E800 (MiReservePageFileSpace.c)
 *     MiBuildReservationCluster @ 0x140635ED4 (MiBuildReservationCluster.c)
 *     MiGetPageFileSectionForReservation @ 0x140638834 (MiGetPageFileSectionForReservation.c)
 * Callees:
 *     MiDecrementModifiedWriteCount @ 0x140212BE4 (MiDecrementModifiedWriteCount.c)
 *     MiReleaseControlAreaWaiters @ 0x140214DCC (MiReleaseControlAreaWaiters.c)
 *     MiUnlockProtoPoolPage @ 0x1402861D0 (MiUnlockProtoPoolPage.c)
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
