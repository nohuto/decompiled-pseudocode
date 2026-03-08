/*
 * XREFs of VidSchiWaitFlushCompletion @ 0x1C00ADCEC
 * Callers:
 *     VidSchiFlushPendingHWSubmittedFlips @ 0x1C0017DD8 (VidSchiFlushPendingHWSubmittedFlips.c)
 *     VidSchFlushContext @ 0x1C00AB850 (VidSchFlushContext.c)
 *     VidSchFlushDevice @ 0x1C00AB9F0 (VidSchFlushDevice.c)
 *     VidSchiFlushPendingFlips @ 0x1C00AE270 (VidSchiFlushPendingFlips.c)
 *     VidSchFlushAdapter @ 0x1C0107550 (VidSchFlushAdapter.c)
 *     VidSchFlushHwQueue @ 0x1C0107860 (VidSchFlushHwQueue.c)
 * Callees:
 *     VidSchiInterlockedRemoveEntryList @ 0x1C0014268 (VidSchiInterlockedRemoveEntryList.c)
 *     VidSchWaitForCompletionEvent @ 0x1C00ADD4C (VidSchWaitForCompletionEvent.c)
 *     VidSchRegisterCompletionEvent @ 0x1C00AE0A4 (VidSchRegisterCompletionEvent.c)
 */

bool __fastcall VidSchiWaitFlushCompletion(__int64 a1, __int64 a2, unsigned int a3)
{
  VidSchRegisterCompletionEvent(a1, a2);
  if ( **(_DWORD **)(a2 + 40) )
    VidSchWaitForCompletionEvent(a1, a2, a3);
  return VidSchiInterlockedRemoveEntryList((KSPIN_LOCK *)(a1 + 1744), (_QWORD *)a2, 0LL);
}
