/*
 * XREFs of ?IsOfType@CMatrixTransform3D@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x18001D370
 * Callers:
 *     <none>
 * Callees:
 *     ?IsOfType@?$CTransform3DGeneratedT@VCTransform3D@@VCEffect@@@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x1800E0230 (-IsOfType@-$CTransform3DGeneratedT@VCTransform3D@@VCEffect@@@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 */

char __fastcall CMatrixTransform3D::IsOfType(__int64 a1, int a2)
{
  char v2; // al
  char v3; // cl

  if ( a2 == 110 )
    return 1;
  v2 = CTransform3DGeneratedT<CTransform3D,CEffect>::IsOfType();
  v3 = 0;
  if ( v2 )
    return 1;
  return v3;
}
