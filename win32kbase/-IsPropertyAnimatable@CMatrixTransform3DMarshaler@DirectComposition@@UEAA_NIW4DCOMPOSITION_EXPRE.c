/*
 * XREFs of ?IsPropertyAnimatable@CMatrixTransform3DMarshaler@DirectComposition@@UEAA_NIW4DCOMPOSITION_EXPRESSION_TYPE@@@Z @ 0x1C0251450
 * Callers:
 *     <none>
 * Callees:
 *     ?IsPropertyAnimatable@CResourceMarshaler@DirectComposition@@UEAA_NIW4DCOMPOSITION_EXPRESSION_TYPE@@@Z @ 0x1C0006C60 (-IsPropertyAnimatable@CResourceMarshaler@DirectComposition@@UEAA_NIW4DCOMPOSITION_EXPRESSION_TYP.c)
 */

char __fastcall DirectComposition::CMatrixTransform3DMarshaler::IsPropertyAnimatable(
        DirectComposition::CResourceMarshaler *a1,
        unsigned int a2,
        int a3)
{
  if ( a2 >= 0x10 )
    return DirectComposition::CResourceMarshaler::IsPropertyAnimatable(a1, a2);
  else
    return a3 == 18;
}
