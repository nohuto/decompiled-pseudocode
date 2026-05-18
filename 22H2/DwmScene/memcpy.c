/*
 * XREFs of memcpy @ 0x18011E094
 * Callers:
 *     sub_18000EFA8 @ 0x18000EFA8 (sub_18000EFA8.c)
 *     sub_18000FB34 @ 0x18000FB34 (sub_18000FB34.c)
 *     sub_18001269C @ 0x18001269C (sub_18001269C.c)
 *     sub_180012B80 @ 0x180012B80 (sub_180012B80.c)
 *     sub_180012CF0 @ 0x180012CF0 (sub_180012CF0.c)
 *     sub_180013590 @ 0x180013590 (sub_180013590.c)
 *     sub_18001CDF8 @ 0x18001CDF8 (sub_18001CDF8.c)
 *     sub_18002098C @ 0x18002098C (sub_18002098C.c)
 *     sub_180020A74 @ 0x180020A74 (sub_180020A74.c)
 *     sub_180020BB0 @ 0x180020BB0 (sub_180020BB0.c)
 *     sub_180023360 @ 0x180023360 (sub_180023360.c)
 *     sub_180023940 @ 0x180023940 (sub_180023940.c)
 *     sub_180026E44 @ 0x180026E44 (sub_180026E44.c)
 *     sub_180030200 @ 0x180030200 (sub_180030200.c)
 *     sub_180031A30 @ 0x180031A30 (sub_180031A30.c)
 *     sub_180043904 @ 0x180043904 (sub_180043904.c)
 *     sub_180043C34 @ 0x180043C34 (sub_180043C34.c)
 *     sub_180054FC4 @ 0x180054FC4 (sub_180054FC4.c)
 *     sub_1800702A0 @ 0x1800702A0 (sub_1800702A0.c)
 *     sub_18007BF90 @ 0x18007BF90 (sub_18007BF90.c)
 *     sub_1800A1D04 @ 0x1800A1D04 (sub_1800A1D04.c)
 *     sub_1800B3D04 @ 0x1800B3D04 (sub_1800B3D04.c)
 *     sub_1800CCF94 @ 0x1800CCF94 (sub_1800CCF94.c)
 *     sub_1800CD84C @ 0x1800CD84C (sub_1800CD84C.c)
 *     sub_1800EE5A8 @ 0x1800EE5A8 (sub_1800EE5A8.c)
 *     sub_1800EE614 @ 0x1800EE614 (sub_1800EE614.c)
 *     sub_1800FD528 @ 0x1800FD528 (sub_1800FD528.c)
 *     sub_1801147FC @ 0x1801147FC (sub_1801147FC.c)
 *     sub_1801160F8 @ 0x1801160F8 (sub_1801160F8.c)
 *     sub_180116414 @ 0x180116414 (sub_180116414.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void *__cdecl memcpy(void *a1, const void *Src, size_t Size)
{
  return __imp_memcpy(a1, Src, Size);
}
