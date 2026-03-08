/*
 * XREFs of ?xxxHandleQueueCompletion@@YA?AW4QueueCompletionStatus@@PEAUtagTHREADINFO@@JQEAU_FILE_IO_COMPLETION_INFORMATION@@W4tagQUEUE_COMPLETION_DRAINER@@@Z @ 0x1C0047B0C
 * Callers:
 *     NtUserDrainThreadCoreMessagingCompletions @ 0x1C0047980 (NtUserDrainThreadCoreMessagingCompletions.c)
 *     xxxRemoveQueueCompletion @ 0x1C00946F4 (xxxRemoveQueueCompletion.c)
 * Callees:
 *     ?xxxHandleCoreMessagingQueueCompletion@@YAXPEAUtagTHREADINFO@@QEAU_FILE_IO_COMPLETION_INFORMATION@@W4tagQUEUE_COMPLETION_DRAINER@@@Z @ 0x1C0047BD0 (-xxxHandleCoreMessagingQueueCompletion@@YAXPEAUtagTHREADINFO@@QEAU_FILE_IO_COMPLETION_INFORMATIO.c)
 */

__int64 __fastcall xxxHandleQueueCompletion(__int64 a1, int a2, __int64 a3, unsigned int a4)
{
  unsigned int v4; // ebx
  int v5; // eax

  v4 = 0;
  if ( a2 )
  {
    return a2 == 258;
  }
  else
  {
    v5 = *(_DWORD *)(a3 + 8);
    if ( v5 == 1 )
    {
      return 3;
    }
    else if ( v5 == 2 )
    {
      return 2;
    }
    else if ( !v5 && *(_QWORD *)(a1 + 1504) )
    {
      v4 = 4;
      xxxHandleCoreMessagingQueueCompletion(a1, a3, a4);
    }
  }
  return v4;
}
