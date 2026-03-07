__int64 __fastcall CCompositionSpotLight::ProcessSetInnerConeIntensity(
        CCompositionSpotLight *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_COMPOSITIONSPOTLIGHT_SETINNERCONEINTENSITY *a3)
{
  return ((__int64 (__fastcall *)(char *, void *, char *))xmmword_1803E1280)(
           (char *)this + SDWORD2(xmmword_1803E1280),
           &CCompositionSpotLight::sc_InnerConeIntensity,
           (char *)a3 + 8);
}
