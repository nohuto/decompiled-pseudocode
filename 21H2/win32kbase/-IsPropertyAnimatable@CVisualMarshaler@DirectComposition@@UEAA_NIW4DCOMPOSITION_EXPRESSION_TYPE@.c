/*
 * XREFs of ?IsPropertyAnimatable@CVisualMarshaler@DirectComposition@@UEAA_NIW4DCOMPOSITION_EXPRESSION_TYPE@@@Z @ 0x1C021B770
 * Callers:
 *     <none>
 * Callees:
 *     ?IsPropertyAnimatable@CResourceMarshaler@DirectComposition@@UEAA_NIW4DCOMPOSITION_EXPRESSION_TYPE@@@Z @ 0x1C0099C70 (-IsPropertyAnimatable@CResourceMarshaler@DirectComposition@@UEAA_NIW4DCOMPOSITION_EXPRESSION_TYP.c)
 */

char __fastcall DirectComposition::CVisualMarshaler::IsPropertyAnimatable(
        DirectComposition::CResourceMarshaler *a1,
        unsigned int a2,
        int a3)
{
  if ( a2 <= 2 || a2 == 26 )
    return a3 == 18;
  else
    return DirectComposition::CResourceMarshaler::IsPropertyAnimatable(a1, a2);
}
