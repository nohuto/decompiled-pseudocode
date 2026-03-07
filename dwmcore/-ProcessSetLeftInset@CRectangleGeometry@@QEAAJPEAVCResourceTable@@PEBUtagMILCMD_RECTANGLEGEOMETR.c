__int64 __fastcall CRectangleGeometry::ProcessSetLeftInset(
        CRectangleGeometry *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_RECTANGLEGEOMETRY_SETLEFTINSET *a3)
{
  return ((__int64 (__fastcall *)(char *, void *, char *))xmmword_1803E0050)(
           (char *)this + SDWORD2(xmmword_1803E0050),
           &CRectangleGeometry::sc_Left,
           (char *)a3 + 8);
}
