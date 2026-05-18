/*
 * XREFs of sub_1800A1C7C @ 0x1800A1C7C
 * Callers:
 *     sub_18009FA08 @ 0x18009FA08 (sub_18009FA08.c)
 *     sub_1800A02A0 @ 0x1800A02A0 (sub_1800A02A0.c)
 *     sub_1800A02D8 @ 0x1800A02D8 (sub_1800A02D8.c)
 *     sub_1800A07A4 @ 0x1800A07A4 (sub_1800A07A4.c)
 *     sub_1800A0C9C @ 0x1800A0C9C (sub_1800A0C9C.c)
 *     sub_1800A0E7C @ 0x1800A0E7C (sub_1800A0E7C.c)
 *     sub_1800A0FB0 @ 0x1800A0FB0 (sub_1800A0FB0.c)
 *     sub_1800A103C @ 0x1800A103C (sub_1800A103C.c)
 *     sub_1800D1310 @ 0x1800D1310 (sub_1800D1310.c)
 *     sub_1800D3808 @ 0x1800D3808 (sub_1800D3808.c)
 * Callees:
 *     sub_180070114 @ 0x180070114 (sub_180070114.c)
 *     memcmp @ 0x18011E0BE (memcmp.c)
 */

__int64 *__fastcall sub_1800A1C7C(__int64 *a1, __int64 *a2, size_t *a3)
{
  __int64 v3; // r15
  __int64 *v6; // rax
  __int64 v7; // rbx
  const void *v8; // rdx
  const void *v9; // rcx
  unsigned __int64 v10; // rbp
  size_t v11; // rdi
  size_t v12; // r8
  int v13; // eax
  bool v14; // sf

  v3 = *a1;
  v6 = sub_180070114(a1, a3);
  v7 = (__int64)v6;
  if ( v6 == (__int64 *)v3 )
    goto LABEL_13;
  v8 = v6 + 4;
  if ( (unsigned __int64)v6[7] >= 0x10 )
    v8 = (const void *)v6[4];
  v9 = a3;
  if ( a3[3] >= 0x10 )
    v9 = (const void *)*a3;
  v10 = v6[6];
  v11 = a3[2];
  v12 = v11;
  if ( v10 < v11 )
    v12 = v6[6];
  v13 = memcmp(v9, v8, v12);
  v14 = v13 < 0;
  if ( v13 )
  {
LABEL_12:
    if ( v14 )
      goto LABEL_13;
    goto LABEL_14;
  }
  if ( v11 < v10 )
  {
LABEL_13:
    v7 = v3;
    goto LABEL_14;
  }
  if ( v11 <= v10 )
  {
    v14 = 0;
    goto LABEL_12;
  }
LABEL_14:
  *a2 = v7;
  return a2;
}
