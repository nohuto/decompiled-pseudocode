/*
 * XREFs of RtlInitUnicodeString_0 @ 0x1C0031CBD
 * Callers:
 *     ArbpGetRegistryValue @ 0x1C00A04C0 (ArbpGetRegistryValue.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __stdcall RtlInitUnicodeString_0(PUNICODE_STRING DestinationString, PCWSTR SourceString)
{
  RtlInitUnicodeString(DestinationString, SourceString);
}
