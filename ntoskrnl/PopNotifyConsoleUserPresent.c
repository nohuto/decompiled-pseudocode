/*
 * XREFs of PopNotifyConsoleUserPresent @ 0x14073A3BC
 * Callers:
 *     PopUserPresentSetWorker @ 0x14058BD10 (PopUserPresentSetWorker.c)
 *     PopSessionWinlogonNotification @ 0x14067F97C (PopSessionWinlogonNotification.c)
 *     NtSetThreadExecutionState @ 0x14073A9D0 (NtSetThreadExecutionState.c)
 *     PopSetSystemAwayMode @ 0x140987890 (PopSetSystemAwayMode.c)
 * Callees:
 *     RtlGetActiveConsoleId @ 0x1402B8940 (RtlGetActiveConsoleId.c)
 *     PopInvokeWin32Callout @ 0x14073A52C (PopInvokeWin32Callout.c)
 *     TtmIsEnabled @ 0x14073C8BC (TtmIsEnabled.c)
 *     TtmNotifyConsoleUserPresent @ 0x1409A1234 (TtmNotifyConsoleUserPresent.c)
 */

__int64 __fastcall PopNotifyConsoleUserPresent(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  unsigned int v3; // edi
  char v4; // si
  unsigned int v5; // ebx
  int v6; // [rsp+20h] [rbp-30h] BYREF
  __int16 v7; // [rsp+25h] [rbp-2Bh]
  char v8; // [rsp+27h] [rbp-29h]
  int v9; // [rsp+28h] [rbp-28h]
  int v10; // [rsp+2Ch] [rbp-24h]
  int *v11; // [rsp+30h] [rbp-20h]
  int v12; // [rsp+38h] [rbp-18h]
  int v13; // [rsp+3Ch] [rbp-14h]
  __int64 v14; // [rsp+40h] [rbp-10h]
  int v15; // [rsp+80h] [rbp+30h] BYREF
  int v16; // [rsp+88h] [rbp+38h] BYREF
  unsigned int v17; // [rsp+8Ch] [rbp+3Ch]

  result = 0LL;
  v3 = a2;
  v4 = a1;
  v7 = 0;
  v8 = 0;
  v10 = 0;
  v13 = 0;
  v16 = 0;
  LOBYTE(v17) = 0;
  if ( PsWin32CalloutsEstablished )
  {
    result = RtlGetActiveConsoleId(a1, a2);
    v15 = result;
    v5 = result;
    if ( (_DWORD)result != -1 )
    {
      if ( (unsigned __int8)TtmIsEnabled() )
      {
        return TtmNotifyConsoleUserPresent(v5, v3);
      }
      else
      {
        LOBYTE(v16) = v4;
        v11 = &v16;
        v17 = v3;
        v9 = 8;
        v12 = 0;
        v14 = 0LL;
        return PopInvokeWin32Callout(5LL, &v6, 1LL, &v15, 1);
      }
    }
  }
  return result;
}
