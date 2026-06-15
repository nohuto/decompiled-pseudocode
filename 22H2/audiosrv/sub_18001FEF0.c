/*
 * XREFs of sub_18001FEF0 @ 0x18001FEF0
 * Callers:
 *     sub_18001E300 @ 0x18001E300 (sub_18001E300.c)
 *     sub_180021FB0 @ 0x180021FB0 (sub_180021FB0.c)
 *     sub_180023540 @ 0x180023540 (sub_180023540.c)
 *     sub_18004BB48 @ 0x18004BB48 (sub_18004BB48.c)
 *     sub_18004C264 @ 0x18004C264 (sub_18004C264.c)
 *     sub_18005CD7C @ 0x18005CD7C (sub_18005CD7C.c)
 *     sub_18005D590 @ 0x18005D590 (sub_18005D590.c)
 *     sub_180116778 @ 0x180116778 (sub_180116778.c)
 *     sub_180117A50 @ 0x180117A50 (sub_180117A50.c)
 *     sub_180117D48 @ 0x180117D48 (sub_180117D48.c)
 *     sub_180117FF4 @ 0x180117FF4 (sub_180117FF4.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_18001FEF0(__int64 a1)
{
  unsigned int v1; // r8d
  int v2; // r11d
  int v3; // r10d
  int v4; // ebx
  int v5; // edi
  unsigned __int16 v6; // dx
  __int64 v7; // rdx
  __int64 v8; // rdx
  __int64 v9; // rax
  unsigned __int16 v10; // ax
  unsigned __int16 v11; // dx
  unsigned __int16 v12; // ax

  v1 = 0;
  if ( !a1 )
    return (unsigned int)-2147467261;
  v2 = *(unsigned __int16 *)(a1 + 2);
  if ( !(_WORD)v2 )
    return (unsigned int)-2147024809;
  v3 = *(_DWORD *)(a1 + 4);
  if ( !v3 )
    return (unsigned int)-2147024809;
  v4 = *(_DWORD *)(a1 + 8);
  if ( !v4 )
    return (unsigned int)-2147024809;
  v5 = *(unsigned __int16 *)(a1 + 12);
  if ( !(_WORD)v5 )
    return (unsigned int)-2147024809;
  v6 = *(_WORD *)(a1 + 16);
  if ( v6 > 0x400u )
    return (unsigned int)-2147024809;
  if ( ((*(_WORD *)a1 - 1) & 0xFFFD) != 0 )
  {
    if ( *(_WORD *)a1 != 0xFFFE )
      return v1;
    if ( v6 < 0x16u )
      return (unsigned int)-2147024809;
    v7 = 0x10000000000001LL - *(_QWORD *)(a1 + 24);
    if ( *(_QWORD *)(a1 + 24) == 0x10000000000001LL )
      v7 = 0x719B3800AA000080LL - *(_QWORD *)(a1 + 32);
    if ( !v7 )
      goto LABEL_16;
    v8 = 0x10000000000003LL - *(_QWORD *)(a1 + 24);
    if ( *(_QWORD *)(a1 + 24) == 0x10000000000003LL )
      v8 = 0x719B3800AA000080LL - *(_QWORD *)(a1 + 32);
    if ( !v8 )
    {
LABEL_16:
      v9 = 0x10000000000001LL - *(_QWORD *)(a1 + 24);
      if ( !v9 )
        v9 = 0x719B3800AA000080LL - *(_QWORD *)(a1 + 32);
      if ( v9 )
      {
        v10 = *(_WORD *)(a1 + 14);
        v11 = v10;
        if ( v10 != 32 && v10 != 64 )
          return (unsigned int)-2147024809;
      }
      else
      {
        v11 = *(_WORD *)(a1 + 14);
        if ( ((v11 - 8) & 0xFFE7) != 0 )
          return (unsigned int)-2147024809;
      }
      v12 = *(_WORD *)(a1 + 18);
      if ( v12 && v11 >= v12 && v4 == (v3 * (unsigned int)v11 * v2) >> 3 && v5 == v11 * v2 / 8 )
        return v1;
      return (unsigned int)-2147024809;
    }
  }
  else if ( v6
         || (*(_WORD *)(a1 + 14) & 7) != 0
         || (unsigned __int16)v2 > 2u
         || v4 != (v3 * (unsigned int)*(unsigned __int16 *)(a1 + 14) * v2) >> 3 )
  {
    return (unsigned int)-2147024809;
  }
  return v1;
}
