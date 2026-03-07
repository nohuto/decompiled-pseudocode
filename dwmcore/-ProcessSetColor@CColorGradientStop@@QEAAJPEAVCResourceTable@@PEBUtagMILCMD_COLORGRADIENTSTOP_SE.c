__int64 __fastcall CColorGradientStop::ProcessSetColor(
        CColorGradientStop *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_COLORGRADIENTSTOP_SETCOLOR *a3)
{
  return ((__int64 (__fastcall *)(char *, void *, char *))xmmword_1803E1328)(
           (char *)this + SDWORD2(xmmword_1803E1328),
           &CColorGradientStop::sc_Color,
           (char *)a3 + 8);
}
