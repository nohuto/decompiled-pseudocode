/*
 * XREFs of sub_1800C2584 @ 0x1800C2584
 * Callers:
 *     sub_180054330 @ 0x180054330 (sub_180054330.c)
 *     sub_18005C7D0 @ 0x18005C7D0 (sub_18005C7D0.c)
 *     sub_18005C8D0 @ 0x18005C8D0 (sub_18005C8D0.c)
 *     sub_18005D1C0 @ 0x18005D1C0 (sub_18005D1C0.c)
 *     sub_1800C00CC @ 0x1800C00CC (sub_1800C00CC.c)
 *     sub_1800C1760 @ 0x1800C1760 (sub_1800C1760.c)
 *     sub_1800C77E0 @ 0x1800C77E0 (sub_1800C77E0.c)
 *     sub_1800DCF40 @ 0x1800DCF40 (sub_1800DCF40.c)
 * Callees:
 *     <none>
 */

__int64 sub_1800C2584(__int64 a1, unsigned __int16 a2, __int64 a3, ...)
{
  va_list va; // [rsp+88h] [rbp+20h] BYREF

  va_start(va, a3);
  return EtwTraceMessage(a1, 43LL, a3, a2, (__int64 *)va);
}
