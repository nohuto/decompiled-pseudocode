/*
 * XREFs of sub_1800706D4 @ 0x1800706D4
 * Callers:
 *     sub_180079020 @ 0x180079020 (sub_180079020.c)
 * Callees:
 *     sub_180070114 @ 0x180070114 (sub_180070114.c)
 *     sub_1800708D8 @ 0x1800708D8 (sub_1800708D8.c)
 *     memcmp @ 0x18011E0BE (memcmp.c)
 */

__int64 __fastcall sub_1800706D4(__int64 *a1, __int64 a2, size_t *a3)
{
  __int64 *v6; // rax
  __int64 *v7; // rbx
  const void *v8; // rdx
  const void *v9; // rcx
  size_t v10; // r14
  size_t v11; // r8
  int v12; // eax
  bool v13; // sf
  size_t *v15; // [rsp+38h] [rbp-30h] BYREF
  char v16; // [rsp+40h] [rbp-28h] BYREF

  v6 = sub_180070114(a1, a3);
  v7 = v6;
  if ( v6 == (__int64 *)*a1 )
    goto LABEL_14;
  v8 = v6 + 4;
  if ( (unsigned __int64)v6[7] >= 0x10 )
    v8 = (const void *)v6[4];
  v9 = a3;
  if ( a3[3] >= 0x10 )
    v9 = (const void *)*a3;
  v10 = v6[6];
  v11 = a3[2];
  if ( v10 < v11 )
    v11 = v6[6];
  v12 = memcmp(v9, v8, v11);
  v13 = v12 < 0;
  if ( v12 )
    goto LABEL_12;
  if ( a3[2] < v10 )
    goto LABEL_14;
  if ( a3[2] <= v10 )
  {
    v13 = 0;
LABEL_12:
    if ( !v13 )
      goto LABEL_13;
LABEL_14:
    v15 = a3;
    *(_QWORD *)a2 = *(_QWORD *)sub_1800708D8(
                                 (_DWORD)a1,
                                 (unsigned int)&v16,
                                 (_DWORD)v7,
                                 (unsigned int)&unk_1801C53C8,
                                 (__int64)&v15);
    *(_BYTE *)(a2 + 8) = 1;
    return a2;
  }
LABEL_13:
  *(_QWORD *)a2 = v7;
  *(_BYTE *)(a2 + 8) = 0;
  return a2;
}
