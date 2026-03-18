/*
 * XREFs of NVMeHwInterrupt @ 0x1C0017C00
 * Callers:
 *     <none>
 * Callees:
 *     RequestPendingCompletion @ 0x1C0001A30 (RequestPendingCompletion.c)
 *     ProcessCompletionQueues @ 0x1C0001AD0 (ProcessCompletionQueues.c)
 */

char __fastcall NVMeHwInterrupt(__int64 a1)
{
  char v2; // di

  v2 = 0;
  if ( !RequestPendingCompletion(a1, 0xFFFFu) || (*(_DWORD *)(a1 + 32) & 8) != 0 )
  {
    ++*(_QWORD *)(a1 + 3864);
  }
  else
  {
    v2 = 1;
    ProcessCompletionQueues(a1, 0xFFFFu, 0);
  }
  return v2;
}
