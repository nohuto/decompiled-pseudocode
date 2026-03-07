__int64 __fastcall CDropShadow::ProcessSetColor(
        CDropShadow *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_DROPSHADOW_SETCOLOR *a3)
{
  return ((__int64 (__fastcall *)(char *, void *, char *))xmmword_1803E1820)(
           (char *)this + SDWORD2(xmmword_1803E1820),
           &CDropShadow::sc_Color,
           (char *)a3 + 8);
}
