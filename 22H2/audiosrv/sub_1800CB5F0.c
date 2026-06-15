/*
 * XREFs of sub_1800CB5F0 @ 0x1800CB5F0
 * Callers:
 *     sub_1800C85C8 @ 0x1800C85C8 (sub_1800C85C8.c)
 *     sub_1800FC8A0 @ 0x1800FC8A0 (sub_1800FC8A0.c)
 * Callees:
 *     <none>
 */

__int64 sub_1800CB5F0(__int64 a1, unsigned __int16 a2, __int64 a3, ...)
{
  va_list va; // [rsp+88h] [rbp+20h] BYREF

  va_start(va, a3);
  return EtwTraceMessage(a1, 43LL, a3, a2, (__int64 *)va);
}
