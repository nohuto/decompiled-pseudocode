__int64 __fastcall CDropShadow::ProcessSetOpacity(
        CDropShadow *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_DROPSHADOW_SETOPACITY *a3)
{
  return ((__int64 (__fastcall *)(char *, void *, char *))xmmword_1803E1890)(
           (char *)this + SDWORD2(xmmword_1803E1890),
           &CDropShadow::sc_Opacity,
           (char *)a3 + 8);
}
