__int64 __fastcall CCompositionAmbientLight::ProcessSetIntensity(
        CCompositionAmbientLight *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_COMPOSITIONAMBIENTLIGHT_SETINTENSITY *a3)
{
  return ((__int64 (__fastcall *)(char *, void *, char *))xmmword_1803E1510)(
           (char *)this + SDWORD2(xmmword_1803E1510),
           &CCompositionAmbientLight::sc_Intensity,
           (char *)a3 + 8);
}
