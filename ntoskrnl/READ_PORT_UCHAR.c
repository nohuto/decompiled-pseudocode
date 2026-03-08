/*
 * XREFs of READ_PORT_UCHAR @ 0x14036D700
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

UCHAR __stdcall READ_PORT_UCHAR(PUCHAR Port)
{
  return __inbyte((unsigned __int16)Port);
}
