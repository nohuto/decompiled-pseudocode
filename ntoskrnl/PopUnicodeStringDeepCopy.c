/*
 * XREFs of PopUnicodeStringDeepCopy @ 0x140856290
 * Callers:
 *     PopPowerRequestStatsGetIdForRequest @ 0x14073C3F4 (PopPowerRequestStatsGetIdForRequest.c)
 * Callees:
 *     RtlUnicodeStringCopy @ 0x1402B3164 (RtlUnicodeStringCopy.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

NTSTATUS __fastcall PopUnicodeStringDeepCopy(PUNICODE_STRING DestinationString, PCUNICODE_STRING SourceString)
{
  PVOID *p_Buffer; // rbx
  unsigned int v3; // r8d
  unsigned int v4; // ebp
  __int64 Pool2; // r15
  wchar_t **v8; // r14
  NTSTATUS result; // eax

  p_Buffer = (PVOID *)&DestinationString->Buffer;
  v3 = SourceString->Length + 2;
  v4 = 0xFFFF;
  if ( v3 > 0xFFFF )
  {
    if ( *p_Buffer )
    {
      v8 = &DestinationString->Buffer;
      goto LABEL_7;
    }
  }
  else
  {
    v4 = SourceString->Length + 2;
    if ( *p_Buffer )
    {
      v8 = &DestinationString->Buffer;
      if ( DestinationString->MaximumLength >= v3 )
        goto LABEL_7;
    }
  }
  Pool2 = ExAllocatePool2(256LL, v4, 1414616912LL);
  v8 = (wchar_t **)p_Buffer;
  if ( Pool2 )
  {
    if ( *p_Buffer )
      ExFreePoolWithTag(*p_Buffer, 0);
    *p_Buffer = (PVOID)Pool2;
    DestinationString->Length = 0;
    DestinationString->MaximumLength = v4;
  }
LABEL_7:
  result = RtlUnicodeStringCopy(DestinationString, SourceString);
  if ( result >= 0 )
    (*v8)[(unsigned __int64)DestinationString->Length >> 1] = 0;
  return result;
}
