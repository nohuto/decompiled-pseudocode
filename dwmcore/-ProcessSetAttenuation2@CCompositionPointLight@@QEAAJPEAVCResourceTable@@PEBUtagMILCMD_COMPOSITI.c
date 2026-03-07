__int64 __fastcall CCompositionPointLight::ProcessSetAttenuation2(
        CCompositionPointLight *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_COMPOSITIONPOINTLIGHT_SETATTENUATION2 *a3)
{
  return ((__int64 (__fastcall *)(char *, void *, char *))xmmword_1803E16D0)(
           (char *)this + SDWORD2(xmmword_1803E16D0),
           &CCompositionPointLight::sc_Attenuation2,
           (char *)a3 + 8);
}
