/*
 * XREFs of rimResetPnpRemovePendingStateBits @ 0x1C00A67A8
 * Callers:
 *     RIMUnregisterForInput @ 0x1C0053610 (RIMUnregisterForInput.c)
 *     RIMRemoveDevOfInputType @ 0x1C00A644C (RIMRemoveDevOfInputType.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C0047360 (WPP_RECORDER_SF_q.c)
 */

_UNKNOWN **__fastcall rimResetPnpRemovePendingStateBits(__int64 a1)
{
  _UNKNOWN **result; // rax

  result = &WPP_RECORDER_INITIALIZED;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    result = (_UNKNOWN **)WPP_RECORDER_SF_q(
                            (_DWORD)gRimLog,
                            4,
                            1,
                            37,
                            (__int64)&WPP_a75f261dfb463415346bb11edf387329_Traceguids,
                            a1);
  *(_DWORD *)(a1 + 184) &= ~0x80000000;
  *(_DWORD *)(a1 + 200) &= ~1u;
  *(_DWORD *)(a1 + 188) &= 0xFFFFFFFC;
  *(_QWORD *)(a1 + 192) = 0LL;
  return result;
}
