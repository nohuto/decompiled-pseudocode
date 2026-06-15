/*
 * XREFs of sub_1800B4B04 @ 0x1800B4B04
 * Callers:
 *     sub_180065C84 @ 0x180065C84 (sub_180065C84.c)
 *     sub_1800D2600 @ 0x1800D2600 (sub_1800D2600.c)
 *     sub_18010917C @ 0x18010917C (sub_18010917C.c)
 * Callees:
 *     sub_18004BDBC @ 0x18004BDBC (sub_18004BDBC.c)
 */

__int64 __fastcall sub_1800B4B04(int a1, int a2)
{
  __int64 retaddr; // [rsp+48h] [rbp+0h]

  return sub_18004BDBC(
           a1,
           a2,
           (int)"onecore\\internal\\sdk\\inc\\wil\\opensource/wil/resource.h",
           0,
           0LL,
           retaddr,
           3,
           -2147418113);
}
