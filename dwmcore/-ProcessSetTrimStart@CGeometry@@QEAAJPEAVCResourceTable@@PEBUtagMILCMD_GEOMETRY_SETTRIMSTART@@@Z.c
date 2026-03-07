__int64 __fastcall CGeometry::ProcessSetTrimStart(
        CGeometry *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_GEOMETRY_SETTRIMSTART *a3)
{
  return ((__int64 (__fastcall *)(char *, void *, char *))xmmword_1803E13C0)(
           (char *)this + SDWORD2(xmmword_1803E13C0),
           &CGeometry::sc_TrimStart,
           (char *)a3 + 8);
}
