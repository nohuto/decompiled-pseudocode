/*
 * XREFs of sub_1800C249C @ 0x1800C249C
 * Callers:
 *     sub_180011010 @ 0x180011010 (sub_180011010.c)
 *     sub_1800192D0 @ 0x1800192D0 (sub_1800192D0.c)
 *     sub_1800BF670 @ 0x1800BF670 (sub_1800BF670.c)
 *     sub_1800C78E0 @ 0x1800C78E0 (sub_1800C78E0.c)
 *     sub_1800CE808 @ 0x1800CE808 (sub_1800CE808.c)
 *     sub_1800CF570 @ 0x1800CF570 (sub_1800CF570.c)
 *     sub_180100ADC @ 0x180100ADC (sub_180100ADC.c)
 *     sub_18010274C @ 0x18010274C (sub_18010274C.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1800C249C(__int64 a1, unsigned __int16 a2, __int64 a3, int a4)
{
  int v5; // [rsp+78h] [rbp+20h] BYREF

  v5 = a4;
  return EtwTraceMessage(a1, 43LL, a3, a2, &v5);
}
