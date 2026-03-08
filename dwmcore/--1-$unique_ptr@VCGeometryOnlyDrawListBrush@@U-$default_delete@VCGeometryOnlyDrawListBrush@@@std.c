/*
 * XREFs of ??1?$unique_ptr@VCGeometryOnlyDrawListBrush@@U?$default_delete@VCGeometryOnlyDrawListBrush@@@std@@@std@@QEAA@XZ @ 0x1801CFCB0
 * Callers:
 *     ?ExecuteShaders@CGraphRenderingContext@CExternalEffectGraph@@QEBAJII@Z @ 0x18002FAD0 (-ExecuteShaders@CGraphRenderingContext@CExternalEffectGraph@@QEBAJII@Z.c)
 * Callees:
 *     ??_ECGeometryOnlyDrawListBrush@@UEAAPEAXI@Z @ 0x18007EFB0 (--_ECGeometryOnlyDrawListBrush@@UEAAPEAXI@Z.c)
 */

CGeometryOnlyDrawListBrush *__fastcall std::unique_ptr<CGeometryOnlyDrawListBrush>::~unique_ptr<CGeometryOnlyDrawListBrush>(
        CGeometryOnlyDrawListBrush **a1)
{
  CGeometryOnlyDrawListBrush *v1; // rcx
  CGeometryOnlyDrawListBrush *result; // rax

  v1 = *a1;
  if ( v1 )
    return CGeometryOnlyDrawListBrush::`vector deleting destructor'(v1, 1);
  return result;
}
