__int64 __fastcall CCompositionSpotLight::ProcessSetInnerConeAngle(
        CCompositionSpotLight *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_COMPOSITIONSPOTLIGHT_SETINNERCONEANGLE *a3)
{
  return ((__int64 (__fastcall *)(char *, void *, char *))xmmword_1803E11A0)(
           (char *)this + SDWORD2(xmmword_1803E11A0),
           &CCompositionSpotLight::sc_InnerConeAngle,
           (char *)a3 + 8);
}
