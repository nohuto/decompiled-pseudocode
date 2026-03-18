/*
 * XREFs of VidSchiCheckTimeoutForced @ 0x1C000B610
 * Callers:
 *     VidSchWaitForCompletionEvent @ 0x1C0087E2C (VidSchWaitForCompletionEvent.c)
 *     VidSchiCheckHwProgress @ 0x1C00AE3E0 (VidSchiCheckHwProgress.c)
 * Callees:
 *     <none>
 */

bool __fastcall VidSchiCheckTimeoutForced(__int64 a1)
{
  return *(_QWORD *)(a1 + 424) && g_TdrForceTimeout && TdrIsTimeoutForcedFlip();
}
