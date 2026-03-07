__int64 __fastcall CCompositionDistantLight::ProcessSetIntensity(
        CCompositionDistantLight *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_COMPOSITIONDISTANTLIGHT_SETINTENSITY *a3)
{
  return ((__int64 (__fastcall *)(char *, void *, char *))xmmword_1803E15B8)(
           (char *)this + SDWORD2(xmmword_1803E15B8),
           &CCompositionDistantLight::sc_Intensity,
           (char *)a3 + 8);
}
