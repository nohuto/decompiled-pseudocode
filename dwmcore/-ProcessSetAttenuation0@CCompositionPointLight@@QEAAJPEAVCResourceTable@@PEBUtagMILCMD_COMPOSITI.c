__int64 __fastcall CCompositionPointLight::ProcessSetAttenuation0(
        CCompositionPointLight *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_COMPOSITIONPOINTLIGHT_SETATTENUATION0 *a3)
{
  return ((__int64 (__fastcall *)(char *, void *, char *))xmmword_1803E1660)(
           (char *)this + SDWORD2(xmmword_1803E1660),
           &CCompositionPointLight::sc_Attenuation0,
           (char *)a3 + 8);
}
