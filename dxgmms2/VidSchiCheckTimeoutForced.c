/*
 * XREFs of VidSchiCheckTimeoutForced @ 0x1C0007A30
 * Callers:
 *     VidSchiCheckHwProgress @ 0x1C00A5940 (VidSchiCheckHwProgress.c)
 *     VidSchWaitForCompletionEvent @ 0x1C00ADD4C (VidSchWaitForCompletionEvent.c)
 * Callees:
 *     <none>
 */

bool __fastcall VidSchiCheckTimeoutForced(__int64 a1)
{
  return *(_QWORD *)(a1 + 424) && g_TdrForceTimeout && TdrIsTimeoutForcedFlip();
}
