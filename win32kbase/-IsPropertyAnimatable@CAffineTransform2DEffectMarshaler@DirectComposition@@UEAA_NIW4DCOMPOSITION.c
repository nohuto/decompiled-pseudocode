/*
 * XREFs of ?IsPropertyAnimatable@CAffineTransform2DEffectMarshaler@DirectComposition@@UEAA_NIW4DCOMPOSITION_EXPRESSION_TYPE@@@Z @ 0x1C0250F90
 * Callers:
 *     <none>
 * Callees:
 *     ?IsPropertyAnimatable@CResourceMarshaler@DirectComposition@@UEAA_NIW4DCOMPOSITION_EXPRESSION_TYPE@@@Z @ 0x1C0006C60 (-IsPropertyAnimatable@CResourceMarshaler@DirectComposition@@UEAA_NIW4DCOMPOSITION_EXPRESSION_TYP.c)
 */

char __fastcall DirectComposition::CAffineTransform2DEffectMarshaler::IsPropertyAnimatable(
        DirectComposition::CResourceMarshaler *a1,
        unsigned int a2,
        int a3)
{
  if ( a2 - 3 > 6 )
    return DirectComposition::CResourceMarshaler::IsPropertyAnimatable(a1, a2);
  else
    return a3 == 18;
}
