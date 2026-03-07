__int64 __fastcall CCompositionDistantLight::ProcessSetColor(
        CCompositionDistantLight *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_COMPOSITIONDISTANTLIGHT_SETCOLOR *a3)
{
  return ((__int64 (__fastcall *)(char *, void *, char *))xmmword_1803E1548)(
           (char *)this + SDWORD2(xmmword_1803E1548),
           &CCompositionDistantLight::sc_Color,
           (char *)a3 + 8);
}
