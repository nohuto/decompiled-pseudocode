/*
 * XREFs of sub_1800BF1AC @ 0x1800BF1AC
 * Callers:
 *     sub_1800C37C0 @ 0x1800C37C0 (sub_1800C37C0.c)
 * Callees:
 *     sub_1800543D0 @ 0x1800543D0 (sub_1800543D0.c)
 *     sub_18005D19C @ 0x18005D19C (sub_18005D19C.c)
 */

void __fastcall sub_1800BF1AC(__int64 a1, int a2, __int64 a3)
{
  __int64 i; // rdi
  __int64 v6; // rax

  if ( a2 == *(_DWORD *)(a1 + 124) )
  {
    for ( i = 0LL; (unsigned int)i < *(_DWORD *)(a1 + 124); i = (unsigned int)(i + 1) )
    {
      v6 = sub_18005D19C((_QWORD *)(a1 + 88), (unsigned int)i);
      *(float *)(a3 + 4 * i) = sub_1800543D0(v6);
    }
  }
}
