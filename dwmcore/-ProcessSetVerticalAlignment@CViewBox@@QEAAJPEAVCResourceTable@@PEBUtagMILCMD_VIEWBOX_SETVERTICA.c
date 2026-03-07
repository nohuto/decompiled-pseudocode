__int64 __fastcall CViewBox::ProcessSetVerticalAlignment(
        CViewBox *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_VIEWBOX_SETVERTICALALIGNMENT *a3)
{
  return ((__int64 (__fastcall *)(char *, void *, char *))xmmword_1803E1D28)(
           (char *)this + SDWORD2(xmmword_1803E1D28),
           &CViewBox::sc_VerticalAlignment,
           (char *)a3 + 8);
}
