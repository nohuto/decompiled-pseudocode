/*
 * XREFs of MappingBGRF @ 0x1C0265A54
 * Callers:
 *     BltDIB_CY @ 0x1C0260E50 (BltDIB_CY.c)
 *     ExpandDIB_CY @ 0x1C0261EE0 (ExpandDIB_CY.c)
 *     ExpandDIB_CY_ExpCX @ 0x1C0262870 (ExpandDIB_CY_ExpCX.c)
 *     FastExpAA_CY @ 0x1C0263760 (FastExpAA_CY.c)
 *     GrayExpandDIB_CY @ 0x1C02640E0 (GrayExpandDIB_CY.c)
 *     GrayExpandDIB_CY_ExpCX @ 0x1C0264850 (GrayExpandDIB_CY_ExpCX.c)
 *     GrayShrinkDIB_CY @ 0x1C0265340 (GrayShrinkDIB_CY.c)
 *     RepDIB_CY @ 0x1C0265B80 (RepDIB_CY.c)
 *     ShrinkDIB_CY @ 0x1C0266300 (ShrinkDIB_CY.c)
 *     ShrinkDIB_CY_SrkCX @ 0x1C0266AA0 (ShrinkDIB_CY_SrkCX.c)
 *     SkipDIB_CY @ 0x1C02674B0 (SkipDIB_CY.c)
 *     TileDIB_CY @ 0x1C0267720 (TileDIB_CY.c)
 * Callees:
 *     <none>
 */

unsigned __int8 __fastcall MappingBGRF(unsigned __int8 *a1, unsigned __int64 a2, __int64 a3, unsigned __int8 *a4)
{
  unsigned int v4; // ebx
  unsigned __int8 *v5; // r9
  unsigned __int64 v8; // r8
  __int64 v9; // rcx
  unsigned __int8 result; // al

  v4 = *a4;
  v5 = a4 + 1;
  do
  {
    v8 = (4 * (BGR555Idx[*a1] - (_WORD)v4)) & 0x7C00 | (unsigned __int64)((((__int64)(BGR555Idx[a1[2]]
                                                                                    - (unsigned __int64)v4) >> 5) | (BGR555Idx[a1[1]] - (_WORD)v4) & 0x1F00) >> 3);
    v9 = a3 + 2 * v8;
    *(_WORD *)a1 = *(_WORD *)(v8 + v9);
    result = *(_BYTE *)(v8 + v9 + 2);
    a1[2] = result;
    v4 = *v5++;
    if ( !v4 )
    {
      v5 -= 66;
      v4 = *v5;
    }
    a1 += 4;
  }
  while ( (unsigned __int64)a1 < a2 );
  return result;
}
