/*
 * XREFs of RtlIdnToUnicode @ 0x1409BF450
 * Callers:
 *     <none>
 * Callees:
 *     RtlpIdnToUnicodeWorker @ 0x1405AFCE0 (RtlpIdnToUnicodeWorker.c)
 *     ExFreePoolWithTag @ 0x140AAF110 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140AAF6B0 (ExAllocatePool2.c)
 */

NTSTATUS __stdcall RtlIdnToUnicode(
        ULONG Flags,
        PCWSTR SourceString,
        LONG SourceStringLength,
        PWSTR DestinationString,
        PLONG DestinationStringLength)
{
  WCHAR *Pool2; // rdi
  NTSTATUS v11; // ebx
  BOOLEAN v12; // [rsp+30h] [rbp-18h]

  Pool2 = (WCHAR *)ExAllocatePool2(256LL, 1022LL, 1164862537LL);
  if ( !Pool2 )
    return -1073741801;
  v11 = RtlpIdnToUnicodeWorker(
          Flags,
          SourceString,
          SourceStringLength,
          DestinationString,
          DestinationStringLength,
          Pool2,
          v12);
  ExFreePoolWithTag(Pool2, 0);
  return v11;
}
