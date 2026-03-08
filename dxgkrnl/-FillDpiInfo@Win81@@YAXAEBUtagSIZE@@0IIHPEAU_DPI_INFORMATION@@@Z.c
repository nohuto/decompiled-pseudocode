/*
 * XREFs of ?FillDpiInfo@Win81@@YAXAEBUtagSIZE@@0IIHPEAU_DPI_INFORMATION@@@Z @ 0x1C031C72C
 * Callers:
 *     ?UpdateGdiInfoForVidPnSource@Win81@@YAJPEBU_DXGDMM_INTERFACE@@QEAXIIHPEAU_DPI_INFORMATION@@@Z @ 0x1C031CC94 (-UpdateGdiInfoForVidPnSource@Win81@@YAJPEBU_DXGDMM_INTERFACE@@QEAXIIHPEAU_DPI_INFORMATION@@@Z.c)
 * Callees:
 *     ?CalcDpi@Win81@@YAIII@Z @ 0x1C031C370 (-CalcDpi@Win81@@YAIII@Z.c)
 *     ?FillOverridesAndAdjustedScaleFactor@Win81@@YAXIHPEAU_DPI_INFORMATION@@@Z @ 0x1C031C844 (-FillOverridesAndAdjustedScaleFactor@Win81@@YAXIHPEAU_DPI_INFORMATION@@@Z.c)
 *     ?SatisfyMinResolutionBarForScaleIdx@Win81@@YAKHUtagSIZE@@QEBUDPI_SCALE_FACTOR_COLLECTION@1@@Z @ 0x1C031CBDC (-SatisfyMinResolutionBarForScaleIdx@Win81@@YAKHUtagSIZE@@QEBUDPI_SCALE_FACTOR_COLLECTION@1@@Z.c)
 */

void __fastcall Win81::FillDpiInfo(
        Win81 *this,
        const struct tagSIZE *a2,
        const struct tagSIZE *a3,
        unsigned int a4,
        unsigned int a5,
        __int64 a6)
{
  unsigned int v8; // ebx
  int v10; // r15d
  int v12; // eax
  struct tagSIZE v13; // r8
  _DWORD *v14; // rcx
  unsigned int v15; // edx
  struct _DPI_INFORMATION *v16; // r9
  __int64 v17; // [rsp+68h] [rbp+30h]
  __int64 v18; // [rsp+68h] [rbp+30h]

  v8 = 0;
  v10 = (int)a3;
  *(_QWORD *)(a6 + 24) = *(_QWORD *)this;
  *(struct tagSIZE *)(a6 + 32) = *a2;
  if ( *(_DWORD *)this && *((_DWORD *)this + 1) )
  {
    LODWORD(v17) = Win81::CalcDpi((Win81 *)(unsigned int)a2->cx, *(_DWORD *)this);
    HIDWORD(v17) = Win81::CalcDpi((Win81 *)(unsigned int)a2->cy, *((_DWORD *)this + 1));
    *(_QWORD *)(a6 + 40) = v17;
  }
  *(_DWORD *)(a6 + 64) = v10;
  v12 = *(_DWORD *)(a6 + 40) * v10;
  v13 = (struct tagSIZE)(100 * v12 / 0x6900u);
  LODWORD(v18) = 100 * v12 / 0x6900u;
  HIDWORD(v18) = 100 * *(_DWORD *)(a6 + 44) * v10 / 0x6900u;
  *(_QWORD *)(a6 + 56) = v18;
  v14 = &unk_1C009A2C0;
  do
  {
    if ( (unsigned int)((v13.cx + HIDWORD(v18)) / 2) < *v14 )
      break;
    ++v8;
    ++v14;
  }
  while ( v8 < 4 );
  *(_DWORD *)(a6 + 12) = Win81::SatisfyMinResolutionBarForScaleIdx(
                           (Win81 *)v8,
                           (int)*a2,
                           v13,
                           (const struct Win81::DPI_SCALE_FACTOR_COLLECTION *const)0x38138139);
  Win81::FillOverridesAndAdjustedScaleFactor((Win81 *)a4, v15, a6, v16);
}
