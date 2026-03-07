__int64 __fastcall CRectangleGeometry::ProcessSetRightInset(
        CRectangleGeometry *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_RECTANGLEGEOMETRY_SETRIGHTINSET *a3)
{
  return ((__int64 (__fastcall *)(char *, void *, char *))xmmword_1803E00F8)(
           (char *)this + SDWORD2(xmmword_1803E00F8),
           &CRectangleGeometry::sc_Right,
           (char *)a3 + 8);
}
