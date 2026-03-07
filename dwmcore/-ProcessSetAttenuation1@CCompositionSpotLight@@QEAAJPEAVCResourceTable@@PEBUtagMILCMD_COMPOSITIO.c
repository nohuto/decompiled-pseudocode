__int64 __fastcall CCompositionSpotLight::ProcessSetAttenuation1(
        CCompositionSpotLight *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_COMPOSITIONSPOTLIGHT_SETATTENUATION1 *a3)
{
  return ((__int64 (__fastcall *)(char *, void *, char *))xmmword_1803E10C0)(
           (char *)this + SDWORD2(xmmword_1803E10C0),
           &CCompositionSpotLight::sc_Attenuation1,
           (char *)a3 + 8);
}
