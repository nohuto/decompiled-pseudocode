__int64 __fastcall CCompositionPointLight::ProcessSetAttenuation1(
        CCompositionPointLight *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_COMPOSITIONPOINTLIGHT_SETATTENUATION1 *a3)
{
  return ((__int64 (__fastcall *)(char *, void *, char *))xmmword_1803E1698)(
           (char *)this + SDWORD2(xmmword_1803E1698),
           &CCompositionPointLight::sc_Attenuation1,
           (char *)a3 + 8);
}
