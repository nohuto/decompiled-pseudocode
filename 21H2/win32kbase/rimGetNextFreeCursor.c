/*
 * XREFs of rimGetNextFreeCursor @ 0x1C01B6AD0
 * Callers:
 *     RIMCmActivateContact @ 0x1C01B5F68 (RIMCmActivateContact.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0241334 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall rimGetNextFreeCursor(__int64 a1, __int64 a2)
{
  unsigned int v2; // r9d
  __int64 v4; // rcx
  unsigned int v5; // edi
  __int64 v6; // r8
  unsigned int v7; // r10d
  __int64 v8; // rsi
  unsigned int v9; // ebp

  v2 = *(_DWORD *)(a1 + 1032);
  v4 = *(unsigned int *)(a1 + 1036);
  v5 = 0;
  v6 = (unsigned int)v4;
  if ( v2 >= (unsigned int)v4 )
  {
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v4, a2, (unsigned int)v4);
    v4 = *(unsigned int *)(a1 + 1036);
    v6 = v4;
    v2 = *(_DWORD *)(a1 + 1032);
  }
  v7 = 0;
  if ( (_DWORD)v6 )
  {
    v8 = *(_QWORD *)(a1 + 1024);
    v9 = v6;
    while ( 1 )
    {
      a2 = v2 % (unsigned int)v6;
      v2 = v2 % (unsigned int)v6 + 1;
      if ( !*(_DWORD *)(v8 + 12LL * (unsigned int)a2 + 8) )
        break;
      ++v7;
      v9 = v4;
      if ( v7 >= (unsigned int)v4 )
      {
        v6 = (unsigned int)v4;
        goto LABEL_9;
      }
    }
    v4 = 3 * a2;
    v5 = *(_DWORD *)(v8 + 12 * a2 + 4);
    a2 = v2 % v9;
    *(_DWORD *)(a1 + 1032) = v2 % v9;
    *(_DWORD *)(v8 + 4 * v4 + 8) = 1;
    v6 = *(unsigned int *)(a1 + 1036);
  }
LABEL_9:
  if ( *(_DWORD *)(a1 + 1032) >= (unsigned int)v6 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v4, a2, v6);
  return v5;
}
