/*
 * XREFs of sub_1800FBBF4 @ 0x1800FBBF4
 * Callers:
 *     pfnwa @ 0x1800FFD10 (pfnwa.c)
 * Callees:
 *     sub_18004BDBC @ 0x18004BDBC (sub_18004BDBC.c)
 */

__int64 __fastcall sub_1800FBBF4(int a1, __int64 a2, __int64 a3, int a4)
{
  __int64 retaddr; // [rsp+48h] [rbp+0h]

  return sub_18004BDBC(
           a1,
           211,
           (int)"onecore\\internal\\sdk\\inc\\wil\\opensource/wil/registry.h",
           0,
           0LL,
           retaddr,
           3,
           a4);
}
