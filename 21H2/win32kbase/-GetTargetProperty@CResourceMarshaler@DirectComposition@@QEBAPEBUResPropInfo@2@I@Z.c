/*
 * XREFs of ?GetTargetProperty@CResourceMarshaler@DirectComposition@@QEBAPEBUResPropInfo@2@I@Z @ 0x1C0099CF0
 * Callers:
 *     ?IsPropertyAnimatable@CResourceMarshaler@DirectComposition@@UEAA_NIW4DCOMPOSITION_EXPRESSION_TYPE@@@Z @ 0x1C0099C70 (-IsPropertyAnimatable@CResourceMarshaler@DirectComposition@@UEAA_NIW4DCOMPOSITION_EXPRESSION_TYP.c)
 *     ?SetFloatProperty@CResourceMarshaler@DirectComposition@@UEAAJIMPEA_N@Z @ 0x1C0099CA0 (-SetFloatProperty@CResourceMarshaler@DirectComposition@@UEAAJIMPEA_N@Z.c)
 *     ?GetFloatAnimatableProperty@CResourceMarshaler@DirectComposition@@UEAAJIPEAM@Z @ 0x1C0215740 (-GetFloatAnimatableProperty@CResourceMarshaler@DirectComposition@@UEAAJIPEAM@Z.c)
 * Callees:
 *     <none>
 */

const struct DirectComposition::ResPropInfo *__fastcall DirectComposition::CResourceMarshaler::GetTargetProperty(
        DirectComposition::CResourceMarshaler *this,
        int a2)
{
  __int64 v2; // rax
  int i; // eax
  const struct DirectComposition::ResPropInfo *result; // rax

  v2 = *((int *)this + 12);
  if ( (_DWORD)v2 != 206 )
  {
    for ( i = dword_1C028FA18[3 * v2]; i != 164; i = *((_DWORD *)result + 1) )
    {
      result = (const struct DirectComposition::ResPropInfo *)((char *)&DirectComposition::ResourceInformation::resourcePropertyInformation
                                                             + 32 * i);
      if ( *(_DWORD *)result == a2 )
        return result;
    }
  }
  return 0LL;
}
