/*
 * XREFs of RtlUpperString @ 0x1407565B0
 * Callers:
 *     <none>
 * Callees:
 *     RtlpIsUtf8Process @ 0x1406EA7A0 (RtlpIsUtf8Process.c)
 */

void __stdcall RtlUpperString(PSTRING DestinationString, const STRING *SourceString)
{
  int Length; // ebp
  char *Buffer; // rdi
  char *v4; // rsi
  char v5; // bl

  Length = SourceString->Length;
  Buffer = DestinationString->Buffer;
  v4 = SourceString->Buffer;
  if ( (unsigned __int16)Length > DestinationString->MaximumLength )
    Length = DestinationString->MaximumLength;
  for ( DestinationString->Length = Length; Length; --Length )
  {
    v5 = *v4;
    RtlpIsUtf8Process();
    if ( (unsigned __int8)(v5 - 97) <= 0x19u )
      v5 ^= 0x20u;
    *Buffer = v5;
    ++v4;
    ++Buffer;
  }
}
