/*
 * XREFs of RtlInitAnsiStringEx @ 0x140388C60
 * Callers:
 *     RtlInitUTF8StringEx @ 0x1405A5240 (RtlInitUTF8StringEx.c)
 *     RtlCreateUnicodeStringFromAsciiz @ 0x140817BE0 (RtlCreateUnicodeStringFromAsciiz.c)
 *     ExpCovReadFriendlyName @ 0x140A0420C (ExpCovReadFriendlyName.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall RtlInitAnsiStringEx(PANSI_STRING DestinationString, PCSZ SourceString)
{
  unsigned __int64 v2; // rax

  *(_QWORD *)&DestinationString->Length = 0LL;
  DestinationString->Buffer = (char *)SourceString;
  if ( !SourceString )
    return 0;
  v2 = -1LL;
  do
    ++v2;
  while ( SourceString[v2] );
  if ( v2 <= 0xFFFE )
  {
    DestinationString->Length = v2;
    DestinationString->MaximumLength = v2 + 1;
    return 0;
  }
  return -1073741562;
}
