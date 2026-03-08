/*
 * XREFs of ?IsOfType@?$CTranslateTransformGeneratedT@VCTranslateTransform@@VCTransform@@@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x18001DD60
 * Callers:
 *     <none>
 * Callees:
 *     ?IsOfType@?$CTransformGeneratedT@VCTransform@@VCTransform3D@@@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x1800E00E0 (-IsOfType@-$CTransformGeneratedT@VCTransform@@VCTransform3D@@@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 */

char __fastcall CTranslateTransformGeneratedT<CTranslateTransform,CTransform>::IsOfType(__int64 a1, int a2)
{
  char v2; // al
  char v3; // cl

  if ( a2 == 190 )
    return 1;
  v2 = CTransformGeneratedT<CTransform,CTransform3D>::IsOfType();
  v3 = 0;
  if ( v2 )
    return 1;
  return v3;
}
