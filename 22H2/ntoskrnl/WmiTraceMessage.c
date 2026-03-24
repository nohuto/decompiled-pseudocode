/*
 * XREFs of WmiTraceMessage @ 0x140329370
 * Callers:
 *     <none>
 * Callees:
 *     EtwpTraceMessageVa @ 0x14025CDC0 (EtwpTraceMessageVa.c)
 */

__int64 WmiTraceMessage(unsigned __int64 a1, char a2, signed __int32 *a3, __int16 a4, ...)
{
  va_list va; // [rsp+70h] [rbp+28h] BYREF

  va_start(va, a4);
  return EtwpTraceMessageVa(a1, a2, a3, a4, (__int64)va, 0);
}
