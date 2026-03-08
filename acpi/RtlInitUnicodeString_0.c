/*
 * XREFs of RtlInitUnicodeString_0 @ 0x1C0001A0D
 * Callers:
 *     ArbpGetRegistryValue @ 0x1C00A2FAC (ArbpGetRegistryValue.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __stdcall RtlInitUnicodeString_0(PUNICODE_STRING DestinationString, PCWSTR SourceString)
{
  RtlInitUnicodeString(DestinationString, SourceString);
}
