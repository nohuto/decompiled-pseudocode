/*
 * XREFs of sub_1800C2650 @ 0x1800C2650
 * Callers:
 *     sub_18005C8D0 @ 0x18005C8D0 (sub_18005C8D0.c)
 * Callees:
 *     <none>
 */

__int64 sub_1800C2650(__int64 a1, __int64 a2, __int64 a3, ...)
{
  va_list va; // [rsp+A8h] [rbp+20h] BYREF

  va_start(va, a3);
  return EtwTraceMessage(a1, 43LL, &unk_18016DDC0, 30LL, (__int64 *)va);
}
