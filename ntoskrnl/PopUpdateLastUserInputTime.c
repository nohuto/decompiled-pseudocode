/*
 * XREFs of PopUpdateLastUserInputTime @ 0x14073BC30
 * Callers:
 *     PopSystemIdleWorker @ 0x14073B6A0 (PopSystemIdleWorker.c)
 *     PopUpdateConsoleDisplayState @ 0x140870EA4 (PopUpdateConsoleDisplayState.c)
 * Callees:
 *     PopPulseSystemIdleEvent @ 0x14073ADD8 (PopPulseSystemIdleEvent.c)
 */

__int64 PopUpdateLastUserInputTime()
{
  unsigned int v0; // ecx
  __int64 result; // rax
  int v2; // edx
  int *v3; // r8

  v0 = 0;
  result = MEMORY[0xFFFFF780000002E4];
  if ( dword_140C09810 )
  {
    v2 = dword_140C0980C;
    v3 = &dword_140C0980C;
    v0 = 1;
  }
  else
  {
    v2 = dword_140C09808;
    v3 = &dword_140C09808;
  }
  if ( v2 != MEMORY[0xFFFFF780000002E4] )
  {
    *v3 = MEMORY[0xFFFFF780000002E4];
    return PopPulseSystemIdleEvent(v0);
  }
  return result;
}
