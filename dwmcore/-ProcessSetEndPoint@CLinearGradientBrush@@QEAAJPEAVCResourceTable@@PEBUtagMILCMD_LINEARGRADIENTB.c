__int64 __fastcall CLinearGradientBrush::ProcessSetEndPoint(
        CLinearGradientBrush *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_LINEARGRADIENTBRUSH_SETENDPOINT *a3)
{
  return ((__int64 (__fastcall *)(char *, void *, char *))xmmword_1803E19A8)(
           (char *)this + SDWORD2(xmmword_1803E19A8),
           &CLinearGradientBrush::sc_EndPoint,
           (char *)a3 + 8);
}
