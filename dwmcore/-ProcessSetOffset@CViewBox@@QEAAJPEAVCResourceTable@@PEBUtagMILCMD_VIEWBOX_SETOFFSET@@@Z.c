__int64 __fastcall CViewBox::ProcessSetOffset(
        CViewBox *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_VIEWBOX_SETOFFSET *a3)
{
  return ((__int64 (__fastcall *)(char *, void *, char *))xmmword_1803E1C80)(
           (char *)this + SDWORD2(xmmword_1803E1C80),
           &CViewBox::sc_Offset,
           (char *)a3 + 8);
}
