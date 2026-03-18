/*
 * XREFs of NVMeLunCompleteAllIORequests @ 0x1C0019ABC
 * Callers:
 *     NVMeHwUnitControl @ 0x1C000D170 (NVMeHwUnitControl.c)
 * Callees:
 *     NVMeCompleteSubmissionQueueRequests @ 0x1C0018820 (NVMeCompleteSubmissionQueueRequests.c)
 */

void __fastcall NVMeLunCompleteAllIORequests(__int64 a1, int a2)
{
  unsigned int i; // edi

  for ( i = 0;
        i < *(unsigned __int16 *)(a1 + 304);
        NVMeCompleteSubmissionQueueRequests(
          a1,
          *(_QWORD *)(a1 + 792) + 136LL * i++,
          *(unsigned __int16 *)(a1 + 302),
          a2,
          0,
          0,
          8) )
  {
    ;
  }
  NVMeCompleteSubmissionQueueRequests(a1, a1 + 312, *(unsigned __int16 *)(a1 + 300), a2, 0, 1, 8);
}
