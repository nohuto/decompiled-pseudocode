/*
 * XREFs of RIMCmActivateContact @ 0x1C017FA74
 * Callers:
 *     rimFindOrCreateActiveContact @ 0x1C017B6C0 (rimFindOrCreateActiveContact.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00CE6A8 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     rimGetNextFreeCursor @ 0x1C01806E4 (rimGetNextFreeCursor.c)
 */

__int64 *__fastcall RIMCmActivateContact(__int64 a1, unsigned int a2)
{
  __int64 **v4; // rcx
  __int64 *v5; // rbx
  __int64 v6; // rsi
  __int64 *v7; // rax
  int NextFreeCursor; // eax
  __int64 **v9; // rax
  unsigned int v10; // r8d
  unsigned int v11; // r8d

  v4 = (__int64 **)(a1 + 920);
  v5 = *v4;
  if ( *v4 == (__int64 *)v4 )
    return 0LL;
  v6 = *(_QWORD *)(a1 + 936) + 16LL * (a2 % *(_DWORD *)(a1 + 944));
  if ( (__int64 **)v5[1] != v4 )
    goto LABEL_18;
  v7 = (__int64 *)*v5;
  if ( *(__int64 **)(*v5 + 8) != v5 )
    goto LABEL_18;
  *v4 = v7;
  v7[1] = (__int64)v4;
  if ( (v5[2] & 2) != 0 )
    MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 274);
  if ( *((_DWORD *)v5 - 2) )
    MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 275);
  *((_DWORD *)v5 + 4) |= 2u;
  *((_DWORD *)v5 - 4) = a2;
  if ( *(_DWORD *)(a1 + 720) != 1 || (*(_DWORD *)(a1 + 312) & 0x20) != 0 )
    NextFreeCursor = rimGetNextFreeCursor(a1);
  else
    NextFreeCursor = *(unsigned __int16 *)(*(_QWORD *)(a1 + 968) + 4LL);
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
  v10 = *(_DWORD *)(a1 + 952);
  if ( v10 >= *(_DWORD *)(a1 + 720) )
  {
    MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 297);
    v10 = *(_DWORD *)(a1 + 952);
  }
  ++*(_DWORD *)(a1 + 956);
  v11 = v10 + 1;
  *(_DWORD *)(a1 + 952) = v11;
  if ( v11 < *(_DWORD *)(a1 + 956) )
    MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 301);
  return v5 - 2;
}
