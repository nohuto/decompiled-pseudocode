/*
 * XREFs of sub_180055F74 @ 0x180055F74
 * Callers:
 *     sub_1800646D8 @ 0x1800646D8 (sub_1800646D8.c)
 *     sub_18011E8C8 @ 0x18011E8C8 (sub_18011E8C8.c)
 *     sub_18011EA28 @ 0x18011EA28 (sub_18011EA28.c)
 * Callees:
 *     sub_180033A70 @ 0x180033A70 (sub_180033A70.c)
 *     sub_180055F40 @ 0x180055F40 (sub_180055F40.c)
 *     sub_180056C2C @ 0x180056C2C (sub_180056C2C.c)
 *     memset @ 0x18006AB8C (memset.c)
 */

char __fastcall sub_180055F74(__int64 a1, unsigned int a2, char a3)
{
  unsigned __int64 v4; // rdi
  void *v6; // rcx
  void *v7; // rax

  v4 = a2;
  v6 = *(void **)a1;
  if ( v6 )
  {
    sub_180033A70(v6);
    *(_QWORD *)a1 = 0LL;
  }
  if ( !a3 )
    goto LABEL_6;
  v7 = sub_180055F40(saturated_mul(v4, 8uLL));
  *(_QWORD *)a1 = v7;
  if ( v7 )
  {
    memset(v7, 0, 8 * v4);
LABEL_6:
    *(_DWORD *)(a1 + 16) = v4;
    sub_180056C2C(a1);
    LOBYTE(v7) = 1;
  }
  return (char)v7;
}
