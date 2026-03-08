/*
 * XREFs of ?ulDispatchGFPEFunction@XEPALOBJ@@QEAAKW4GFPE_FUNCTION_ID@@K@Z @ 0x1C0028270
 * Callers:
 *     ?ulGetMatchingIndexFromColorref@@YAKVXEPALOBJ@@0K@Z @ 0x1C00281CC (-ulGetMatchingIndexFromColorref@@YAKVXEPALOBJ@@0K@Z.c)
 *     ulGetNearestIndexFromColorref @ 0x1C00AAA70 (ulGetNearestIndexFromColorref.c)
 *     ?ulGetMatchFromPalentry@XEPALOBJ@@QEAAKUtagPALETTEENTRY@@@Z @ 0x1C0184B48 (-ulGetMatchFromPalentry@XEPALOBJ@@QEAAKUtagPALETTEENTRY@@@Z.c)
 *     GreSetMagicColors @ 0x1C01995FC (GreSetMagicColors.c)
 *     ?ulGetNearestFromPalentry@XEPALOBJ@@QEAAKUtagPALETTEENTRY@@K@Z @ 0x1C0199D34 (-ulGetNearestFromPalentry@XEPALOBJ@@QEAAKUtagPALETTEENTRY@@K@Z.c)
 * Callees:
 *     ?ulIndexedGetMatchFromPalentry@@YAKPEAVPALETTE@@K@Z @ 0x1C00282F4 (-ulIndexedGetMatchFromPalentry@@YAKPEAVPALETTE@@K@Z.c)
 *     ?ulGetNearestFromPalentryNoExactMatchFirst@XEPALOBJ@@QEAAKUtagPALETTEENTRY@@@Z @ 0x1C0184B70 (-ulGetNearestFromPalentryNoExactMatchFirst@XEPALOBJ@@QEAAKUtagPALETTEENTRY@@@Z.c)
 */

unsigned int __fastcall XEPALOBJ::ulDispatchGFPEFunction(ULONG_PTR *a1, int a2, unsigned int a3)
{
  unsigned int v3; // r11d
  unsigned int v4; // eax
  int v5; // r11d
  unsigned int result; // eax
  ULONG_PTR v7; // rbx
  struct tagPALETTEENTRY v8; // r11d
  _DWORD *v9; // r8
  ULONG_PTR v10; // [rsp+58h] [rbp+20h] BYREF

  v3 = a3;
  if ( a2 > 5 )
  {
    switch ( a2 )
    {
      case 6:
        v4 = ((unsigned __int8)a3 << 16) | BYTE2(a3);
        v5 = a3 & 0xFF00;
        return v5 | v4;
      case 7:
        return v3;
      case 8:
        return a3 & 0xFFFFFF;
    }
LABEL_22:
    KeBugCheckEx(0x164u, 0xCuLL, *a1, a2, 9uLL);
  }
  switch ( a2 )
  {
    case 5:
      v9 = *(_DWORD **)(*a1 + 112);
      v4 = v9[1] & (v3 >> v9[4] << v9[7]) | v9[2] & (v3 >> v9[5] << v9[8]);
      v5 = *v9 & (v3 >> v9[3] << v9[6]);
      return v5 | v4;
    case 0:
      goto LABEL_22;
    case 1:
      return ulIndexedGetMatchFromPalentry((struct PALETTE *)*a1, a3);
  }
  if ( a2 != 2 )
  {
    if ( a2 == 3 )
    {
      v4 = (a3 & 0xFC00 | (a3 >> 14) & 0x3E0) >> 5;
      v5 = (a3 & 0xF8) << 8;
      return v5 | v4;
    }
    if ( a2 == 4 )
    {
      v4 = (a3 & 0xF800 | (a3 >> 13) & 0x7C0) >> 6;
      v5 = (a3 & 0xF8) << 7;
      return v5 | v4;
    }
    goto LABEL_22;
  }
  v7 = *a1;
  result = ulIndexedGetMatchFromPalentry((struct PALETTE *)*a1, a3);
  if ( result == -1 )
  {
    v10 = v7;
    return XEPALOBJ::ulGetNearestFromPalentryNoExactMatchFirst((XEPALOBJ *)&v10, v8);
  }
  return result;
}
