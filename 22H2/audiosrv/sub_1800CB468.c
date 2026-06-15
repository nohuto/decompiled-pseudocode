/*
 * XREFs of sub_1800CB468 @ 0x1800CB468
 * Callers:
 *     sub_180045A40 @ 0x180045A40 (sub_180045A40.c)
 *     sub_180045C60 @ 0x180045C60 (sub_180045C60.c)
 *     sub_1800C9420 @ 0x1800C9420 (sub_1800C9420.c)
 *     sub_1800E7678 @ 0x1800E7678 (sub_1800E7678.c)
 *     sub_180103040 @ 0x180103040 (sub_180103040.c)
 * Callees:
 *     <none>
 */

__int64 sub_1800CB468(__int64 a1, unsigned __int16 a2, __int64 a3, ...)
{
  va_list va; // [rsp+88h] [rbp+20h] BYREF

  va_start(va, a3);
  return EtwTraceMessage(a1, 43LL, a3, a2, (__int64 *)va);
}
