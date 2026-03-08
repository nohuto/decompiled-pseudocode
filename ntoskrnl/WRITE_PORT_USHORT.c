/*
 * XREFs of WRITE_PORT_USHORT @ 0x14036D7D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __stdcall WRITE_PORT_USHORT(PUSHORT Port, USHORT Value)
{
  __outword((unsigned __int16)Port, Value);
}
