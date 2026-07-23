/*
 * XREFs of RtlUpcaseUnicodeString @ 0x180015D20
 * Callers:
 *     RtlpComputeLangListCheckSum @ 0x18001532C (RtlpComputeLangListCheckSum.c)
 *     RtlDeriveCapabilitySidsFromName @ 0x18001FD40 (RtlDeriveCapabilitySidsFromName.c)
 *     RtlCreateServiceSid @ 0x18003FA80 (RtlCreateServiceSid.c)
 *     RtlCreateVirtualAccountSid @ 0x180084500 (RtlCreateVirtualAccountSid.c)
 * Callees:
 *     NLS_UPCASE @ 0x180016160 (NLS_UPCASE.c)
 *     NtdllpFreeStringRoutine @ 0x180022E70 (NtdllpFreeStringRoutine.c)
 *     NtdllpAllocateStringRoutine @ 0x18006EBB0 (NtdllpAllocateStringRoutine.c)
 */

NTSTATUS __cdecl RtlUpcaseUnicodeString(
        PUNICODE_STRING DestinationString,
        PUNICODE_STRING SourceString,
        BOOLEAN AllocateDestinationString)
{
  __int64 Length; // rax
  unsigned int v6; // ebx
  unsigned int v7; // r10d
  wchar_t v8; // ax
  __int64 v9; // r9
  wchar_t *StringRoutine; // rax

  Length = SourceString->Length;
  v6 = 0;
  if ( AllocateDestinationString )
  {
    DestinationString->MaximumLength = Length;
    StringRoutine = (wchar_t *)NtdllpAllocateStringRoutine(Length);
    DestinationString->Buffer = StringRoutine;
    if ( !StringRoutine )
      return -1073741801;
    LOWORD(Length) = SourceString->Length;
  }
  else if ( (unsigned __int16)Length > DestinationString->MaximumLength )
  {
    return -2147483643;
  }
  v7 = (unsigned __int16)Length >> 1;
  while ( v6 < v7 )
  {
    v8 = NLS_UPCASE(SourceString->Buffer[v6]);
    DestinationString->Buffer[v9] = v8;
    ++v6;
  }
  DestinationString->Length = SourceString->Length;
  return 0;
}
