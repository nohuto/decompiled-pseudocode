__int64 __fastcall CRectangleGeometry::ProcessSetBottomInset(
        CRectangleGeometry *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_RECTANGLEGEOMETRY_SETBOTTOMINSET *a3)
{
  return ((__int64 (__fastcall *)(char *, void *, char *))xmmword_1803E0130)(
           (char *)this + SDWORD2(xmmword_1803E0130),
           &CRectangleGeometry::sc_Bottom,
           (char *)a3 + 8);
}
