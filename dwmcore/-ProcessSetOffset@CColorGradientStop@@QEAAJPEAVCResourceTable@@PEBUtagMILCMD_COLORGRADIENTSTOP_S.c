__int64 __fastcall CColorGradientStop::ProcessSetOffset(
        CColorGradientStop *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_COLORGRADIENTSTOP_SETOFFSET *a3)
{
  return ((__int64 (__fastcall *)(char *, void *, char *))xmmword_1803E12F0)(
           (char *)this + SDWORD2(xmmword_1803E12F0),
           &CColorGradientStop::sc_Offset,
           (char *)a3 + 8);
}
