/*
 * XREFs of ?IsCompositionLight@CSharedReadCompositionLightMarshaler@DirectComposition@@SA_NI@Z @ 0x1C00A6EB8
 * Callers:
 *     CreateSharedReadCompositionLightMarshaler @ 0x1C00A6A20 (CreateSharedReadCompositionLightMarshaler.c)
 *     ?IsOfType@CSharedReadCompositionLightMarshaler@DirectComposition@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x1C00A6EA0 (-IsOfType@CSharedReadCompositionLightMarshaler@DirectComposition@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall DirectComposition::CSharedReadCompositionLightMarshaler::IsCompositionLight(unsigned __int64 a1)
{
  __int64 v1; // rax
  bool result; // al

  result = 0;
  if ( (unsigned int)a1 <= 0x27 )
  {
    v1 = 0x9540000000LL;
    if ( _bittest64(&v1, a1) )
      return 1;
  }
  return result;
}
