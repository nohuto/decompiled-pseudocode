/*
 * XREFs of ?zzzSetSystemCursor@@YA_NPEAUtagCURSOR@@K@Z @ 0x1C01AA0E4
 * Callers:
 *     NtUserSetSystemCursor @ 0x1C01DDAE0 (NtUserSetSystemCursor.c)
 * Callees:
 *     CheckWinstaAttributeAccess @ 0x1C003B230 (CheckWinstaAttributeAccess.c)
 *     ?zzzInternalSetSystemCursor@@YAXPEAUtagCURSOR@@IPEAU_UNICODE_STRING@@W4InputTracing_SetSystemCursorReason@@@Z @ 0x1C01084CC (-zzzInternalSetSystemCursor@@YAXPEAUtagCURSOR@@IPEAU_UNICODE_STRING@@W4InputTracing_SetSystemCur.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C0130974 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

char __fastcall zzzSetSystemCursor(struct tagCURSOR *a1, __int16 a2)
{
  _WORD *v2; // rax
  unsigned int i; // edi
  __int64 v6; // rbx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int128 v10; // [rsp+20h] [rbp-28h] BYREF
  __int64 v11; // [rsp+30h] [rbp-18h]

  v2 = (_WORD *)gasyscur[0];
  for ( i = 0; i < 0x13; ++i )
  {
    if ( *v2 == a2 )
      goto LABEL_5;
    v2 += 276;
  }
  if ( i == 19 )
    return 0;
LABEL_5:
  if ( !(unsigned int)CheckWinstaAttributeAccess(16LL) )
    return 0;
  if ( (*((_DWORD *)a1 + 20) & 0x40) != 0 )
  {
    MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 1700);
    return 0;
  }
  v6 = *((_QWORD *)a1 + 6);
  v11 = 0LL;
  v10 = 0LL;
  ThreadLock(gasyscur[69 * i + 1], &v10);
  zzzInternalSetSystemCursor(v6, i, 0LL, 3);
  ThreadUnlock1(v8, v7, v9);
  return 1;
}
