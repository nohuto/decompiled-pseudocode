/*
 * XREFs of ?zzzSetSystemCursor@@YA_NPEAUtagCURSOR@@K@Z @ 0x1C01D41AC
 * Callers:
 *     NtUserSetSystemCursor @ 0x1C0202A90 (NtUserSetSystemCursor.c)
 * Callees:
 *     ?zzzInternalSetSystemCursor@@YAXPEAUtagCURSOR@@IPEAU_UNICODE_STRING@@W4InputTracing_SetSystemCursorReason@@@Z @ 0x1C00249F4 (-zzzInternalSetSystemCursor@@YAXPEAUtagCURSOR@@IPEAU_UNICODE_STRING@@W4InputTracing_SetSystemCur.c)
 *     CheckWinstaAttributeAccess @ 0x1C00333F0 (CheckWinstaAttributeAccess.c)
 *     W32GetThreadWin32Thread @ 0x1C008E510 (W32GetThreadWin32Thread.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C016E324 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

char __fastcall zzzSetSystemCursor(struct tagCURSOR *a1, __int16 a2)
{
  _WORD *v2; // rax
  unsigned int i; // ebx
  __int64 v6; // rsi
  __int64 v7; // rdi
  __int64 ThreadWin32Thread; // rax
  __int64 v9; // rcx
  _QWORD v10[5]; // [rsp+20h] [rbp-28h] BYREF

  v2 = (_WORD *)gasyscur[0];
  for ( i = 0; i < 0x13; ++i )
  {
    if ( *v2 == a2 )
      break;
    v2 += 276;
  }
  if ( i == 19 || !(unsigned int)CheckWinstaAttributeAccess(16LL) )
    return 0;
  if ( (*((_DWORD *)a1 + 20) & 0x40) != 0 )
  {
    MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 1683);
    return 0;
  }
  v6 = *((_QWORD *)a1 + 6);
  v10[2] = 0LL;
  v7 = gasyscur[69 * i + 1];
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  v10[0] = *(_QWORD *)(ThreadWin32Thread + 416);
  *(_QWORD *)(ThreadWin32Thread + 416) = v10;
  v10[1] = v7;
  if ( v7 )
    HMLockObject(v7);
  zzzInternalSetSystemCursor(v6, i, 0LL, 3u);
  ThreadUnlock1(v9);
  return 1;
}
