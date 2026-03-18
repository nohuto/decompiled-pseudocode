/*
 * XREFs of RtlUpperString @ 0x1406A56F0
 * Callers:
 *     <none>
 * Callees:
 *     RtlpIsUtf8Process @ 0x1407CDA20 (RtlpIsUtf8Process.c)
 */

void __stdcall RtlUpperString(PSTRING DestinationString, const STRING *SourceString)
{
  int MaximumLength; // ebp
  char *Buffer; // rsi
  char *v4; // rdi
  char v5; // bl
  char v6; // cl

  MaximumLength = DestinationString->MaximumLength;
  Buffer = SourceString->Buffer;
  v4 = DestinationString->Buffer;
  if ( SourceString->Length <= (unsigned __int16)MaximumLength )
    MaximumLength = SourceString->Length;
  for ( DestinationString->Length = MaximumLength; MaximumLength; --MaximumLength )
  {
    v5 = *Buffer;
    RtlpIsUtf8Process(0LL);
    ++v4;
    v6 = v5 ^ 0x20;
    ++Buffer;
    if ( (unsigned __int8)(v5 - 97) > 0x19u )
      v6 = v5;
    *(v4 - 1) = v6;
  }
}
