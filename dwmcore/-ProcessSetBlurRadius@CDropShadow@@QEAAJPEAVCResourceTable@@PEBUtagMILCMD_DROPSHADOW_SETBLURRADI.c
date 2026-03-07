__int64 __fastcall CDropShadow::ProcessSetBlurRadius(
        CDropShadow *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_DROPSHADOW_SETBLURRADIUS *a3)
{
  return ((__int64 (__fastcall *)(char *, void *, char *))xmmword_1803E1858)(
           (char *)this + SDWORD2(xmmword_1803E1858),
           &CDropShadow::sc_BlurRadius,
           (char *)a3 + 8);
}
