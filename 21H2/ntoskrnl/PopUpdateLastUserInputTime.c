/*
 * XREFs of PopUpdateLastUserInputTime @ 0x140781780
 * Callers:
 *     PopUpdateConsoleDisplayState @ 0x1407816A4 (PopUpdateConsoleDisplayState.c)
 *     PopSystemIdleWorker @ 0x1408F1260 (PopSystemIdleWorker.c)
 * Callees:
 *     PopPulseSystemIdleEvent @ 0x14078EB10 (PopPulseSystemIdleEvent.c)
 */

_DWORD *PopUpdateLastUserInputTime()
{
  __int64 v0; // rcx
  _DWORD *result; // rax

  v0 = 0LL;
  if ( dword_140C0F220 )
  {
    v0 = 1LL;
    result = &unk_140C0F21C;
  }
  else
  {
    result = &unk_140C0F218;
  }
  if ( *result != MEMORY[0xFFFFF780000002E4] )
  {
    *result = MEMORY[0xFFFFF780000002E4];
    return (_DWORD *)PopPulseSystemIdleEvent(v0);
  }
  return result;
}
