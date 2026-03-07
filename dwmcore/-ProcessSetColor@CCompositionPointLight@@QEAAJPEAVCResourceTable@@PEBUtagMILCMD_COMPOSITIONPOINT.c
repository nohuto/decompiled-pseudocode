__int64 __fastcall CCompositionPointLight::ProcessSetColor(
        CCompositionPointLight *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_COMPOSITIONPOINTLIGHT_SETCOLOR *a3)
{
  return ((__int64 (__fastcall *)(char *, void *, char *))xmmword_1803E15F0)(
           (char *)this + SDWORD2(xmmword_1803E15F0),
           &CCompositionPointLight::sc_Color,
           (char *)a3 + 8);
}
