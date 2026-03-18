/*
 * XREFs of ?xxxHandleQueueCompletion@@YA?AW4QueueCompletionStatus@@PEAUtagTHREADINFO@@JQEAU_FILE_IO_COMPLETION_INFORMATION@@W4tagQUEUE_COMPLETION_DRAINER@@@Z @ 0x1C00A5CC0
 * Callers:
 *     xxxRemoveQueueCompletion @ 0x1C00A4D48 (xxxRemoveQueueCompletion.c)
 *     NtUserDrainThreadCoreMessagingCompletions @ 0x1C00A5B50 (NtUserDrainThreadCoreMessagingCompletions.c)
 * Callees:
 *     ?xxxHandleCoreMessagingQueueCompletion@@YAXPEAUtagTHREADINFO@@QEAU_FILE_IO_COMPLETION_INFORMATION@@W4tagQUEUE_COMPLETION_DRAINER@@@Z @ 0x1C00A5D18 (-xxxHandleCoreMessagingQueueCompletion@@YAXPEAUtagTHREADINFO@@QEAU_FILE_IO_COMPLETION_INFORMATIO.c)
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
    else if ( !v5 && *(_QWORD *)(a1 + 1464) )
    {
      v4 = 4;
      xxxHandleCoreMessagingQueueCompletion(a1, a3, a4);
    }
  }
  return v4;
}
