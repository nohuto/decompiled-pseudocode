/*
 * XREFs of PopInputDisabled @ 0x1408F526C
 * Callers:
 *     PopAdaptivePowerSettingCallback @ 0x140792510 (PopAdaptivePowerSettingCallback.c)
 * Callees:
 *     MmGetSessionId @ 0x1402863C0 (MmGetSessionId.c)
 *     MmGetNextSession @ 0x1402872E0 (MmGetNextSession.c)
 *     PsIsServiceSession @ 0x140621468 (PsIsServiceSession.c)
 *     PopSetSessionUserStatus @ 0x140671770 (PopSetSessionUserStatus.c)
 */

void __fastcall PopInputDisabled(unsigned int a1, char a2, char a3)
{
  struct _DMA_ADAPTER *i; // rcx
  unsigned int SessionId; // edi
  __int64 NextSession; // rax
  struct _DMA_ADAPTER *v8; // rbx

  if ( a3 )
  {
    for ( i = 0LL; ; i = v8 )
    {
      NextSession = MmGetNextSession(i);
      v8 = (struct _DMA_ADAPTER *)NextSession;
      if ( !NextSession )
        break;
      SessionId = MmGetSessionId(NextSession);
      if ( !PsIsServiceSession(SessionId) && a1 != SessionId )
        PopSetSessionUserStatus(SessionId, 0);
    }
  }
  if ( a2 )
    PopSetSessionUserStatus(a1, 0);
}
