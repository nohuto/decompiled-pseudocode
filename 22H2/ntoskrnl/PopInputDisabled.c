/*
 * XREFs of PopInputDisabled @ 0x1408F515C
 * Callers:
 *     PopAdaptivePowerSettingCallback @ 0x14079B1C0 (PopAdaptivePowerSettingCallback.c)
 * Callees:
 *     MmGetSessionId @ 0x140252DB0 (MmGetSessionId.c)
 *     MmGetNextSession @ 0x140263DE0 (MmGetNextSession.c)
 *     PsIsServiceSession @ 0x1406A5008 (PsIsServiceSession.c)
 *     PopSetSessionUserStatus @ 0x1407255E4 (PopSetSessionUserStatus.c)
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
