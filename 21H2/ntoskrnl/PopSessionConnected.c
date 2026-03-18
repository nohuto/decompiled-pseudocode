/*
 * XREFs of PopSessionConnected @ 0x1407ED644
 * Callers:
 *     PopSessionConnectionChange @ 0x1407ED88C (PopSessionConnectionChange.c)
 * Callees:
 *     PopDiagTraceSessionStates @ 0x1407ED774 (PopDiagTraceSessionStates.c)
 *     PopSetSessionDisplayStatus @ 0x1407EDCAC (PopSetSessionDisplayStatus.c)
 *     PopAdaptiveGetSessionStateUnsafe @ 0x1407EF190 (PopAdaptiveGetSessionStateUnsafe.c)
 *     PopAdaptiveConsoleSessionOverrideTrigger @ 0x14099C794 (PopAdaptiveConsoleSessionOverrideTrigger.c)
 */

__int64 __fastcall PopSessionConnected(unsigned int a1, char a2, __int64 a3)
{
  __int64 v7; // [rsp+20h] [rbp-38h] BYREF
  __int64 v8; // [rsp+28h] [rbp-30h]
  __int64 v9; // [rsp+30h] [rbp-28h]
  __int64 v10; // [rsp+38h] [rbp-20h]
  int v11; // [rsp+40h] [rbp-18h]
  int v12; // [rsp+44h] [rbp-14h]

  PopDiagTraceSessionStates(&POP_ETW_ADPM_SESSION_CONNECTED);
  if ( a2 )
  {
    PopConsoleSession = 1;
    dword_140C1F3B8 = a1;
  }
  PopSetSessionDisplayStatus(a1, 1LL, 0LL);
  v7 = 0LL;
  v10 = 0LL;
  v12 = 0;
  v8 = (((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
      * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64;
  v9 = v8;
  v11 = 1;
  if ( (_BYTE)PopAdaptiveBootContext )
    PopAdaptiveConsoleSessionOverrideTrigger(1LL);
  return PopAdaptiveGetSessionStateUnsafe(a1, &v7, a3);
}
