/*
 * XREFs of sub_1800D0A00 @ 0x1800D0A00
 * Callers:
 *     sub_1800CED00 @ 0x1800CED00 (sub_1800CED00.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1800D0A00(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  int v5; // [rsp+88h] [rbp+20h] BYREF

  v5 = a4;
  return EtwTraceMessage(a1, 43LL, &unk_18015DFC8, 47LL, &v5);
}
