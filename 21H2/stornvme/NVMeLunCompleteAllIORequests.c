/*
 * XREFs of NVMeLunCompleteAllIORequests @ 0x1C000FC14
 * Callers:
 *     NVMeHwUnitControl @ 0x1C000AF50 (NVMeHwUnitControl.c)
 * Callees:
 *     NVMeCompleteSubmissionQueueRequests @ 0x1C000D258 (NVMeCompleteSubmissionQueueRequests.c)
 */

void __fastcall NVMeLunCompleteAllIORequests(__int64 a1, int a2)
{
  unsigned int i; // edi

  for ( i = 0;
        i < *(unsigned __int16 *)(a1 + 288);
        NVMeCompleteSubmissionQueueRequests(
          a1,
          *(_QWORD *)(a1 + 776) + 136LL * i++,
          *(unsigned __int16 *)(a1 + 286),
          a2,
          0,
          0,
          8) )
  {
    ;
  }
  NVMeCompleteSubmissionQueueRequests(a1, a1 + 296, *(unsigned __int16 *)(a1 + 284), a2, 0, 1, 8);
}
