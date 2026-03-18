/*
 * XREFs of PopPowerRequestStatsIdConcat @ 0x1407F0FC0
 * Callers:
 *     PopPowerRequestStatsGetIdForRequest @ 0x1407F0C38 (PopPowerRequestStatsGetIdForRequest.c)
 * Callees:
 *     RtlUnicodeStringCat @ 0x140208C24 (RtlUnicodeStringCat.c)
 *     RtlUnicodeStringCatString @ 0x14036BFE0 (RtlUnicodeStringCatString.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall PopPowerRequestStatsIdConcat(PUNICODE_STRING DestinationString, PCUNICODE_STRING SourceString)
{
  unsigned int v4; // edi
  wchar_t *Pool2; // rax
  wchar_t *v6; // rbp
  wchar_t *Buffer; // rdx
  NTSTATUS v8; // edx

  if ( !DestinationString )
    return (unsigned int)-1073741811;
  if ( !SourceString )
    return (unsigned int)-1073741811;
  v4 = DestinationString->Length + SourceString->Length + 8;
  if ( v4 > 0xFFFF )
    return (unsigned int)-1073741811;
  if ( DestinationString->MaximumLength < v4 )
  {
    Pool2 = (wchar_t *)ExAllocatePool2(256LL, v4, 1414616912LL);
    v6 = Pool2;
    if ( !Pool2 )
      return (unsigned int)-1073741670;
    Buffer = DestinationString->Buffer;
    if ( Buffer )
    {
      memmove(Pool2, Buffer, DestinationString->Length);
      ExFreePoolWithTag(DestinationString->Buffer, 0x54515750u);
    }
    DestinationString->Buffer = v6;
    DestinationString->MaximumLength = v4;
  }
  v8 = RtlUnicodeStringCatString(DestinationString, L" (");
  if ( v8 >= 0 )
  {
    v8 = RtlUnicodeStringCat(DestinationString, SourceString);
    if ( v8 >= 0 )
    {
      v8 = RtlUnicodeStringCatString(DestinationString, L")");
      if ( v8 >= 0 )
        DestinationString->Buffer[(unsigned __int64)DestinationString->Length >> 1] = 0;
    }
  }
  return (unsigned int)v8;
}
