__int64 __fastcall CSurfaceBrush::ProcessSetSnapToPixels(
        CSurfaceBrush *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_SURFACEBRUSH_SETSNAPTOPIXELS *a3)
{
  return ((__int64 (__fastcall *)(char *, void *, char *))xmmword_1803E1C10)(
           (char *)this + SDWORD2(xmmword_1803E1C10),
           &CSurfaceBrush::sc_SnapToPixels,
           (char *)a3 + 8);
}
