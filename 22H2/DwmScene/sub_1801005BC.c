/*
 * XREFs of sub_1801005BC @ 0x1801005BC
 * Callers:
 *     sub_1801007F8 @ 0x1801007F8 (sub_1801007F8.c)
 * Callees:
 *     sub_180100A6C @ 0x180100A6C (sub_180100A6C.c)
 *     sub_180100D5C @ 0x180100D5C (sub_180100D5C.c)
 */

__int64 __fastcall sub_1801005BC(
        void *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        void *a6,
        __int64 a7,
        char a8,
        void *a9,
        __int64 a10,
        __int64 a11,
        __int64 a12)
{
  void *v13; // rdi

  v13 = (void *)sub_180100D5C(a9, a12, a6, a7);
  sub_180100A6C(a1, a12, (__int64)a6, a7);
  return sub_180100A6C(v13, a5 - a12, (__int64)a6, a7);
}
