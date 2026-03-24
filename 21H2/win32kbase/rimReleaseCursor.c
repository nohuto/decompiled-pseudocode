/*
 * XREFs of rimReleaseCursor @ 0x1C01807F0
 * Callers:
 *     RIMCmDeactivateContact @ 0x1C01801B0 (RIMCmDeactivateContact.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00CE6A8 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

__int64 __fastcall rimReleaseCursor(__int64 a1, int a2)
{
  unsigned int v3; // ecx
  __int64 v5; // r8
  unsigned int v6; // r9d
  __int64 result; // rax
  unsigned int v8; // edx
  __int64 v9; // r10

  v3 = *(_DWORD *)(a1 + 976);
  LODWORD(v5) = v3;
  v6 = *(_DWORD *)(a1 + 980);
  result = v6;
  if ( v3 >= v6 )
  {
    MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 705);
    v6 = *(_DWORD *)(a1 + 980);
    result = v6;
    v3 = *(_DWORD *)(a1 + 976);
    LODWORD(v5) = v3;
  }
  v8 = 0;
  if ( (_DWORD)result )
  {
    v9 = *(_QWORD *)(a1 + 968);
    while ( 1 )
    {
      result = 3LL * v8;
      if ( a2 == *(_DWORD *)(v9 + 12LL * v8 + 4) )
        break;
      if ( ++v8 >= v6 )
      {
        LODWORD(v5) = v3;
        goto LABEL_10;
      }
    }
    *(_DWORD *)(v9 + 12LL * v8 + 8) = 0;
    v5 = *(unsigned int *)(a1 + 976);
    result = *(_QWORD *)(a1 + 968);
    if ( *(_DWORD *)(result + 12 * v5 + 8) )
    {
      *(_DWORD *)(a1 + 976) = v8;
      LODWORD(v5) = v8;
    }
  }
LABEL_10:
  if ( (unsigned int)v5 >= *(_DWORD *)(a1 + 980) )
    return MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 721);
  return result;
}
