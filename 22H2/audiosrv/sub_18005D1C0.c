/*
 * XREFs of sub_18005D1C0 @ 0x18005D1C0
 * Callers:
 *     sub_18005C8D0 @ 0x18005C8D0 (sub_18005C8D0.c)
 *     sub_1800BF4C0 @ 0x1800BF4C0 (sub_1800BF4C0.c)
 *     sub_1800C0E5C @ 0x1800C0E5C (sub_1800C0E5C.c)
 *     sub_1800C0FE0 @ 0x1800C0FE0 (sub_1800C0FE0.c)
 *     sub_1800C1150 @ 0x1800C1150 (sub_1800C1150.c)
 *     sub_1800C12E0 @ 0x1800C12E0 (sub_1800C12E0.c)
 * Callees:
 *     sub_1800543D0 @ 0x1800543D0 (sub_1800543D0.c)
 *     sub_18005D19C @ 0x18005D19C (sub_18005D19C.c)
 *     _o_pow @ 0x18006AB5C (_o_pow.c)
 *     sub_1800BD8A8 @ 0x1800BD8A8 (sub_1800BD8A8.c)
 *     sub_1800C2584 @ 0x1800C2584 (sub_1800C2584.c)
 */

void __fastcall sub_18005D1C0(__int64 a1)
{
  unsigned int v2; // edi
  float v3; // xmm6_4
  float v4; // xmm1_4
  __int64 v5; // rax
  float v6; // xmm0_4
  double v7; // xmm0_8

  if ( off_18019C348 != (_UNKNOWN *)&off_18019C348
    && (*((_DWORD *)off_18019C348 + 7) & 0x10000) != 0
    && *((_BYTE *)off_18019C348 + 25) >= 4u )
  {
    sub_1800BD8A8(*((_QWORD *)off_18019C348 + 2), 16LL, &unk_18016DDC0, a1, *(_DWORD *)(a1 + 124));
  }
  sub_18005D19C((_QWORD *)(a1 + 88), 0LL);
  v2 = 0;
  v3 = o_pow();
  for ( *(_DWORD *)(a1 + 120) = 0; v2 < *(_DWORD *)(a1 + 124); ++v2 )
  {
    if ( off_18019C348 != (_UNKNOWN *)&off_18019C348
      && (*((_DWORD *)off_18019C348 + 7) & 0x10000) != 0
      && *((_BYTE *)off_18019C348 + 25) >= 4u )
    {
      v5 = sub_18005D19C((_QWORD *)(a1 + 88), v2);
      v6 = sub_1800543D0(v5);
      sub_1800C2584(*((_QWORD *)off_18019C348 + 2), 17LL, &unk_18016DDC0, a1, v2, v6);
    }
    sub_18005D19C((_QWORD *)(a1 + 88), v2);
    v4 = o_pow();
    if ( v4 > v3 )
    {
      sub_18005D19C((_QWORD *)(a1 + 88), v2);
      v7 = o_pow();
      *(_DWORD *)(a1 + 120) = v2;
      v3 = v7;
    }
  }
  if ( off_18019C348 != (_UNKNOWN *)&off_18019C348
    && (*((_DWORD *)off_18019C348 + 7) & 0x10000) != 0
    && *((_BYTE *)off_18019C348 + 25) >= 4u )
  {
    sub_1800C2584(*((_QWORD *)off_18019C348 + 2), 18LL, &unk_18016DDC0, a1, *(_DWORD *)(a1 + 120), v3);
  }
}
