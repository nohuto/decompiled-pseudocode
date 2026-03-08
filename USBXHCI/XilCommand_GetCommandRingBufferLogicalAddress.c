/*
 * XREFs of XilCommand_GetCommandRingBufferLogicalAddress @ 0x1C000A7F8
 * Callers:
 *     Command_HandleCommandCompletionEvent @ 0x1C000A2B4 (Command_HandleCommandCompletionEvent.c)
 *     Command_HandleCommandRingStoppedEvent @ 0x1C002FD74 (Command_HandleCommandRingStoppedEvent.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall XilCommand_GetCommandRingBufferLogicalAddress(__int64 a1)
{
  if ( *(_BYTE *)(a1 + 136) )
    return *(_QWORD *)(a1 + 176);
  else
    return *(_QWORD *)(*(_QWORD *)(a1 + 184) + 24LL);
}
