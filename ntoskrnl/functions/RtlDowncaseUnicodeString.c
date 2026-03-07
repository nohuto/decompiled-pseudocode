NTSTATUS __stdcall RtlDowncaseUnicodeString(
        PUNICODE_STRING DestinationString,
        PCUNICODE_STRING SourceString,
        BOOLEAN AllocateDestinationString)
{
  __int64 v5; // rbx
  struct _LIST_ENTRY *Blink; // r15
  unsigned __int16 *v7; // rdx
  char v8; // r10
  NTSTATUS result; // eax
  unsigned int v10; // r11d

  v5 = 0LL;
  if ( AllocateDestinationString || SourceString->Length )
  {
    Blink = PsGetCurrentServerSiloGlobals()[77].Blink;
    result = AllocateOrValidateUnicodeStringBuffer(
               v8,
               *v7,
               (__int64 *)&DestinationString->Buffer,
               &DestinationString->MaximumLength);
    if ( result < 0 )
      return result;
    v10 = SourceString->Length >> 1;
    while ( (unsigned int)v5 < v10 )
    {
      DestinationString->Buffer[v5] = NLS_DOWNCASE((__int64)Blink, SourceString->Buffer[v5]);
      v5 = (unsigned int)(v5 + 1);
    }
    DestinationString->Length = SourceString->Length;
  }
  else
  {
    DestinationString->Length = 0;
  }
  return 0;
}
