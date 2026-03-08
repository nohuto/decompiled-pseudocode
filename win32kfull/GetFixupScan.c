/*
 * XREFs of GetFixupScan @ 0x1C014BF50
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
 *     _guard_dispatch_icall_nop @ 0x1C0130B00 (_guard_dispatch_icall_nop.c)
 *     FixupGrayScan @ 0x1C014BBB8 (FixupGrayScan.c)
 *     FixupColorScan @ 0x1C025F804 (FixupColorScan.c)
 *     MappingBGR @ 0x1C026599C (MappingBGR.c)
 */

void *__fastcall GetFixupScan(__int64 a1, void *a2)
{
  int v2; // r9d
  int v5; // eax
  int v6; // edx
  char *v7; // r8
  int v8; // eax
  char v9; // dl
  int v10; // eax
  int v11; // eax

  v2 = *(_DWORD *)a1;
  if ( (*(_DWORD *)a1 & 0x40) != 0 )
  {
    if ( (*(_BYTE *)(a1 + 8) & 4) != 0 )
      FixupGrayScan(a1, a2);
    else
      FixupColorScan();
  }
  else
  {
    if ( (v2 & 0x20) != 0 )
    {
      v5 = *(_DWORD *)(a1 + 40);
      v6 = *(_DWORD *)(a1 + 60) + 1;
      *(_DWORD *)(a1 + 60) = v6;
      if ( v6 > v5 )
      {
        *(_DWORD *)(a1 + 60) = v5;
        v6 = v5;
      }
      v7 = (char *)(a1 + 8);
      v8 = *(_DWORD *)(a1 + 68) * (v5 - v6);
      *(_BYTE *)(a1 + 8) |= 2u;
      *(_QWORD *)(a1 + 48) = *(_QWORD *)(a1 + 32) + v8;
      *(_DWORD *)a1 = v2 & 0xFFFFFFDF;
    }
    else
    {
      v7 = (char *)(a1 + 8);
    }
    if ( a2 )
    {
      (*(void (__fastcall **)(char *, void *))(a1 + 24))(v7, a2);
    }
    else
    {
      v9 = *v7;
      if ( (*v7 & 2) != 0 )
      {
        v10 = *(_DWORD *)(a1 + 60);
        if ( v10 && (v11 = v10 - 1, (*(_DWORD *)(a1 + 60) = v11) != 0) )
        {
          *(_QWORD *)(a1 + 48) += *(int *)(a1 + 68);
        }
        else if ( (v9 & 1) != 0 )
        {
          *(_QWORD *)(a1 + 48) = *(_QWORD *)(a1 + 32);
          *(_DWORD *)(a1 + 60) = *(_DWORD *)(a1 + 40);
        }
        else
        {
          *v7 = v9 & 0xFD;
        }
      }
    }
  }
  if ( (*(_DWORD *)a1 & 8) != 0 )
  {
    if ( a2 )
    {
      MappingBGR(a2, *(unsigned int *)(a1 + 56), *(_QWORD *)(a1 + 392), *(_QWORD *)(a1 + 448));
      *(_QWORD *)(a1 + 448) += *(int *)(a1 + 472);
      if ( *(_QWORD *)(a1 + 448) == *(_QWORD *)(a1 + 456) )
        *(_QWORD *)(a1 + 448) = *(_QWORD *)(a1 + 464);
    }
  }
  return a2;
}
