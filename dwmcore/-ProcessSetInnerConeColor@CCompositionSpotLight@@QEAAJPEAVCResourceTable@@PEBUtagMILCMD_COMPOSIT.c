__int64 __fastcall CCompositionSpotLight::ProcessSetInnerConeColor(
        CCompositionSpotLight *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_COMPOSITIONSPOTLIGHT_SETINNERCONECOLOR *a3)
{
  return ((__int64 (__fastcall *)(char *, void *, char *))xmmword_1803E1018)(
           (char *)this + SDWORD2(xmmword_1803E1018),
           &CCompositionSpotLight::sc_InnerConeColor,
           (char *)a3 + 8);
}
