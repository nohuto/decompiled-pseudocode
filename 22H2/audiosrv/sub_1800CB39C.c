/*
 * XREFs of sub_1800CB39C @ 0x1800CB39C
 * Callers:
 *     sub_18002CA40 @ 0x18002CA40 (sub_18002CA40.c)
 *     sub_18002CD00 @ 0x18002CD00 (sub_18002CD00.c)
 *     sub_18004F930 @ 0x18004F930 (sub_18004F930.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1800CB39C(__int64 a1, unsigned __int16 a2, __int64 a3, int a4)
{
  int v5; // [rsp+78h] [rbp+20h] BYREF

  v5 = a4;
  return EtwTraceMessage(a1, 43LL, &unk_18015DEF0, a2, &v5);
}
