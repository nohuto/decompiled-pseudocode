/*
 * XREFs of RIMCmActivateContact @ 0x1C01DDE90
 * Callers:
 *     rimFindOrCreateActiveContact @ 0x1C01D8680 (rimFindOrCreateActiveContact.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00E1640 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     rimGetNextFreeCursor @ 0x1C01DEDAC (rimGetNextFreeCursor.c)
 */

__int64 *__fastcall RIMCmActivateContact(__int64 a1, unsigned int a2)
{
  __int64 **v4; // rcx
  __int64 *v5; // rdi
  __int64 v6; // rsi
  __int64 *v7; // rax
  int NextFreeCursor; // eax
  __int64 **v9; // rax

  v4 = (__int64 **)(a1 + 976);
  v5 = *v4;
  if ( *v4 == (__int64 *)v4 )
    return 0LL;
  v6 = *(_QWORD *)(a1 + 992) + 16LL * (a2 % *(_DWORD *)(a1 + 1000));
  if ( (__int64 **)v5[1] != v4 )
    goto LABEL_18;
  v7 = (__int64 *)*v5;
  if ( *(__int64 **)(*v5 + 8) != v5 )
    goto LABEL_18;
  *v4 = v7;
  v7[1] = (__int64)v4;
  if ( (v5[2] & 2) != 0 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 275);
  if ( *((_DWORD *)v5 - 2) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 276);
  *((_DWORD *)v5 + 4) |= 2u;
  *((_DWORD *)v5 - 4) = a2;
  if ( *(_DWORD *)(a1 + 768) != 1 || (*(_DWORD *)(a1 + 360) & 0x20) != 0 )
    NextFreeCursor = rimGetNextFreeCursor(a1);
  else
    NextFreeCursor = *(unsigned __int16 *)(*(_QWORD *)(a1 + 1024) + 4LL);
  *((_DWORD *)v5 - 3) = NextFreeCursor;
  v5[1] = 0LL;
  *v5 = 0LL;
  v9 = *(__int64 ***)(v6 + 8);
  if ( *v9 != (__int64 *)v6 )
LABEL_18:
    __fastfail(3u);
  *v5 = v6;
  v5[1] = (__int64)v9;
  *v9 = v5;
  *(_QWORD *)(v6 + 8) = v5;
  if ( *(_DWORD *)(a1 + 1008) >= *(_DWORD *)(a1 + 768) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 298);
  if ( ++*(_DWORD *)(a1 + 1008) < ++*(_DWORD *)(a1 + 1012) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 302);
  return v5 - 2;
}
