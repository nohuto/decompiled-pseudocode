__int64 __fastcall CCompositionSkyBoxBrush::ProcessSetSize(
        CCompositionSkyBoxBrush *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_COMPOSITIONSKYBOXBRUSH_SETSIZE *a3)
{
  return ((__int64 (__fastcall *)(char *, void *, char *))xmmword_1803E17E8)(
           (char *)this + SDWORD2(xmmword_1803E17E8),
           &CCompositionSkyBoxBrush::sc_Size,
           (char *)a3 + 8);
}
