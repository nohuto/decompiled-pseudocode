/*
 * XREFs of rimGetNextFreeCursor @ 0x1C0180614
 * Callers:
 *     RIMCmActivateContact @ 0x1C017F9A4 (RIMCmActivateContact.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00CE808 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

__int64 __fastcall rimGetNextFreeCursor(__int64 a1)
{
  unsigned int v1; // r9d
  unsigned int v2; // r8d
  unsigned int v4; // edi
  unsigned int v5; // ecx
  unsigned int v6; // r10d
  __int64 v7; // rsi
  unsigned int v8; // ebp
  __int64 v9; // rdx

  v1 = *(_DWORD *)(a1 + 976);
  v2 = *(_DWORD *)(a1 + 980);
  v4 = 0;
  v5 = v2;
  if ( v1 >= v2 )
  {
    MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 679);
    v2 = *(_DWORD *)(a1 + 980);
    v5 = v2;
    v1 = *(_DWORD *)(a1 + 976);
  }
  v6 = 0;
  if ( v5 )
  {
    v7 = *(_QWORD *)(a1 + 968);
    v8 = v5;
    while ( 1 )
    {
      v9 = v1 % v5;
      v1 = v1 % v5 + 1;
      if ( !*(_DWORD *)(v7 + 12LL * (unsigned int)v9 + 8) )
        break;
      ++v6;
      v8 = v2;
      if ( v6 >= v2 )
      {
        v5 = v2;
        goto LABEL_9;
      }
    }
    v4 = *(_DWORD *)(v7 + 12 * v9 + 4);
    *(_DWORD *)(a1 + 976) = v1 % v8;
    *(_DWORD *)(v7 + 12 * v9 + 8) = 1;
    v5 = *(_DWORD *)(a1 + 980);
  }
LABEL_9:
  if ( *(_DWORD *)(a1 + 976) >= v5 )
    MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 694);
  return v4;
}
