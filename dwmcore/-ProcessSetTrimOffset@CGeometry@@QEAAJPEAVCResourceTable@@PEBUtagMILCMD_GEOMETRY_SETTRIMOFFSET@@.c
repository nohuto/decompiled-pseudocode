__int64 __fastcall CGeometry::ProcessSetTrimOffset(
        CGeometry *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_GEOMETRY_SETTRIMOFFSET *a3)
{
  return ((__int64 (__fastcall *)(char *, void *, char *))xmmword_1803E1430)(
           (char *)this + SDWORD2(xmmword_1803E1430),
           &CGeometry::sc_TrimOffset,
           (char *)a3 + 8);
}
