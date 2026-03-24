/*
 * XREFs of ??0CCommonRenderingEffect@@QEAA@AEBVCDrawListBitmap@@USamplerMode@@01@Z @ 0x1800B9D94
 * Callers:
 *     ?GenerateDrawList@CAtlasedRectsGroup@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x180057FC0 (-GenerateDrawList@CAtlasedRectsGroup@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCac.c)
 *     ?GetNextRunningEffect@CCommonRenderingEffect@@UEAA?AV?$com_ptr_t@VCRenderingEffect@@Uerr_returncode_policy@wil@@@wil@@PEAVCRenderingEffect@@PEA_N@Z @ 0x1800B94D0 (-GetNextRunningEffect@CCommonRenderingEffect@@UEAA-AV-$com_ptr_t@VCRenderingEffect@@Uerr_returnc.c)
 *     ?GenerateDrawList@CPrimitiveGroupDrawListGenerator@@QEAAJPEAVCDrawingContext@@PEBUD2D_MATRIX_3X2_F@@PEAVCDrawListCache@@@Z @ 0x1800B9780 (-GenerateDrawList@CPrimitiveGroupDrawListGenerator@@QEAAJPEAVCDrawingContext@@PEBUD2D_MATRIX_3X2.c)
 * Callees:
 *     ??4CDrawListBitmap@@QEAAAEAV0@AEBV0@@Z @ 0x180051BFC (--4CDrawListBitmap@@QEAAAEAV0@AEBV0@@Z.c)
 *     ??_H@YAXPEAX_K1P6APEAX0@Z@Z @ 0x180094E70 (--_H@YAXPEAX_K1P6APEAX0@Z@Z.c)
 *     IsWhitePixelOptimizationCandidate @ 0x1800B9EAC (IsWhitePixelOptimizationCandidate.c)
 */

__int64 __fastcall CCommonRenderingEffect::CCommonRenderingEffect(
        __int64 a1,
        _QWORD *a2,
        __int64 a3,
        _QWORD *a4,
        __int64 a5)
{
  char v5; // bp
  bool v10; // zf
  char v11; // al

  v5 = 0;
  *(_DWORD *)(a1 + 8) = 0;
  *(_QWORD *)a1 = &CCommonRenderingEffect::`vftable';
  `vector constructor iterator'(
    (char *)(a1 + 16),
    48LL,
    2LL,
    (void (__fastcall *)(char *))CDrawListBitmap::CDrawListBitmap);
  `vector constructor iterator'((char *)(a1 + 112), 3LL, 2LL, (void (__fastcall *)(char *))SamplerMode::SamplerMode);
  CDrawListBitmap::operator=(a1 + 16, (__int64)a2);
  CDrawListBitmap::operator=(a1 + 64, (__int64)a4);
  *(_WORD *)(a1 + 112) = *(_WORD *)a3;
  *(_BYTE *)(a1 + 114) = *(_BYTE *)(a3 + 2);
  *(_WORD *)(a1 + 115) = *(_WORD *)a5;
  *(_BYTE *)(a1 + 117) = *(_BYTE *)(a5 + 2);
  if ( !*a2 && !a2[1] || (v10 = (unsigned __int8)IsWhitePixelOptimizationCandidate(a2, 0LL) == 0, v11 = 0, !v10) )
    v11 = 1;
  *(_BYTE *)(a1 + 118) = v11;
  if ( !*a4 && !a4[1] || (unsigned __int8)IsWhitePixelOptimizationCandidate(a4, 1LL) )
    v5 = 1;
  *(_BYTE *)(a1 + 118) &= v5;
  return a1;
}
