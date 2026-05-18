/*
 * XREFs of sub_180018544 @ 0x180018544
 * Callers:
 *     sub_18001703C @ 0x18001703C (sub_18001703C.c)
 * Callees:
 *     sub_1800161B8 @ 0x1800161B8 (sub_1800161B8.c)
 *     sub_18001821C @ 0x18001821C (sub_18001821C.c)
 *     ??2@YAPEAX_K@Z @ 0x18011E768 (--2@YAPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_180018544(
        __int64 a1,
        __int128 *a2,
        _QWORD *a3,
        __int64 *a4,
        int *a5,
        int *a6,
        unsigned int *a7,
        float *a8)
{
  char *v12; // rax

  v12 = (char *)operator new(0x6C8uLL);
  if ( v12 )
    v12 = (char *)sub_1800161B8((__int64)v12, a2, a3, a4, a5, a6, a7, a8);
  *(_OWORD *)a1 = 0LL;
  *(_QWORD *)a1 = v12 + 16;
  *(_QWORD *)(a1 + 8) = v12;
  sub_18001821C(a1, (__int64)(v12 + 16));
  return a1;
}
