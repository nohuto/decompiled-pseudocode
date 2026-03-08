/*
 * XREFs of EtwpAcquireLoggerContextByLoggerName @ 0x140692AB4
 * Callers:
 *     EtwpAcquireLoggerContext @ 0x140745800 (EtwpAcquireLoggerContext.c)
 *     EtwQueryTraceHandleByLoggerName @ 0x1407968F8 (EtwQueryTraceHandleByLoggerName.c)
 *     EtwpEnableBootLoggerRegistryProviders @ 0x140B943A4 (EtwpEnableBootLoggerRegistryProviders.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x14033FF20 (KeWaitForSingleObject.c)
 *     EtwpReleaseLoggerContext @ 0x14069349C (EtwpReleaseLoggerContext.c)
 *     EtwpAcquireLoggerContextByLoggerId @ 0x140693AFC (EtwpAcquireLoggerContextByLoggerId.c)
 *     RtlEqualUnicodeString @ 0x1406EA560 (RtlEqualUnicodeString.c)
 */

__int64 __fastcall EtwpAcquireLoggerContextByLoggerName(__int64 a1, const UNICODE_STRING *a2, char a3)
{
  unsigned int v6; // edi
  __int64 v7; // rax
  __int64 v8; // rbx
  __int64 v9; // rdx

  if ( !a2 )
    return 0LL;
  v6 = 0;
  if ( !*(_DWORD *)(a1 + 16) )
    return 0LL;
  while ( 1 )
  {
    v7 = EtwpAcquireLoggerContextByLoggerId(a1, v6, 0LL);
    v8 = v7;
    if ( v7 )
      break;
LABEL_7:
    if ( ++v6 >= *(_DWORD *)(a1 + 16) )
      return 0LL;
  }
  if ( !RtlEqualUnicodeString((PCUNICODE_STRING)(v7 + 136), a2, 1u) )
  {
    v9 = 0LL;
LABEL_6:
    EtwpReleaseLoggerContext(v8, v9);
    goto LABEL_7;
  }
  if ( a3 )
    KeWaitForSingleObject((PVOID)(v8 + 632), Executive, 0, 0, 0LL);
  if ( !*(_DWORD *)(v8 + 320) )
  {
    LOBYTE(v9) = a3;
    goto LABEL_6;
  }
  return v8;
}
