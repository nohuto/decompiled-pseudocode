/*
 * XREFs of sub_1800CB3F4 @ 0x1800CB3F4
 * Callers:
 *     sub_1800C9420 @ 0x1800C9420 (sub_1800C9420.c)
 * Callees:
 *     <none>
 */

__int64 sub_1800CB3F4(__int64 a1, __int64 a2, __int64 a3, ...)
{
  va_list va; // [rsp+88h] [rbp+20h] BYREF

  va_start(va, a3);
  return EtwTraceMessage(a1, 43LL, &unk_18015DEF0, 85LL, (__int64 *)va);
}
