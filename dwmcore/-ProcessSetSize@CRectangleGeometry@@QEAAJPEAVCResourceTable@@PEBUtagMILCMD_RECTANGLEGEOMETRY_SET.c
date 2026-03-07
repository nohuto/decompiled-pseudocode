__int64 __fastcall CRectangleGeometry::ProcessSetSize(
        CRectangleGeometry *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_RECTANGLEGEOMETRY_SETSIZE *a3)
{
  return ((__int64 (__fastcall *)(char *, void *, char *))xmmword_1803E00C0)(
           (char *)this + SDWORD2(xmmword_1803E00C0),
           &CRectangleGeometry::sc_Size,
           (char *)a3 + 8);
}
