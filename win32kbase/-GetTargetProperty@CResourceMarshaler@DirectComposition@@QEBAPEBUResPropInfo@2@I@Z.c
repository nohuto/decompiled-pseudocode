/*
 * XREFs of ?GetTargetProperty@CResourceMarshaler@DirectComposition@@QEBAPEBUResPropInfo@2@I@Z @ 0x1C0006CE0
 * Callers:
 *     ?IsPropertyAnimatable@CResourceMarshaler@DirectComposition@@UEAA_NIW4DCOMPOSITION_EXPRESSION_TYPE@@@Z @ 0x1C0006C60 (-IsPropertyAnimatable@CResourceMarshaler@DirectComposition@@UEAA_NIW4DCOMPOSITION_EXPRESSION_TYP.c)
 *     ?SetFloatProperty@CResourceMarshaler@DirectComposition@@UEAAJIMPEA_N@Z @ 0x1C0006C90 (-SetFloatProperty@CResourceMarshaler@DirectComposition@@UEAAJIMPEA_N@Z.c)
 *     ?GetFloatAnimatableProperty@CResourceMarshaler@DirectComposition@@UEAAJIPEAM@Z @ 0x1C024C0F0 (-GetFloatAnimatableProperty@CResourceMarshaler@DirectComposition@@UEAAJIPEAM@Z.c)
 * Callees:
 *     <none>
 */

const struct DirectComposition::ResPropInfo *__fastcall DirectComposition::CResourceMarshaler::GetTargetProperty(
        DirectComposition::CResourceMarshaler *this,
        int a2)
{
  int i; // ecx
  const struct DirectComposition::ResPropInfo *result; // rax

  for ( i = DirectComposition::ResourceInformation::resourceTypeInformation[*((unsigned int *)this + 9)];
        i != 206;
        i = *((_DWORD *)result + 1) )
  {
    result = (const struct DirectComposition::ResPropInfo *)((char *)&DirectComposition::ResourceInformation::resourcePropertyInformation
                                                           + 32 * i);
    if ( *(_DWORD *)result == a2 )
      return result;
  }
  return 0LL;
}
