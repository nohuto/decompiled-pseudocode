/*
 * XREFs of NVMeControllerCompleteAllIORequests @ 0x1C000D7A4
 * Callers:
 *     NVMeHwAdapterControl @ 0x1C0006080 (NVMeHwAdapterControl.c)
 *     NVMeControllerReset @ 0x1C000E684 (NVMeControllerReset.c)
 *     NVMeControllerPanicResetActionWorkItem @ 0x1C0018290 (NVMeControllerPanicResetActionWorkItem.c)
 * Callees:
 *     NVMeCompleteSubmissionQueueRequests @ 0x1C000D258 (NVMeCompleteSubmissionQueueRequests.c)
 */

void __fastcall NVMeControllerCompleteAllIORequests(__int64 a1, char a2, __int64 a3, __int64 a4)
{
  unsigned int i; // edi
  unsigned __int16 j; // di

  StorPortExtendedFunction(81LL, a1, 10000LL, a4);
  for ( i = 0;
        i < *(unsigned __int16 *)(a1 + 288);
        NVMeCompleteSubmissionQueueRequests(
          a1,
          *(_QWORD *)(a1 + 776) + 136LL * i++,
          *(unsigned __int16 *)(a1 + 286),
          0,
          1,
          0,
          a2) )
  {
    ;
  }
  for ( j = 0; *(_WORD *)(a1 + 816) && j < 0x1388u; ++j )
    StorPortStallExecution(10LL);
  NVMeCompleteSubmissionQueueRequests(a1, a1 + 296, *(unsigned __int16 *)(a1 + 284), 0, 1, 0, a2);
}
