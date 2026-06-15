/*
 * XREFs of sub_18011E3D4 @ 0x18011E3D4
 * Callers:
 *     sub_180012550 @ 0x180012550 (sub_180012550.c)
 *     sub_18001F9C0 @ 0x18001F9C0 (sub_18001F9C0.c)
 *     sub_180020090 @ 0x180020090 (sub_180020090.c)
 *     sub_180117FF4 @ 0x180117FF4 (sub_180117FF4.c)
 * Callees:
 *     sub_1800CA5FC @ 0x1800CA5FC (sub_1800CA5FC.c)
 */

__int64 __fastcall sub_18011E3D4(int a1, int a2, __int64 a3, __int64 a4)
{
  int v5; // [rsp+20h] [rbp-28h]
  __int64 retaddr; // [rsp+48h] [rbp+0h]

  sub_1800CA5FC(
    a1,
    a2,
    (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
    a4,
    v5,
    retaddr,
    2,
    13);
  return 13LL;
}
