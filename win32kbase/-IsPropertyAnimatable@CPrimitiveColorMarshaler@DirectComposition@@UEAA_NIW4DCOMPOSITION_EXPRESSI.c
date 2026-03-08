/*
 * XREFs of ?IsPropertyAnimatable@CPrimitiveColorMarshaler@DirectComposition@@UEAA_NIW4DCOMPOSITION_EXPRESSION_TYPE@@@Z @ 0x1C0262130
 * Callers:
 *     <none>
 * Callees:
 *     ?IsPropertyAnimatable@CResourceMarshaler@DirectComposition@@UEAA_NIW4DCOMPOSITION_EXPRESSION_TYPE@@@Z @ 0x1C0006C60 (-IsPropertyAnimatable@CResourceMarshaler@DirectComposition@@UEAA_NIW4DCOMPOSITION_EXPRESSION_TYP.c)
 */

char __fastcall DirectComposition::CPrimitiveColorMarshaler::IsPropertyAnimatable(
        DirectComposition::CResourceMarshaler *a1,
        unsigned int a2,
        int a3)
{
  if ( a2 == 1 || a2 == 2 || a2 - 3 < 2 )
    return a3 == 18;
  else
    return DirectComposition::CResourceMarshaler::IsPropertyAnimatable(a1, a2);
}
