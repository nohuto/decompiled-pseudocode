/*
 * XREFs of sub_1800AC5F0 @ 0x1800AC5F0
 * Callers:
 *     sub_18001A5D0 @ 0x18001A5D0 (sub_18001A5D0.c)
 *     sub_18001C5E8 @ 0x18001C5E8 (sub_18001C5E8.c)
 *     sub_1800BDA00 @ 0x1800BDA00 (sub_1800BDA00.c)
 *     sub_1800BF6A4 @ 0x1800BF6A4 (sub_1800BF6A4.c)
 *     sub_1800C4498 @ 0x1800C4498 (sub_1800C4498.c)
 *     sub_1800C5744 @ 0x1800C5744 (sub_1800C5744.c)
 *     sub_1800FA8A0 @ 0x1800FA8A0 (sub_1800FA8A0.c)
 *     sub_1800FB310 @ 0x1800FB310 (sub_1800FB310.c)
 * Callees:
 *     <none>
 */

void __fastcall sub_1800AC5F0(__int64 a1, int a2)
{
  *(_DWORD *)(a1 + 544) |= a2;
  if ( (a2 & 4) != 0 )
    *(_BYTE *)(a1 + 1612) = 1;
}
