/*
 * XREFs of ?IsOfType@?$CTransform3DGroupGeneratedT@VCTransform3DGroup@@VCTransform3D@@@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x1801C2090
 * Callers:
 *     <none>
 * Callees:
 *     ?IsOfType@?$CTransform3DGeneratedT@VCTransform3D@@VCEffect@@@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x1800E0230 (-IsOfType@-$CTransform3DGeneratedT@VCTransform3D@@VCEffect@@@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 */

char __fastcall CTransform3DGroupGeneratedT<CTransform3DGroup,CTransform3D>::IsOfType(__int64 a1, int a2)
{
  char v2; // al
  char v3; // cl

  if ( a2 == 188 )
    return 1;
  v2 = CTransform3DGeneratedT<CTransform3D,CEffect>::IsOfType(a1, a2);
  v3 = 0;
  if ( v2 )
    return 1;
  return v3;
}
