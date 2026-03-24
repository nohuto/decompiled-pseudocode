/*
 * XREFs of VidSchiCheckTimeoutForced @ 0x1C000C380
 * Callers:
 *     VidSchiCheckHwProgress @ 0x1C007EFE0 (VidSchiCheckHwProgress.c)
 *     VidSchWaitForCompletionEvent @ 0x1C0080A40 (VidSchWaitForCompletionEvent.c)
 * Callees:
 *     <none>
 */

bool __fastcall VidSchiCheckTimeoutForced(__int64 a1)
{
  return *(_QWORD *)(a1 + 416) && g_TdrForceTimeout && TdrIsTimeoutForcedFlip();
}
