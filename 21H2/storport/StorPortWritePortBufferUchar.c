/*
 * XREFs of StorPortWritePortBufferUchar @ 0x1C003A340
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall StorPortWritePortBufferUchar(__int64 a1, unsigned __int16 a2, unsigned __int8 *a3, unsigned int a4)
{
  __outbytestring(a2, a3, a4);
}
