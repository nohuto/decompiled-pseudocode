/*
 * XREFs of PopSessionConnected @ 0x1407EBD5C
 * Callers:
 *     PopSessionConnectionChange @ 0x1407EBF04 (PopSessionConnectionChange.c)
 * Callees:
 *     PopSetSessionDisplayStatus @ 0x1407A6040 (PopSetSessionDisplayStatus.c)
 *     PopDiagTraceSessionStates @ 0x1407EBDDC (PopDiagTraceSessionStates.c)
 *     PopAdaptiveGetSessionStateUnsafe @ 0x1407EC320 (PopAdaptiveGetSessionStateUnsafe.c)
 *     PopDiagTraceAdaptiveOverrideTriggered @ 0x14098C71C (PopDiagTraceAdaptiveOverrideTriggered.c)
 */

__int64 __fastcall PopSessionConnected(unsigned int a1, __int64 a2, __int64 a3)
{
  PopDiagTraceSessionStates(&POP_ETW_ADPM_SESSION_CONNECTED);
  if ( *(_BYTE *)(a2 + 1) )
  {
    PopConsoleSession = 1;
    dword_140C39CD8 = a1;
  }
  PopSetSessionDisplayStatus(a1, 1, 0);
  if ( PopAdaptiveBootContext )
  {
    dword_140C39D0C = 0;
    byte_140C39CF8 = 1;
    qword_140C39D00 = (((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
                     * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64;
    dword_140C39D08 = 2;
    PopDiagTraceAdaptiveOverrideTriggered(qword_140C39D00, 1LL, 2LL, 0LL);
  }
  return PopAdaptiveGetSessionStateUnsafe(a1, a2 + 8, a3);
}
