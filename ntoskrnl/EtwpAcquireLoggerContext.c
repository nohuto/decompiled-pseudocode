/*
 * XREFs of EtwpAcquireLoggerContext @ 0x140745800
 * Callers:
 *     EtwpTransitionToRealtime @ 0x1405FD178 (EtwpTransitionToRealtime.c)
 *     EtwpUpdateTrace @ 0x140744D3C (EtwpUpdateTrace.c)
 *     EtwpStopTrace @ 0x140745044 (EtwpStopTrace.c)
 *     EtwpQueryTrace @ 0x1407456E0 (EtwpQueryTrace.c)
 *     EtwpFlushTrace @ 0x140748AA8 (EtwpFlushTrace.c)
 *     EtwpIncrementTraceFile @ 0x1409E5140 (EtwpIncrementTraceFile.c)
 * Callees:
 *     EtwpAcquireLoggerContextByLoggerName @ 0x140692AB4 (EtwpAcquireLoggerContextByLoggerName.c)
 *     EtwpAcquireLoggerContextByLoggerId @ 0x140693AFC (EtwpAcquireLoggerContextByLoggerId.c)
 *     EtwpCaptureString @ 0x1407478D0 (EtwpCaptureString.c)
 *     RtlFreeUnicodeString @ 0x1407F0430 (RtlFreeUnicodeString.c)
 */

__int64 __fastcall EtwpAcquireLoggerContext(__int64 a1, __int64 a2, _QWORD *a3)
{
  unsigned __int8 *v4; // r9
  unsigned int v7; // edx
  __int64 v8; // rax
  unsigned int *v9; // rax
  __int64 result; // rax
  UNICODE_STRING UnicodeString; // [rsp+20h] [rbp-18h] BYREF

  v4 = (unsigned __int8 *)(a1 + 4232);
  *a3 = 0LL;
  v7 = -1;
  v8 = *(_QWORD *)(a2 + 24) - SystemTraceControlGuid;
  if ( !v8 )
    v8 = *(_QWORD *)(a2 + 32) - 0x3969A8086000829ALL;
  if ( !v8 )
    v7 = *v4;
  if ( v7 != *v4 && *(_WORD *)(a2 + 144) )
  {
    UnicodeString = 0LL;
    result = EtwpCaptureString(a2 + 144, &UnicodeString);
    if ( (int)result >= 0 )
    {
      *a3 = EtwpAcquireLoggerContextByLoggerName(a1, &UnicodeString, 1);
      RtlFreeUnicodeString(&UnicodeString);
      if ( *a3 )
        return 0LL;
      else
        return 3221226134LL;
    }
  }
  else
  {
    if ( v7 != -1 )
      goto LABEL_11;
    v7 = *v4;
    if ( *(_WORD *)(a2 + 8) != 0xFFFF )
      v7 = *(unsigned __int16 *)(a2 + 8);
    if ( v7 >= *(_DWORD *)(a1 + 16) )
    {
      return 3221225480LL;
    }
    else
    {
LABEL_11:
      v9 = EtwpAcquireLoggerContextByLoggerId(a1, v7, 1);
      *a3 = v9;
      return v9 == 0LL ? 0xC0000296 : 0;
    }
  }
  return result;
}
