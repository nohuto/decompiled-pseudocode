/*
 * XREFs of NVMeLunCompleteAllIORequests @ 0x1C000FAA8
 * Callers:
 *     NVMeHwUnitControl @ 0x1C0008600 (NVMeHwUnitControl.c)
 * Callees:
 *     NVMeCompleteSubmissionQueueRequests @ 0x1C000C644 (NVMeCompleteSubmissionQueueRequests.c)
 */

void __fastcall NVMeLunCompleteAllIORequests(__int64 a1, int a2)
{
  unsigned int i; // edi

  for ( i = 0;
        i < *(unsigned __int16 *)(a1 + 336);
        NVMeCompleteSubmissionQueueRequests(
          a1,
          *(_QWORD *)(a1 + 872) + 136LL * i++,
          *(unsigned __int16 *)(a1 + 334),
          a2,
          0,
          0,
          8) )
  {
    ;
  }
  NVMeCompleteSubmissionQueueRequests(a1, a1 + 344, *(unsigned __int16 *)(a1 + 332), a2, 0, 1, 8);
}
