/*
 * XREFs of VidSchiWaitFlushCompletion @ 0x1C0087DCC
 * Callers:
 *     VidSchiFlushPendingHWSubmittedFlips @ 0x1C0001490 (VidSchiFlushPendingHWSubmittedFlips.c)
 *     VidSchiFlushPendingFlips @ 0x1C00863F0 (VidSchiFlushPendingFlips.c)
 *     VidSchFlushContext @ 0x1C0089DD0 (VidSchFlushContext.c)
 *     VidSchFlushDevice @ 0x1C0089F70 (VidSchFlushDevice.c)
 *     VidSchFlushAdapter @ 0x1C01070F0 (VidSchFlushAdapter.c)
 *     VidSchFlushHwQueue @ 0x1C0107400 (VidSchFlushHwQueue.c)
 * Callees:
 *     VidSchiInterlockedRemoveEntryList @ 0x1C00045B8 (VidSchiInterlockedRemoveEntryList.c)
 *     VidSchWaitForCompletionEvent @ 0x1C0087E2C (VidSchWaitForCompletionEvent.c)
 *     VidSchRegisterCompletionEvent @ 0x1C0088184 (VidSchRegisterCompletionEvent.c)
 */

bool __fastcall VidSchiWaitFlushCompletion(__int64 a1, __int64 a2, unsigned int a3)
{
  VidSchRegisterCompletionEvent(a1, a2);
  if ( **(_DWORD **)(a2 + 40) )
    VidSchWaitForCompletionEvent(a1, a2, a3);
  return VidSchiInterlockedRemoveEntryList((KSPIN_LOCK *)(a1 + 1744), (_QWORD *)a2, 0LL);
}
