/*
 * XREFs of VidSchiWaitFlushCompletion @ 0x1C008049C
 * Callers:
 *     VidSchiFlushPendingHWSubmittedFlips @ 0x1C002F9B4 (VidSchiFlushPendingHWSubmittedFlips.c)
 *     VidSchFlushHwQueue @ 0x1C0034D00 (VidSchFlushHwQueue.c)
 *     VidSchFlushContext @ 0x1C00801A0 (VidSchFlushContext.c)
 *     VidSchFlushDevice @ 0x1C0080320 (VidSchFlushDevice.c)
 *     VidSchiFlushPendingFlips @ 0x1C00CE7D8 (VidSchiFlushPendingFlips.c)
 *     VidSchFlushAdapter @ 0x1C00CFF30 (VidSchFlushAdapter.c)
 * Callees:
 *     VidSchiInterlockedRemoveEntryList @ 0x1C0014BAC (VidSchiInterlockedRemoveEntryList.c)
 *     VidSchWaitForCompletionEvent @ 0x1C0080A40 (VidSchWaitForCompletionEvent.c)
 *     VidSchRegisterCompletionEvent @ 0x1C0080B60 (VidSchRegisterCompletionEvent.c)
 */

bool __fastcall VidSchiWaitFlushCompletion(__int64 a1, __int64 a2, unsigned int a3)
{
  VidSchRegisterCompletionEvent(a1, a2);
  if ( **(_DWORD **)(a2 + 40) )
    VidSchWaitForCompletionEvent(a1, a2, a3);
  return VidSchiInterlockedRemoveEntryList((KSPIN_LOCK *)(a1 + 1728), (_QWORD *)a2, 0LL);
}
