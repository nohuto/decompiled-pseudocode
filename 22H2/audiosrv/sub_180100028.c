/*
 * XREFs of sub_180100028 @ 0x180100028
 * Callers:
 *     sub_1800FC8A0 @ 0x1800FC8A0 (sub_1800FC8A0.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_180100028(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  int v5; // [rsp+78h] [rbp+20h] BYREF

  v5 = a4;
  return EtwTraceMessage(a1, 43LL, &unk_180172650, 89LL, &v5);
}
