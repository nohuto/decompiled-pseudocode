__int64 __fastcall CRectangleGeometry::ProcessSetOffset(
        CRectangleGeometry *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_RECTANGLEGEOMETRY_SETOFFSET *a3)
{
  return ((__int64 (__fastcall *)(char *, void *, char *))xmmword_1803E0018)(
           (char *)this + SDWORD2(xmmword_1803E0018),
           &CRectangleGeometry::sc_Offset,
           (char *)a3 + 8);
}
