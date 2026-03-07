__int64 __fastcall CCompositionPointLight::ProcessSetIntensity(
        CCompositionPointLight *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_COMPOSITIONPOINTLIGHT_SETINTENSITY *a3)
{
  return ((__int64 (__fastcall *)(char *, void *, char *))xmmword_1803E1778)(
           (char *)this + SDWORD2(xmmword_1803E1778),
           &CCompositionPointLight::sc_Intensity,
           (char *)a3 + 8);
}
