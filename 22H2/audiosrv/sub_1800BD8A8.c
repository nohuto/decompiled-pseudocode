/*
 * XREFs of sub_1800BD8A8 @ 0x1800BD8A8
 * Callers:
 *     sub_18002CD00 @ 0x18002CD00 (sub_18002CD00.c)
 *     sub_1800324D0 @ 0x1800324D0 (sub_1800324D0.c)
 *     sub_180032890 @ 0x180032890 (sub_180032890.c)
 *     sub_1800349D0 @ 0x1800349D0 (sub_1800349D0.c)
 *     sub_180052750 @ 0x180052750 (sub_180052750.c)
 *     sub_180053650 @ 0x180053650 (sub_180053650.c)
 *     sub_18005C8D0 @ 0x18005C8D0 (sub_18005C8D0.c)
 *     sub_18005D1C0 @ 0x18005D1C0 (sub_18005D1C0.c)
 *     sub_1800BD3B0 @ 0x1800BD3B0 (sub_1800BD3B0.c)
 *     sub_1800BDD00 @ 0x1800BDD00 (sub_1800BDD00.c)
 *     sub_1800BE7F0 @ 0x1800BE7F0 (sub_1800BE7F0.c)
 *     sub_1800BE880 @ 0x1800BE880 (sub_1800BE880.c)
 *     sub_1800BF220 @ 0x1800BF220 (sub_1800BF220.c)
 *     sub_1800BFAD0 @ 0x1800BFAD0 (sub_1800BFAD0.c)
 *     sub_1800C0E5C @ 0x1800C0E5C (sub_1800C0E5C.c)
 *     sub_1800CB980 @ 0x1800CB980 (sub_1800CB980.c)
 *     sub_1800CBBF0 @ 0x1800CBBF0 (sub_1800CBBF0.c)
 *     sub_1800CBDD0 @ 0x1800CBDD0 (sub_1800CBDD0.c)
 *     sub_1800CE190 @ 0x1800CE190 (sub_1800CE190.c)
 *     sub_1800CE750 @ 0x1800CE750 (sub_1800CE750.c)
 *     sub_1800CED00 @ 0x1800CED00 (sub_1800CED00.c)
 *     sub_1800DBAC0 @ 0x1800DBAC0 (sub_1800DBAC0.c)
 *     sub_1800DD8C0 @ 0x1800DD8C0 (sub_1800DD8C0.c)
 *     sub_1800FF010 @ 0x1800FF010 (sub_1800FF010.c)
 *     sub_1800FF380 @ 0x1800FF380 (sub_1800FF380.c)
 *     sub_180100ADC @ 0x180100ADC (sub_180100ADC.c)
 *     sub_180102178 @ 0x180102178 (sub_180102178.c)
 *     sub_180102314 @ 0x180102314 (sub_180102314.c)
 *     sub_180102594 @ 0x180102594 (sub_180102594.c)
 * Callees:
 *     <none>
 */

__int64 sub_1800BD8A8(__int64 a1, unsigned __int16 a2, __int64 a3, ...)
{
  va_list va; // [rsp+78h] [rbp+20h] BYREF

  va_start(va, a3);
  return EtwTraceMessage(a1, 43LL, a3, a2, (__int64 *)va);
}
