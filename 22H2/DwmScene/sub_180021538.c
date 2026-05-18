/*
 * XREFs of sub_180021538 @ 0x180021538
 * Callers:
 *     sub_18001E9AC @ 0x18001E9AC (sub_18001E9AC.c)
 * Callees:
 *     sub_18001821C @ 0x18001821C (sub_18001821C.c)
 *     sub_18001DE54 @ 0x18001DE54 (sub_18001DE54.c)
 *     ??2@YAPEAX_K@Z @ 0x18011E768 (--2@YAPEAX_K@Z.c)
 */

__int64 __fastcall sub_180021538(__int64 a1, __int128 *a2, __int64 *a3, _QWORD *a4)
{
  char *v8; // rax

  v8 = (char *)operator new(0x6B0uLL);
  if ( v8 )
    v8 = (char *)sub_18001DE54((__int64)v8, a2, a3, a4);
  *(_OWORD *)a1 = 0LL;
  *(_QWORD *)a1 = v8 + 16;
  *(_QWORD *)(a1 + 8) = v8;
  sub_18001821C(a1, (__int64)(v8 + 16));
  return a1;
}
