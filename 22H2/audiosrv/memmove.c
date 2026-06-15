/*
 * XREFs of memmove @ 0x18007444B
 * Callers:
 *     sub_180006FA0 @ 0x180006FA0 (sub_180006FA0.c)
 *     sub_180007620 @ 0x180007620 (sub_180007620.c)
 *     sub_180008260 @ 0x180008260 (sub_180008260.c)
 *     sub_180008B0C @ 0x180008B0C (sub_180008B0C.c)
 *     sub_18000AF30 @ 0x18000AF30 (sub_18000AF30.c)
 *     sub_18000B4D0 @ 0x18000B4D0 (sub_18000B4D0.c)
 *     sub_180017B10 @ 0x180017B10 (sub_180017B10.c)
 *     sub_1800183C0 @ 0x1800183C0 (sub_1800183C0.c)
 *     sub_1800184B0 @ 0x1800184B0 (sub_1800184B0.c)
 *     sub_1800188D0 @ 0x1800188D0 (sub_1800188D0.c)
 *     sub_180018FA0 @ 0x180018FA0 (sub_180018FA0.c)
 *     sub_1800192D0 @ 0x1800192D0 (sub_1800192D0.c)
 *     sub_18001C620 @ 0x18001C620 (sub_18001C620.c)
 *     sub_18002BB70 @ 0x18002BB70 (sub_18002BB70.c)
 *     sub_18002E440 @ 0x18002E440 (sub_18002E440.c)
 *     sub_18002EB3C @ 0x18002EB3C (sub_18002EB3C.c)
 *     sub_180033930 @ 0x180033930 (sub_180033930.c)
 *     sub_180033BD0 @ 0x180033BD0 (sub_180033BD0.c)
 *     sub_180035960 @ 0x180035960 (sub_180035960.c)
 *     sub_18004F930 @ 0x18004F930 (sub_18004F930.c)
 *     sub_1800502A0 @ 0x1800502A0 (sub_1800502A0.c)
 *     sub_18005284C @ 0x18005284C (sub_18005284C.c)
 *     sub_18005289C @ 0x18005289C (sub_18005289C.c)
 *     sub_1800571F8 @ 0x1800571F8 (sub_1800571F8.c)
 *     sub_18005CBD8 @ 0x18005CBD8 (sub_18005CBD8.c)
 *     sub_1800689C8 @ 0x1800689C8 (sub_1800689C8.c)
 *     sub_1800C3630 @ 0x1800C3630 (sub_1800C3630.c)
 *     sub_1800C3D30 @ 0x1800C3D30 (sub_1800C3D30.c)
 *     sub_1800CA560 @ 0x1800CA560 (sub_1800CA560.c)
 *     sub_1800CFD1C @ 0x1800CFD1C (sub_1800CFD1C.c)
 *     sub_1800D30A8 @ 0x1800D30A8 (sub_1800D30A8.c)
 *     sub_1800D7CA4 @ 0x1800D7CA4 (sub_1800D7CA4.c)
 *     sub_1800F01D4 @ 0x1800F01D4 (sub_1800F01D4.c)
 *     sub_180108FA0 @ 0x180108FA0 (sub_180108FA0.c)
 *     sub_18010933C @ 0x18010933C (sub_18010933C.c)
 *     sub_18011EACC @ 0x18011EACC (sub_18011EACC.c)
 *     sub_180120C98 @ 0x180120C98 (sub_180120C98.c)
 *     sub_180122FC8 @ 0x180122FC8 (sub_180122FC8.c)
 *     sub_180133C14 @ 0x180133C14 (sub_180133C14.c)
 *     sub_18013CAAC @ 0x18013CAAC (sub_18013CAAC.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void *__cdecl memmove(void *a1, const void *Src, size_t Size)
{
  return __imp_memmove(a1, Src, Size);
}
