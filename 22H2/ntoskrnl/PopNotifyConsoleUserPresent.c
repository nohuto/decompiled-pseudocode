/*
 * XREFs of PopNotifyConsoleUserPresent @ 0x140772DC0
 * Callers:
 *     NtSetThreadExecutionState @ 0x1406F8710 (NtSetThreadExecutionState.c)
 *     PopReleaseAdaptiveLock @ 0x1407251C4 (PopReleaseAdaptiveLock.c)
 *     PopDispatchFullWake @ 0x14077A090 (PopDispatchFullWake.c)
 *     PopUserPresentSetWorker @ 0x14078EA40 (PopUserPresentSetWorker.c)
 *     PopSetSystemAwayMode @ 0x1408E7820 (PopSetSystemAwayMode.c)
 * Callees:
 *     RtlGetActiveConsoleId @ 0x14034ADC0 (RtlGetActiveConsoleId.c)
 *     PopInvokeWin32Callout @ 0x1406F45B8 (PopInvokeWin32Callout.c)
 *     TtmNotifyConsoleUserPresent @ 0x1408FE934 (TtmNotifyConsoleUserPresent.c)
 */

void __fastcall PopNotifyConsoleUserPresent(unsigned __int8 a1, char a2, unsigned int a3)
{
  ULONG ActiveConsoleId; // eax
  int v6; // [rsp+20h] [rbp-30h] BYREF
  char v7; // [rsp+24h] [rbp-2Ch]
  __int16 v8; // [rsp+25h] [rbp-2Bh]
  char v9; // [rsp+27h] [rbp-29h]
  int v10; // [rsp+28h] [rbp-28h]
  int v11; // [rsp+2Ch] [rbp-24h]
  __int64 *v12; // [rsp+30h] [rbp-20h]
  int v13; // [rsp+38h] [rbp-18h]
  int v14; // [rsp+3Ch] [rbp-14h]
  __int64 v15; // [rsp+40h] [rbp-10h]
  ULONG v16; // [rsp+78h] [rbp+28h] BYREF
  __int64 v17; // [rsp+88h] [rbp+38h] BYREF

  LOBYTE(v16) = a2;
  v8 = 0;
  v9 = 0;
  v11 = 0;
  v14 = 0;
  v17 = 0LL;
  if ( PsWin32CalloutsEstablished )
  {
    ActiveConsoleId = RtlGetActiveConsoleId();
    v16 = ActiveConsoleId;
    if ( ActiveConsoleId != -1 )
    {
      if ( TtmpEnabled == 1 )
      {
        TtmNotifyConsoleUserPresent(ActiveConsoleId, a3);
      }
      else
      {
        LOWORD(v17) = a1;
        v12 = &v17;
        HIDWORD(v17) = a3;
        v6 = 1;
        v7 = 0;
        v10 = 8;
        v13 = 0;
        v15 = 0LL;
        PopInvokeWin32Callout(5, (__int64)&v6, 1, (int *)&v16);
      }
    }
  }
}
