/*
 * XREFs of ?vIFIMetricsToETM@@YAXPEAU_EXTTEXTMETRIC@@AEAVRFONTOBJ@@AEAVDCOBJ@@PEAU_IFIMETRICS@@@Z @ 0x1C012F8F0
 * Callers:
 *     NtGdiGetETM @ 0x1C012F660 (NtGdiGetETM.c)
 * Callees:
 *     ?vSetNotionalToDevice@RFONTOBJ@@QEAAXAEAVEXFORMOBJ@@@Z @ 0x1C00152D0 (-vSetNotionalToDevice@RFONTOBJ@@QEAAXAEAVEXFORMOBJ@@@Z.c)
 *     ??0IFIOBJR@@QEAA@PEBU_IFIMETRICS@@AEAVRFONTOBJ@@AEAVDCOBJ@@@Z @ 0x1C001713C (--0IFIOBJR@@QEAA@PEBU_IFIMETRICS@@AEAVRFONTOBJ@@AEAVDCOBJ@@@Z.c)
 *     ?ulLogPixelsY@PDEVOBJ@@QEAAKXZ @ 0x1C00174DC (-ulLogPixelsY@PDEVOBJ@@QEAAKXZ.c)
 *     bFToL @ 0x1C00E82E4 (bFToL.c)
 *     ??0EXFORMOBJ@@QEAA@PEAVMATRIX@@K@Z @ 0x1C013067C (--0EXFORMOBJ@@QEAA@PEAVMATRIX@@K@Z.c)
 *     __security_check_cookie @ 0x1C01593A0 (__security_check_cookie.c)
 */

void __fastcall vIFIMetricsToETM(
        struct _EXTTEXTMETRIC *a1,
        struct RFONTOBJ *a2,
        struct DCOBJ *a3,
        struct _IFIMETRICS *a4)
{
  __int64 v8; // rdx
  __int64 v9; // rdi
  int v10; // ebx
  int v11; // eax
  int v12; // eax
  int v13; // ebx
  int v14; // eax
  __int64 v15; // r9
  __int64 v16; // rax
  __int64 v17; // rcx
  __int16 v18; // ax
  int v19; // [rsp+20h] [rbp-69h] BYREF
  __int64 v20; // [rsp+28h] [rbp-61h] BYREF
  float v21; // [rsp+30h] [rbp-59h] BYREF
  _QWORD v22[3]; // [rsp+38h] [rbp-51h] BYREF
  _OWORD v23[2]; // [rsp+50h] [rbp-39h] BYREF
  int v24; // [rsp+70h] [rbp-19h]
  int v25; // [rsp+7Ch] [rbp-Dh]

  IFIOBJR::IFIOBJR((IFIOBJR *)v23, a4, a2, a3);
  v9 = *(_QWORD *)&v23[0];
  *(_WORD *)a1 = 52;
  v10 = (*(_DWORD *)(*(_QWORD *)a2 + 324LL) + 8) >> 4;
  if ( (*(_DWORD *)(v9 + 48) & 0x3000010) != 0 )
  {
    v11 = *(_DWORD *)(*(_QWORD *)a2 + 380LL);
    if ( v11 == 0x80000000 )
    {
      memset(v23, 0, sizeof(v23));
      v24 = 0;
      EXFORMOBJ::EXFORMOBJ((EXFORMOBJ *)v22, (struct MATRIX *)v23, 8u);
      RFONTOBJ::vSetNotionalToDevice(a2, (struct EXFORMOBJ *)v22);
      v12 = *(__int16 *)(v9 + 56);
      LODWORD(v20) = 0;
      *((float *)&v20 + 1) = (float)v12;
      if ( (*(_DWORD *)(v22[0] + 32LL) & 2) == 0 )
        EXFORMOBJ::bXform((EXFORMOBJ *)v22, (struct VECTORFL *)&v20, (struct VECTORFL *)&v20, 1uLL);
      v21 = 0.0;
      EFLOAT::eqLength(&v21, &v19, &v20);
      v19 = 0;
      bFToL(v21, &v19, 0);
      v13 = v19;
    }
    else
    {
      v13 = v10 - v11;
    }
  }
  else
  {
    v13 = v10 - v25;
  }
  v20 = *(_QWORD *)(*(_QWORD *)a3 + 48LL);
  v14 = PDEVOBJ::ulLogPixelsY((PDEVOBJ *)&v20, v8);
  v15 = v14;
  v16 = v14 / 2 + 72LL * v13;
  if ( v16 > 0x7FFFFFFF )
    v17 = v16 / v15;
  else
    LODWORD(v17) = (int)v16 / (int)v15;
  *((_WORD *)a1 + 2) = 0;
  *((_WORD *)a1 + 1) = 20 * v17;
  *((_WORD *)a1 + 3) = *(_WORD *)(v9 + 56);
  *((_WORD *)a1 + 4) = *(_WORD *)(v9 + 58);
  *((_WORD *)a1 + 5) = 0x4000;
  *((_WORD *)a1 + 6) = *(_WORD *)(v9 + 56);
  *((_WORD *)a1 + 7) = *(_WORD *)(v9 + 70);
  *((_WORD *)a1 + 8) = *(_WORD *)(v9 + 82);
  *((_WORD *)a1 + 9) = *(_WORD *)(v9 + 70);
  *((_WORD *)a1 + 10) = -*(_WORD *)(v9 + 72);
  *((_WORD *)a1 + 11) = -*(_WORD *)(v9 + 32);
  *((_WORD *)a1 + 12) = *(_WORD *)(v9 + 98);
  *((_WORD *)a1 + 13) = *(_WORD *)(v9 + 90);
  *((_WORD *)a1 + 14) = *(_WORD *)(v9 + 94);
  *((_WORD *)a1 + 15) = *(_WORD *)(v9 + 86);
  *((_WORD *)a1 + 16) = *(_WORD *)(v9 + 102);
  *((_WORD *)a1 + 17) = *(_WORD *)(v9 + 100);
  *((_WORD *)a1 + 18) = *(__int16 *)(v9 + 102) >> 1;
  *((_WORD *)a1 + 19) = *(_WORD *)(v9 + 102);
  v18 = *(__int16 *)(v9 + 100) >> 1;
  *((_WORD *)a1 + 21) = v18;
  *((_WORD *)a1 + 20) = v18;
  *((_WORD *)a1 + 22) = *(_WORD *)(v9 + 106);
  *((_WORD *)a1 + 23) = *(_WORD *)(v9 + 104);
  *((_DWORD *)a1 + 12) = LOWORD(a4->cKerningPairs);
}
