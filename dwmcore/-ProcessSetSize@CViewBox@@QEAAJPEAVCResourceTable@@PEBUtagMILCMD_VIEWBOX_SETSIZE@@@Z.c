__int64 __fastcall CViewBox::ProcessSetSize(
        CViewBox *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_VIEWBOX_SETSIZE *a3)
{
  return ((__int64 (__fastcall *)(char *, void *, char *))xmmword_1803E1CB8)(
           (char *)this + SDWORD2(xmmword_1803E1CB8),
           &CViewBox::sc_Size,
           (char *)a3 + 8);
}
