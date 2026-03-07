__int64 __fastcall CRectangleGeometry::ProcessSetTopInset(
        CRectangleGeometry *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_RECTANGLEGEOMETRY_SETTOPINSET *a3)
{
  return ((__int64 (__fastcall *)(char *, void *, char *))xmmword_1803E0088)(
           (char *)this + SDWORD2(xmmword_1803E0088),
           &CRectangleGeometry::sc_Top,
           (char *)a3 + 8);
}
