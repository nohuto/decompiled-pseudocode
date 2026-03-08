/*
 * XREFs of EtwpExpandFileName @ 0x140772920
 * Callers:
 *     EtwpRealtimeCreateLogfile @ 0x14069152C (EtwpRealtimeCreateLogfile.c)
 *     EtwpCreateLogFile @ 0x140772270 (EtwpCreateLogFile.c)
 * Callees:
 *     RtlStringCbPrintfW @ 0x1402078E4 (RtlStringCbPrintfW.c)
 *     PsGetCurrentServerSiloGlobals @ 0x140267B30 (PsGetCurrentServerSiloGlobals.c)
 *     RtlInitUnicodeString @ 0x14030EBB0 (RtlInitUnicodeString.c)
 *     EtwpGetDriverDataDosPath @ 0x1403D1CCC (EtwpGetDriverDataDosPath.c)
 *     _wcsnicmp @ 0x1403D4010 (_wcsnicmp.c)
 *     RtlFreeUnicodeString @ 0x1407F0430 (RtlFreeUnicodeString.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 */

__int64 __fastcall EtwpExpandFileName(char a1, UNICODE_STRING *a2, unsigned int a3, unsigned __int16 *a4, char a5)
{
  __int64 v5; // r12
  char v8; // r15
  char v9; // r13
  __int64 Length; // rax
  __int64 v11; // r10
  struct _LIST_ENTRY *v12; // rdi
  unsigned int v13; // esi
  size_t v14; // rbx
  __int64 result; // rax
  wchar_t *Pool2; // rax
  const WCHAR *v17; // rsi
  const WCHAR *Blink; // r9
  const WCHAR *v19; // rdx
  NTSTATUS v20; // eax
  unsigned int v21; // edi
  __int64 v22; // rax
  __int64 v23; // rcx
  __int64 v24; // rax
  size_t v25; // rbx
  struct _LIST_ENTRY *v26; // [rsp+88h] [rbp+10h] BYREF
  unsigned int v27; // [rsp+90h] [rbp+18h]

  v27 = a3;
  v5 = 0LL;
  v26 = 0LL;
  v8 = 0;
  v9 = 0;
  Length = a2->Length;
  v11 = a3 != 0 ? 8 : 0;
  v12 = 0LL;
  v13 = 0;
  if ( a1 )
  {
    v8 = 1;
    v14 = Length + v11 + 2 + *a4;
  }
  else
  {
    v14 = Length + v11 + 2;
  }
  if ( !wcsnicmp(a2->Buffer, L"%SystemRoot%", 0xCuLL) )
  {
    if ( a2->Length == 24 )
    {
      v9 = 1;
      v22 = *a4 + 54LL;
    }
    else
    {
      if ( a2->Buffer[((unsigned __int64)a2->Length >> 1) - 1] != 92 )
      {
LABEL_24:
        v12 = PsGetCurrentServerSiloGlobals() + 79;
LABEL_25:
        v5 = 12LL;
        v14 += LOWORD(v12->Flink) - 24LL;
        goto LABEL_6;
      }
      v22 = *a4;
      v8 = 1;
    }
    v14 += v22;
    goto LABEL_24;
  }
  if ( a5 && !wcsnicmp(a2->Buffer, L"%DriverData%", 0xCuLL) )
  {
    result = EtwpGetDriverDataDosPath(&v26);
    v13 = result;
    if ( (int)result < 0 )
      return result;
    v12 = v26;
    goto LABEL_25;
  }
LABEL_6:
  if ( !v27 && !v8 && !v12 )
    return v13;
  Pool2 = (wchar_t *)ExAllocatePool2(256LL, v14, 1350005829LL);
  v17 = Pool2;
  if ( !Pool2 )
    return 3221225495LL;
  if ( v9 )
  {
    v20 = RtlStringCbPrintfW(
            Pool2,
            v14,
            L"%ws%ws%ws%ws",
            v12->Blink,
            L"\\system32\\Logfiles\\WMI\\",
            *((_QWORD *)a4 + 1),
            L".etl");
  }
  else
  {
    Blink = &word_1408834C0;
    if ( v8 )
      v19 = (const WCHAR *)*((_QWORD *)a4 + 1);
    else
      v19 = &word_1408834C0;
    if ( v12 )
      Blink = (const WCHAR *)v12->Blink;
    v20 = RtlStringCbPrintfW(Pool2, v14, L"%ws%ws%ws", Blink, &a2->Buffer[v5], v19);
  }
  v21 = v20;
  if ( v27 )
  {
    v23 = -1LL;
    v24 = -1LL;
    do
      ++v24;
    while ( v17[v24] );
    v25 = v14 - 2 * v24;
    do
      ++v23;
    while ( v17[v23] );
    v21 = RtlStringCbPrintfW((NTSTRSAFE_PWSTR)&v17[v23], v25, L".%03d", v27);
  }
  RtlFreeUnicodeString(a2);
  RtlInitUnicodeString(a2, v17);
  return v21;
}
