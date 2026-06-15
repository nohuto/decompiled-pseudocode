/*
 * XREFs of sub_1800DC664 @ 0x1800DC664
 * Callers:
 *     sub_180009ED0 @ 0x180009ED0 (sub_180009ED0.c)
 *     sub_180017CA0 @ 0x180017CA0 (sub_180017CA0.c)
 *     sub_180031350 @ 0x180031350 (sub_180031350.c)
 *     sub_180076220 @ 0x180076220 (sub_180076220.c)
 *     sub_1800762C0 @ 0x1800762C0 (sub_1800762C0.c)
 *     sub_18010D7F1 @ 0x18010D7F1 (sub_18010D7F1.c)
 *     sub_180115BB8 @ 0x180115BB8 (sub_180115BB8.c)
 * Callees:
 *     sub_18004BDBC @ 0x18004BDBC (sub_18004BDBC.c)
 */

__int64 __fastcall sub_1800DC664(int a1, int a2, int a3, unsigned int a4)
{
  __int64 retaddr; // [rsp+48h] [rbp+0h]

  sub_18004BDBC(a1, a2, a3, 0, 0LL, retaddr, 2, a4);
  return a4;
}
