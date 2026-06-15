/*
 * XREFs of sub_1800BB3A8 @ 0x1800BB3A8
 * Callers:
 *     sub_18000B850 @ 0x18000B850 (sub_18000B850.c)
 *     sub_18004F420 @ 0x18004F420 (sub_18004F420.c)
 *     sub_18006514C @ 0x18006514C (sub_18006514C.c)
 *     sub_1800E58D0 @ 0x1800E58D0 (sub_1800E58D0.c)
 *     sub_1800E5AC0 @ 0x1800E5AC0 (sub_1800E5AC0.c)
 *     sub_1800FA570 @ 0x1800FA570 (sub_1800FA570.c)
 *     sub_1800FA9C8 @ 0x1800FA9C8 (sub_1800FA9C8.c)
 *     sub_18010CA24 @ 0x18010CA24 (sub_18010CA24.c)
 * Callees:
 *     sub_18004BDBC @ 0x18004BDBC (sub_18004BDBC.c)
 */

__int64 __fastcall sub_1800BB3A8(int a1, int a2, int a3, int a4)
{
  __int64 retaddr; // [rsp+48h] [rbp+0h]

  return sub_18004BDBC(a1, a2, a3, 0, 0LL, retaddr, 0, a4);
}
