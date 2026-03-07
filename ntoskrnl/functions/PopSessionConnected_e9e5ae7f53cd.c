char __fastcall PopSessionConnected(unsigned int a1, __int64 a2, __int64 a3)
{
  PopDiagTraceSessionStates(&POP_ETW_ADPM_SESSION_CONNECTED);
  if ( *(_BYTE *)(a2 + 1) )
  {
    PopConsoleSession = 1;
    dword_140C398D8 = a1;
  }
  PopSetSessionDisplayStatus(a1, 1LL, 0LL);
  if ( PopAdaptiveBootContext )
  {
    dword_140C3990C = 0;
    byte_140C398F8 = 1;
    qword_140C39900 = (((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
                     * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64;
    dword_140C39908 = 2;
    PopDiagTraceAdaptiveOverrideTriggered(qword_140C39900, 1LL, 2LL, 0LL);
  }
  return PopAdaptiveGetSessionStateUnsafe(a1, (__int64 *)(a2 + 8), a3);
}
