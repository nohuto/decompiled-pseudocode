__int64 __fastcall CLinearGradientBrush::ProcessSetStartPoint(
        CLinearGradientBrush *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_LINEARGRADIENTBRUSH_SETSTARTPOINT *a3)
{
  return ((__int64 (__fastcall *)(char *, void *, char *))xmmword_1803E1970)(
           (char *)this + SDWORD2(xmmword_1803E1970),
           &CLinearGradientBrush::sc_StartPoint,
           (char *)a3 + 8);
}
