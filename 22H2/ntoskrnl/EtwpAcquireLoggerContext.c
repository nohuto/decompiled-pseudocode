/*
 * XREFs of EtwpAcquireLoggerContext @ 0x140712790
 * Callers:
 *     EtwpTransitionToRealtime @ 0x1403F8718 (EtwpTransitionToRealtime.c)
 *     EtwpFlushTrace @ 0x140710F3C (EtwpFlushTrace.c)
 *     EtwpStopTrace @ 0x14071185C (EtwpStopTrace.c)
 *     EtwpQueryTrace @ 0x1407126B8 (EtwpQueryTrace.c)
 *     EtwpUpdateTrace @ 0x140791BF8 (EtwpUpdateTrace.c)
 *     EtwpIncrementTraceFile @ 0x140934C34 (EtwpIncrementTraceFile.c)
 * Callees:
 *     EtwpAcquireLoggerContextByLoggerName @ 0x1406024C8 (EtwpAcquireLoggerContextByLoggerName.c)
 *     RtlFreeAnsiString @ 0x140602CB0 (RtlFreeAnsiString.c)
 *     EtwpAcquireLoggerContextByLoggerId @ 0x1406BC864 (EtwpAcquireLoggerContextByLoggerId.c)
 *     EtwpCaptureString @ 0x1407128E4 (EtwpCaptureString.c)
 */

__int64 __fastcall EtwpAcquireLoggerContext(__int64 a1, __int64 a2, _QWORD *a3)
{
  unsigned int v3; // r9d
  unsigned int v7; // edx
  __int64 v8; // rax
  unsigned int *v9; // rax
  bool v10; // zf
  __int64 result; // rax
  UNICODE_STRING UnicodeString; // [rsp+20h] [rbp-18h] BYREF

  v3 = *(unsigned __int8 *)(a1 + 4208);
  *a3 = 0LL;
  v7 = -1;
  v8 = *(_QWORD *)(a2 + 24) - *(_QWORD *)&SystemTraceControlGuid.Data1;
  if ( !v8 )
    v8 = *(_QWORD *)(a2 + 32) - *(_QWORD *)SystemTraceControlGuid.Data4;
  if ( !v8 )
    v7 = v3;
  if ( v7 != v3 && *(_WORD *)(a2 + 144) )
  {
    UnicodeString = 0LL;
    result = EtwpCaptureString(a2 + 144, &UnicodeString);
    if ( (int)result < 0 )
      return result;
    *a3 = EtwpAcquireLoggerContextByLoggerName(a1, &UnicodeString, 1);
    RtlFreeAnsiString(&UnicodeString);
    v10 = *a3 == 0LL;
  }
  else
  {
    if ( v7 == -1 )
    {
      v7 = v3;
      if ( *(_WORD *)(a2 + 8) != 0xFFFF )
        v7 = *(unsigned __int16 *)(a2 + 8);
      if ( v7 >= *(_DWORD *)(a1 + 16) )
        return 3221225480LL;
    }
    v9 = EtwpAcquireLoggerContextByLoggerId(a1, v7, 1);
    *a3 = v9;
    v10 = v9 == 0LL;
  }
  if ( v10 )
    return 3221226134LL;
  else
    return 0LL;
}
