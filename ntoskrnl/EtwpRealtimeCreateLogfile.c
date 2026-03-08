/*
 * XREFs of EtwpRealtimeCreateLogfile @ 0x14069152C
 * Callers:
 *     EtwpLogger @ 0x1406926A0 (EtwpLogger.c)
 * Callees:
 *     RtlStringCbPrintfW @ 0x1402078E4 (RtlStringCbPrintfW.c)
 *     RtlInitUnicodeString @ 0x14030EBB0 (RtlInitUnicodeString.c)
 *     RtlCreateUnicodeString @ 0x140747D00 (RtlCreateUnicodeString.c)
 *     EtwpSendSessionNotification @ 0x1407489B8 (EtwpSendSessionNotification.c)
 *     EtwpDelayCreate @ 0x1407725F4 (EtwpDelayCreate.c)
 *     EtwpExpandFileName @ 0x140772920 (EtwpExpandFileName.c)
 *     RtlFreeUnicodeString @ 0x1407F0430 (RtlFreeUnicodeString.c)
 *     EtwpRealtimeResetReferenceTime @ 0x1407FCBFC (EtwpRealtimeResetReferenceTime.c)
 *     EtwpRealtimeRestoreState @ 0x14084FCD8 (EtwpRealtimeRestoreState.c)
 *     EtwpRealtimeZeroTruncateLogfile @ 0x1408540C0 (EtwpRealtimeZeroTruncateLogfile.c)
 *     EtwpRealtimeUpdateReferenceTime @ 0x1408815D8 (EtwpRealtimeUpdateReferenceTime.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall EtwpRealtimeCreateLogfile(__int64 a1)
{
  __int64 v1; // r14
  __int64 v4; // rax
  size_t v5; // rsi
  wchar_t *Pool2; // rax
  WCHAR *v7; // rdi
  WCHAR v8; // ax
  WCHAR *v9; // rdx
  __int64 v10; // rax
  const WCHAR *v11; // rdx
  __int64 v12; // rcx
  int updated; // edi
  UNICODE_STRING DestinationString; // [rsp+40h] [rbp-38h] BYREF

  v1 = a1 + 360;
  DestinationString = 0LL;
  if ( *(_QWORD *)(a1 + 360) )
    return 0LL;
  RtlInitUnicodeString(&DestinationString, 0LL);
  if ( *(_WORD *)(a1 + 368) )
    goto LABEL_23;
  v4 = -1LL;
  do
    ++v4;
  while ( *(_WORD *)(*(_QWORD *)(a1 + 144) + 2 * v4) );
  v5 = 2LL * (unsigned int)(v4 + 9) + 2;
  Pool2 = (wchar_t *)ExAllocatePool2(256LL, v5, 1350005829LL);
  v7 = Pool2;
  if ( !Pool2 )
    return 3221225495LL;
  if ( !RtlStringCbPrintfW(Pool2, v5, L"EtwRT%ws.etl", *(_QWORD *)(a1 + 144)) )
  {
    v8 = *v7;
    v9 = v7;
    while ( v8 )
    {
      if ( v8 == 34 || v8 == 47 || v8 == 58 || v8 == 60 || v8 == 62 || v8 == 63 || v8 == 92 || v8 == 124 )
        *v9 = 95;
      v8 = *++v9;
    }
    v10 = *(_QWORD *)(a1 + 1096);
    v11 = L"%SystemRoot%\\system32\\Logfiles\\WMI\\RtBackup\\";
    if ( *(_QWORD *)(v10 + 4112) )
      v11 = *(const WCHAR **)(v10 + 4112);
    if ( RtlCreateUnicodeString((PUNICODE_STRING)(a1 + 368), v11) )
    {
      RtlInitUnicodeString(&DestinationString, v7);
      LOBYTE(v12) = 1;
      updated = EtwpExpandFileName(v12, a1 + 368, 0LL, &DestinationString, *(_QWORD *)(a1 + 1096) == EtwpHostSiloState);
      if ( updated >= 0 )
      {
LABEL_23:
        updated = EtwpDelayCreate(v1, 1, 1, 0LL);
        if ( updated >= 0 )
        {
          *(_QWORD *)(a1 + 392) = 72LL;
          *(_QWORD *)(a1 + 384) = 72LL;
          *(_QWORD *)(a1 + 400) = 72LL;
          if ( (*(_DWORD *)(a1 + 816) & 1) != 0 )
          {
            updated = EtwpRealtimeRestoreState(a1);
            if ( updated < 0 )
              goto LABEL_30;
            if ( *(_DWORD *)(a1 + 424) )
              updated = EtwpRealtimeUpdateReferenceTime(a1, a1 + 304);
            if ( updated < 0 )
            {
LABEL_30:
              EtwpRealtimeZeroTruncateLogfile(a1);
              EtwpRealtimeResetReferenceTime(a1);
              *(_DWORD *)(a1 + 260) += *(_DWORD *)(a1 + 424);
              *(_DWORD *)(a1 + 448) = 3;
              *(_DWORD *)(a1 + 424) = 0;
              *(_QWORD *)(a1 + 408) = 0LL;
              EtwpSendSessionNotification(a1, 4LL, 3221225730LL);
              updated = 0;
            }
          }
        }
      }
    }
    else
    {
      updated = -1073741801;
    }
    RtlFreeUnicodeString(&DestinationString);
    return (unsigned int)updated;
  }
  ExFreePoolWithTag(v7, 0);
  return 3221225485LL;
}
