/*
 * XREFs of EtwpGenerateFileName @ 0x14079A7F0
 * Callers:
 *     EtwpFlushBufferToLogfile @ 0x140691270 (EtwpFlushBufferToLogfile.c)
 *     EtwpStartLogger @ 0x140691964 (EtwpStartLogger.c)
 *     EtwpIncrementTraceFile @ 0x1409E5140 (EtwpIncrementTraceFile.c)
 * Callees:
 *     RtlStringCbPrintfW @ 0x1402078E4 (RtlStringCbPrintfW.c)
 *     RtlInitUnicodeString @ 0x14030EBB0 (RtlInitUnicodeString.c)
 *     memcmp @ 0x1403D47D0 (memcmp.c)
 *     wcschr @ 0x1403D5D90 (wcschr.c)
 *     wcsrchr @ 0x1403D5F90 (wcsrchr.c)
 *     wcsstr @ 0x1403D6020 (wcsstr.c)
 *     RtlFreeUnicodeString @ 0x1407F0430 (RtlFreeUnicodeString.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall EtwpGenerateFileName(unsigned __int16 *a1, volatile signed __int32 *a2, UNICODE_STRING *a3)
{
  const wchar_t *v5; // rcx
  wchar_t *v7; // rdi
  signed __int32 v8; // ebp
  __int64 v9; // r14
  wchar_t *Pool2; // rax
  WCHAR *v11; // rdi

  v5 = (const wchar_t *)*((_QWORD *)a1 + 1);
  if ( !v5 )
    return 3221225520LL;
  v7 = wcschr(v5, 0x25u);
  if ( v7 && v7 == wcsrchr(*((const wchar_t **)a1 + 1), 0x25u) && wcsstr(*((const wchar_t **)a1 + 1), L"%d") )
  {
    v8 = _InterlockedExchangeAdd(a2, 1u);
    v9 = a1[1];
    Pool2 = (wchar_t *)ExAllocatePool2(256LL, v9 + 64, 1350005829LL);
    v11 = Pool2;
    if ( !Pool2 )
      return 3221225495LL;
    if ( !RtlStringCbPrintfW(Pool2, v9 + 64, *((NTSTRSAFE_PCWSTR *)a1 + 1), (unsigned int)(v8 + 1))
      && memcmp(*((const void **)a1 + 1), v11, *a1) )
    {
      RtlFreeUnicodeString(a3);
      RtlInitUnicodeString(a3, v11);
      return 0LL;
    }
    ExFreePoolWithTag(v11, 0);
    return 3221225520LL;
  }
  return 3221225523LL;
}
