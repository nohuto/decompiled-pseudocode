__int64 __fastcall CCompositionSpotLight::ProcessSetAttenuation2(
        CCompositionSpotLight *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_COMPOSITIONSPOTLIGHT_SETATTENUATION2 *a3)
{
  return ((__int64 (__fastcall *)(char *, void *, char *))xmmword_1803E10F8)(
           (char *)this + SDWORD2(xmmword_1803E10F8),
           &CCompositionSpotLight::sc_Attenuation2,
           (char *)a3 + 8);
}
