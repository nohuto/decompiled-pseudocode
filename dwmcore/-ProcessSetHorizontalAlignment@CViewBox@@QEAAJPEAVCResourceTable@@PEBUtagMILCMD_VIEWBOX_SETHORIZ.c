__int64 __fastcall CViewBox::ProcessSetHorizontalAlignment(
        CViewBox *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_VIEWBOX_SETHORIZONTALALIGNMENT *a3)
{
  return ((__int64 (__fastcall *)(char *, void *, char *))xmmword_1803E1CF0)(
           (char *)this + SDWORD2(xmmword_1803E1CF0),
           &CViewBox::sc_HorizontalAlignment,
           (char *)a3 + 8);
}
