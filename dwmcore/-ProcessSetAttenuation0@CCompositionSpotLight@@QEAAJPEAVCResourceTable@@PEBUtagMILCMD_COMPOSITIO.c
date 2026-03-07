__int64 __fastcall CCompositionSpotLight::ProcessSetAttenuation0(
        CCompositionSpotLight *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_COMPOSITIONSPOTLIGHT_SETATTENUATION0 *a3)
{
  return ((__int64 (__fastcall *)(char *, void *, char *))xmmword_1803E1088)(
           (char *)this + SDWORD2(xmmword_1803E1088),
           &CCompositionSpotLight::sc_Attenuation0,
           (char *)a3 + 8);
}
