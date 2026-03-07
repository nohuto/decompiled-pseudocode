__int64 __fastcall CCompositionSpotLight::ProcessSetOuterConeColor(
        CCompositionSpotLight *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_COMPOSITIONSPOTLIGHT_SETOUTERCONECOLOR *a3)
{
  return ((__int64 (__fastcall *)(char *, void *, char *))xmmword_1803E1050)(
           (char *)this + SDWORD2(xmmword_1803E1050),
           &CCompositionSpotLight::sc_OuterConeColor,
           (char *)a3 + 8);
}
