/*
 * XREFs of ESM_SimulatingFSEReceivedOnTimeout @ 0x1C0051D80
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C00142CC (WPP_RECORDER_SF_q.c)
 */

__int64 __fastcall ESM_SimulatingFSEReceivedOnTimeout(__int64 a1)
{
  __int64 v1; // rcx

  v1 = *(_QWORD *)(a1 + 960);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *(_QWORD *)(v1 + 80),
      2,
      13,
      120,
      (__int64)&WPP_54015396503830aea6e7f220ba327c55_Traceguids,
      *(_QWORD *)(v1 + 24));
  return 118LL;
}
