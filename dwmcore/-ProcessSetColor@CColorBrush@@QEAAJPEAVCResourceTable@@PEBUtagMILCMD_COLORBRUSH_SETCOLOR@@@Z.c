__int64 __fastcall CColorBrush::ProcessSetColor(
        CColorBrush *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_COLORBRUSH_SETCOLOR *a3)
{
  return ((__int64 (__fastcall *)(char *, void *, char *))xmmword_1803E1360)(
           (char *)this + SDWORD2(xmmword_1803E1360),
           &CColorBrush::sc_Color,
           (char *)a3 + 8);
}
