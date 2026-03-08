/*
 * XREFs of ?IsOfType@CComponentTransform3D@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x1800E0200
 * Callers:
 *     <none>
 * Callees:
 *     ?IsOfType@?$CTransform3DGeneratedT@VCTransform3D@@VCEffect@@@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x1800E0230 (-IsOfType@-$CTransform3DGeneratedT@VCTransform3D@@VCEffect@@@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 */

char __fastcall CComponentTransform3D::IsOfType(__int64 a1, int a2)
{
  char v2; // cl
  char v4; // al

  if ( a2 == 30 )
    return 1;
  v4 = CTransform3DGeneratedT<CTransform3D,CEffect>::IsOfType();
  v2 = 0;
  if ( v4 )
    return 1;
  return v2;
}
