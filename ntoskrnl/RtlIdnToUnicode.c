/*
 * XREFs of RtlIdnToUnicode @ 0x1409BC420
 * Callers:
 *     <none>
 * Callees:
 *     RtlpIdnToUnicodeWorker @ 0x1405AD830 (RtlpIdnToUnicodeWorker.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
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
