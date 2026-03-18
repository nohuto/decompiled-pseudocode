/*
 * XREFs of PopUpdateLastUserInputTime @ 0x140752B6C
 * Callers:
 *     PopSystemIdleWorker @ 0x140752F30 (PopSystemIdleWorker.c)
 *     PopUpdateConsoleDisplayState @ 0x14080D028 (PopUpdateConsoleDisplayState.c)
 * Callees:
 *     PopPulseSystemIdleEvent @ 0x1406E8E9C (PopPulseSystemIdleEvent.c)
 */

_DWORD *PopUpdateLastUserInputTime()
{
  unsigned int v0; // ecx
  _DWORD *result; // rax

  v0 = 0;
  if ( dword_140C09600 )
  {
    v0 = 1;
    result = &unk_140C095FC;
  }
  else
  {
    result = &unk_140C095F8;
  }
  if ( *result != MEMORY[0xFFFFF780000002E4] )
  {
    *result = MEMORY[0xFFFFF780000002E4];
    return (_DWORD *)PopPulseSystemIdleEvent(v0);
  }
  return result;
}
