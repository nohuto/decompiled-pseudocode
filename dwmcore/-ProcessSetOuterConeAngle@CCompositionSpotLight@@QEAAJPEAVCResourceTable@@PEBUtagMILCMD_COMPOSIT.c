__int64 __fastcall CCompositionSpotLight::ProcessSetOuterConeAngle(
        CCompositionSpotLight *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_COMPOSITIONSPOTLIGHT_SETOUTERCONEANGLE *a3)
{
  return ((__int64 (__fastcall *)(char *, void *, char *))xmmword_1803E11D8)(
           (char *)this + SDWORD2(xmmword_1803E11D8),
           &CCompositionSpotLight::sc_OuterConeAngle,
           (char *)a3 + 8);
}
