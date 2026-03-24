/*
 * XREFs of WRITE_PORT_ULONG @ 0x140365020
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __stdcall WRITE_PORT_ULONG(PULONG Port, ULONG Value)
{
  __outdword((unsigned __int16)Port, Value);
}
