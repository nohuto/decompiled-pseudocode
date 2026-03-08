/*
 * XREFs of ?ResetTdrTimer@BLTQUEUE_REMOTE_VSYNC_SOURCE@@UEAAXXZ @ 0x1C03D0AA0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall BLTQUEUE_REMOTE_VSYNC_SOURCE::ResetTdrTimer(BLTQUEUE_REMOTE_VSYNC_SOURCE *this)
{
  KeSetTimerEx((PKTIMER)((char *)this + 8), (LARGE_INTEGER)-300000000LL, 0, 0LL);
}
