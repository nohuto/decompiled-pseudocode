/*
 * XREFs of sub_180104898 @ 0x180104898
 * Callers:
 *     sub_180100A10 @ 0x180100A10 (sub_180100A10.c)
 *     sub_180102930 @ 0x180102930 (sub_180102930.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_180104898(__int64 a1, unsigned __int16 a2, __int64 a3, double a4)
{
  double v5; // [rsp+78h] [rbp+20h] BYREF

  v5 = a4;
  return EtwTraceMessage(a1, 43LL, &unk_1801726D0, a2, &v5);
}
